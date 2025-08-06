#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
//  Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro reconvertirlos a sus respectivos valores y por ultimo sumarlos.
char cad1[20], cad2[20];
int valorEntero;
float valorFlotante;

// Guardar los numeros como caracteres
cout<<"Digite un valor entero:\n";
cin.getline(cad1,20,'\n');
cout<<"Digite un valor flotante:\n";
cin.getline(cad2,20,'\n');

valorEntero=atoi(cad1); // Convertir cadena a entero
valorFlotante=atof(cad2); // Convertir cadena a flotante

//Suma los 2 numeros
cout<<"La suma de los numeros es:\n"<<valorEntero+valorFlotante<<endl;

getch();
 return 0;
}