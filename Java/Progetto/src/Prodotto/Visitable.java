package Prodotto;

import Visitor.Visitor;

public interface Visitable {
	<T> T accept(Visitor <T> v);
}
