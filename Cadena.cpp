#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
// Ordenamiento por selección
int numeros[] = {3,2,1,5,4};
int i, j, aux, min;
// Algoritmo de ordenamiento por selección
for(i=0;i<5;i++){
    min=i;
    for(j=i+1;j<5;j++){
        if(numeros[j]<numeros[min]){
        min=j;
    }
  }
  aux=numeros[i];
  nummeros[i]=numeros[min];
  numeros[min]=aux;
}
cout<<"Orden ascendente:\n";
 for(i=0;i<5;i++){
    cout<<numeros[i]<<"\n";
 }
 cout<<"\nOrden descendente:\n";
 for(i=4;i>=0;i--){
    cout<<numeros[i]<<"\n";
 }

getch();
 return 0;
}