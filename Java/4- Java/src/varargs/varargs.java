package varargs;

import java.util.Arrays;

public class varargs {

	//media di un numero indefinito di interi
	
	//è un varargs
	static double media(int ...is) {
		int somma = 0;
		for(int x:is) {
			somma+= x;
		}
		return somma/is.length;
	}
	
	//metodo che prende due varargs -> non is può fare
	//Regola: si può usare solo un varargs e come unico argomento
	static void altriArgs(int a, int ...b) {
		
	}
	
	
	public static void main(String[] args) {
		System.out.println(media(1,2,3));
		
		//Altro metodo
		int [] voti = new int [] {18,19,20};
		System.out.println(media(voti));

		//Come usare una lista -> devo convertirla in array
		altriArgs(8,9,10);

		System.out.printf("%d");
	}

}
