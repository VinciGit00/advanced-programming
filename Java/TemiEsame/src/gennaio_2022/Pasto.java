package gennaio_2022;

interface Visitable {
	<T> T accept(Visitor <T> v);
}

public abstract class Pasto implements Visitable{

}

class Pranzo extends Pasto {

	@Override
	public <T> T accept(Visitor<T> v) {
		return v.visit(this);
	}
	
}

class Cena extends Pasto {

	@Override
	public <T> T accept(Visitor<T> v) {
		return v.visit(this);
	}
	
}