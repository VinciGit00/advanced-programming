package Prodotto;

public abstract class Prodotto implements ProdottoInterface, Visitable {

	String codice;
	String marca;
	private int quantity;

	Prodotto(String codice, String marca){
		this.codice = codice;
		this.marca = marca;
		this.quantity = 1;
	}
	
	Prodotto(String codice, String marca, int quantity){
		this.codice = codice;
		this.marca = marca;
		this.quantity = quantity;
	}
	
	public int getQuantity() {
		return this.quantity;
		
	}
	@Override
	public void setQuantity(int number) {
		this.quantity = number;
	} 
	

	
}



