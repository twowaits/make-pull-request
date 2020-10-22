import java.util.*;
class hacktoberfest2
{
    public static void main(String[] args)
    {
        Scanner d=new Scanner(System.in);
        String s;
        int i,j,k,t;
        s=d.nextLine();
        int len=s.length();
        char []ch=s.toCharArray();
        for(t=0;t<len;t++)
        {
        for(i=0;i<len;i++)
        {
            if(i==t)
            continue;
            else
            {  
                for(j=0;j<len;j++)
                {
                   if(j==i || j==t)
                   continue;
                   else
                   {System.out.print(ch[t]);
                      System.out.print(ch[i]);
                    for(k=0;k<len;k++)
                    {
                    if( (k==i || k==j || k==t) && (len==4) )
                    continue;
                    else if( (k==t || k==i || k==j) && (len==3) )
                    {System.out.print(ch[j]+" "); break;}
                    else
                    {System.out.print(ch[j]);
                    System.out.print(ch[k]+" ");
                   }
                }
              }
           }  
         }
       }
     }
  }
}
