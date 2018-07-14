/* 
1. Write a java program to calculate gross salary & net salary taking the following data.
Input:empno,empname,basic
 Process:
 DA=50%of basic, HRA=25%of basic, CCA=Rs240/-, PF=10%of basic, PT=Rs100/-
 */
 import java.util.Scanner;

 class Salary{
 	int empno,basic;
 	String empname;
	float gross_salary,net_salary;

 	Scanner s=new Scanner(System.in);
 	
 	void get_details(){
 		System.out.println("Enter name: ");
 		empname=s.next();
  		System.out.println("Enter salary: ");
 		basic=s.nextInt();
 		System.out.println("Enter number: ");
 		empno=s.next();
 	}

 	void grossSalary(){

 		float DA = basic*0.5;
 		float HRA = basic*0.25;
 		gross_salary=DA + basic + HRA;
 		System.out.println("Gross salary of "+empname+"is "+gross_salary);
 	}

 	void netSalary(){
 		int CCA = 240;
 		int PT = 100;
 		float PF = basic*0.1;
 		net_salary=gross_salary-CCA-PT-PF;
 		System.out.println("Net salary of "+empname+"is "+net_salary);

 	}
 }


class ass3P1{
	public static void main(String[] args) {
		Salary s1 = new Salary;
		s1.get_details();
		s1.grossSalary();
		s1.netSalary();
	}
}