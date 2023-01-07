package Prodotto;

public class Portafoglio extends Prodotto{
	Boolean cerniera;
	Boolean portamonete;
	
	public Portafoglio(boolean cerniera, boolean portamonete, String codice) {
		super(codice);
		this.cerniera = cerniera;
		this.portamonete = portamonete;
	}
	
	 @Override
	 public String toString() {
		 return this.codice+ " "+this.portamonete+" "+ this.cerniera;
	  }
}
