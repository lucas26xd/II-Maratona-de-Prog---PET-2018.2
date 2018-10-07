#include<stdio.h>

int main(){
	float n1, n2, n3;
	scanf("%f %f %f", &n1, &n2, &n3);
	float m = (n1 + n2 + n3) / 3.0;
	if(m >= 7)
		printf("APROVADO");
	else if(m >= 4)
		printf("AF");
	else
		printf("REPROVADO");
	printf("\n");
	return 0;
}
