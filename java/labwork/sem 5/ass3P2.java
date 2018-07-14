/*
2. Create a class Box and display the area of box using a method area(). Initialize all the variables using Constructor and demostrate Constructor Overloading.  
*/
class Box{
	int h,w,d;
	int volume;
	Box(int h,int w,int d){
		this.h=h;
		this.w=w;
		this.d=d;
	}
	Box(){
		h=10;
		w=20;
		d=30;
	}
	void volume(){
		volume=h*w*d;
		System.out.println("The volume of box is "+volume);
	}
}
class ass3P2{

	public static void main(String[] args) {
		Box b=new Box();
		Box B=new Box(10,10,10);
		B.volume();
		b.volume();
	}

	
}