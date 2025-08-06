#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
//  Realice un programa que lea una cadena de caracteres de la entrada estandar y muestre en la salida cuantas ocurrencias de cada vocal exiten en la cadena.
char frase[30];
int vocal_a=0, vocal_e=0, vocal_i=0, vocal_o=0, vocal_u=0;
cout<<"Ingrese una frase:\n";
cin.getline(frase,30,'\n'); 

for(int i=0; frase<30; i++){
    switch(frase[i]){
        case 'a': vocal_a++; break;
        case 'e': vocal_e++; break;
        case 'i': vocal_i++; break;
        case 'o': vocal_o++; break;
        case 'u': vocal_u++; break;
    }
}
cout<<"Cantidad de vocales 'a' encontradas:"<<vocal_a<<endl;
cout<<"Cantidad de vocales 'e' encontradas:"<<vocal_e<<endl;
cout<<"Cantidad de vocales 'i' encontradas:"<<vocal_i<<endl;
cout<<"Cantidad de vocales 'o' encontradas:"<<vocal_o<<endl;
cout<<"Cantidad de vocales 'u' encontradas:"<<vocal_u<<endl;
cout<<"Presione una tecla para salir..."<<endl;

getch();
 return 0;
}