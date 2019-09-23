//Q. WAJP to implement multithreading using interface in java?
class student{
	String name = new String("Raman");
	void show(){
		System.out.println("Name of student = " + name);
	}
}
interface sport{
	int q = 10;
	void display();
}
class result extends student implements sport{
	int m1, m2, total;
	void sum(int x, int y){
		m1 = x;
		m2 = y;
		total = x + y + q;
	}
	public void display(){
		System.out.println("This is form sport class");
	}
	void disp(){
		show();
		display();
		System.out.println("This is result = " + total);
	}
}

class Master{
	public static void main(String[] args) {
		result obj = new result();
		obj.sum(100,150);
		obj.disp();
	}
}