//Q. WAJP to implement mulithreading?
class Thread1 extends Thread{
	public void run(){
		for (int i=1; i<=5; i++) {
			System.out.println("Thread1: " + i);
		}
	}
}
class Thread2 extends Thread{
	public void run(){
		for (int j=1; j<=4; j++) {
			System.out.println("Thread2: " + j);
		}
	}
}
class Thread3 extends Thread{
	public void run(){
		for (int k=1; k<=3; k++) {
			System.out.println("Thread3: " + k);
		}
	}
}
class MainThread{
	public static void main(String[] args) {
		Thread t1 = new Thread();
		Thread t2 = new Thread();
		Thread t3 = new Thread();
		System.out.println("Main Thread Class");
		t1.start();
		t2.start();
		t3.start();
	}
}