#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;


int main_f(){
	int a, b, c, n1, n2, n3, n4, n5, nf, options, loop_count, suma, temp;
	double area, promedio;
	cout<<"\n Funciones";
	cout<<"\n 1- Calculo Triangulo y Area.";
	cout<<"\n 2- Calculo numero mayor.";
	cout<<"\n 3- Calculo promedio.";
	cout<<"\n 4- Salir.";
	cout<<"\n Seleccione una opcion: ";
    cin>>options;
	if(options==1){
		cout<<"\n Ingrese primer num: ";
		cin>>a;
		cout<<"\n Ingrese segundo num: ";
		cin>>b;
		cout<<"\n Ingrese tercer num: ";
		cin>>c;
		if(a==b&&a==c) {
			cout<<"\n El triangulo es equilatero";
		} else if(a==b||a==c||b==c)	{
			cout<<"\n El triangulo es isosceles";
		} else if(a!=b&&a!=b&&b!=c) {
			cout<<"\n El triangulo es escaleno";
		}		
		area = ((pow(a, 2))*sqrt(3))/4;
		cout<<"\n El area del triangulo es: ";
		cout<<area;
	} else if (options==2){
		cout<<"\n Ingrese numero 1: ";
		cin>>n1;
		cout<<"\n Ingrese numero 2: ";
		cin>>n2;
		cout<<"\n Ingrese numero 3: ";
		cin>>n3;
		cout<<"\n Ingrese numero 4: ";
		cin>>n4;
		cout<<"\n Ingrese numero 5: ";
		cin>>n5;
		if(n1>n2){
			nf = n1;
		} else {
			nf = n2;
		}
		if(n3>nf){
			nf = n3;
		}
		if(n4>nf){
			nf = n4;
		}
		if(n5>nf){
			nf = n5;
		}
		cout<<"\n El numero mayor ingresado es: ";
		cout<<nf;		
	} else if (options==3){
		cout<<"\n Ingrese numero de interacciones: ";
        cin>>loop_count;
		suma = 0;
		for(int i = 1; i <= loop_count; i = i + 1)
		{
			cout<<"\n Ingrese numero ";
			cout<<i;
			cout<<": ";
			cin>>temp;
			suma = suma + temp;
		}
		promedio = suma / loop_count;
		cout<<"\n El promedio de numeros ingresado es : ";
		cout<<promedio;		
	} else if(options==4){
		terminate();
	} else {
		system("cls"); // clear console	   
		main_f(); 
	}
	setbuf ( stdin, NULL );
	getchar();
	system("cls"); // clear console	    
}

int main(void){
	while (true) {
       main_f();
    }

}