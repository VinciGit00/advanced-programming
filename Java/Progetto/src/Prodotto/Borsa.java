package Prodotto;

public class Borsa extends Prodotto{
	
	Boolean tracolla;
	
	public Borsa(String codice, boolean tracolla) {
		super(codice);
		this.tracolla = tracolla;
	}
	
	 @Override
	 public String toString() {
		 return this.codice+ " "+this.tracolla;
	  }
}
