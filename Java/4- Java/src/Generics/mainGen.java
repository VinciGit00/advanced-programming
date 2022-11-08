package Generics;

import Generics.Generics.Stack;

public class mainGen {

	class StackGen  <A>{
		//Non si possono determinare array di generics	
		//A[] data = new A[100];
		Object [] data= new Object [100];
		int n =0;
		
		 void push(A o) {
			 data[n++] = o;
		 }
		 
		 A pop() {
			return (A) data[--n];	
		 }
	 }
	
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}
