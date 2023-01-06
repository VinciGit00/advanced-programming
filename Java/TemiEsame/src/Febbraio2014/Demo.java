package Febbraio2014;

public class Demo {

	public static void main(String[] args) {
		Persona p1 = new Persona("Marco",22);
		Persona p2 = new Persona("Gabriele", 21);
		Persona p3 = new Persona("Matteo", 25);
		
		Persona p4 = new Studente("Francesco", 1064889, 12);
		
		Studente p5 = new Studente("Mario", 1064889, 5);
		
		MyList<Persona> list = new MyList<>();
		
		list.inserisci(p1);
		list.inserisci(p2);
		list.inserisci(p3);
		list.inserisci(p4);
		list.inserisci(p5);
		
		Persona piccola = (Persona)list.younger();
		
		System.out.println(piccola.cognome);
	}

}
 