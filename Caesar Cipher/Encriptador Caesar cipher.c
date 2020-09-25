#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

void encrypt_word_with_caesar_cipher(char word[], int key) {
	int i;
	
	for(i = 0; word[i] != '\0'; i++) {
		char current_character = word[i];
	
		if(current_character >= 'a' && current_character < ('z' - key)) {
			current_character = current_character + key;
			
			if(current_character > 'z') {
				current_character = current_character - 'z' + 'a' - 1; 
			}
			
			word[i] = current_character;
		} else if(current_character >= 'A' && current_character < 'Z') {
			current_character = current_character + key;
			
			if(current_character > 'Z') {
				current_character = current_character - 'Z' + 'A' - 1; 
			}
			
			word[i] = current_character;
		}
	}
}

int main(){
	char word[100];
	int numero;
		
	printf("Digite a palavra que deseja encriptar: \n");
	scanf("%s", &word);
	
	system("cls");
	
	printf("Digite a chave de encriptação da cifra de Cesar: \n");
	scanf("%d", &numero);
	
	system("cls");
	
	encrypt_word_with_caesar_cipher(word, numero);
	
	printf("Palavra criptografada: %s", word);
}

