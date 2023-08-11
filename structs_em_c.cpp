#include <stdio.h>
#include <string.h>
#include <windows.h>

struct Data{
	int dia;
	int mes;
	int ano;
};

struct Pessoa{
	char nome[10];
	
	struct Data liga;
};

Pessoa nome;

int main(){
	printf("Nome...........: ");
	scanf("%s", &nome.nome);
	
	printf("Data nascimento: ");
	scanf("%d %d %d", &nome.liga.dia, &nome.liga.mes, &nome.liga.ano);
	
	system("cls");
	
	printf("%s", nome.nome);
	printf(" %d/%d/%d\n", nome.liga.dia, nome.liga.mes, nome.liga.ano);
	
	return 0;
}
