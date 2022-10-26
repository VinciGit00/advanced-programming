package Introduction;
class Studente{
	
	//Variabile statica
	static int numStudenti = 0;
	
	static {
		System.out.println("Hai creato la classe");
	}
}

public class UsoStatic {

	public static void main(String[] args) {

		Studente.numStudenti++;
		//Oppure
		Studente.numStudenti = 90;

		Studente s1 = new Studente();
		s1.numStudenti= 100;
		
		Studente s2 = new Studente();

		
	}

}
