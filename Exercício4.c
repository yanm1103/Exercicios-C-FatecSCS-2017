#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int numero = 0;
void main(){
	setlocale(LC_ALL,"portuguese");
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
	_getch();
}
