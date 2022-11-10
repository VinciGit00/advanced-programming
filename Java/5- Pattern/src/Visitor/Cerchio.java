package Visitor;


public class Cerchio extends Figura {

	public double raggio;
	
	@Override
	public <T> T accept(Visitor<T> v) {
		return v.visitCerchio(this);		
	}


}
