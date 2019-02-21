#include <stdio.h>
int main(void){
    int divisores,a,count=1;
    scanf("%d",&a);
    for(count;count<=a;count++){
        if(a%count==0){
            divisores++;
            printf("%d é divisor desse número.\n\n",count);
        }
    }
    if(divisores>2){
        printf("O número não é primo!\n");
    }else{
        printf("O número é primo!\n ");
    }
    return 0;
}
