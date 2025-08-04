#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
// Longitud de una cadena de caracteres. Funcion en strlen().
int main(){
char palabra[] = "Hola";    
int longitud=0;
longitud = strlen(palabra);
cout << "La longitud de la cadena es: " << longitud << endl;
getch();
    return 0;
}