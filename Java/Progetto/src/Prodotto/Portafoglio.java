package Prodotto;

import Visitor.Visitor;

public class Portafoglio extends Prodotto{
	Boolean cerniera;
	Boolean portamonete;
	
	public Portafoglio(String codice, String marca, boolean cerniera, boolean portamonete) {
		super(codice, marca);
		this.cerniera = cerniera;
		this.portamonete = portamonete;
	}
	
	public Portafoglio(String codice, String marca, boolean cerniera, boolean portamonete, int quantity) {
		super(codice, marca, quantity);
		this.cerniera = cerniera;
		this.portamonete = portamonete;
	}
	
	 @Override
	 public String toString() {
		 return this.codice+ " , marca: "+this.marca +" "+this.portamonete+" "+ this.cerniera+", quantità: "+this.getQuantity();
	  }
	 
	 @Override
		public <T> T accept(Visitor<T> v) {
			return v.visit(this);
		}
}
