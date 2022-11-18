package Es9;

public class Varargs {
	static void print(String ... values) {
		//Uso un for each
		for(String x: values) {
			System.out.println(x);
		}
	}
	
	public static void main(String[] args) {
		print("ciao", "come", "stai");
	}
}
