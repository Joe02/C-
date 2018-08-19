//Programa de caixa de loja

#include <stdio.h>

int main() {
    //Variáveis das moedas
    int counta=0,countb=0,countc=0,countd=0,counte=0,countf=0;
    float v,a=1,b=0.5,c=0.25,d=0.10,e=0.05,f=0.01;
    
    //Variáveis das cédulas
    int cedulaa=0,cedulab=0,cedulac=0,cedulad=0,cedulae=0,cedulaf=0;
    float ca=100,cb=50,cc=20,cd=10,ce=5,cf=2;
    
    printf("Digite um valor entre 0.00R$ e 100.00R$ :\n");
    scanf("%f",&v);
    
    //Parte das cédulas
    cedulaa= (v-(100))>=0? cedulaa+1 : cedulaa+0;
    
    cedulab= (v-(cedulaa*cd)-cb)>=0? cedulab+1 : cedulab+0;
    
    cedulac= (v-(cedulaa*cd)-(cedulab*cb)-cc)>=0? cedulac+1 : cedulac+0;
    cedulac= (v-(cedulaa*cd)-(cedulab*cb)-(2*cc))>=0? cedulac+1 : cedulac+0;
    
    cedulad= (v-(cedulaa*cd)-(cedulab*cb)-(cedulac*cc)-cd)>=0? cedulad+1 : cedulad+0;
    
    cedulae= (v-(cedulaa*cd)-(cedulab*cb)-(cedulac*cc)-(cedulad*cd)-ce)>=0? cedulae+1 : cedulae+0;
    
    cedulaf= (v-(cedulaa*cd)-(cedulab*cb)-(cedulac*cc)-(cedulad*cd)-(cedulae*ce)-cf)>=0? cedulaf+1 : cedulaf+0;
    cedulaf= (v-(cedulaa*cd)-(cedulab*cb)-(cedulac*cc)-(cedulad*cd)-(cedulae*ce)-(2*cf))>=0? cedulaf+1 : cedulaf+0;
    
    //Parte das moedas
    counta= ((v-a)>=0)? counta+1 : counta+0;
    counta= ((v-(2*a))>=0)? counta+1 : counta+0;
    counta= ((v-(3*a))>=0)? counta+1 : counta+0;
    counta= ((v-(4*a))>=0)? counta+1 : counta+0;
    counta= ((v-(5*a))>=0)? counta+1 : counta+0;
    
    countb= (v-(counta*a)-b)>=0? countb+1 : countb+0;
    
    countc= (v-(counta*a)-(countb*b)-c)>=0? countc+1 : countc+0;
    
    countd= (v-(counta*a)-(countb*b)-(countc*c)-d)>=0? countd+1 : countd+0;
    countd= (v-(counta*a)-(countb*b)-(countc*c)-(2*d))>=0? countd+1 : countd+0;
    
    counte= (v-(counta*a)-(countb*b)-(countc*c)-(countd*d)-e)>=0? counte+1 : counte+0;
    
    countf= (v-(counta*a)-(countb*b)-(countc*c)-(countd*d)-(counte*e))>=0? countf+1 : countf+0;
    countf= (v-(counta*a)-(countb*b)-(countc*c)-(countd*d)-(counte*e)-(f*2))>=0? countf+1 : countf+0;
    countf= (v-(counta*a)-(countb*b)-(countc*c)-(countd*d)-(counte*e)-(f*3))>=0? countf+1 : countf+0;
    countf= (v-(counta*a)-(countb*b)-(countc*c)-(countd*d)-(counte*e)-(f*4))>=0? countf+1 : countf+0;
    
    
    printf("O número mínimo de cédulas e moedas para formar o número escolhido (%.2fR$) é :\n\n%d cédulas de 100R$\n%d cédulas de 50R$\n%d cédulas de 20R$\n%d cédulas de 10R$\n%d cédulas de 5R$\n%d cédulas de 2R$\n\n%d moedas de 1R$\n%d moedas de 0.50R$\n%d moedas de 0.25R$\n%d moedas de 0.10R$\n%d moedas de 0.05R$\n%d moedas de 0.01R$\n\nLogo, precisaremos de %d cédulas e %d moedas",v,cedulaa,cedulab,cedulac,cedulad,cedulae,cedulaf,counta,countb,countc,countd,counte,countf,(cedulaa+cedulab+cedulac+cedulad+cedulae+cedulaf),(counta+countb+countc+countd+counte+countf));
    
    return 0;
}
