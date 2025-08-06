#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main(){
// Pasar una palabra a minusculas. Función strlwr().

char palabra[] = "FUNDICION DE METALES";

strlwr(palabra);

cout<<palabra<<endl;

getch();
 return 0;
}