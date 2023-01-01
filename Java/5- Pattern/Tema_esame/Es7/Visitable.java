package Es7;

import java.util.ArrayList;

interface Visitable <T>{
	T accept(Visitor v);
}


 abstract class Component implements Visitable {
	String nome;
	Component(String nome) {
		this.nome = nome;
	}
}


class Semplice extends Component {

	Semplice(String nome) {
		super(nome);
	}
	@Override
	public Object accept(Visitor v) {
		return v.visit(this);
	}
	
}


class Composto extends Component {
	Composto(String nome) {
		super(nome) ;
	}
	ArrayList <Component> componentList = new ArrayList<Component>();
	
	void addComponent(Semplice s) {
		componentList.add(s);
	}

	@Override
	public Object accept(Visitor v) {
		return v.visit(this);
	}
}