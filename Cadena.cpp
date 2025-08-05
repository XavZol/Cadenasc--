#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main(){
// Comparar cadenas - Funcion strcmp()
char cadena[]= "Hola\n";
char cadena2[]= "Hola\n";
// Hola y Hola son iguales
if(strcmp(cadena,cadena2) ==0){
    cout<<"Ambas cadenas son iguales\n";
}
getch();
    return 0;
}