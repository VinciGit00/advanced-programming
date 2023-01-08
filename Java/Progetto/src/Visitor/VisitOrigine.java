package Visitor;

import Prodotto.Borsa;
import Prodotto.Portachiavi;
import Prodotto.Portafoglio;
import Prodotto.Valigia;

public class VisitOrigine implements Visitor <String>{

	@Override
	public String visit(Valigia v) {
		return "USA";
	}

	@Override
	public String visit(Borsa v) {
		return "CINA";
	}

	@Override
	public String visit(Portafoglio v) {
		return "ITALY";
	}

	@Override
	public String visit(Portachiavi v) {
		return "INDIA";
	}
}