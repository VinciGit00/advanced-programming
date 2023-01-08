

class Persona {
	void m() {
		
	};
}


class Bimbo extends Persona {
	void a() {};
}

public class PersoneProve {

	public static void main(String[] args) {
			Persona a = new Bimbo();
			//Non posso farlo
			//a.a();
			Object o = new Persona();
			//Non posso farlo
			//o.m();
	}

}
