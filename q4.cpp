//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                     			          Assignment # 1 
//                               		  Umer Sadan
//                               		  24i-0591
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d;
    int x;
    cout << "Enter the first number. \n";
    cin >> a;
    cout << "Enter the second number. \n";
    cin >> b;
    cout << "Enter the third number. \n";
    cin >> c;
    cout << "Enter the fourth number. \n";
    cin >> d;

    //1st logic
    if (c == -1 || a == -1) {
    	cout << "Invalid number. \n";
    }
    else { 
    if ((a + b) > (c * d) ) {
        x = (( static_cast<int>(pow(a,2)) + static_cast<int>(pow (b,2)) ) % (c + 1)) - d;
    }

    else if ( (c % 2 == 0) && (d % 2 != 0) ) {
        x = (a * d + b) / (c + 1); 
    }

    else if ( ((a > 0) && (b < 0)) || (c % d == 0) ) {
        x = (a + b - c) * (d % (a + 1));
    }

    else { 
        x = a + b + c + d;
    }
    if (x > 1000) {
        cout << "Result is out of range. \n";
    }

    else if (x == 0) {
        cout << "Zero Point. \n";
    }
    else {
        cout << "The answer of X is : " << x << endl;
    }
    }
}
