#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex>
#include <string>
#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main(void)
{          

	stack <char> s1;
	queue <char> q1;

	string texto;
	
	cout << "Introduce palabra: ";
    cin >>  texto;
    
    for(int i=0; i<texto.size();i++){
    	s1.push(texto[i]);
    	q1.push(texto[i]);
	}
	
	while(!q1.empty()){

		if(q1.front() == s1.top()){
			q1.pop();
			s1.pop();
		} else {
			cout << "La palabra ingresada no es un palindromo" << endl;
			return 0;
		}
	}
	
	cout << "La palabra ingresada es un palindromo" << endl;
             
    return 0;
}
                        
