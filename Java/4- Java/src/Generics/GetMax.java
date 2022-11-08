package Generics;

import java.util.Arrays;
import java.util.List;
import java.util.Random;

public class GetMax {

	class Persona{
		String name;
	}
	
	//Prende una lista e restituisce un elemento a caso
	
	static <T> T chooseOne(List <T> lista) {
		if (lista.size()==0)
			return null;
		Random r = new Random();
		return lista.get(r.nextInt(lista.size()));
	}

	//extends comparable si usa nei metodi
	static <T extends Comparable <? super T>> T getMax(List <T> numeri) {
		T max = numeri.get(0);
		//faccio un ciclo for
		for(T t :numeri) {
			//Come fare il confronto
			//Esiste solo per le classi che sono comparable
			if(t.compareTo(max)>0) max = t;
		}
		return max;
	}

	public static void main(String[] args) {
		List <String> names = Arrays.asList("a","b","c");
		
		System.out.println(chooseOne(names));
		System.out.println(getMax(names));


		List <Persona> p;
		//Non va bene perchè non è comparable
		//Dovrei usare implements comparable nella class Persona
		//System.out.println(getMax(p));	
		//Non posso farlo
		
		//print(p);
		
		
		List <Automobile> ferraris = null;
		getMax(ferraris);
	}
	
	//Non posso usarlo
	static void print(List<Object> list) {
		
	}
	
	//Posso usarlo
	static <T>void print2(List<T> list) {
		
	}
}


class Veicolo implements Comparable <Veicolo> {

	@Override
	public int compareTo(Veicolo o) {
		// TODO Auto-generated method stub
		return 0;
	}
	
}

//Questa classe è comparable
class Automobile extends Veicolo{
	
}
