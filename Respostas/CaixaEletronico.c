#include<stdio.h>
#include<stdlib.h>

int main (){
	int n, c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;
	scanf("%d", &n);
	if(n == 0){
		printf("Valor não válido!\n");	
		return 0;
	}
	while(n >= 100){
		if(n == 103 || n == 101){
			n -= 50;
			c50++;
		}else{
			n -= 100;
			c100++;
		}
	}
	while(n >= 50){
		if(n == 53 || n == 51){
			n -= 20;
			c20++;
		}else{
			n -= 50;
			c50++;
		}
	}
	while(n >= 20){
		if(n == 23 || n == 21){
			n -= 10;
			c10++;
		}else{
			n -= 20;
			c20++;
		}
	}
	while(n >= 10){
		if(n == 13 || n == 11){
			n -= 5;
			c5++;
		}else{
			n -= 10;
			c10++;
		}
	}
	while(n >= 5){
		if(n == 8 || n == 6){
			n -= 2;
			c2++;
		}else{
			n -= 5;
			c5++;
		}
	}
	while(n >= 2){
		n -= 2;
		c2++;
	}
	if(n != 0){
		printf("Valor não válido!\n");
	}else{
		if(c100 > 0){
			printf("%d nota(s) de R$ 100,00.\n", c100);
		}
		if(c50 > 0){
			printf("%d nota(s) de R$ 50,00.\n", c50);
		}
		if(c20 > 0){
			printf("%d nota(s) de R$ 20,00.\n", c20);
		}
		if(c10 > 0){
			printf("%d nota(s) de R$ 10,00.\n", c10);
		}
		if(c5 > 0){
			printf("%d nota(s) de R$ 5,00.\n", c5);
		}
		if(c2 > 0){
			printf("%d nota(s) de R$ 2,00.\n", c2);
		}
	}
	return 0;
}
