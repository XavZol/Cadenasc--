#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main(){
// Crear una cadena que tenga la siguiente frse "Hola que tal", luego crear otra cadena para preguntarle al usuario su nombre, por ultimo añadir el nombre al final de la primera cadena y mostrar el mensaje completo "Hola que tal, [nombre del usuario]".
char cad[] = "Hola que tal\n";
char cad2[50];
cout<<"Ingrese su nombre:";
cin.getline(cad2,50,'\n');
start(cad,cad2);
cout<<"Saludo completo:\n"<<cad;
getch();
    return 0;
}