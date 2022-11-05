package TipiPrimitiviWrapper;


class Person {
	String CF;
	
	Person(String CF){
		this.CF= CF;
	}
	public boolean equals(Object a) {
		//TODO: implementare l'equalsx
		return CF.equals(((Person)a).CF);
	}
	
	//Se sono uguali restituisco lo stesso hashocode, altrimenti 
	@Override
	public int hashCode() {
		//Metodo corretto ma poco efficiente
		//return 167897;
		return CF.hashCode();
	}
}

class Student extends Person{

	Student(String CF) {
		super(CF);
	}
	
}
public class TipiPrimitiviWrapper {

	public static void main(String[] args) {
		int x = 900;
		Integer x2 = new Integer (9);
		Integer x3 = new Integer (9);

		System.out.println(x2==x3);

		//Qui invece non costruisce 2 oggetti
		Integer x4 =  9;
		Integer x5 =  9;

		System.out.println(x4==x5);

		//Qui invece non costruisce 2 oggetti
		Integer x6 =  1000;
		Integer x7 =  1000;

		System.out.println(x6==x7);

		//Con le stringhe
		//Non costruisce necessariamente un oggetto
		String s1 = "ciao";
		String s2 = "ciao";
		System.out.println(s1==s2);

		//Costruisce necessariamente un oggetto
		String s3 = new String("ciao");
		String s4 = new String("ciao");
		System.out.println(s3==s4);

		int numbers[];
		numbers = new int[100];
		
		System.out.println(numbers.length);
		
		//CAST
		float f = 0l; //Casting implicito
		long h = (long) f; //casting esplicito

		Person p = new Person("TT");
		//Questo non si può fare
		//String s = (String)p;
		
		
		Person p2 = new Person("MRC");
		//Genera un errore in compilazione
		Person p3 = (Person)p2;
		
	}
	

}
