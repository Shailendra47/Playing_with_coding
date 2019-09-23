//Q. WAJP to show method overloading?
class Prime{
	int x;
	Prime(int x){
		this.x = x;
	}
	void show(){
		System.out.println("Prime x = " + x);
	}
}
class Derive extends Prime{
	int y;
	Derive(int x, int y){
		super(x);
		this.y = y;
	}
	void show(){
		System.out.println("Prime x = " + x);
		System.out.println("Derive y = " + y);
	}
}
class Mastre{
	public static void main(String[] args) {
		Derive dobj = new Derive(100,150);
		dobj.show();
	}
}