
public class Prova {
//https://stackoverflow.com/questions/769963/javas-l-number-long-specification
	public static void main(String[] args) {
	    Employee e1 = new Employee("");    
	    e1.display(20l);
	    e1.display(20L);
	    e1.display(20);
	    e1.display((short)20);
	    //Viene preso come un double
	    e1.display(20.0);
	    e1.display(20.0f);
	    //Non si può fare
	    //e1.display(20.0l);

	}

	
}

class Employee { 
	String name1;
	Employee(String name) {
		this.name1 = name;
		
	}
	
	void display(short a) {
		System.out.println("C");
	}
	void display(int a) {
		System.out.println("B");
	}
    
	void display(long a) {
		System.out.println("A");
	}
    
  
	void display(double a) {
		System.out.println("double");
	}
	void display(float a) {
		System.out.println("float");
	}
    
   
}  