package Prodotto;

public class Valigia extends Prodotto{
	String materiale;
	
	public Valigia(String materiale, String codice) {
		super(codice);
		this.materiale = materiale;
	}
	
	 @Override
	 public String toString() {
		 return this.codice+ " "+this.materiale;
	  }
}
