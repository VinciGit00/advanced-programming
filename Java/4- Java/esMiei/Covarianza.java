import java.util.ArrayList;

class Persona {
	
}

class Studente extends Persona {
	
}

public class Covarianza {
	public static void main(String[] args) {
		Persona persone [];
		
		Studente studenti [] = new Studente [10];
		
		//Covarianza negli array
		persone = studenti;
		
		
		//Covaarianza con gli arrayList
		
		ArrayList<Persona> persone2 = new ArrayList<Persona>();
		
		ArrayList<Studente> studenti2 = new ArrayList<Studente>();

		//Questo tipo di covarianze non è amesso
		//persone2 = studenti2;
		
	}
}
