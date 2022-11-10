package Visitor;


public class Rettangolo extends Figura {

	@Override
	public <T> T accept(Visitor<T> v) {
		return v.visit(this);
	}

}
