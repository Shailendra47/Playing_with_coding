//Q. WAJP to use SUPER keyword?
class Person{
	int total = 120;
	Person(){
		System.out.println("This is Base constructor");
	}
	void message(){
		System.out.println("Total person = " + total);
	}
}
class students extends Person{
	int total = 130;
	students(){
		super();
		System.out.println("This is child constructor");
	}
	void message(){
		System.out.println("Total students: " + total);
	}
	void show(){
		message();
		super.message();
		System.out.println("This is person = " + super.total);
		System.out.println("This is students = " + total);
	}
}
class Master{
	public static void main(String[] args) {
		students obj = new students();
		obj.show();
	}
}