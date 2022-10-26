package Introduction;

import java.util.Arrays;
import java.util.List;


record Persona (String nome, String cognome) {}

public class Esempi {

	public static void main(String[] args) {

		List<Integer> names = Arrays.asList(3,4,5,6);
		
		System.out.println(names.toString());
		

		for(Integer index: names) {
			System.out.println(index+1);
		}

		names.stream().forEach(x-> System.out.println(x+1));

		int h = 90;
		
		switch(h) {
		case 0-> System.out.println("zero");
		default-> System.out.println("Non zero");
		}

		Persona pippo = new Persona("Marco", "Vinciguerra");
	}

}
