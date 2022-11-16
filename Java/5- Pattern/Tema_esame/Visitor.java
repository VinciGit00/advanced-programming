
interface Visitor <T>{
	T visit(Cane c);
	
	T visit(Gatto g);
}

class CalcoloFidelity implements Visitor<Integer>{

	@Override
	public Integer visit(Cane c) {
		return 100;
		
	}

	@Override
	public Integer visit(Gatto g) {
		return 20;
		
	}
	
}


class Autonomy implements Visitor <Integer>{

	@Override
	public Integer visit(Cane c) {
		return 12;		
	}

	@Override
	public Integer visit(Gatto g) {
		return 200;		
	}
	
}