package Scaffale;

import java.util.Iterator;
import java.util.Map;
import java.util.TreeMap;
import Prodotto.Prodotto;

public class Scaffale implements ScaffaleInterface, Comparable <Scaffale>{
public String etichettaScaffale;
	public TreeMap<Integer,  Prodotto> tree_map = new TreeMap<Integer, Prodotto>();

	public Scaffale (String etichettaScaffale) {
		this.etichettaScaffale = etichettaScaffale;
	}

	@Override
	public int compareTo(Scaffale o) {
		return this.etichettaScaffale.compareTo(etichettaScaffale);
	}

	@Override
	public void insert(Integer key, Prodotto value) throws Exception {
		if(!this.tree_map.containsKey(key))
			this.tree_map.put(key, value);
		else 
			throw new Exception();
		
	}
	
	@Override
		public String toString() {
		Iterator<Map.Entry<Integer, Prodotto>> iterator = this.tree_map.entrySet().iterator();

		Map.Entry<Integer, Prodotto> entry = null;
		
		String result = this.etichettaScaffale+"\n";
		
		while(iterator.hasNext()){
		    entry = iterator.next();
		    result += entry.getKey()+" => "+entry.getValue()+"\n";
		    
		}
			return result;
		}
	
}
