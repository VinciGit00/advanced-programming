package Visitor;

import Prodotto.Borsa;
import Prodotto.Portachiavi;
import Prodotto.Portafoglio;
import Prodotto.Valigia;


public class Visit implements Visitor <Integer>{

	@Override
	public Integer visit(Valigia v) {
		return 150;
	}

	@Override
	public Integer visit(Borsa v) {
		return 100;
	}

	@Override
	public Integer visit(Portafoglio v) {
		return 50;
	}

	@Override
	public Integer visit(Portachiavi v) {
		return 25;
	}

}