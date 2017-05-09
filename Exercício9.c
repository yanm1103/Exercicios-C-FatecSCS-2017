#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int numero = 0,decisao = 1;
void main(){
	setlocale(LC_ALL,"portuguese");
	while (decisao == 1){
		printf("Digite o número: ");
		scanf("%i",&numero);
		if (numero % 6 == 0){
			printf("Seu número é divisível por 6.\n");
		}
		if (numero % 3 == 0){
			printf("Seu número é divisível por 3.\n");
		}
		else {
			printf("Seu número não é divisível nem por 3, nem por 6.\n");
		}
		do {
			printf("Novo cálculo? (1 - Sim/2 - Não): ");
			scanf("%i",&decisao);
			if (decisao != 1 && decisao != 2){
				printf("Use somente 1 para SIM e 2 para NÃO.\n");
			}
		}while (decisao != 1 && decisao != 2);
	}
}
