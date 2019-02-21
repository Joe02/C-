//Programa para saber se o número é primo ou não (0 a 100)
#include <stdio.h>

int main() {
  
    float x; 
    int numeros;
  
    printf("Digite um número inteiro e positivo:\n");
    scanf("%f", &x);
  
    for(int i=1;i<x;i++){
        if(x%i==0){
           numeros++;
        }
    }
    
    if(numeros>2){
        printf("Não é primo\n);
    }else{
        printf("É primo\n");
    }

    
  return 0;
}


