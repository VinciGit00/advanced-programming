
public class Terra {

	private Terra() {
		
	}
	//ALTERNATIVA 1
	//public static final Terra TERRA = new Terra();
	
	//ALTERNATIVA 2
	private static Terra TERRA;
	
	public static  Terra getTerra() {
		if(TERRA == null) TERRA = new Terra();
		return TERRA;
	}
	
	static float superficieTerra() {
		return 51000;
	}
}


class UsoTerra {
	public static void main(String[] args) {
		//System.out.println(Terra.TERRA.superficieTerra());
				System.out.println(Terra.getTerra());
				System.out.println(Terra.superficieTerra());
	}
		
}