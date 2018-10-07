#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main (){
	char texto[100];
	scanf("%[^\n]", texto);
	int i = strlen(texto), inicio = 0, fim = i;
	for(i -= 1; i >= 0; i--){
		if(isspace(texto[i]) || i == 0){
			for(inicio = i; inicio < fim; inicio++){
				if(!isspace(texto[inicio]))
					printf("%c", texto[inicio]);
			}
			if(i != 0)
				printf(" ");
			fim = i;
		}
	}
	printf("\n");
	return 0;
}
