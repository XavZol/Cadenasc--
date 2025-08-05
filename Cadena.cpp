#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main(){
// Hacer una palabra que determine si una palabra es polindroma.
// oso=oso, reconocer = reconocer, ana = ana
char pal[25];
char pal2[25];
cout<<"Ingrese una palabra:\n";
cin.getline(pal,25,'\n');
strcpy(pal2,pal);
strrev(pal2);

if(strcmp(pal,pal2)==0){
    cout<<"La palabra es polindroma\n";
} else{
    cout<<"La palabra no es polidroma\n";
}

getch();
 return 0;
}