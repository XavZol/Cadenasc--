#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main(){
// Pasar una palabra a Mayusculas - Función strupr()

char palabra[] ="palabra en minusculas";

strupr(palabra);
cout<<palabra;

getch();
 return 0;
}