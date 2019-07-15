#include<stdio.h>
#include<string.h>
#include <ctype.h>

int isBissexto(int ano){
	if(ano % 4 == 0){
		if(ano % 100 != 0)
			return 1;
		else if(ano % 100 == 0 && ano % 400)
			return 1;
		else
			return 0;
	}else
		return 0;
}

int difAnos(int a1, int a2){//retorna a a quantidade de dias que se passou do dia 01/01/a1 até 31/12/(a2-1)
	int ac = 0;
	for(; a1 < a2; a1++){
		ac += 365 + isBissexto(a1);
	}
	return ac;
}

int qtdDias(int d, int m, int a){
	int mes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i = 0, ac = 0;	
	for(; i < m-1; i++){
		if(i == 1)
			ac += isBissexto(a);
		ac += mes[i];
	}
	ac += d;
	return ac;
}

int difData(int d1, int m1, int a1, int d2, int m2, int a2){	
	return difAnos(a1, a2) - qtdDias(d1, m1, a1) + qtdDias(d2, m2, a2);
}

int main (){
	int d1, m1, a1, d2, m2, a2;
	scanf("%d %d %d %d %d %d", &d1, &m1, &a1, &d2, &m2, &a2);
	printf("%d\n", difData(d1, m1, a1, d2, m2, a2));	
	return 0;
}
