#include<iostream>
int main()
{
	int n, m,
		i = 1;
	std::cout<<"Enter Rows: ";
	std::cin>>n;
	std::cout<<"Enter Columns: ";
	std::cin>>m;
	while(i<=n)
	{
		int j = i-1;
		while(j--)
		{
			std::cout<<" ";
			}
		std::cout<<i;
		j = 2*(n-i);
		int t = j;
		while(t--)
		{
			std::cout<<" ";
			}
		if(j && i+j<=m) std::cout<<i+j;
		int k = (i!=1) ? 2*(i-1): 0;
		while(k-- && k)
		{
			std::cout<<" ";
			}
		int tmp = j+i+(i-1)*2;
		if(tmp <= m && tmp != i+j)
		std::cout<<tmp;
		std::cout<<std::endl;
		i++;
		}
	return 0;
}
/*
TEST 1:-
Enter Rows: 9
Enter Columns: 15
1                
 2               
  3            15   
   4          14     
    5        13       
     6      12         
      7    11           
       8  10             
        9
TEST 2:-
Enter Rows: 7
Enter Columns: 16
1            13
 2          12 14
  3        11   15
   4      10     16
    5    9       
     6  8         
      7  
 */
