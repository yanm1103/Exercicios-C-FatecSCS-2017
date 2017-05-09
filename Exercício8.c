#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
float media = 0,n1 = -1,n2 = -1;
void main (){
	setlocale(LC_ALL,"portuguese");
	while(n1 == -1){
		printf("Insira a primeira nota: ");
		scanf("%f",&n1);
	if(n1 < 0 || n1 > 10){
		printf("Nota inválida.\n");
	}
	}
	while(n2 == -1){
		printf("Insira a segunda nota: ");
		scanf("%f",&n2);
	if(n2 < 0 || n2 > 10){
		printf("Nota inválida.\n");
	}
	media = (n1 + n2) / 2;
	printf("Sua média é de %.1f.\n",media);
	_getch();
}
}
