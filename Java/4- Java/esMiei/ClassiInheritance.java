
class A {
	int j;
	public A() {}
	void method(long a) {System.out.println("One");};
	//void method(int a) { System.out.println("Two");};
}
	
class B extends A {
	void method(int a) {System.out.println("Two");};
	
	void Impossible() {
		System.out.println("Non puoi entrare");
	}
}
	
class C extends B {
	void method(int a) {System.out.println("Three");};
	
	void Impossible2() {
		System.out.println("Non puoi entrare");
	}
}
	
public class ClassiInheritance {

	public static void main(String[] args) {
		A a =  new A();
		//Esegue quello di A
		a.method(0);
		
		A b = new B();
		//Esegue quello di A
		b.method(0);

		B c = new C();
		c.method(0);

		c.Impossible();
		//Non è possibile farlo
		//c.Impossible2();
		
		C finale = new C();
		finale.Impossible();
	}
}
