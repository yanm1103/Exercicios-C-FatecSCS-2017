#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
char *sigla[3],repetir = 'S';
int idade = 0,valido = 1;
void main(){
	setlocale (LC_ALL,"portuguese");
	while (repetir == 'S'){
		printf("Insira a sigla de seu estado: ");
		scanf("%s",&sigla);
		getchar();
		if (!strcmp(sigla, "AC")){
			printf("Acreano\n");
			valido = 0;
		}
		if (!strcmp(sigla, "AL")){
			printf("Alagoano\n");
			valido = 0;
		}
		if (!strcmp(sigla, "AP")){
			printf("Amapaense\n");
			valido = 0;
		}
		if (!strcmp(sigla, "AM")){
			printf("Amazonense\n");
			valido = 0;
		}
		if (!strcmp(sigla, "BA")){
			printf("Baiano\n");
			valido = 0;
		}
		if (!strcmp(sigla, "CE")){
			printf("Cearense\n");
			valido = 0;
		}
		if (!strcmp(sigla, "DF")){
			printf("Brasiliense\n");
			valido = 0;
		}
		if (!strcmp(sigla, "ES")){
			printf("Capixaba\n");
			valido = 0;
		}
		if (!strcmp(sigla, "GO")){
			printf("Goiano\n");
			valido = 0;
		}
		if (!strcmp(sigla, "MA")){
			printf("Maranhense\n");
			valido = 0;
		}
		if (!strcmp(sigla, "MS")){
			printf("Sul-mato-grossense\n");
			valido = 0;
		}
		if (!strcmp(sigla, "MG")){
			printf("Mineiro\n");
			valido = 0;
		}
		if (!strcmp(sigla, "PA")){
			printf("Paraense\n");
			valido = 0;
		}
		if (!strcmp(sigla, "PB")){
			printf("Paraibano\n");
			valido = 0;
		}
		if (!strcmp(sigla, "PR")){
			printf("Paranaense\n");
			valido = 0;
		}
		if (!strcmp(sigla, "PE")){
			printf("Pernambucano\n");
			valido = 0;
		}
		if (!strcmp(sigla, "PI")){
			printf("Piauense\n");
			valido = 0;
		}
		if (!strcmp(sigla, "RJ")){
			printf("Carioca\n");
			valido = 0;
		}
		if (!strcmp(sigla, "RN")){
			printf("Potiguar\n");
			valido = 0;
		}
		if (!strcmp(sigla, "RS")){
			printf("Gaúcho\n");
			valido = 0;
		}
		if (!strcmp(sigla, "RO")){
			printf("Rondoniense\n");
			valido = 0;
		}
		if (!strcmp(sigla, "RR")){
			printf("Roraimense\n");
			valido = 0;
		}
		if (!strcmp(sigla, "SC")){
			printf("Catarinense\n");
			valido = 0;
		}
		if (!strcmp(sigla, "SE")){
			printf("Sergipano\n");
			valido = 0;
		}
		if (!strcmp(sigla, "SP")){
			printf("Paulista\n");
			valido = 0;
		}
		if (!strcmp(sigla, "TO")){
			printf("Tocantinense\n");
			valido = 0;
		}
		if(valido == 1) {
			printf("Não existe tal estado.\n");
		}
		do {
			printf("Deseja inserir novamente? (S/N): ");
			scanf("%c",&repetir);
			getchar();
			if (repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n'){
				printf("Operação inválida.\n");
			}
			}while (repetir != 'S' && repetir != 's' && repetir != 'N' && repetir != 'n');
		}
}
