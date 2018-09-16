//Programa que calcula o valor de todos os números escolhidos, a soma dos números pares e a soma dos números ímpares.

#include <stdio.h>
int main(){
    int a, b, c, d, e, p, i;
  printf("Digite 5 números inteiros.\n");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  printf("Números escolhidos : %d %d %d %d %d\n\nCalculando maior valores...\n\n",a,b,c,d,e);
   
   
//Soma de todos os números 
printf("A soma de %d + %d + %d + %d + %d é : %d\n\n",a,b,c,d,e,(a+b+c+d+e));

//Soma dos pares
 p = (a%2==0)? p+a : p;
 p = (b%2==0)? p+b : p;
 p = (c%2==0)? p+c : p;
 p = (d%2==0)? p+d : p;
 p = (e%2==0)? p+e : p;

      if(p==0){printf("Não foi possível realizar a soma dos pares, pois não foi escolhido nenhum número par.\n\n");}else
      if(p!=0){printf("A soma dos números pares é : %d\n\n",p);}

//Soma dos ímpares
 i = (a%2!=0)? i+a : i;
 i = (b%2!=0)? i+b : i;
 i = (c%2!=0)? i+c : i;
 i = (d%2!=0)? i+d : i;
 i = (e%2!=0)? i+e : i;

      if(i==0){printf("Não foi possível realizar a soma dos ímpares, pois não foi escolhido nenhum número ímpar.\n\n");}else
      if(i!=0){printf("A soma dos números pares é : %d\n\n",i);}

    return 0;
}
