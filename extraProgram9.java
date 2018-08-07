import java.util.Scanner;
class Student{
	Scanner s=new Scanner(System.in);
	int id_num;
	int marks[] = new int[6];
	String grades[] = new String[6];
	float spi;
	int spi_credit[] = new int[6];
	Student(){
		System.out.println("Enter Enrolement number ");
		id_num=s.nextInt();
		System.out.println("Enter marks of 6 subjects ");
		for (int i=0;i<6 ;i++ ) {
			marks[i]=s.nextInt();
			if(marks[i]>=65)
				{grades[i]="AA";
				spi_credit[i]=6;}
			else if (marks[i]>=60){
				grades[i]="AB";
				spi_credit[i]=5;				
			}
			else if(marks[i]>=55){
				grades[i]="BB";
				spi_credit[i]=4;
				}
			else if(marks[i]>=50){
				grades[i]="BC";
				spi_credit[i]=3;			
			}
			else if(marks[i]>=45){
				spi_credit[i]=2;
				grades[i]="CC";
			}
			else if(marks[i]>=40){
				spi_credit[i]=1;				
				grades[i]="DD";
			}
			else if(marks[i]<40){
				spi_credit[i]=0;				
				grades[i]="FF";
			}
		}
	}
	void display(){
		System.out.println("For Enrolement number "+ id_num);
		for (int i=0;i<6 ;i++ ) {
			System.out.println("Grade of "+ (i+1) +" subject is " + grades[i]);
		}
		calculate_spi();
		System.out.println("SPI: "+spi);
	}

	void calculate_spi(){
		int sum=0;
		for (int i=0;i<6 ;i++ ) {
			sum+=spi_credit[i];
		}
		spi=sum/6;
	}
}

class extraProgram9{
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		System.out.println("Enter number of students ");
		int n=s.nextInt();
		Student s[] = new Student[n];
		for (int i=0;i<n ;i++ ) {
			Student st[i] = new Student();
		
		}

			st.display();
	}
}