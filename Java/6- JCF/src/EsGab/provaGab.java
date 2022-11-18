package EsGab;

import java.util.ArrayList;

import javax.swing.text.html.HTMLDocument.Iterator;

public class provaGab {
	public static void main(String[] args) {
	Object Gabriele = new Persona("Gabriele");
	Object Marco 	= new Persona("Marco");
	Object Anna 	= new Persona("Anna");
	
	Container c = new Container();
	
	c.inserisci((Comparable) Marco);
	c.inserisci((Comparable) Gabriele);
	c.inserisci((Comparable) Anna);
	
	c.Stampa();
	
	c.sort();
	
	c.Stampa();
	}
}

class Container <Object extends Comparable <Object>> {
	ArrayList <Object> lista = new ArrayList<Object>();

	void inserisci(Object o) {
		lista.add(o);
	}
	
	void sort() {
		for(int i=0 ; i<this.lista.size(); i++) {
			for(int j=i+1 ; j<this.lista.size(); j++) {
				if(lista.get(i).compareTo(lista.get(j))>0) {
					Object temp = lista.get(j);
					lista.set(j, lista.get(i));
					lista.set(i, temp);
				}
			}
		}
	}
	
	void Stampa() {
		for(int i=0 ; i<this.lista.size(); i++) {
			System.out.println(lista.get(i));
		}
	}
}

class Persona implements Comparable<Persona> {
	String Cognome;
	
	Persona(String cognome) {
		this.Cognome = cognome;
	}
	
	@Override
	public int compareTo(Persona o) {
		return this.Cognome.compareTo(o.Cognome);
	}
	
	@Override
	public String toString() {
		return Cognome.toString();
	}
	
}