#include<stdio.h>

int main(){
	int n1, n2, i = 0, ant1 = 0, ant2 = 1, fib = 0;
	scanf("%d %d", &n1, &n2);
	for(; i < n2; i++){
		if (i >= n1)
			printf("%d\n", fib);
		ant1 = ant2;
		ant2 = fib;
		fib = ant1+ant2;
	}
	return 0;
}
