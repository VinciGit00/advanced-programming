package Scaffale;

import Prodotto.Prodotto;

public interface ScaffaleInterface {

	void insert(Integer key ,  Prodotto value) throws Exception;
	
	public String toString();
}
