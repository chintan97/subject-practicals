class MyClass {
   MyClass() {
      System.out.println("Simple constructor");
   }
   MyClass(int i) {
      System.out.println("Passed value" + i);
   }
   void info() {
      System.out.println("Simple method");
   }
   void info(String s) {
      System.out.println("Overloaded method, passed string: " + s);
   }
}
public class Program4 {
   public static void main(String[] args) {
      MyClass t = new MyClass(4);
      t.info();
      t.info("chintan");
      
      //Overloaded constructor:
      new MyClass();
   }
}