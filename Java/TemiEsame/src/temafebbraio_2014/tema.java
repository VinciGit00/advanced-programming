package temafebbraio_2014;

import java.util.ArrayList;

class Persona implements Comparable <Persona>{
	
	int age;
	
	Persona(int age) {
		this.age = age;
	}
	
	@Override
	public String toString() {
		//Devo fare un Integer per ritornare un int come stringa
		Integer n = this.age;
		return n.toString();
	}

	@Override
	public int compareTo(Persona o) {
		if (this.age > o.age) {
			return 1;
			} else if (this.age == o.age) {
			return 0;
			} else {
			return -1;
		}
	}
	
}



//Non cambia l'inserimento coi generics
class Studente extends Persona{

	Studente(int age) {
		super(age);
	}
	
}


//Devo specificarlo qui cosa estende, non nel metodo
class MyList <T extends Comparable <? super T>> extends ArrayList<T> {
	
	public void aggiungi( T element) {
		this.add(element);
	}
	
	
	public  T mostYounger() {
		T min = (T) this.get(0);
		for(int i =0; i< this.size(); i++) {
		if( min.compareTo((T) this.get(i))>0) {
				min = (T) this.get(i);
			}
		}
		
		return min;
	}
	
}


public class tema {
	public static void main(String[] args) {
		
		Persona p1  = new Persona(2);
		Persona p2  = new Persona(3);
		Persona p3  = new Persona(4);
		
		Studente s1 = new Studente(1);
		Studente s2 = new Studente(1);
		Studente s3 = new Studente(1);
		
		MyList<Persona> lista = new MyList<>();
		lista.aggiungi(p1);
		lista.aggiungi(p2);
		lista.aggiungi(p3);
		
		lista.add(s1);
		lista.add(s2);
		lista.add(s3);


		System.out.println(lista.toString());
		System.out.println(lista.mostYounger());

		
	}
}
