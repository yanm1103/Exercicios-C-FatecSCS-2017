#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
int idade = 0;
void main(){
	setlocale (LC_ALL,"portuguese");
	printf("Insira sua idade: ");
	scanf("%i",&idade);
	fflush(stdin);
	if (idade >= 10 && idade <= 18){
		printf("Sua idade está compreendida no intervalo entre 10 e 18 anos.\n");
	}
	else{
		printf("Sua idade NÃO está compreendida no intervalo entre 10 e 18 anos.\n");
	}
	_getch();
}
