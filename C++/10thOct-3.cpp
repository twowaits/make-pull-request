/*
    Program Description : Reverse String
    Function Name : reverseString(string) -- return type void
  
*/

//Author: Siddhant Kaura

#include <iostream>
using namespace std;

void reverseString(string &str){
  int length_of_string = str.length();
  int start = 0;

  //swapping first and last element.
  while(start < length_of_string/2){
      char ch = str[start];
      str[start] = str[length_of_string-start-1];
      str[length_of_string-start-1] = ch; 
      start++;
  }
}

int main() {
    string str;
    cin >> str;
    reverseString(str);
    cout << str;
}
