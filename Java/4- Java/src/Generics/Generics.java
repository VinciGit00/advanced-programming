package Generics;

public class Generics {
	
	 class Stack{

		Stack() {
			
		}
		
		Object [] data= new Object [100];
		int n =0;
		
		void push(Object O) {
			data[n++]=O;
		}
		
		
		 Object pop() {
		return data[--n];	
		}
	}
	 
	//Specializzazione
	 class StackString extends Stack {

		 
		 //N.B: è diverso da fare overriding
		// void push(String s) {

		 //Overriding
		 //Così invece sto facendo overridind
		 void push(Object s) {
			 try {
			 if(s instanceof String)
				 super.push(s);
			 else throw new Exception(); 
			 } catch (Exception e) {
				 
			 }
			 
			 
		 }
		 
		 String pop() {
			 return (String) super.pop();
		 }
	 }
	
	public static void main(String[] args) {
		/*
		Stack nomi = new Stack();
		
		//Qui devo fare un cast a String perchè nomi contiene Object
		String pop = (String) nomi.pop();
		nomi.push("Piero");*/
		
	}
}
