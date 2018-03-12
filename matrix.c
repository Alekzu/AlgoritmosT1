#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

static int const N = 100;

void llenar(int A[N][N], int n){

	//srand((unsigned int)time(NULL));
	int i, j;
	for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			//n=rand()%50+1;
			A[i][j]=n;			
		}
	}
	
}



void multi_m(int A[N][N], int B[N][N], int C[N][N]){
	
	int i,j,k;
	int fa=N,ca=N,fb=N,cb=N;
	double tiempo_op =0.0;
	double tiempo_fil =0.0;
	clock_t begin = clock();//inicio matriz
	for(i=0;i<fa;i++){
		clock_t i_fila = clock();//inicio fila
		for(j=0;j<cb;j++){
			C[i][j]=0;
			clock_t inicio = clock(); //inicio op
			for(k=0;k<fa;k++){
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}
			clock_t fin = clock(); //fin op
			tiempo_op += (double)(fin - inicio) / CLOCKS_PER_SEC;//sumatoria op

		}
		clock_t f_fila = clock();//fin fila
		tiempo_fil += (double)(f_fila - i_fila) / CLOCKS_PER_SEC;//sumatoria  N filas
	}
	clock_t end = clock();//fin matriz
	printf("un elemento: %f \n",tiempo_op/(N*N));//promedio op
	printf("una fila: %f \n",tiempo_fil/N);//promedio op fila completa
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("total matriz: %f \n",time_spent);//total matriz

}
int main(){
	
	int A[N][N];
	int B[N][N];
	int C[N][N];
	int i,j;
	llenar(A,1);
	llenar(B,2);
	multi_m(A,B,C);
	/*for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(A[i][j]<=9) printf("%i  ",A[i][j]);
			else {
				printf("%i ",A[i][j]);
			}
		}
		printf("\n");	
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(B[i][j]<=9) printf("%i  ",B[i][j]);
			else {
				printf("%i ",B[i][j]);
			}
		}
		printf("\n");	
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(C[i][j]<=9) printf("%i  ",C[i][j]);
			else {
				printf("%i ",C[i][j]);
			}
		}
		printf("\n");	
	}*/
	
}
