package Visitor;


public abstract class Figura implements Visitable{

	@Override
	public abstract<T> T accept(Visitor<T> v);

}
