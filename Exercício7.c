#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
int resultado = 0,num1 = 0, num2 = 0;
void main(){
	setlocale (LC_ALL,"portuguese");
	printf("Insira o primeiro número: ");
	scanf("%i",&num1);
	getchar();
	while (num2 == 0){
		printf("Insira o segundo número: ");
		scanf("%i",&num2);
		if (num2 == 0){
			printf("Por favor, insira um número maior que 0.\n");
		}
	}
	resultado = num1 / num2;
	printf("Seu resultado é de %i.\n",resultado);
	_getch();
}
