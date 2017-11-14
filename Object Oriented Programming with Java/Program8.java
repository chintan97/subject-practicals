class T1 extends Thread{
	public void run(){
		T2 t2=new T2();
		t2.start();
		try{
			t2.join();
		}
		catch(InterruptedException e){
			System.out.println(e);
		}
		System.out.println("Hello from Thread 1");
	}
}
class T2 extends Thread{
	public void run(){
		T3 t3=new T3();
		t3.start();
		try{
			t3.join();
		}
		catch(InterruptedException e){
			System.out.println(e);
		}
		System.out.println("Hello from Thread 2");
	}
}
class T3 extends Thread{
	public void run(){
		System.out.println("Hello from Thread 3");
	}
}
class Program8{
	public static void main(String args[]){
		T1 t1=new T1();
		t1.start();
	}
}