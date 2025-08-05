#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main(){
// Pedir al usuario que ingrese 2 cadenas de caracteres, e indicar si 
// ambas cadenas son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente.
char palabra[30], palabra2[30];
cout<<"Digite la primera cadena:\n";
cin.getline(palabra,30,'\n');
cout<<"Digite la segunda cadena:\n";
cin.getline(palabra2,30,'\n');
if(strcmp(palabra, palabra2)==0){
    cout<<">Ambas palabras son iguales\n";
} else if (strcmp(palabra, palabra2) > 0){
    cout<<palabra<<"es mayor alfabeticamente que\n";
} else{
    cout<<palabra2<<"es mayor alfabeticamente que\n";
}
getch();
    return 0;
}