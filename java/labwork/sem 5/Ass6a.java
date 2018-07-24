interface Interest{
	void interestCalculate(int n,int p,int r);
}

class SimpleInterest implements Interest{
	float result;
	public void interestCalculate(int n,int p,int r){
		result=n*r*p/100;
		System.out.println("Simple Interest is "+result);
	}
}

class CompoundInterest implements Interest{
	float result;
	public void interestCalculate(int n,int p,int r){
		result=p*(1+(r/n));

		System.out.println("Compound Interest is "+result);
	}
}

class Ass6a{
	public static void main(String[] args) {
		SimpleInterest SI = new SimpleInterest();
		CompoundInterest CI = new CompoundInterest();

		SI.interestCalculate(10,20,30);
		CI.interestCalculate(10,20,30);
	}
}