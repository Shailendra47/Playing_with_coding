class Byteval{
	int bval1 = 8,bval2 = 7,bval3;
	void showval(){
		byte b = (byte)bval3;
		bval3 = bval1 * bval2;
		System.out.println("The value of bval3 is: " + bval3);
	}
	public static void main(String[] args) {
		Byteval Obj = new Byteval();
		Obj.showval();
	}
}

