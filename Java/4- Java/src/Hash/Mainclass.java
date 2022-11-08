package Hash;

import java.util.HashSet;
import java.util.Set;

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

public class Mainclass {

	public static void main(String[] args) {
		Person p1 = new Person("GRG");
		Person p2 = new Person("GRG");
		Person p3 = new Person("VNC");


		
		//Gruppo di amici
		Set <Person> amici = new HashSet<>();
		amici.add(p1);
		
		System.out.println(amici.contains(p1));
		System.out.println(amici.contains(p2));
		System.out.println(amici.contains(p3));

	}

}
