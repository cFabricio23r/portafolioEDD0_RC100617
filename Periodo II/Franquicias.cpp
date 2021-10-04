#include <iostream> // Entrada/salida
#include <array> // Arreglos
#include <cstdlib> // Random
#include <ctime> // Inicializar random
#include <cctype> // Funciones para caracteres
#include <string> // Funciones para cadenas

using namespace std;

int main() {
	char bloques[3] = {'A','B','C'};
	
	char *ptr = &bloques[0];
	char temp;
	
	temp = bloques[0];
		cout << temp << endl;

	temp = *(bloques+2);
		cout << temp << endl;

	temp = *(ptr+1);
		cout << temp << endl;

	temp = *ptr;
		cout << temp << endl;

	ptr = bloques + 1;
			cout << temp << endl;

	temp = *ptr;
			cout << temp << endl;

	temp = *(ptr+1);
			cout << temp << endl;

	ptr = bloques;
			cout << temp << endl;

	temp = *++ptr;
			cout << temp << endl;

	temp = ++*ptr;
			cout << temp << endl;

	temp= *ptr++;
			cout << temp << endl;

	temp = *ptr;
			cout << temp << endl;

	

}









