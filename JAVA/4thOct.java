import java.util.*;


 class ZigZag {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter row ");
		int row=sc.nextInt();
		System.out.println("enter column");
		int column=sc.nextInt();
		String m[][]=new String[row][column];
		
		int number=1;//  Number to Print
		int i=0; // Tracking row of the matrix
		int j=0; // Tracking column of the matrix
		int flag=0; // flag for the row , it checks whether we should move down or up
		while(j<column){
			if(number/10==0)  // checks for overcoming the problem of space
			m[i][j]=Integer.toString(number)+"  ";
			else if(number/10>=1&&number/10<10)  // checks for overcoming the problem of space
			m[i][j]=Integer.toString(number)+" ";
			else if(number/10>=10)                // checks for overcoming the problem of space
			m[i][j]=Integer.toString(number);
			if(flag==1){
				i--;
				j++;
			}
			else if(flag==0){
				i++;
				j++;
			}
			number++;
			if(i==row-1){
				flag=1;

			}
			else if(i==0){
				flag=0;
			}
		}

for(int h=0;h<row;h++){
			for(int k=0;k<column;k++){
				if(m[h][k]==null)
				m[h][k]="   ";        // if currnet string is null replace with space
			}
			
		}



		for(int h=0;h<row;h++){
			for(int k=0;k<column;k++){
				System.out.print(m[h][k]+" " );     // print the ZigZag pattern
			}
			System.out.println();
		}
	}

}
