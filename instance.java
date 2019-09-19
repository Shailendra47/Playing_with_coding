/*
Q. WAJP to define a class, define instance method for setting and retriving value of instance variable
	and instantiate of objects?
*/
class InstanceVariable{
	int variable1, variable2, result;
	void add(int x, int y){
		variable1 = x;
		variable2 = y;
		result  = variable1 + variable2;
		System.out.println("Result = " + result);
	}
}
class InstanceMain{
	public static void main(String[] s) {
		InstanceVariable object = new InstanceVariable();
		int x = Integer.parseInt(s[0]);
		int y = Integer.parseInt(s[1]);
		object.add(x,y);
	}
}