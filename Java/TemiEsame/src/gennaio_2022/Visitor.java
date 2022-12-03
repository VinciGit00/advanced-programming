package gennaio_2022;

interface Visitor <T>{
	T visit(Pranzo p);
	
	T visit (Cena c);
}

class CalcolaCosto implements Visitor <Integer> {

	@Override
	public Integer visit(Pranzo p) {
		return 10;
	}

	@Override
	public Integer visit(Cena c) {
		return 20;
	}
	
}

class calcolaOrario implements Visitor <Integer> {

	@Override
	public Integer visit(Pranzo p) {
		return 12;
	}

	@Override
	public Integer visit(Cena c) {
		return 20;
	}
	
}