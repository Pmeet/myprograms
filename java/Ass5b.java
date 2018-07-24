class A{
	
	void getDescription(){
		System.out.println("This is super class");
	}
}

class B extends A{
	
	void getDescription(){
		super.getDescription();
		System.out.println("This is sub class B");
	}
}

class C extends B{
	
	void getDescription(){
		super.getDescription();
		System.out.println("This is sub class C");
	}	
}

class Ass5b{
	public static void main(String[] args) {
	
		C c = new C();
		c.getDescription();	
	
	}
}