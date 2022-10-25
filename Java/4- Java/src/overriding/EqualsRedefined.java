package overriding;


class Persona {
	String CF;
	
	public Persona(String CF) {
		this.CF = CF;
	}
	
	
	//Ridefinizione dell'equals
	@Override
	public boolean equals(Object obj) {
		//Questo if è opzionale
		if (this== obj) return true;
		if(obj instanceof Persona)
		{
			Persona newP = (Persona) obj;
			
			return CF.equals(newP.CF);
		}
		return false;
	}
}

public class EqualsRedefined {

	public static void main(String[] args) {
		Object p1 = new Persona("GRG");
		Object p2 = new Persona("GRG");

		System.out.println(p1.equals(p2));
		
	}

}
