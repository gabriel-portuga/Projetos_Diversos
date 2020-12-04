#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "en-US");

    int idade;
    double peso, altura, imc;
    char sexo, escolhaentrada, escolhacontinua;
    char nome[50];

    printf("Bem vindo a calculadora de IMC da Go!Sys\n");
    printf("Gostaria de saber seu indice de massa corporal (S/N)?\a");
    scanf("%c", &escolhaentrada);
    escolhaentrada = toupper(escolhaentrada);
    escolhacontinua = escolhaentrada;

    if(escolhaentrada == 'S'){
    system("cls");
        while(escolhacontinua == 'S'){
            printf("Qual o seu nome? ");
            fseek(stdin,0,SEEK_END);
            gets(nome);

            printf("Qual a sua idade? ");
            scanf("%d", &idade);

            printf("Sexo(F/M): ");
            fseek(stdin,0,SEEK_END);
            scanf("%c", &sexo);
            sexo = toupper(sexo);

            printf("Qual a sua altura(ex:9.99)?  ");
            scanf("%lf", &altura);

            printf("Qual o seu peso(ex:99.99)? ");
            scanf("%lf", &peso);

        imc = (peso / pow(altura,2));

        printf("%s, %.2lfKg, %.2lfm, sexo(%c).", nome, peso, altura, sexo);

        }
    }


    return 0;
}
