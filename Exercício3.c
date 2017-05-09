#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL,"portuguese");
	float base = 0, altura = 0,area = 0, diagonal = 0, perimetro = 0;
	printf("Insira a base do retângulo: ");
	scanf("%f",&base);
	getchar();
	printf("Insira a altura do retângulo: ");
	scanf("%f",&altura);
	getchar();
	area = base * altura;
	diagonal = sqrt((base * base) * (altura * altura));
	perimetro = 2 * (base * altura);
	printf("Sua área é de %.1f\nSua diagonal é de %.1f\nSeu perímetro é de %.1f\n",area,diagonal,perimetro);
	_getch();
}
