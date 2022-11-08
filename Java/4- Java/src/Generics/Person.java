package Generics;

public class Person implements Comparable <Person>{

	String surname;
	
	Person(String surname) {
		this.surname = surname;
	}
	
	
	@Override
	public int compareTo(Person o) {
		return this.surname.compareTo(o.surname);
	}

}
