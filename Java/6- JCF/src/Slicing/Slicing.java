package Slicing;

class Persona{
	String name;

	Persona () {}
	
	Persona(String name) {
		this.name = name;
	}
}


class Studente extends Persona {
	int cod;
	
	 Studente(String name, int cod) {
		super(name);
		this.cod = cod;
	}
}

public class Slicing {
	public static void main(String[] args) {
		Studente s = new Studente("marco", 1064889);
		
		Persona p = s;

		//Questo non si può fare -> errore di compilazione
		//System.out.println(p.cod);

		System.out.println(p.name);
	}
}
