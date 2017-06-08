#include <stdio.h>
#include <string.h>
#include <locale.h>
int tentativas = 0,passou = 0;
char senha[5],senhavalida[5] = "teste";
void main() {
	do{
		printf("Insira a senha: ");
		fflush(stdin);
		scanf("%s",&senha[0]);
		if (strcmp(senha, senhavalida) == 0){
			printf("ACESSO GARANTIDO\n");
			printf("Conseguiu acessar depois de %i tentativas.\n",tentativas);
			break;
		}
		else{
			printf("ACESSO NEGADO\n");
			tentativas++;
		}
	}while (passou == 0);
}
