package Es10;

import java.util.HashMap;

public class Maps {
	
	public static HashMap creamappa(String s) {
		 
		String[] temp = s.split(" ");
		
		HashMap<String, Integer> result = new HashMap<String, Integer> ();
		
		for(int i =0; i <temp.length; i++ ) {
			System.out.println(temp[i]);
			if(result.containsKey(temp[i])) {
				result.put(temp[i], result.get(temp[i]) + 1);
			} else {
				result.put(temp[i], 1);
			}
		}
		
		
		return result;
	}
	
	public static void main(String[] args) {
		String parola = "ciao ciao mi chiamo marco";
		
		
		HashMap<String, Integer> result = creamappa(parola);
		
		System.out.println(result);
	}

}
