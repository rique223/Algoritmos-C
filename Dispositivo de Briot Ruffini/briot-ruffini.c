#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
	int i, grau;
	char letra = 97;
	float raiz;
	setlocale(LC_ALL,"");
	
	printf("What is the degree of the polynomial you want to pass through the algorithm? \n");
	scanf("%d", &grau);
	
	system("cls");
	
	grau++;
	 
	float indices[grau], novos_indices[grau];
	
	printf("Type the value for the root of the binomial function you've found \n");
	scanf("%f", &raiz);
	
	getchar();
	
	system("cls");
	
	for(i = 0; i < grau; i++) {
		printf("Type the value for the %c index \n", letra);
		scanf("%f", &indices[i]);
		
		system("cls");
		
		getchar();
		letra++;
	}
	
	letra = 97;
	
	novos_indices[0] = indices[0];
	
	for(i = 1; i < grau; i++) {
		novos_indices[i] = (novos_indices[i-1] * raiz) + indices[i];
	}
	
	printf("The resulting polynomial function is of %d degree \n", grau-2);
	
	for(i=0; i < grau-1; i++){
		printf("%c index: %.2f \n", letra, novos_indices[i]);
		letra++;
	}
	
	printf("Remainder of the division: %.2f", novos_indices[grau-1]);
	
	return 0;
}
