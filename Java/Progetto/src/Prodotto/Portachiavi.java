package Prodotto;

import Visitor.Visitor;

public class Portachiavi extends Prodotto {
	boolean gancio;
	
	public Portachiavi(String codice, String marca, boolean gancio) {
		super(codice, marca);
		this.gancio = gancio;
	}
	
	public Portachiavi(String codice, String marca, boolean gancio, int quantity) {
		super(codice, marca, quantity);
		this.gancio = gancio;
	}
	
	 @Override
	 public String toString() {
		 return this.codice+ ", marca: "+this.marca +" "+this.gancio+", quantità: "+this.getQuantity();
	  }
	 
	 @Override
		public <T> T accept(Visitor<T> v) {
			return v.visit(this);
		}
}
