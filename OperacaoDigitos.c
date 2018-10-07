#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char num[8];
	char op;
	int i = 1, a;
	scanf("%s %c", num, &op);
	//val = atoi(num);
	float res = num[0] - 48;
	for(; i < strlen(num); i++){
		a = num[i] - 48;
		switch(op){
			case '+':
				res += a;
				break;
			case '-':
				res -= a;
				break;
			case '*':
				res *= a;
				break;
			case '/':
				res /= a;
				break;
		}
	}
	printf("%.2f\n", res);
	return 0;
}
