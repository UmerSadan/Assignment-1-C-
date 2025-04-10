//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                     			          Assignment # 1 
//                               		  Umer Sadan
//                               		  24i-0591
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;
int main () {
    long long int number;
    cout << "Enter the positive or a negative Number. \n";
    cin >> number;
    int result = number % 2;
    if (result) {
        cout << "Number is Odd. \n";
    }
    else
        cout << "Number is Even. \n";
} 
