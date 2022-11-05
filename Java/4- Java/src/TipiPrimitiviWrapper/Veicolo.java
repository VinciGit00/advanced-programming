package TipiPrimitiviWrapper;

public class  Veicolo{

	public Veicolo read(Veicolo v) throws ArithmeticException{
		return null;
	}
}

class Auto extends Veicolo {
	//1: nome uguale
	//2: parametri identici
	//Posso cambiare il nome però
	//ma il parametro deve avere lo stesso nome
	//3: Visibilità: deve avere la stessa visibilità
	//4: il tipo restituito può essere covariante-> se ho una sottoclasse il tipo 
	//restituito può essere una classe o una sottoclasse
	@Override
	public Auto read(Veicolo v) throws ArithmeticException {
		return null;
	}
	
	public static void main(String[] args) {
		Veicolo v = new Auto();
		//Questo è il motivo per cui permette la covarianza
		Veicolo v2 = v.read(v);
	}
}