package Negozio;

import Prodotto.Prodotto;
import Scaffale.Scaffale;

public interface NegozioInterface {
	public String toString();
	
	public int nScaffali();
	
	public int nProdotti();
	
	public int addProdotto(Prodotto p);
	
	public int addScaffale(Scaffale s);
}
