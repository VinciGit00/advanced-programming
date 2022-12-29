package Es7;


public interface  Visitor<T>{
	 T visit(Semplice s);
	 T visit(Composto s);

}

 class  calcoloPrezzo implements Visitor <Integer>{

	

	@Override
	public Integer visit(Semplice s) {
		return 10;
	}

	@Override
	public Integer visit(Composto s) {
		int somma = 0;
		for (Component c : s.componentList) {
			if(c instanceof Semplice) {
				somma+=10;
			} else {
				int val = visit((Composto)c);
				somma += val;
			}
		}
		return somma;
	}
	
}

 class RestituisciNomi implements Visitor <String>{

	@Override
	public String visit(Semplice s) {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public String visit(Composto s) {
		// TODO Auto-generated method stub
		return null;
	}
	
}