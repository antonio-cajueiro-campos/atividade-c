#include <stdio.h>
#include <stdlib.h>

void main() {
	system("cls");
	float minimumSalary, emplooyeeSalary;
	char emplooyeeName[61];

	printf("Nome do funcionario: ");
	scanf("%s", emplooyeeName);
	printf("Salario do funcionario: ");
	scanf("%f", &emplooyeeSalary);
	printf("Salario minimo: ");
	scanf("%f", &minimumSalary);

	if (emplooyeeSalary <= (minimumSalary * 3.0)) {
		emplooyeeSalary += emplooyeeSalary * 0.5;
	} else
	if (emplooyeeSalary >= (minimumSalary * 3.0) && emplooyeeSalary <= (minimumSalary * 10.0)) {
		emplooyeeSalary += emplooyeeSalary * 0.2;
	} else
	if (emplooyeeSalary > (minimumSalary * 10.0) && emplooyeeSalary < (minimumSalary * 20.0)) {
		emplooyeeSalary += emplooyeeSalary * 0.15;
	} else {
		emplooyeeSalary += emplooyeeSalary * 0.1;
	}

	printf("Reajuste de %s sera: %4.2f \n", emplooyeeName, emplooyeeSalary);
	system("pause");
}
