#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main(){
// Añadir o concatenar una cadena con otra- Función strcat()
char cad1[] = "Esto es una cadena\n";
char cad2[] = " y esta es otra cadena\n";

strcpy(cad3,cad1);//cad3= "Esto es una cadena"
strcat(cad3, cad2); //cad3="Esto es una cadena de ejemplo"
cout<<cad3<<endl;
getch();
    return 0;
}