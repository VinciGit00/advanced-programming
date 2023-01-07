
class A {
	void m (int a) {
		System.out.println("A");	
	}
}

class B extends A {
	void m(short a){
		System.out.println("B");	
	}
}

public class ProvaCovarianza {

	public static void main(String[] args) {
		short n = 2;
		B b = new B();
		b.m(n);
	}

}
