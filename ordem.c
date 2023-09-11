#include <stdio.h>

int main(){
    int numero1, numero2, numero3, opcao;
    int cont = 1;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero:\n");
    scanf("%d", &numero2);
    printf("Digite o terceiro numero:\n");
    scanf("%d", &numero3);

while(cont == 1){
    printf("Escolha uma das opcoes abaixo:\n");
    printf("1 - Mostre os números em ordem crescente\n");
    printf("2 - Mostre os números em ordem decrescente\n");
    printf("3 - Mostre o menor número entre os demais\n");
    scanf("%d", &opcao);

    if(opcao == 1){
        if(numero1 < numero2 && numero2 < numero3){
            printf("%d - %d - %d", numero1, numero2, numero3);
        }
        if(numero1 < numero3 && numero3 < numero2){
            printf("%d - %d - %d", numero1, numero3, numero2);
        }
        if(numero2 < numero1 && numero1 < numero3){
            printf("%d - %d - %d", numero2, numero1, numero3);
        }
        if(numero2 < numero3 && numero3 < numero1){
            printf("%d - %d - %d", numero2, numero3, numero1);
        }
        if(numero3 < numero1 && numero1 < numero2){
            printf("%d - %d - %d", numero3, numero1, numero2);
        }
        if(numero3 < numero2 && numero2 < numero1){
            printf("%d - %d - %d", numero3, numero2, numero1);
        }
        cont = 0;
    }else if (opcao == 2){
        if(numero1 < numero2 && numero2 < numero3){
            printf("%d - %d - %d", numero3, numero2, numero1);
        }
        if(numero1 < numero3 && numero3 < numero2){
            printf("%d - %d - %d", numero2, numero3, numero1);
        }
        if(numero2 < numero1 && numero1 < numero3){
            printf("%d - %d - %d", numero3, numero1, numero2);
        }
        if(numero2 < numero3 && numero3 < numero1){
            printf("%d - %d - %d", numero1, numero3, numero2);
        }
        if(numero3 < numero1 && numero1 < numero2){
            printf("%d - %d - %d", numero2, numero1, numero3);
        }
        if(numero3 < numero2 && numero2 < numero1){
            printf("%d - %d - %d", numero1, numero2, numero3);
        }
        cont = 0;
    }else if (opcao == 3){
        if(numero1 < numero2 && numero2 < numero3){
            printf("%d - %d - %d", numero2, numero1, numero3);
        }
        if(numero1 < numero3 && numero3 < numero2){
            printf("%d - %d - %d", numero3, numero1, numero2);
        }
        if(numero2 < numero1 && numero1 < numero3){
            printf("%d - %d - %d", numero1, numero2, numero3);
        }
        if(numero2 < numero3 && numero3 < numero1){
            printf("%d - %d - %d", numero3, numero2, numero1);
        }
        if(numero3 < numero1 && numero1 < numero2){
            printf("%d - %d - %d", numero1, numero3, numero2);
        }
        if(numero3 < numero2 && numero2 < numero1){
            printf("%d - %d - %d", numero2, numero3, numero1);
        }
        cont = 0;
    }else{
        printf("Numero invalido!\n");
        cont = 1;
    }
}   
return 0;
}