
class Ab  {
	int val;
	
	Ab(int val) {
		this.val = val;
	}
	
	public boolean equals(Ab obj) {
		return this.val == obj.val;
	}
	
}

public class ProvaEquals {
	public static void main(String[] args) {
		Ab a = new Ab(2);
		Object c = new Ab(2);
		System.out.println(a.equals(c)); //Non ha neanche quei campi
	}
}
