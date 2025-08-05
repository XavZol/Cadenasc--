#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main(){
// Pedir al usuario una de caracteres almacenarla en un arreglo y copia su contenido hacia otro arreglo de caracteres.
char frase[20], frase2[20];
cout<<"Digite una frase:\n";
cin.getline(frase,20,'\n');
strcpy(frase2,frase); // Copia el contenido de frase a frase2
cout<<"La frase copiada es:\n"<<frase2<<endl;
getch();
    return 0;
}