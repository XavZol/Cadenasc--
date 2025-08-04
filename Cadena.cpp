#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
// Hacer un programa que pida al usuario una cadena de caracteres. verificar la longitud de la cadena, y si esta supera los 10 caracteres mostrarla en pantalla, caso contrario no mostrarla.
int main(){
    char frase[50];
    cout<<"Digite una cadena de caracteres:\n";
    cin.getline(frase,50,'\n');

if(strlen(frase)>10){
    cout<<frase<<endl;
} else{
    cout<<"La cadena no supera los 10 caracteres.\n";
}
getch();
    return 0;
}