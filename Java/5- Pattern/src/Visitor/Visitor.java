package Visitor;


public interface Visitor<T> {

	T visitCerchio(Cerchio cerchio);

	T visit(Quadrato quadrato);

	T visit(Rettangolo rettangolo);

}
