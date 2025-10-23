#include <stdio.h>

int somar(){
    int pN;
    int sN;
    

    printf("Digite o valor do primeiro numero : \n");
    scanf("%d", &pN);

    printf("Digite o valor do segundo numero : \n");
    scanf("%d", &sN);

    int soma = pN + sN;
    
    printf("Soma dos valores %d" , soma);
    
}

int main(){
    somar();

    return 0;
};