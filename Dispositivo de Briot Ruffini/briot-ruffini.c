#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	int i, raiz, grau;
	char letra = 97;
	int a, b, c;
	setlocale(LC_ALL,"");
	
	printf("Qual é o grau do polinômio que você quer passar pelo dispositivo? \n");
	scanf("%d", &grau);
	
	system("cls");
	
	grau++;
	
	int indices[grau], novos_indices[grau];
	
	printf("Entre com o valor da raiz encontrada \n");
	scanf("%d", &raiz);
	getchar();
	
	system("cls");
	
	for(i = 0; i < grau; i++) {
		printf("Entre com o valor do indice %c \n", letra);
		scanf("%d", &indices[i]);
		
		system("cls");
		
		getchar();
		letra++;
	}
	
	letra = 97;
	
	novos_indices[0] = indices[0];
	
	for(i = 1; i < 4; i++) {
		novos_indices[i] = (novos_indices[i-1] * raiz) + indices[i];
	}
	
	printf("O polinômio resultante é de grau %d \n", grau-1);
	
	for(i=0; i < grau-1; i++){
		printf("Grau %c: %d \n", letra, novos_indices[i]);
		letra++;
	}
	
	printf("Resto da divisão: %d", novos_indices[grau-1]);
	
	return 0;
}
