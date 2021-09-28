#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h> 

void main() {
	system("cls");
	//system("cmd.exe /K chcp 65001 ");
	setlocale(LC_ALL,"");

	int arr[ 15 ];

	printf("So sera mostrado numeros entre 15 e 150 \n");

	for (int i = 1; i <= 15; i++) {
		printf("Digite o %i numero: ", i);
		scanf("%d", &arr[i]);
	}

	for (int i = 1; i <= 15; i++) {
		if (arr[i] >= 15.0 && arr[i] <= 150.0) {
			printf("Seu %d numero digitado aceito foi: %d ", i, arr[i]);
			printf("\n");
		}
	}
	
}