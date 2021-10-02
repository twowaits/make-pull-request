/* I written a java program to calculate the factorial of 5. The class having a
parameterized constructor to initialize data members.It also have member
functions to calculate and display the values of data members and the result. */

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
