package Prodotto;

import Visitor.Visitor;

public class Valigia extends Prodotto{
	String materiale;
	
	public Valigia(String codice, String marca, String materiale) {
		super(codice, marca);
		this.materiale = materiale;
	}
	
	public Valigia(String codice, String marca, String materiale, int quantity) {
		super(codice, marca, quantity);
		this.materiale = materiale;
	}
	
	 @Override
	 public String toString() {
		 return this.codice+", marca: "+this.marca +", materiale: "+this.materiale+", quantità: "+this.getQuantity();
	  }
	 
	 @Override
	public <T> T accept(Visitor<T> v) {
			return v.visit(this);
	}

}
