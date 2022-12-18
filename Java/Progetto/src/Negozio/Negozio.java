package Negozio;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

import Prodotto.Prodotto;
import Scaffale.Scaffale;

public class Negozio implements NegozioInterface{

	
	ArrayList<Scaffale> listaScaffali = new ArrayList<Scaffale>();
	
	private Negozio() {
		
	}
	
	private static Negozio NEGOZIO;

	
	void sort() {
		Collections.sort(listaScaffali);
	}

	@Override
	public String toString() {
		String result = "";
		
		Iterator<Scaffale> it = listaScaffali.iterator();
		
	    while(it.hasNext()) {
	    	
	      result += it.next();
	     
	    }	
		return result;
	}

	@Override
	public int nScaffali() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public int nProdotti() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public int addProdotto(Prodotto p) {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public int addScaffale(Scaffale s) {
		// TODO Auto-generated method stub
		return 0;
	}
}
