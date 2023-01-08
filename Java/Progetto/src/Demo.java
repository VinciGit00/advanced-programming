import java.util.ArrayList;

import Negozio.Negozio;
import Prodotto.Borsa;
import Prodotto.Portachiavi;
import Prodotto.Portafoglio;
import Prodotto.Prodotto;
import Prodotto.Valigia;
import Scaffale.Scaffale;
import Visitor.Visit;

public class Demo {

	//extends -> serve per la lettura 
	static int calcolaPrezzo(ArrayList<? extends Prodotto> lista) {
		int res = 0;
		
		Visit visitor = new Visit();
		
		for(Prodotto p: lista) {
			res+=p.accept(visitor);
		}
		return res;
	}
	
	public static void main(String[] args) {
		//Istanzio il negozio
		Negozio n = Negozio.getInstance("Malia Pelletteria");
		
		// Creo i prodotti
		Borsa p1 = new Borsa("COD1", "Samsonite",true);
		Portachiavi p2 = new Portachiavi("COD2", "American Turister", false);
		Portafoglio p3 = new Portafoglio("COD3", "Pollini",false, true);
		Valigia p4 = new Valigia("COD4", "Samsonite", "pelle", 2);
		
		
		//Creo gli scaffali
		Scaffale s1 = new Scaffale("S1");
		Scaffale s2 = new Scaffale("S2");

		
		// Gli aggiungo agli scaffali
		try {
			s1.insert(1, p1);
			s1.insert(2, p2);
			
			s2.insert(1, p3);
			s2.insert(2, p4);
		} catch (Exception e) {
			e.printStackTrace();
		}
		
		//Aggiungo al negozio gli scaffali
		n.addScaffale(s1);
		n.addScaffale(s2);
		
		
		//Testo i metodi del negozio
		System.out.println("Numero di scaffali: "+n.nScaffali());
		System.out.println("Numero di prodotti: "+n.nProdotti());
		
		n.printMagazzino();
		
		
		//Chiamata del visitor pattern 
		ArrayList<Prodotto> lista = new ArrayList<>();
		lista.add(p1);
		lista.add(p2);
		lista.add(p3);
		lista.add(p4);
		
		System.out.println(calcolaPrezzo(lista));
		}

}
