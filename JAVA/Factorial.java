
public class Factorial {
	
	int number;
	int factorial;
	
	Factorial(int value)
	{
		number = value;
		factorial=1;
	}
	
	int cal_factorial()
	{
		for(int i=number;i>=1;i--)
		{
			factorial*=i;
		}
		return factorial;
	}
	void display_factorial()
	{
		System.out.println(factorial);
	}

	public static void main(String[] args) {
		
		Factorial f = new Factorial(5);
		f.cal_factorial();
		f.display_factorial();
		
	}

}
