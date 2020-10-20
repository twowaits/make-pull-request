include <iostream>
#include <cmath>
using namespace std;

void one(){
    
    float a = 0.0; //here we declare the variables and use float because we
    float b = 0.0;  //are dealing with square roots
    float c = 0.0;
    float x1 = 0.0;
    float x2 = 0.0;
    float x3 = 0.0;
    float x4 = 0.0;
    
	//this section gets user input and displays message
    cout << "Enter the coefficients a , b , c for equation in the form ax^ + bx + c = 0:\n";
    cout << "Enter value for a:\n";
    cin >>  a;
    cout << "Enter value for b:\n";
    cin >>  b;
    cout << "Enter value for c:\n";
    cin >>  c;
    
	//are all the coefficients 0? if so both roots are 0
	if(a == 0 && b == 0 && c == 0){
		x1 = 0;
		x2 = 0;
        cout << "The roots are:" "\n"
        << "x1 = " << x1 << " , " << "x2 = " << x2 << "\n";
    }
    
    //is c the only non-zero number? if so tell the user
    if(a == 0 && b == 0 && c != 0){
        c = c;
        cout << "There are no roots" "\n" << "c = " << c << "\n";
    }
    //is a zero? if so solve the resulting linear equasion and notify user
    if(a == 0 && b != 0 && c !=0){
		cout << "The values entered do not make a quadratic expression" "\n"<< "x = " << -c/b << "\n";
    }
    
    //if b is zero and c is zero tell user
    if(a == 0 && b != 0 && c == 0){
        x1 = 0;
        x2 = 0;
        cout << "The roots are:" "\n"
        << "x1 = " << x1 << " , " << "x2 = " << x2 << "\n";
    }
    //if b and c are equal to zero then ax^=0 and since a cannot be zero without x being
    // zero also let user know
    if(a != 0 && b == 0 && c == 0){
        x1 = 0;
        x2 = 0;
        cout << "The values entered result in ax^= 0; so both roots are 0" "\n"
        << "x1 = " << x1 << " , " << "x2 = " << x2 << "\n";
    }
    //factor out x from ax^+bx=0 and either x = 0 or ax + b =0
    //then solve the linear equation
    if(a != 0 && b != 0 && c == 0){
        x1 = 0;
        x2 = -b/a;
        cout << "The roots are:" "\n"
        << "x1 = " << x1 << " , " << "x2 = " << x2 << "\n";
    }
    
    //now we get to use the square root function and let the user
    //know they have some imaginary numbers to deal with
    if(a < 0 && b == 0 && c < 0){
        
        x1 = -b/(2*a);
        x4 = (b*b)-(4*a*c);
        x4 = -x4;
        x2 =  sqrt(x4)/(2*a);
        x3 =  -sqrt(x4)/(2*a);
        
        
        cout << "The roots are not real numbers:" "\n"
        
		<< "x1 =" << x1 << " + " << x2 << " * i " << "\n"
		<< "x2 =" << x1 << " + " << x3 << " * i " << "\n";
        
    }
    
    if(a > 0 && b == 0 && c > 0){
        
        x1 = -b/(2*a);
        x4 = (b*b)-(4*a*c);
        x4 = -x4;
        x2 =  sqrt(x4)/(2*a);
        x3 =  -sqrt(x4)/(2*a);
        
        
        cout << "The roots are not real numbers:" "\n"
        
		<< "x1 =" << x1 << " + " << x2 << " * i " << "\n"
		<< "x2 =" << x1 << " + " << x3 << " * i " << "\n";
        
        
        
    }
    //now a and c are opposite signs so the answer will be real
    
    if(a > 0 && b == 0 && c < 0){
        
        x1 = (-b + (sqrt(pow(b,2)-(4*a*c))))/(2*a);
        x2 = (-b - (sqrt(pow(b,2)-(4*a*c))))/(2*a);
        
        cout << "The roots are:" "\n"
        << "x1 =  "<< x1 << " , " << "x2 = "<< x2 << "\n";
    }
    if(a < 0 && b == 0 && c > 0){
        
        x1 = (-b + (sqrt(pow(b,2)-(4*a*c))))/(2*a);
        x2 = (-b - (sqrt(pow(b,2)-(4*a*c))))/(2*a);
        
        cout << "The roots are:" "\n"
        << "x1 =  "<< x1 << " , " << "x2 = "<< x2 << "\n";
    }
    
    
    //ok now if we end up not having to take the square root of a neg
    // do the math
    if(a != 0 && b != 0 && c != 0 && (4*a*c) <= pow(b,2)){
        
        
        x1 = (-b + (sqrt(pow(b,2)-(4*a*c))))/(2*a);
        x2 = (-b - (sqrt(pow(b,2)-(4*a*c))))/(2*a);
        
        cout << "The roots are:" "\n"
        << "x1 = "<< x1 << " , " << "x2 = " << x2 << "\n";
    }
    
    //here we have to deal with non x intercepts ie: sqrt(-1)
    // alter the formula slightly to give correct output and
    // let the user know
    if(a != 0 && b != 0 && c != 0 && (4*a*c)> pow(b,2)){
        
        
        x1 = -b/(2*a);
        x4 = (b*b)-(4*a*c);
        x4 = -x4;
        x2 =  sqrt(x4)/(2*a);
        x3 =  -sqrt(x4)/(2*a);
        
        
        cout << "The roots are not real numbers" "\n"
        
		<< "x1 =" << x1 << " + " << x2 << " * i " << "\n"
		<< "x2 =" << x1 << " + " << x3 << " * i " << "\n";
        
        
        
        
    }
    return;
    
}

//keep output from vanishing before we can read it.
void two(){
    char c ;
    cout << "Press c and then Enter to continue...." "\n";
    cin >> c;
    for(;;){
        if ( c ){
            break;
        }
	}
    
    cout << "Done" "\n";
    
}

int main(){
    one();
    two();
    return 0;
}
