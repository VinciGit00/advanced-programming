package binding_dinamico;

class StudenteClass {
	int matricola;
	
	StudenteClass(int matricola) {
		this.matricola = matricola;
	}
	
	 @Override
	    public String toString() {
		 return "Matricola: "+Integer.toString(matricola);
	    }
}


public class Studente {

	
	public static void main(String[] args) {

		Object O = new StudenteClass(1064889);

		System.out.println(O.toString());
	}

}
