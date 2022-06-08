//joguinho onde o pc escolhe uma chave aleaória e o usuário deve acertá-la
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int chave, chute;
    srand(time(NULL)); //isso serve para mudar a semente do rand, o que faz com que o número sempre mude aleatoriamente
    chave = rand() % 1024 + 1; //a chave será algo entre 1 e 1024
    int tentativas = 0; //somatório para a qtd de tentativas do usuário

    do{
        printf("Tente adivinhar a chave: ");
        scanf("%d", &chute); //pega o chute do usuário
        if(chute < chave) printf("Errou! Seu chute eh MENOR que a chave.\n");
        else if(chute > chave) printf("Errou! Seu chute eh MAIOR que a chave. \n");
        else printf("ACERTOUUU!\n");
        tentativas++; //a cada nova tentativa, incrementa a qtd de tentativas
    } while(chute != chave); //repete enquanto chute for diferente de chave (usei do while pq ele vai precisar colocar pelo menos uma vez o chute)

    printf("Você acertou em %d tentativas", tentativas);

    return 0;
}
