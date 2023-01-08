package Iterator;

import java.util.ArrayList;

public class Demo {
	static ArrayList <Persona> creaLista(String ... lista) {
		ArrayList<Persona> lnomi = new ArrayList<>();
		
		for(String elem: lista) {
			Persona p = new Persona(elem);
			lnomi.add(p);
		}
		
		return lnomi;
	}

	static void stampa(ArrayList <Persona> lista) {
		for(Persona elem: lista) {
			System.out.println(elem.nome);
		}
	}
	
	public static void main(String[] args) {
		String name1 = "A";
		String name2 = "B";
		String name3 = "C";
		String name4 = "D";
		String name5 = "E";

		
		ArrayList<Persona> result1 = creaLista(name1, name2, name3, name4, name5);
		stampa(result1);
		
		ArrayList<Persona> result2 = creaLista("A", "B", "C", "D", "E");
		stampa(result2);
	}

}
