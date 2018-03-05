#include <stdio.h>
#include <stdlib.h>
unsigned long fibonacci(unsigned long n){
	unsigned long a,i,temp = 0;
	unsigned long b = 1;
	for(i = 0; i < n; i++){
		temp = b;
		b = a + b;
		a = temp;
	}
	return a;
/*	if(n==0) return 0;
	if(n==1) return 1;
	if(n>1) return fibonacci(n-1)+fibonacci(n-2);*/
}

void main(){
	unsigned long n = 162;
	unsigned long r = fibonacci(n);
	printf("Para n = %lu, res: %lu \n",n,r);
}
