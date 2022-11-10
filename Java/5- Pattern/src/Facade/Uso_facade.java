package Facade;

class CPU{
	float getfreq() {
		return 4000;
	}
}


//facade
class PC{
	private CPU cpu = new CPU();
	
	float getfreq() {
		return cpu.getfreq();
	}
}

public class Uso_facade {
	public static void main(String[] args) {
		PC pc = new PC();
		
		//Non voglio che avvenga questo
		//System.out.println(pc.cpu.getfreq());

		System.out.println(pc.getfreq());
	}
}
