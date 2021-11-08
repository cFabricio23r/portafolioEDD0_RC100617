#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex>
#include <string>
#include <iostream>
using namespace std;

stack <string> apertura;

int checkTags(string str)
{
	//Regex para obtener etiquetas de apertura
	const std::regex re( R"(<([\w]+)[^>]*>(.*?))", std::regex::icase );
	
	//Regex para obtener etiquetas de cierre
	const std::regex re2( R"(<([/\w]+)[^>]*>(.*?))", std::regex::icase );
	
	//Regex para revisar si hay texto antes de una etiqueta de cierre.
	const std::regex re3( R"((.*?)<(.*?))", std::regex::icase );
	
	std::smatch results ;

 	if( std::regex_match(str, results, re ) ) 
    {
    	//Valida si hay una etiqueta de apertura y la guarda en la pila
		apertura.push(results[1]);
		//Usa el string restante a la etiqueta y continue
        checkTags(results[2]);                      
    } else if( std::regex_match(str, results, re2 ) ) 	                 
	{     
		//Valida si hay una etiqueta de apertura y compara con top value en la pila
		string check = results[1];
		string check2 = apertura.top();
		
		//remueve el caracter '/' del nombre de la etiqueta de cierre para hacer la comparacion
		check.erase(remove(check.begin(), check.end(), '/'), check.end());
		
		if(check==check2){
			//si ambas etiquetas son iguales elimina el valor de la pila y continua
			apertura.pop();
		} else {
			
		}
	        
        checkTags(results[2]);     
	} else if( std::regex_match(str, results, re3 ) ) 
    {
    	//Valida si hay texto regular antes de una etiqueta de cierre y lo elimina para continuar con el string.
    	string check = results[1];	
    	str.erase (str.begin(), str.begin()+check.size());  
		checkTags(str);                      
    } else {
		return 0;
	}      
          
}


int main(void)
{          
	//Documento HTML                                                          
    const std::string str = "<html><head><title>Hello World</title></head><body><h1>Ejemplo</h1></body></html>";   
	              
	std::cout << "File content: \n" ;
	std::cout << str << "\n" ;

	checkTags(str);
	
	//Revisa si la pila esta vacia
	if(!apertura.empty()){
		//La pila aun tiene datos lo que significa que el archivo esta mal.
		std::cout << "The HTML file is not valid, there are remainings open tags" << "\n" ;
		while(!apertura.empty()){
			std::cout << apertura.top() << "\n" ;
			apertura.pop();
		}
	} else {
		//La pila esta vacia lo que significa que el archivo esta bien
		std::cout << "File is valid! \n" ;
	}
             
    return 0;
}
                        
