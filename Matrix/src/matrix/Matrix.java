/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package matrix;

/**
 *
 * @author alekzuz
 */
public class Matrix {
    


    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int N = 6;
        int[][] A= new int[N][N];
        int[][] B= new int[N][N];
        int[][] C= new int[N][N];
        int i, j, k;
        //lenar A
	for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			A[i][j]=1;			
		}
	}
        //llenar B
	for (i=0;i<N;i++){
		for(j=0;j<N;j++){
			B[i][j]=2;			
		}
	}
        //multi
        long operacion = 0;
        long fila = 0;
        long total = 0;
        long startTime = System.nanoTime(); //inicio matriz
        for(i=0;i<N;i++){
                long startFil = System.nanoTime(); //inicio fila
		for(j=0;j<N;j++){
			C[i][j]=0;
                        long startOp = System.nanoTime(); //inicio op
			for(k=0;k<N;k++){
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}
                        operacion += System.nanoTime() - startOp;//fin op
		}
                fila += System.nanoTime() - startFil;//fin fila		
	}
        total                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               = System.nanoTime() - startTime;//fin matriz
        long n = (long)N;
        System.out.println("Promedio Operacion="+operacion/(n*n));
        System.out.println("Promedio Fila="+fila/n);
        System.out.println("Total matriz="+total);
        
        //print
        /*for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(C[i][j]<=9) System.out.print(C[i][j]+"  ");
			else {
				System.out.print(C[i][j]+" ");
			}
		}
		System.out.println("");	
	}*/
        
    }
    
}
