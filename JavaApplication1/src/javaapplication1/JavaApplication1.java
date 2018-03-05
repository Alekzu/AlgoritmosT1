/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

/**
 *
 * @author alekzuz
 */
public class JavaApplication1 {
    
    static long fibonacci(long n){
        long a,i,temp;
	long b = 1;
        a = 0;
	for(i = 0; i < n; i++){
		temp = b;
		b = a + b;
		a = temp;
	}
	return a;
    }

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        long n = 162;
        long res = fibonacci(n);
        System.out.println("Para n="+n+" fibo ="+res);
    }
    
}
