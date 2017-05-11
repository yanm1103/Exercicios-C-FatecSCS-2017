#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL,"portuguese");
	float PI = 0, A = 0;
	char sexo = 0;
	do {
		printf("Digite o sexo (M/F): ");
		scanf(" %c", &sexo);
		fflush(stdin);
		//printf("%c\n",sexo);
	}while ((sexo != 'F') && (sexo != 'M'));
	do {
		printf("Digite a altura (Precisa ser maior que 0): ");
		scanf(" %f", &A);
		fflush(stdin);
	}while (A <= 0);
	if (sexo == 'F'){
		PI = 62,1 * A - 44,7;
		printf("Seu peso ideal é de %f",PI);
	}
	else {
		PI = 72,7 * A - 58;
		printf("Seu peso ideal é de %f",PI);
	}
	_getch();
}
