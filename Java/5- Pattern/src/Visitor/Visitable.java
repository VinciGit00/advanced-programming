package Visitor;

public interface Visitable {

	<T> T accept(Visitor<T> v);
}