import java.util.Optional;

public class OptionalUse {
	
	Integer getmax(int []array) {	

		if(array.length==0) return null;
		return 0;
	}
	
	static Optional<Integer> getMax(int []array) {
		
		if(array == null || array.length == 0) return Optional.empty();
		return Optional.of(0);
		
	}
	
	public static void main(String[] args) {
		Optional<Integer> val = getMax(null);
	
		//Lancia un'eccezione
		//System.out.println(val.get());

		//Non lancia un'eccezione
		System.out.println(val);

		if (val.isPresent())
		System.out.println(val.get());
	}
}
