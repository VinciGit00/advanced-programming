package VisitorWeb;

//concrete element
public class Book implements Visitable{
	
	private double price;
	private double weight;

	//Accept the visitor
	public void accept(Visitor visitor) {
		visitor.visit(this);
	}

	public double getPrice() {
		return price;
	}

	public double getWeight() {
		return weight;
	}

} 