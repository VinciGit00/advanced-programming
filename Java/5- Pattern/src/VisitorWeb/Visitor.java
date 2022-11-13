package VisitorWeb;

public interface Visitor{

  //Gli devo passare tutti gli oggetti  che devono essere visitati
  public void visit(Book book);
  
  //visit other concrete items
  //public void visit(CD cd);
  //public void visit(DVD dvd);
}