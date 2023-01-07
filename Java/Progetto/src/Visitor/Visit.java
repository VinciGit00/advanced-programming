package Visitor;

import Prodotto.Borsa;
import Prodotto.Portachiavi;
import Prodotto.Portafoglio;
import Prodotto.Valigia;

interface Visitor<T> {
	<T> T visit(Valigia v);
	<T> T visit(Borsa v);
	<T> T visit(Portafoglio v);
	<T> T visit(Portachiavi v);
}

public class Visit implements Visitor {

	@Override
	public Object visit(Valigia v) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public Object visit(Borsa v) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public Object visit(Portafoglio v) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public Object visit(Portachiavi v) {
		// TODO Auto-generated method stub
		return null;
	}

}
