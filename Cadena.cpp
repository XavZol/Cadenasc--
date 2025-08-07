#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
// Metodo burbuja
int numeros[] = {4,1,2,3,5};
int i,j, aux;

for(i=0; i<5; i++){
    for(j=0;j<5; j++){
        if(numeros[j]>numeros[j+1]){
            aux = numeros[j];
            numeros[j] = numeros[j+1];
            numeros[j+1] = aux;
        }
    }
}
// Imprimir el resultado
cout<<"Ordenar los numeros en orden ascendente:\n";
for(i=0; i<5; i++){
    cout<<numeros[i]<<"\n";
}
// Metodo burbuja inverso 
cout<<"\nOrdenar los numeros en orden descendente:\n";
for(i=4; i>=0; i--){
    cout<<numeros[i]<<"\n";
}
getch();
 return 0;
}