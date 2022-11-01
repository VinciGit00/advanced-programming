package Es_miei;


	class A {
		A(){}
		public void m(long a) {
			System.out.println("A");
		}
	}
	
	class B extends A{
		B() {}
		public void m (int a ) {
			System.out.println("B");
		}
	}
	
	public class inheritance_trial {
	public static void main(String[] args) {

		A classe = new  B();
		classe.m(2);
		
	}

}
