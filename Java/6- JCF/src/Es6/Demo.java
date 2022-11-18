package Es6;

import java.util.ArrayList;

 class Dizionario  <T extends Comparable <? super T>>{
	ArrayList <ElemeDizionario> lista = new ArrayList();
	
	void inserisci(ElemeDizionario elemento) {
		lista.add(elemento);
	}
	
	void inserisciinOrdine(ElemeDizionario elemento) {
		if(lista.size() == 0) {
			lista.add(elemento);
		} else {
			for(int i = 0; i<lista.size(); i++) {
				if(((Comparable<? super T>) lista.get(i).chiave).compareTo((T) elemento.chiave)<0) {
					lista.add(i+1, elemento);
				}
			}
		}
	}
	public <E> E find(ElemeDizionario elemento) {
		for(int i = 0; i<lista.size(); i++) {
			if(lista.get(i).compareTo(elemento)==0)
				return (E) elemento.valore;
		}
		return null;
	}
	void print() {
		for(int i = 0; i<lista.size(); i++) {
			System.out.println(lista.get(i));
		}
	}
}

class ElemeDizionario<E, V> implements Comparable<ElemeDizionario<E,V>> {
	
	E chiave;
	V valore;
	
	ElemeDizionario(E chiave, V valore) {
		this.chiave = chiave;
		this.valore = valore;
	}
	
	@Override
	public int compareTo(ElemeDizionario<E, V> o) {
		 int cmp = ((Comparable<ElemeDizionario<E, V>>) this.chiave).compareTo((ElemeDizionario<E, V>) o.chiave);
	    
	     return cmp;
	}

	@Override
	public String toString() {
		return "chiave: "+chiave+", valore: "+valore;
	}
	
	
}

public class Demo {
	public static void main(String[] args) {
		Dizionario d = new Dizionario();
		
		ElemeDizionario uno = new ElemeDizionario(1, 20);
		ElemeDizionario due = new ElemeDizionario(2, 40);
		ElemeDizionario tre = new ElemeDizionario(3, 40);
		ElemeDizionario quattro = new ElemeDizionario(4, 40);
		
		//d.print();
		
		d.inserisciinOrdine(uno);
		d.inserisciinOrdine(due);
		d.inserisciinOrdine(tre);
		d.inserisciinOrdine(quattro);
		
		d.print();
		
	}
}