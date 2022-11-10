package Visitor;

public class Quadrato extends Rettangolo {
	double lato;

	@Override
	public <T> T accept(Visitor<T> v) {
		return v.visit(this);
	}

}
