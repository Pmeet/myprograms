import java.util.Scanner;

class Office{
	int emp_no,salary;
	String emp_name;
	void get_value(){
		System.out.print("The salary of "+emp_name+" having employee number "+emp_no+" is "+salary);
	}
	void set_value(){
		System.out.println("Enter employee name, employee number, salary and designation ");
		emp_name=s.nextLine();
		emp_no=s.nextInt();
		salary=s.nextInt();
		
	}
}

class Teaching extends Office{
	Scanner s=new Scanner(System.in);
	String designation;
	void get_value(){
		super.get_value();
		System.out.println("And the designation is "+designation);
	}
	void set_value(){
		super.set_value();
		designation=s.nextLine();
	}
}

class NonTeaching extends Office{
	Scanner s=new Scanner(System.in);
	String designation;
	void get_value(){
		super.get_value();
		System.out.println("And the designation is "+designation);
	}
	void set_value(){
		super.set_value();
		designation=s.nextLine();
	}
}

class Ass4{
	public static void main(String[] args) {
		Teaching t = new Teaching();
		NonTeaching nt = new NonTeaching();

		t.set_value();
		t.get_value();

		nt.set_value();
		nt.get_value();
	}
}