#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main(){
// Convertir en dos cadenas de caracteres minusculas a mayusculas, compararlas , y decir si son iguales o no.
char pala1[20], pala2[20];

cout<<"Digite la primera palabra:\n";
cin.getline(pala1,20,'\n');
cout<<"Digite la segunda palabra:\n";
cin.getline(pala2,20,'\n');

// Convertir a mayusculas ambas palabras
strupr(pala1);
strupr(pala2);

if(strcmp(pala1, pala2) ==0){
    cout<<"Las palabras son iguales";
} else{
    cout<<"Las palabras son diferentes";
}

getch();
 return 0;
}