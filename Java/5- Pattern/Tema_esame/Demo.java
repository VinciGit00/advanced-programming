import java.util.List;

public class Demo {
	public static void main(String[] args) {
		
		Cane fido = new Cane();

		//Visitor
		CalcoloFidelity calc = new CalcoloFidelity();
		
		fido.accept(calc);
		
		
	}
		
		//Uso la wildcard per prendere entrambi
		static int sommaFedelta(List<? extends Animale> list) {
		CalcoloFidelity calc = new CalcoloFidelity();
		
		int somma = 0;
		for(Animale x: list) {
			somma+=x.accept(calc);
			
		}
		
		return somma;
	}
}
