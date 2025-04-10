//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                     			          Assignment # 1 
//                               		  Umer Sadan
//                               		  24i-0591
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string password;
    cout << "Enter your Password. \n";
    cin >> password;
    int pass_len = password.length(); 
    bool isTrue = true;
    if (pass_len >= 8 && pass_len <= 16) {

    
    }
        else {
            isTrue = false;
            cout << "Not contains the correct number of characters \n";
        }
            
    
    if  ((password[0] >= '#' && password[0] <= '&') || (password[0] == '*') || (password[0] == '@') || 
        (password[1] >= '#' && password[1] <= '&') || (password[1] == '*') || (password[1] == '@') || 
        (password[2] >= '#' && password[2] <= '&') || (password[2] == '*') || (password[2] == '@') ||
        (password[3] >= '#' && password[3] <= '&') || (password[3] == '*') || (password[3] == '@') ||
        (password[4] >= '#' && password[4] <= '&') || (password[4] == '*') || (password[4] == '@') ||
        (password[5] >= '#' && password[5] <= '&') || (password[5] == '*') || (password[5] == '@') ||
        (password[6] >= '#' && password[6] <= '&') || (password[6] == '*') || (password[6] == '@') ||
        (password[7] >= '#' && password[7] <= '&') || (password[7] == '*') || (password[7] == '@') ||
        (password[8] >= '#' && password[8] <= '&') || (password[8] == '*') || (password[8] == '@') ) {

            
    }  
        else {
            isTrue = false;
            cout << "Special character in invalid. \n"; 
        }
       
    if ( (password[0] >= '0' && password[0] <='9') ||
        (password[1] >= '0' && password[1] <='9') ||
        (password[2] >= '0' && password[2] <='9') ||
        (password[3] >= '0' && password[3] <='9') ||
        (password[4] >= '0' && password[4] <='9') ||
        (password[5] >= '0' && password[5] <='9') ||
        (password[6] >= '0' && password[6] <='9') ||
        (password[7] >= '0' && password[7] <='9') ||
        (password[8] >= '0' && password[8] <='9') ) {
    
    
    }
        else{
            isTrue = false;
            cout << "Contains invalid digit. \n";
        }
            
    
    
    if ( (password[0] >= 'A' && password[0] <= 'Z') ||
        (password[1] >= 'A' && password[1] <= 'Z') ||
        (password[2] >= 'A' && password[2] <= 'Z') ||
        (password[3] >= 'A' && password[3] <= 'Z') ||
        (password[4] >= 'A' && password[4] <= 'Z') ||
        (password[5] >= 'A' && password[5] <= 'Z') ||
        (password[6] >= 'A' && password[6] <= 'Z') ||
        (password[7] >= 'A' && password[7] <= 'Z') ||
        (password[8] >= 'A' && password[8] <= 'Z') ) {
                
    
    }
        else {
            isTrue = false;    
            cout << "Not contains the uppercase. \n";
        }
            
    
    
    if ( (password[0] >= 'a' && password[0] <= 'z') ||
        (password[1] >= 'a' && password[1] <= 'z') ||
        (password[2] >= 'a' && password[2] <= 'z') ||
        (password[3] >= 'a' && password[3] <= 'z') ||
        (password[4] >= 'a' && password[4] <= 'z') ||
        (password[5] >= 'a' && password[5] <= 'z') ||
        (password[6] >= 'a' && password[6] <= 'z') ||
        (password[7] >= 'a' && password[7] <= 'z') ||
        (password[8] >= 'a' && password[8] <= 'z') ) {
                
    
    }

        else {
            isTrue = false;   
            cout << "Not contains the lowercase. \n";
        }
            
    
    if (password[0] >= 'A' && password[0] <= 'Z')  {
                    
    
    }
        else {
            isTrue = false;    
            cout << "The first letter is not an uppercase .\n";
        }
            
    
    if (password[pass_len - 1] >= '0' && password[pass_len - 1] <= '9') {
                            
    }
    
        else {
            isTrue = false; 
            cout << "The last digit is not a number. \n";
        }
            
    
    if ( (password[0] != ' ') ||
         (password[1] != ' ') ||
         (password[2] != ' ') ||
         (password[3] != ' ') ||
         (password[4] != ' ') ||
         (password[5] != ' ') ||
         (password[6] != ' ') ||
         (password[7] != ' ') ||
         (password[8] != ' ') ) {

         
    }
        else {
            isTrue = false;
            cout << "Password contains the space. \n"; 
        }
                            
    
    // FOR CONSECUTIVE CHECK!
   
    if  (password[0] == password[1] && password[1] == password[2] ) {
        isTrue = false;
        cout << "Invalid complexity check for consecutive characters. \n";
    
    } else if (password[1] == password[2] && password[2] == password[3]) {
        isTrue = false;
        cout << "Invalid complexity check for consecutive characters. \n";
    
    } else if (password[2] == password[3] && password[3] == password[4]) {
        isTrue = false; 
        cout << "Invalid complexity check for consecutive characters. \n";
    
    } else if (password[3] == password[4] && password[4] == password[5]) {
        isTrue = false;
        cout << "Invalid complexity check for consecutive characters. \n";
    
    } else if (password[4] == password[5] && password[5] == password[6]) {
        isTrue = false; 
        cout << "Invalid complexity check for consecutive characters. \n";
    
    } else if (password[5] == password[6] && password[6] == password[7]) {
        isTrue = false;
        cout << "Invalid complexity check for consecutive characters. \n";
    
    } else if (password[6] == password[7] && password[7] == password[8]) {
        isTrue = false;
        cout << "Invalid complexity check for consecutive characters. \n";

    
    }
    // CONSECUTIVE UPPER+LOWER.
    
    if (( (password[0] >= 'a' && password[0] <= 'z')) && ((password[1] >= 'A' && password[1] <= 'Z')) ) {

    } else if (((password[1] >= 'a' && password[1] <= 'z')) && ((password[2] >= 'A' && password[2] <= 'Z')) ) {

    } else if (((password[2] >= 'a' && password[2] <= 'z')) && ((password[3] >= 'A' && password[3] <= 'Z')) ) {

    } else if (((password[4] >= 'a' && password[4] <= 'z')) && ((password[5] >= 'A' && password[5] <= 'Z')) ) {

    } else if (((password[5] >= 'a' && password[5] <= 'z')) && ((password[6] >= 'A' && password[6] <= 'Z')) ) {

    } else if (((password[6] >= 'a' && password[6] <= 'z')) && ((password[7] >= 'A' && password[7] <= 'Z')) ) {
    
    } else if (((password[7] >= 'a' && password[7] <= 'z')) && ((password[8] >= 'A' && password[8] <= 'Z')) ) {
  
    } else if (((password[3] >= 'a' && password[3] <= 'z')) && ((password[4] >= 'A' && password[4] <= 'Z')) ) {
    
    } else if (((password[8] >= 'a' && password[8] <= 'z')) && ((password[9] >= 'A' && password[9] <= 'Z')) ) {

    } else if (((password[9] >= 'a' && password[9] <= 'z')) && ((password[10] >= 'A' && password[10] <= 'Z')) ) {

    } else if (((password[10] >= 'a' && password[10] <= 'z')) && ((password[11] >= 'A' && password[11] <= 'Z')) ) {

    } else if (((password[11] >= 'a' && password[11] <= 'z')) && ((password[12] >= 'A' && password[12] <= 'Z')) ) {
    
    } else if (((password[12] >= 'a' && password[12] <= 'z')) && ((password[13] >= 'A' && password[13] <= 'Z')) ) {
    
    } else{
        isTrue = false;    
        cout << "Do not meet the condition of Consecutive lower and Upper case. \n";
    } 
        
   
    if (isTrue) {
        cout << "Success! Meet all of the Conditions. \n";
    }
    
    
    
  
}

