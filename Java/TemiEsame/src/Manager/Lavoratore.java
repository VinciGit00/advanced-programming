package Manager;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Collection;

interface Visitable{
	<T> T accept(Visitor <T> v);
}

public abstract class Lavoratore implements Visitable{

}

class Impiegato extends Lavoratore {

	@Override
	public <T> T accept(Visitor<T> v) {
		return  v.visit(this);
	}
	
}

class Manager extends Lavoratore {
	ArrayList<Lavoratore> listaLavoratori = new ArrayList();

	@Override
	public <T> T accept(Visitor<T> v) {
		return  v.visit(this);
	}
	
	public  void add(Lavoratore aggiunta) {
		listaLavoratori.add(aggiunta);
	}
	
}