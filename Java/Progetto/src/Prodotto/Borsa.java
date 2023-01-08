package Prodotto;

import Visitor.Visitor;

public class Borsa extends Prodotto{
	
	Boolean tracolla;
	
	public Borsa(String codice, String marca, boolean tracolla) {
		super(codice, marca);
		this.tracolla = tracolla;
	}
	
	public Borsa(String codice, String marca, boolean tracolla, int quantity) {
		super(codice, marca, quantity);
		this.tracolla = tracolla;
	}
	
	 @Override
	 public String toString() {
		 return this.codice+", marca: "+this.marca+" "+this.tracolla+", quantità: "+this.getQuantity();
	  }

	@Override
	public <T> T accept(Visitor<T> v) {
		return v.visit(this);
	}
}
