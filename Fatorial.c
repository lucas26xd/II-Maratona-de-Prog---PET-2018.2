#include<stdio.h>

long int fat(long int n){
	if(n == 0)
		return 1;
	else
		return n * fat(n-1);
}

int main(){
	long int n;
	scanf("%ld", &n);
	printf("%ld", fat(n));
	printf("\n");
	return 0;
}
