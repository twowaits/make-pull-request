//Knapsack problem
//C++ program

#include<iostream>
using namespace std;  
int main()
{
	int n,M;
	int weight;
	//Taking the necessary inputs and declaring arrays to store them
	cout<<"Enter the total weight: ";
	cin>>M;
	cout<<"Enter the number of items: ";
	cin>>n;
	float profits[n];
	float weights[n];
	float ratios[n][2];
	float fraction[n]={0};
	int totalProfit=0;
	cout<<"Enter the profit and weight of each item: "<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<"Profit of item "<<i<<" : ";
		cin>>profits[i];
		cout<<"Weight of item "<<i<<" : ";
		cin>>weights[i];

		//Calculating the ratio of profit and weight
		ratios[i][0]=profits[i]/weights[i];	
		ratios[i][1]=(float)i;
	}

	//Sorting the ratios(profit/weight) in descending order
	for (int i = 1; i <= n; i++)   
	{
    	for (int j = 1; j <= n-i; j++)  
        {
			if (ratios[j][0] <ratios[j+1][0])  
			{
				float temp1=ratios[j][0];
				ratios[j][0]=ratios[j+1][0];
				ratios[j+1][0]=temp1;

				float temp2=ratios[j][1];
				ratios[j][1]=ratios[j+1][1];
				ratios[j+1][1]=temp2;
			}
		}	
	} 
	cout<<"Order of profit/weight: "<<endl;
	for(int i=1;i<=n;i++)
	{
		cout<<ratios[i][1]<<" > ";
	}
	cout<<endl<<"Pass: "<<endl; 
	cout<<"Item\tWeight\tProfit\tRemaining wt"<<endl;
	cout<<"________________________________________________"<<endl; 
	float wt,profit,wtX;
	for(int i=1;i<=n;i++)
	{
		//Code will run till the total weight is occupied
		if(M>0)
		{
			int j=ratios[i][1];
			//For cases where weight of item<total weight remaining 
			if(weights[j]<=M)
			{
				wtX=1;
				wt=weights[j]*wtX;
				profit=1*profits[j];
			}
			//For cases where weight of item > total weight remaining 
			else
			{
				wtX=M/weights[j];
				wt=wtX*weights[j];
				profit=wtX*profits[j];					
			}
			M-=wt;
			totalProfit+=profit;
			fraction[j]=wtX;
			cout<<j<<"\t"<<wt<<"\t"<<profit<<"\t"<<M<<endl;
		}
	}
	//Printing all the details
	cout<<"_____________________________________________"<<endl;
	cout<<"Total Profit: "<<totalProfit<<endl;
	cout<<"Items with Ratios: "<<endl;
	cout<<"Item\tFraction"<<endl;
	cout<<"_____________________"<<endl;
	for( int i=1;i<=n;i++)
	{
		cout<<i<<"\t"<<fraction[i]<<endl;
	}	
}
