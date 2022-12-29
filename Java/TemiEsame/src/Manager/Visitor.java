package Manager;

public  interface Visitor <T> {
	 T visit(Impiegato i);
	 T visit(Manager i);
}

class Stipendi implements Visitor <Integer> {

	@Override
	public Integer visit(Impiegato i) {
		return 10;
	}

	@Override
	public Integer visit(Manager i) {
		Integer somma = 0;
		
		for(Lavoratore l : i.listaLavoratori) {
			if (l instanceof Impiegato) {
				somma+=10;
			} if(l instanceof Manager) {
				int val = (int) (2.5*visit((Manager) l));
				somma+= val;
			}
		}
		return somma;
	}
	
}
