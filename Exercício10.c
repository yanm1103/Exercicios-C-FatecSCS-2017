#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
int tentativas = 0;
char *senha[5],*senhavalida[5];
void main() {
	*senhavalida = "teste";
	do{
		printf("Insira a senha: ");
		scanf("%s",&senha);
		getchar();
		if (!strcmp(senha, "teste")){
			printf("ACESSO GARANTIDO\n");
			printf("Conseguiu acessar depois de %i tentativas.\n",tentativas);
			break;
		}
		else{
			printf("ACESSO NEGADO\n");
			tentativas++;
		}
	}while (senha != senhavalida);
}
