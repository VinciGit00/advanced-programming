package Dispatch;

class A {
	void foo(A  a) {
		System.out.println("scrivo A");
	}
}

class B extends A {
	void foo(B b ) {
		System.out.println("scrivo B");

	}
}

public class classi {

	public static void main(String[] args) {

		A value1 = new A();
		B value2 = new B(); //Un B è un A
		
		//Anche se richiede un B va bene perchè un B è un A
		value1.foo(value2);
		
		//Caso interessante
		//B in questo modo ha 2 valori
		value2.foo(value2);
		value2.foo(value1);
		
		//caso veramente interessante 
		// In questo metodo B ha 2 metodi foo
		A value3 = new B(); //Istanzio un A
		
		value3.foo(value1);
	}

}
