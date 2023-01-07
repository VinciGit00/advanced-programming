package Prodotto;

public abstract class Prodotto implements ProdottoInterface {

	String codice;
	
	Prodotto(String codice){
		this.codice = codice;
	}
}
