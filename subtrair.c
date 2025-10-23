#include <stdio.h>

int subtrair(){
    int pN;
    int sN;
    

    printf("Digite o valor do primeiro numero : \n");
    scanf("%d", &pN);

    printf("Digite o valor do segundo numero : \n");
    scanf("%d", &sN);

    int diminuir = pN - sN;
    
    printf("Soma dos valores %d" , diminuir);
    
}

int main(){
    subtrair();

    return 0;
};