#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

//Prototipos
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();
void determinarGanador(std:: string computadora, std::string jugador);
void procesarEntradaJugadorPiedra(std:: string computadora);
void procesarEntradaJugadorPapel(std:: string computadora);
void procesarEntradaJugadorTijera(std:: string computadora);
void procesarEntradaJugadorLagarto(std:: string computadora);
void procesarEntradaJugadorSpock(std:: string computadora);

using namespace std;
int main (){
    
    int opt;

    string movimientoComputadora;
    string movimientoJugador;
    
    
    cout<<"\n Author: Carlos Fabricio Ramirez Ceron - RC100617 \n";
    cout << "\n Juguemos a piedra, papel, tijera, lagarto o spock, selecciona tu movimiento" ;
    cout <<"\n Note: Tiene que escribir tal y como se muetra";
    cout << "\n -Piedra \n -Papel \n -Tijera \n -Lagarto \n -Spock \n Escoge: ";

    movimientoJugador = obtenerMovimientoJugador();
    movimientoComputadora = generarMovimientoComputadora();
    determinarGanador(movimientoComputadora, movimientoJugador);
	
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
    return 0;
}
//Implementacion
std::string generarMovimientoComputadora(){
    std::string movimiento;
    int numeroAleatorio;

    //Generar numero Aleatorio
    srand(time(0));
    numeroAleatorio = rand() % 5 + 1;

    switch (numeroAleatorio)
    {
    	case 1:
            movimiento = "Piedra"; 
            break;
        case 2:
            movimiento=  "Papel";
            break;
        case 3:
            movimiento = "Tijera";
            break;
        case 4:
            movimiento = "Lagarto";
            break;
        case 5:
            movimiento = "Spock";
            break;
    }

    std::cout<< "\n Computadora escoga: " << movimiento;    
    return movimiento;
}

std:: string obtenerMovimientoJugador(){
    using namespace std;
    string movimiento;

    cin >> movimiento;
    std::cout<< "\n Usted escogio: " << movimiento ;    

    return movimiento;
}

void determinarGanador (std:: string computadora, std:: string jugador){
    if (computadora == jugador){
        std:: cout <<"\n Empate!";        
    }else if (jugador == "Piedra")
    {
        procesarEntradaJugadorPiedra(computadora);
    }else if (jugador == "Papel")
    {
        procesarEntradaJugadorPapel(computadora);
    }else if (jugador == "Tijera")
    {
        procesarEntradaJugadorTijera(computadora);
    }else if (jugador == "Lagarto")
    {
        procesarEntradaJugadorLagarto(computadora);
    }else if (jugador == "Spock")
    {
        procesarEntradaJugadorSpock(computadora);
    }else{

        std:: cout << " \n Entrada no valida. Ingrese piedra, papel, tijera, lagarto o spock.";
    }
}

void procesarEntradaJugadorPiedra (std::string computadora){
    if (computadora == "Papel"){
        std::cout<<"\n La computadora gana. Papel cubre puedra.";
    }else if (computadora == "Tijera"){
        std:: cout<< "\n Usted gana. Piedra rompe tijera.";
    }else if (computadora == "Lagarto"){
        std::cout<<"\n Usted gana. Piedra aplasta Lagarto.";
    }else if (computadora == "Spock"){
       std::cout<<"\n La computadora gana. Spock desintegra la piedra.";
    }
    
}

void procesarEntradaJugadorPapel(std:: string computadora){
    if (computadora == "Piedra"){
        std::cout<<"\n Usted gana. Papel cubre puedra.";
    }else if (computadora == "Tijera"){
        std::cout<<"\n La computadora gana. Tijera rompe papel.";
    }else if (computadora == "Lagarto"){
        std::cout<<"\n La computadora gana. Lagarto devora papel.";
    }else if (computadora == "Spock"){
       std::cout<<"\n Usted gana. Papel desaprueba al papel.";
    }
}
void procesarEntradaJugadorTijera(std::string computadora){
    if (computadora == "Piedra"){
        std::cout<<"\n La computadora gana. Piedra aplasta tijera.";
    }else if (computadora == "Papel"){
        std::cout<<"\n Usted gana. Tijera rompe papel.";
    }else if (computadora == "Lagarto"){
        std::cout<<"\n Usted gana. Tijeras decapitan lagarto.";
    }else if (computadora == "Spock"){
       std::cout<<"\n La computadora gana. Spock aplasta tijeras.";
    }  
}
void procesarEntradaJugadorLagarto(std :: string computadora){
    if (computadora == "Piedra"){
        std::cout<<"\n La computadora gana. Piedra aplasta lagarto.";
    }else if (computadora == "Tijera"){
        std::cout<<"\n La computadora gana. Tijera decapitan lagarto.";
    }else if (computadora == "Papel"){
        std::cout<<"\n Usted gana. Lagarto devora papel.";
    }else if (computadora == "Spock"){
       std::cout<<"\n Usted gana. Lagarto evenena a Spock.";
    }
}
void procesarEntradaJugadorSpock (std:: string computadora){
    if (computadora == "Piedra"){
        std::cout<<"\n Usted gana. Spock desintegra piedra.";
    }else if (computadora == "Tijera"){
        std::cout<<"\n Usted gana. Spock aplasta tijeras.";
    }else if (computadora == "Lagarto"){
        std::cout<<"\n La computadora gana. Lagarto enveneta a Spock.";
    }else if (computadora == "Papel"){
       std::cout<<"\n La computadora gana. Papel desaprueba Spock.";
    }

}