interface Visitable{
	<T> T accept(Visitor<T> v);
}

//Uso metodi generici
public abstract class Animale implements Visitable{

}

class Cane extends Animale {

	//In questo modo lancio il metodo
	@Override
	public <T> T accept(Visitor<T> v) {
		return v.visit(this);
	}
	
}

class Gatto extends Animale{

	@Override
	public <T> T accept(Visitor<T> v) {
		return v.visit(this);
	}
	
}
