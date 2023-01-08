package Negozio;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.Map;

import Prodotto.Prodotto;
import Scaffale.Scaffale;

public class Negozio implements NegozioInterface{

	String nomeNegozio;
	
	ArrayList<Scaffale> listaScaffali = new ArrayList<Scaffale>();
	
	private Negozio() {
		
	}
	
	private static Negozio NEGOZIO;

	  public static Negozio getInstance(String nomeNegozio) {
	      if (NEGOZIO == null) {
	    	  NEGOZIO = new Negozio();
	    	  NEGOZIO.nomeNegozio = nomeNegozio;
	      }
	      return NEGOZIO;
	   }
	
	
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
		return listaScaffali.size();
	}

	@Override
	public int nProdotti() {
		int count = 0;
		 Iterator<Scaffale> it = this.listaScaffali.iterator();
	      while (it.hasNext()) {
	    	  Scaffale indexMap = it.next();
	    	  
	    	  Iterator<Map.Entry<Integer, Prodotto>> iterator = indexMap.tree_map.entrySet().iterator();

	    	  Map.Entry<Integer, Prodotto> entry = null;

	    	  while(iterator.hasNext()){
	  		    entry = iterator.next();
	  		    Prodotto p = (Prodotto) entry.getValue();
	  		    count+= p.getQuantity();
	  		}
	      }	
	      
	      return count;
	}

	@Override
	public void addScaffale(Scaffale s) {
		listaScaffali.add(s);
	}
 
	

	@Override
	public void printMagazzino() {
		System.out.println("Nome negozio: "+ this.nomeNegozio);
		
		 Iterator<Scaffale> it = this.listaScaffali.iterator();
	      while (it.hasNext()) {
	    	  Scaffale indexMap = it.next();
	    	  
	    	  Iterator<Map.Entry<Integer, Prodotto>> iterator = indexMap.tree_map.entrySet().iterator();

	    	  Map.Entry<Integer, Prodotto> entry = null;
	    	  
	    	  
	    	  System.out.println("Scaffale: "+ indexMap.etichettaScaffale);
	    	  
	    	  while(iterator.hasNext()){
	  		    entry = iterator.next();
	  		    System.out.println(entry);
	  		}
	      }	
	      
		
	}
}
