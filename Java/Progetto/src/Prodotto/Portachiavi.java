package Prodotto;

public class Portachiavi extends Prodotto {
	boolean gancio;
	
	public Portachiavi(String codice, boolean gancio) {
		super(codice);
		this.gancio = gancio;
	}
	
	 @Override
	 public String toString() {
		 return this.codice+ " "+this.gancio;
	  }
}
