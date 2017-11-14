public class Program5 {
 
	public static void main(String args[]) {
		Company a = new Company(); 
		Company b = new Google(); 
 
		a.address();
		b.address();
	}
}
 
class Company {
 
	public void address() {
		System.out.println("This is Address of Google Company...");
	}
}
 
class Google extends Company {
 
	public void address() {
		System.out.println("This is Google's Address...");
	}
}