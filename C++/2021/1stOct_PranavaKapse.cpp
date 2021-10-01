// Take input the value of 'n', upto which you will print. Print the Fibonacci Series upto 'n' while replacing Prime numbers & all multiples of 5 by 0.
// Input    : 12
// Output   : 1 1 0 0 0 8 0 21 34 0 0 144
// Input    : 27
// Output   : 1 1 0 0 0 8 0 21 34 0 0 144 0 377 0 987 0 2584 4181 0 10946 17711 0 46368 0 121393 196418


#include<iostream>

using namespace std;

int main(){
    int n;                // number of elements in the series
    cin>>n;               //input through user
    int current_number=1; //sets the current value of the series
    int final_number;     //sets the final value in the series after sum of current ongoing number and previous number
    int previous_number=0;//shows the previous value
    int array[n];         //array to store values of this special fibonacci series
    array[0]=1;           //first element of Fibonacci series

// first loop to fibonacci values to indexes in array
    for(int i =1 ; i < n ; i++ ){

        final_number = current_number + previous_number;
        array[i]= final_number;// assigning second element of this series
        previous_number = current_number;// making previous number to current number after successful increment
        current_number = final_number;// making  current number to previous final number after successful increment

    }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    for(int j=1 ; j<n ; j++){

        if(array[j] % 2 !=0 && array[j] % 3 != 0 && array[j]% 5 !=0 && array[j]!=1){ // checking if number is composite or 1
            array[j] = 0;// if prime then its equated to 0
        }
        if(array[j] % 5 ==0 && array[j]!=1){
            array[j] = 0;    //checking if number is divisible by 5
        }
        if(array[j] == 3 ){  //checking if number is  3
            array[j]=0;
        }
        if(array[j] == 2 ){  //checking if number is 2
            array[j]=0;
        }
    }
    for(int k=0 ; k<n ; k++){
        cout<<array[k]<<" "; //printing array
    }

}
