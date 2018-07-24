import java.util.Scanner;

abstract class Figure{
	int d1,d2;
	Figure(int a, int b){
		d1=a;
		d2=b;
	}
	abstract void area();
}

class Rectangle extends Figure{
	int area;
	Rectangle(int a,int b){
		super(a,b);
	}

	void area(){
		area=d1*d2;
		System.out.println("The area of Rectangle is "+area);
	}
}

class Square extends Figure{
	float area;
	Square(int a,int b){
		super(a,b);
	}
	void area(){
		area=d1*d1;
		System.out.println("The area of Square is "+area);
	}
}

class Ass5a{
	public static void main(String[] args) {
		Figure f;
		f= new Rectangle(10,10);
		f.area();
		f=new Square(20,20);
		f.area();
	}
}	