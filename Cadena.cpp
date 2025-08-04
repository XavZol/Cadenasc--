#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main(){
// Copiar el contenido de una cadena a otra - Funcion strcpy()
char nombre[]="Panfilo";
char nombre2[20];

strcpy(nombre2,nombre);

cout<<nombre2<<endl;

getch();
    return 0;
}