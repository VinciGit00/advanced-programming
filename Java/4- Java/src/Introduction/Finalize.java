package Introduction;

class Connection {
	public Connection() {
		System.out.println("Creo una connessione");
	}
	
	public void write(String string) {
		System.out.println(string);
	}
	
	//Metodo che viene creato quando l'oggetto viene deallocato
	@Override
	protected void finalize() throws Throwable {
		super.finalize();
		System.out.println("Interrompi connessione");
	}
}

public class Finalize {
	public static void scriviDati() {
		Connection c = new Connection();
		c.write("fff");
	}

	public static void main(String[] args) throws InterruptedException {
		scriviDati();
		System.gc();
		Thread.sleep(10000);
	}
}
 
