#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main (){
	char texto[50];
	int i = 0;
	scanf("%[^\n]", texto);
	for(; i < strlen(texto); i++){
		if(isalpha(texto[i]))
			printf("P");
		printf("%c", texto[i]);
	}
	printf("\n");
	return 0;
}
