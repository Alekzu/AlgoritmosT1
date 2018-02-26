#include <stdio.h>
#include <stdlib.h>
long fibonacci(long n){
	if(n==0) return 0;
	if(n==1) return 1;
	if(n>1) return fibonacci(n-1)+fibonacci(n-2);
}

void main(){
	long r = fibonacci(92);
	printf("res: %lo",r);
}
