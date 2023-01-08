class Aa {
	void foo(Aa  a) {
		System.out.println("scrivo A");
	}
}

class Ba extends Aa {
	void foo(Ba b) {
		System.out.println("scrivo B");

	}
}

public class Dispatch {
	public static void main(String[] args) {
		Aa a = new Aa(); 
		Ba b = new Ba(); 
		
		Aa c = new Ba(); 
		
		a.foo(b);
		b.foo(a);
		b.foo(b);
		b.foo(c);
		c.foo(b);
	}
}
