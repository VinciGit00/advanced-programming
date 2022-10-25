package overriding;

class A {
	public void m(int v) {
		
	}


	public void z(long x, float d) {
		
	}
	
	public void z( float x, long d) {
		
	}
}


class B extends A {
	
	//Se non metto il segno @override java controlla effettivamente che stia facendo override
	@Override
	public void m(int v) {
		
	}

	public void m(long v) {
		
	}
	
}

public class Overriding {

	public static void main(String[] args) {
		A a = new A();
 
		a.m(0);
		
		a.z(3, 4.5f);
	}

}
