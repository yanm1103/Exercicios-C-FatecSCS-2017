#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
int letra = 65;
main (){
	setlocale(LC_ALL,"portuguese");
	while (letra != 91){
	printf("%c\n",letra);
	letra++;
	}
}
