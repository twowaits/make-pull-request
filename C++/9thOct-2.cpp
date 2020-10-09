#include<stdio.h>


int fact(int);

int main()

{
    
	int a,b,res=0;

    
    scanf("%d%d",&a,&b);

    
    if(a<b)

	       res=fact(a);

    
    else
 
	       res=fact(b);


    
    printf("%d ",res);

        return 0;

}

int fact(int x)

{
    
	if(x==0||x==1)
	
        return 1;

        else

	        return(x*fact(x-1));

}