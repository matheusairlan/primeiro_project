#include <stdio.h>

float Somar(float pN, float sN){
    return pN + sN;
}

float Multi(float pN, float sN){
    return pN * sN;
}

float Divi(float pN, float sN){
    if(pN == 0 ){
        printf("Erro");}
    else{
        return pN / sN;
    }
}

float Sub(float pN, float sN){
    return pN - sN;
}


int main(){
   float pN;
   float sN;
   
   printf("Insira os valores : ");
    scanf("%f %f", &pN , &sN);
    printf("Valor da soma : %.1f", Somar(pN, sN));
    printf("\n Valor da multiplicação :%.1f", Multi(pN, sN));
    printf("\n Valor da divisão : %.1f", Divi(pN, sN));
    printf("\n Valor da subtração : %.1f " , Sub(pN, sN));

    return 0;

};