#include <stdio.h>
int main(void){
    char str1[100];
    int aux,count=0,count1=1,tamanho=0;
    scanf("%s",str1);
    for(str1[count];str1[count]!='\0';count++,tamanho++);
    while(tamanho!=0){
        for(count=0;str1[count]!='\0';count++){
            if(str1[count]>str1[count+1]&&str1[count+1]!='\0'){
                aux = str1[count];
                str1[count] = str1[count+1];
                str1[count+1] = aux;
            }
        }
        tamanho--;
    }
    printf("%s\n",str1);
    return 0;
}
