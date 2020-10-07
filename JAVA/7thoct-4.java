import java.util.Scanner;//importing Scanner class 

class currency
{
public static void main(String args[])
{ 
    Scanner sc = new Scanner(System.in);
    int n,len=0,temp1,temp2,i;//initialising variables
    n=sc.nextInt();
    temp1 = n;
    while(temp1!=0)//calculating number of digits in the number
    {  len++;
        temp1/=10;
    }  
    int[] arr = new int[len]; //creating number array    
    temp2 = n;
   
        for(i=0;i<len;i++)//storing digits of number in array
        {
            arr[len-i-1]=temp2%10;
            temp2/=10;
            
        }

    
    
    switch (len)//converting number into words and displaying them
    {
        case 1:
        System.out.print(arr[0]);
        break;
        case 2:
        System.out.print(arr[0] + " tens and " +arr[1]);
        break;
        case 3:
        System.out.print(arr[0] + " hundreds " + arr[1] + " tens and "+ arr[2]);
        break;
        case 4:
        System.out.print(arr[0] + " thousand " + arr[1] + " hundreds " + arr[2] + " tens and " + arr[3]);
        break;
        case 5:
        System.out.print(arr[0]+ "" +arr[1] + " thousand " + arr[2] + " hundreds " + arr[3] + " tens and " + arr[4]);
        break;
        case 6:
        System.out.print(arr[0] + " lac " + " "+arr[1]+""  +arr[2] + " thousand " + " "+arr[3] + " hundreds " +" "+arr[4] + " tens and " +arr[5]);
        break;
        case 7:
        System.out.print(arr[0]+ "" +arr[1] +""+ " lac " +arr[2]+"" +arr[3] + " thousand " +arr[4] + " hundreds " + arr[5] + " tens and " + arr[6]);
        break;
        case 8:
        System.out.print(arr[0] + " crore " + arr[1]+ ""+arr[2] +" lac " + arr[3]+ ""+arr[4] + " thousand " + arr[5] + " hundreds " + arr[6] + " tens and " + arr[7]);
        break;
        case 9:
        System.out.print(arr[0]+ ""+arr[1] + " crore " + arr[2]+ "" +arr[3] + " lac " + arr[4]+"" + arr[5] + " thousand " + arr[6] + " hundred " + arr[7] + " tens and " + arr[8]);
        break;
    }
}
}