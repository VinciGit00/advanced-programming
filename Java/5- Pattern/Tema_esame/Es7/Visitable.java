package Es7;

import java.util.ArrayList;

interface Visitable {
	
}


abstract class Component implements Visitable {
	String nome;
}


class Semplice extends Component {
	
}


class Composto extends Component {
	ArrayList <? super Component> componentList;
}
