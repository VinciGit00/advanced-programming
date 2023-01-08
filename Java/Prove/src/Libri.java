class Libro  {
	
	void a(Libro a) {
		System.out.println("Dentro");
	}
}

class Volume extends Libro{
	
}

public class Libri {

	public static void main(String[] args) {
		Libro l = new Libro();
		Volume v= new Volume();
		
		//Si può fare perchè un volume è un libro -> come studente e persona
		l.a(v);
	}

}
