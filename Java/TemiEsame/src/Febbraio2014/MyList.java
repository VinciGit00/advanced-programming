package Febbraio2014;

import java.util.ArrayList;

class Persona implements Comparable<Persona>{
	String cognome;
	int age;
	
	Persona(String cognome, int age) {
		this.cognome = cognome;
		this.age = age;
	}

	@Override
	public int compareTo(Persona o) {
		return this.age - o.age;
	}
}

class Studente extends Persona {
	int matricola;
	
	
	Studente(String cognome, int matricola, int age) {
		super(cognome, age);
		this.matricola = matricola;
	}
}


//è necessario mettere il super quando si usa il comparable
public class  MyList<T extends Comparable<? super T>> extends ArrayList{
	
	public void inserisci(T toAdd) {
		this.add(toAdd);
	}
	
	T younger(){
		T min = (T) this.get(0);
		for(int i = 1; i<this.size(); i++) {
			T temp = (T) this.get(i);
			if(temp.compareTo(min)<0) {
				min = temp;
			}
		}
		
		return min;
	}
}