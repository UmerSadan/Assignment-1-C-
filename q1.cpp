//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                     			          Assignment # 1 
//                               		  Umer Sadan
//                               		  24i-0591
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;
int main()
{
    int wheels, body, figure;
    int standard_car = 0, sports_car = 0, family_car = 0;
    int order_standard, order_sport, order_family;
    cout << "Enter the number of wheels available. \n";
    cin >> wheels;
    cout << "Enter the number of bodies available. \n";
    cin >> body;
    cout << "Enter the number of figures available. \n";
    cin >> figure;
    cout << "The models of cars required \n";

    cout << "Order : ";
    cout << "Standard: ";
    cin >> order_standard;
    cout << "Sports: ";
    cin >> order_sport;
    cout << "Family: ";
    cin >> order_family;

    // Standard can be made

    int stan_wh_ma = wheels / 4;     // itny wheels use hn gy max for this car
    int stan_bd_ma = body / 1;       // itni bodies
    int stan_f_ma = figure / 2;      // itni figures
    
    
    if ((wheels >= (order_standard*4)) && (body >= (order_standard*1)) && (figure >= (order_standard*2))) {
        wheels -= (order_standard * 4);     // baqaya cheezain
        body -= (order_standard * 1);
        figure -= (order_standard * 2);
        standard_car = order_standard;
    }
    else if (wheels >= 4 && body >= 1 && figure >= 2) {
        if (stan_wh_ma <= stan_bd_ma && stan_bd_ma <= stan_f_ma) {
            standard_car = stan_wh_ma;
        }
        else if ((stan_bd_ma <= stan_wh_ma) && (stan_wh_ma <= stan_f_ma)) {
            standard_car = stan_bd_ma;
        }
        else if ((stan_f_ma <= stan_bd_ma) && (stan_bd_ma <= stan_wh_ma)) { 
            standard_car = stan_f_ma;
        }    
            wheels -= (standard_car * 4);           // baqaya cheezain
            body -= (standard_car * 1);
            figure -= (standard_car * 2);
            
    }

    // Sports can be made

    int spo_wh_ma = wheels / 6;          // itny wheels use hn gy max for this car
    int spo_bd_ma = body / 1;              // itni bodies
    int spo_f_ma = figure / 1;              // itni figures

    if ((wheels >= (order_sport*6)) && (body >= (order_sport*1)) && (figure >= (order_sport*1))) {
        wheels -= (order_sport * 6);            // baqaya cheezain
        body -= (order_sport * 1);
        figure -= (order_sport * 1);
        sports_car = order_sport;
    }
    else if (wheels >= 6 && body >= 1 && figure >= 1) {
        
        if (spo_wh_ma <= spo_bd_ma && spo_bd_ma <= spo_f_ma) {
            sports_car = spo_wh_ma;
        }
        else if ((spo_bd_ma <= spo_wh_ma) && (spo_wh_ma <= spo_f_ma)) {
            sports_car = spo_bd_ma;
        }
        else if ((spo_f_ma <= spo_bd_ma) && (spo_bd_ma <= spo_wh_ma)) { 
            sports_car = spo_f_ma;
        }  
        wheels -= (sports_car * 6);         // baqaya cheezain
        body -= (sports_car * 1);
        figure -= (sports_car * 1);  
    }

    // Family can be made

    int fam_wh_ma = wheels / 4;              // itny wheels use hn gy max for this car
    int fam_bd_ma = body / 2;                   // itni bodies
    int fam_f_ma = figure / 4;                  // itni figures

    if ((wheels >= (order_family*4)) && (body >= (order_family*2)) && (figure >= (order_family*4))) {
        wheels -= (order_family * 4);    // baqaya cheezain
        body -= (order_family * 2);
        figure -= (order_family * 4);
        family_car = order_family;  
    }
    else if (wheels >= 4 && body >= 2 && figure >= 4) {
        if ((fam_wh_ma <= fam_bd_ma) && (fam_bd_ma <= fam_f_ma)) {
            family_car = fam_wh_ma;
        }
        else if ((fam_bd_ma <= fam_wh_ma) && (fam_wh_ma <= fam_f_ma)) {
            family_car = fam_bd_ma;
        }
        else if ((fam_f_ma <= fam_bd_ma) && (fam_bd_ma <= fam_wh_ma)) {
            family_car = fam_f_ma;
        }
        wheels -= (family_car * 4);
        body -= (family_car * 2);           // baqaya cheezain
        figure -= (family_car * 4);
        
    }

     // NOw the Lukiest one
    if (standard_car == 7) {
        cout << "Lucky Production! Exactly 7 cars of Model [S] built. \n";
    }
    if (sports_car == 7) {
        cout << "Lucky Production! Exactly 7 cars of Model [SP] built. \n";
    }
    if (family_car == 7) {
        cout << "Lucky Production! Exactly 7 cars of Model [F] built. \n";
    }

    // Output result
    if ((standard_car != order_standard) || (sports_car != order_sport) || (family_car != order_family)) {
        cout << "Could not fulfill all orders. \n";        // couldnot
    }

    if (standard_car > 0 || sports_car > 0 || family_car > 0) {
    cout << "Built : " << standard_car << " Standard    " << sports_car << " Sports   " 
         << family_car << " Family" ;
    }
    else if (standard_car == 0 && sports_car == 0 && family_car == 0) {
        cout << "The production is not possible. \n";
    }
}
