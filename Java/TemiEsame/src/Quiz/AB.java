package Quiz;
class A {
	public int m(long d) {return 1;}
	public int f(double d) {return 2;}
}

class B extends  A{
	public int m(short d) {return 3;}
	public int f(double d) {return 4;}
	public int f(float f) {return 5;}

}

public class AB {
	public static void main(String[] args) {
		A va = new B();
		
		System.out.println(va.m(2));
		System.out.println(va.m((short)2));
		//va.m(2.0);
		
		System.out.println(va.f(2.5f));
		System.out.println(va.f(2.5));
		
	}
}

