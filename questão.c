Determinando se um caractere é alfabético ou não ('s' para: é alfabético e 'n' para: não é alfabético)

#include <stdio.h>
int main() {
    char x;
    scanf("%c",&x);
    printf("O caractere %c é um caractere alfabético? : %c",x,((x>=97&&x<=122)||(x>=65&&x<=90))? 's' : 'n');
}

Dica de ajuda : https://www.cprogressivo.net/2013/01/Operadores-logicos-E-OU-e-negacao.html
