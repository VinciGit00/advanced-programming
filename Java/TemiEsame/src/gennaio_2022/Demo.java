package gennaio_2022;

import java.util.ArrayList;
import java.util.List;

public class Demo {
	public static void main(String[] args) {
		// Creo 3 pasti
		Pranzo p1 = new Pranzo();
		Cena p2 = new Cena();
		Cena p3 = new Cena();
		
		
		ArrayList<Pasto> lista = new ArrayList();
		lista.add(p1);
		lista.add(p2);
		lista.add(p3);

		System.out.println(sommaCosto(lista));

	}

	static int sommaCosto(ArrayList <? extends Pasto> lista) {
		int somma = 0;
		
		//Crea la classe visitor che mi permette di restituirmi i calcoli
		CalcolaCosto c = new CalcolaCosto();
		
		for(int i =0; i <lista.size(); i++ ) {
			somma += lista.get(i).accept(c);
		}
	
		return somma;
	}
}
