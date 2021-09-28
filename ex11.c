#include <stdio.h>
#include <stdlib.h>

void main() {
	system("cls");
	float salMin, salFunc;
	char nameFunc[61];

	printf("Digite o nome do funcionário: ");
	scanf("%s", nameFunc);
	printf("Digite o salário do funcionário: ");
	scanf("%f", &salFunc);
	printf("Digite o valor do salário mínimo: ");
	scanf("%f", &salMin);

	if (salFunc <= (salMin * 3.0)) {
		salFunc += salFunc * 0.5;
	} else
	if (salFunc >= (salMin * 3.0) && salFunc <= (salMin * 10.0)) {
		salFunc += salFunc * 0.2;
	} else
	if (salFunc > (salMin * 10.0) && salFunc < (salMin * 20.0)) {
		salFunc += salFunc * 0.15;
	} else {
		salFunc += salFunc * 0.1;
	}

	printf("Novo salário de %s será: %4.2f \n", nameFunc, salFunc);
}
