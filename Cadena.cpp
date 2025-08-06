#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
// Pedir su nombre al usuario en Mayuscula, si su nombre comienza por la letra convertir su nombre a minusculas, caso contrario no convertirlo.
char nombre[30];

cout<<"Digite su nombre en mayusculas:\n";
cin.getline(nombre, 30,'\n');

if(strncmp(nombre, "A", 1)==0){
    strlwr(nombre);
    cout<<"Su nombre en minusculas es:\n";
    cout<<nombre<<endl;
}
else{
    cout<<"El nombre no comienza con la letra A:\n"; 
    cout<<nombre<<endl;
}

getch();
 return 0;
}