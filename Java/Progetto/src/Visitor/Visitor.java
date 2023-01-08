package Visitor;

import Prodotto.Borsa;
import Prodotto.Portachiavi;
import Prodotto.Portafoglio;
import Prodotto.Valigia;

public interface Visitor <T>{
	<T> T visit(Valigia v);
	<T> T visit(Borsa v);
	<T> T visit(Portafoglio v);
	<T> T visit(Portachiavi v);
}
