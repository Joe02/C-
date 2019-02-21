//Programa para transformar um texto para linguagem leet:

#include <stdio.h>
int main() {
    char str[20],aux;
    printf("Digite uma palavra ou texto :\n");
    scanf("%s",str);
    printf("Palavra escolhida : %s\n\n",str);
    for(int i=0; str[i]; i++){
        if(str[i] == 'a' || str[i] == 'A'){
            str[i] = '4';
        }
        if(str[i] == 'e' || str[i] == 'E'){
            str[i] = '3';
        }
        if(str[i] == 's' || str[i] == 'S'){
            str[i] = '5';
        }
        if(str[i] == 'i' || str[i] == 'I'){
            str[i] = '1';
        }
        if(str[i] == 'o' || str[i] == 'O'){
            str[i] = '0';
        }
    }
    printf("%s",str); 
    return 0;
}
