#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
float valor = 0,final = 0;
int count = 0;
void main (){
	setlocale(LC_ALL,"portuguese");
	printf("Insira o valor do empréstimo: ");
	scanf("%f",&valor);
	count = 1;
	final = valor;
	do{
		final = final + (valor * 0.05);
		printf("%i\n",count);
		count++;
	}while (count <= 6);
	printf("Valor final será de %.2f",final);
}
