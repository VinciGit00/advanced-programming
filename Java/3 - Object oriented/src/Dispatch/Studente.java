package Dispatch;


class StudenteClass {
	int matricola;
	
	StudenteClass(int matricola) {
		this.matricola = matricola;
	}
	
	// da false
	/**
	 * public boolean equals(StudenteClass s) {
		return this.matricola == s.matricola;
		
	}
	 */
	public boolean equals(StudenteClass obj)   {
		return this.matricola == obj.matricola;
		
	}
	
}


public class Studente {

	
	public static void main(String[] args) {

		Object s1 = new StudenteClass(1064889);
		StudenteClass s2 = new StudenteClass(1064889);

		System.out.println(s2.equals(s1));
		System.out.println(s1.equals(s2));
	}

}
