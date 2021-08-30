#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include <Windows.h>

using namespace std;
int main(){
    int movJug, opt;
    cout << "\n Author: Carlos Fabricio Ramirez Ceron \n";
    cout << "\n Juguemos a piedra, papel o tijera, selecciona tu movimiento" ;
    cout << "\n 1.Piedra \n 2.Papel \n 3.Tijera \n 4.Lagarto \n 5.Spock \n Escoge: ";
    cin  >> movJug;
    srand(time(0));
    string movComp, movJug2;
    int numMov = rand() % 5 + 1;
    switch (numMov) {
        case 1:
            movComp = "Piedra"; 
            break;
        case 2:
            movComp=  "Papel";
            break;
        case 3:
            movComp = "Tijera";
            break;
        case 4:
            movComp = "Lagarto";
            break;
        case 5:
            movComp = "Spock";
            break;
    }
    
    
    switch (movJug) {
        case 1:
            movJug2 = "Piedra"; 
            break;
        case 2:
            movJug2=  "Papel";
            break;
        case 3:
            movJug2 = "Tijera";
            break;
        case 4:
            movJug2 = "Lagarto";
            break;
        case 5:
            movJug2 = "Spock";
            break;
    }
    
    
    cout << "\n Tu escogiste: " << movJug2 << endl;;
    cout << "\n La computadora escogio: " << movComp << endl;
    if (movJug == numMov) {
        cout <<"\n Empate";
    } else if ( (movJug == 1) && (numMov== 3) ) { 
        cout << "\n Ganaste";
    } else if ( (movJug == 2) && (numMov == 1) ) {
        cout << "\n Ganaste";
    } else if ( (movJug == 3) && (numMov== 2) ){
        cout <<"\n Ganaste";
    }else if ((movJug == 1) && (numMov == 4)){
        cout <<"\n Ganaste";
    }else if ((movJug == 4) && (numMov == 5)){
        cout <<"\n Ganaste";
    }else if ((movJug == 5) && (numMov == 3)){
        cout <<"\n Ganaste";
    }else if ((movJug == 3) && (numMov == 4)){
        cout <<"\n Ganaste";
    }else if ((movJug == 4) && (numMov == 2)){
        cout <<"\n Ganaste";
    }else if ((movJug == 2) && (numMov == 5)){
        cout <<"\n Ganaste";
    }else if ((movJug == 5) && (numMov == 1)){
        cout <<"\n Ganaste";
    }else { 
        cout << "\n Perdiste";
    }
    
    setbuf ( stdin, NULL );
    getchar();
    
    system("cls"); // clear console	    
	
	cout << "\n Quieres volver a jugar: ";
    cout << "\n 1- Si ";
    cout << "\n 2- No ";
    cout << "\n escoge: ";
    cin >> opt;
    
    if(opt==1){
    	system("cls"); // clear console	    
    	main();
	} else {
		terminate();
	}
}