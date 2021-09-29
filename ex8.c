#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

void main(){
	float a, b, c, delta, x1, x2;
	system("cls");
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	printf("Digite o valor de c: ");
	scanf("%f", &c);

	if(a != 0) {
    	delta = (b*b) - 4 * a * c;
		if(delta == 0){
			x1= (-b + sqrt(delta)) / (2*a);
			printf("Delta é igual a 0 \n");
			printf("x1 e x2 = %.2f", x1);
		} else {
    		if(delta > 0) {
				x1 = (-b + sqrt(delta)) / (2*a);
				x2 = (-b - sqrt(delta)) / (2*a);
				printf("Delta maior que 0 \n");
				printf("x1 = %.2f\n", x1);
				printf("x2 = %.2f\n", x2);
    		} else {
				printf("Delta menor que 0\n");
				printf("Nao existe raiz Real !");
      		}
    	}
	} else {
    	printf("Nao e uma equacao do segundo grau \n");
    	printf("Uma equacao de segundo grau e necessario ter A diferente de 0 \n");
    	printf("Delta nao pode ser negativo pois nao existem raizes reais de um valor negativo\n ");
    }

	system("pause");
}