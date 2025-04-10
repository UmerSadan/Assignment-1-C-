//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                     			          Assignment # 1 
//                               		  Umer Sadan
//                               		  24i-0591
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




#include<iostream>
#include<string>
using namespace std;
int main() {
    string name;
    cout << "Enter full name of student:  ";
    getline(cin, name);

    string cnic;
    cout << "Enter  CNIC of student: ";
    getline(cin, cnic);

    int leng_cnic = cnic.length();
    char length_cnic = static_cast<char>(leng_cnic);
    cout << "\n\nName: " << name;
    
    // Checking 3 digits and no alphabets in the CNIC.
    if (leng_cnic == 13 ) {
        if ( (cnic[0] >= '0' && cnic[0] <= '9') &&
            (cnic[1] >= '0' && cnic[1] <= '9') &&
            (cnic[2] >= '0' && cnic[2] <= '9') &&
            (cnic[3] >= '0' && cnic[3] <= '9') &&
            (cnic[4] >= '0' && cnic[4] <= '9') &&
            (cnic[5] >= '0' && cnic[5] <= '9') &&
            (cnic[6] >= '0' && cnic[6] <= '9') &&
            (cnic[7] >= '0' && cnic[7] <= '9') &&
            (cnic[8] >= '0' && cnic[8] <= '9') &&
            (cnic[9] >= '0' && cnic[9] <= '9') &&
            (cnic[10] >= '0' && cnic[10] <= '9') &&
            (cnic[11] >= '0' && cnic[11] <= '9') &&
            (cnic[12] >= '0' && cnic[12] <= '9') &&
            (cnic[13] >= '0' && cnic[13] <= '9') ) {

            }
        
    }
    else    
        cout << "\nInvalid!  \n";
    
    // Birth Year
    int year_birth;
    year_birth = ((cnic[4]-'0')*1000) + ((cnic[5]-'0')*100) + ((cnic[6]-'0')*10) + ((cnic[7]-'0')*1);
    if (year_birth >= 1980 && year_birth <= 2024) {
        cout << "\nBirth Year : " << year_birth;
    }

    // Gender
    int last_dig = cnic[12];
    if (last_dig % 2 == 0)
        cout << "\nGender : Female" ;
    else    
        cout << "\nGender : Male"; 

    // Province

    int province_code = ((cnic[0] - '0')*10) + ((cnic[1] - '0')*1);
    if (province_code >= 32 && province_code <= 36) {
        cout << "\nProvince : Punjab";
    }
    else if (province_code >= 41 && province_code <= 45) {
        cout << "\nProvince : Sindh";
    }
    else if (province_code >= 11 && province_code <= 15) {
        cout << "\nProvince : Kyber PakhtunKhwa";
    }
    else if (province_code >= 51 && province_code <= 55) {
        cout << "\nProvince : Balochistan";
    }
    else if (province_code >= 01 && province_code <= 02) {
        cout << "\nProvince : Islamabad";
    }
    else if (province_code >= 71 && province_code <= 72) {
        cout << "\nProvince : Gilgit Baltistan";
    }
    else if (province_code >= 41 && province_code <= 45) {
        cout << "\nProvince : Sindh";
    }
    else if (province_code >= 81 && province_code <= 82) {
        cout << "\nProvince : Azad Jammu & Kashmir";
    }
        
    // Abhi 3rd rhta h 


    //                     <--FOR DIVISONS-->
    
    int first_five = ((cnic[0] - '0')*10000) + ((cnic[1] - '0')*1000) + ((cnic[2] - '0')*100) + 
                     ((cnic[3] - '0')*10) + ((cnic[4] - '0')*1);
    ///                     <--Punjab-->                  ///
    
    if (first_five >= 35201 && first_five <= 35599) {
        cout << "\nDivision : Lahore Division";
    }
    else if (first_five >= 37101 && first_five <= 37499) {
        cout << "\nDivision : Rawalpindi Division";
    }
    else if (first_five >= 34101 && first_five <= 34699) {
        cout << "\nDivision : Gujranwala Division";
    }
    else if (first_five >= 36301 && first_five <= 36699) {
        cout << "\nDivision : Multan Division";
    }
    else if (first_five >= 38401 && first_five <= 38499) {
        cout << "\nDivision : Mian Wali Division";
    }
    
    ///                     <--SINDH-->                  ///
    else if (first_five >= 42101 && first_five <= 42699) {
        cout << "\nDivision : Karachi Division";
    }
    else if (first_five >= 41101 && first_five <= 41799) {
        cout << "\nDivision : Hyderabad Division";
    }
    else if (first_five >= 44101 && first_five <= 44399) {
        cout << "\nDivision : Sukkur Division";
    }
    else if (first_five >= 43101 && first_five <= 43599) {
        cout << "\nDivision : Larkana Division";
    }

    ///                     <--KPK-->                  ///
    else if (first_five >= 16101 && first_five <= 16399) {
        cout << "\nDivision : Peshawar Division";
    }
    else if (first_five >= 17101 && first_five <= 17299) {
        cout << "\nDivision : Mardan Division";
    }
    else if (first_five >= 18101 && first_five <= 18399) {
        cout << "\nDivision : Kohat Division";
    }

    ///                     <--Balochistan-->                  ///
    else if (first_five >= 54101 && first_five <= 54499) {
        cout << "\nDivision : Quetta Division";
    }
    else if (first_five >= 55101 && first_five <= 55399) {
        cout << "\nDivision : Makran Division";
    }
    else if (first_five >= 57101 && first_five <= 57699) {
        cout << "\nDivision : Zhob Division";
    }

    ///                     <--Gigit-Baltistan-->                  ///
    else if (first_five >= 71101 && first_five <= 71499) {
        cout << "\nDivision : Gilgit Division";
    }
    else if (first_five >= 72101 && first_five <= 72499) {
        cout << "\nDivision : Baltistan Division";
    }
    
     ///                     <--Jammu & Kahsmir-->                  ///
    else if (first_five >= 81101 && first_five <= 81399) {
        cout << "\nDivision : Muzafarabad Division";
    }
    else if (first_five >= 83101 && first_five <= 83399) {
        cout << "\nDivision : Mirpur Division";
    }

    ///                     <--Districts-->                  ///
    ///                     <--Punjab-->                  ///
    ///                     <--Lahore-->                  ///
    if (first_five >= 35201 && first_five <= 35299) {
        cout << "\nDistrict : Lahore District";
    }
    else if (first_five >= 35401 && first_five <= 35499) {
        cout << "\nDistrict : NanKana Sahib District";
    }
    
    ///                     <--Rawalpindi-->                  ///
    else if (first_five >= 37401 && first_five <= 37499) {
            cout << "\nDistrict : Rawalpindi District";
    }
    else if (first_five >= 37301 && first_five <= 37399) {
            cout << "\nDistrict : Attock District";
    }

    ///                     <--Gujranwala-->                  ///
    else if (first_five >= 34101 && first_five <= 34199) {
            cout << "\nDistrict : Gujranwala District";
    }
    else if (first_five >= 34501 && first_five <= 34599) {
            cout << "\nDistrict : Sialkot District";
    }

    ///                     <--Faislabad-->                  ///
    else if (first_five >= 34201 && first_five <= 34299) {
        cout << "\nDistrict : Chiniot District";
    }
    else if (first_five >= 37101 && first_five <= 37199) {
        cout << "\nDistrict : Faislabad District";
    }
    ///                     <--Multan-->                  ///
    else if (first_five >= 36301 && first_five <= 36399) {
        cout << "\nDistrict : Multan District";
    }
    else if (first_five >= 36601 && first_five <= 36699) {
        cout << "\nDistrict : Khanewal District";
    }

    ///                     <--Sindh-->                  ///
    ///                     <--Karachi-->                  ///
    else if (first_five >= 42101 && first_five <= 42199) {
        cout << "\nDistrict : Karachi Central District";
    }
    else if (first_five >= 42401 && first_five <= 42499) {
        cout << "\nDistrict : Karachi South District";
    }

    ///                     <--Hyderabad-->                  ///
    else if (first_five >= 41101 && first_five <= 41199) {
        cout << "\nDistrict : Hyderabad District";
    }
    else if (first_five >= 41701 && first_five <= 41799) {
        cout << "\nDistrict : Jamshoro District";
    }

    ///                     <--Sukkur-->                  ///
    else if (first_five >= 44101 && first_five <= 44199) {
        cout << "\nDistrict : Sukkur District";
    }
    else if (first_five >= 44201 && first_five <= 44299) {
        cout << "\nDistrict : Gotki District";
    }

    ///                     <--Larkana-->                  ///
    else if (first_five >= 43101 && first_five <= 43199) {
        cout << "\nDistrict : Larkana District";
    }
    else if (first_five >= 43401 && first_five <= 43499) {
        cout << "\nDistrict : Jacobabad District";
    }

    ///                     <--KPK-->                  ///
    ///                     <--Peshawar-->                  ///
    else if (first_five >= 16101 && first_five <= 16199) {
        cout << "\nDistrict : Peshawar District";
    }
    else if (first_five >= 16401 && first_five <= 16499) {
        cout << "\nDistrict : Kohat District";
    }

    ///                     <--Mardan-->                  ///
    else if (first_five >= 17101 && first_five <= 17199) {
        cout << "\nDistrict : Mardan District";
    }
    else if (first_five >= 17201 && first_five <= 17299) {
        cout << "\nDistrict : Swabi District";
    }

    ///                     <--Kohat-->                  ///
    else if (first_five >= 18101 && first_five <= 18199) {
        cout << "\nDistrict : Kohat District";
    }
    else if (first_five >= 17201 && first_five <= 17299) {
        cout << "\nDistrict : Hangu District";
    }


    ///                     <--Balochistan-->                  ///
    ///                     <--Quetta-->                  ///
    else if (first_five >= 54101 && first_five <= 54199) {
        cout << "\nDistrict : Quetta District";
    }
    else if (first_five >= 54201 && first_five <= 54299) {
        cout << "\nDistrict : Pishin District";
    }

    ///                     <--Makran-->                  ///
    else if (first_five >= 55101 && first_five <= 55199) {
        cout << "\nDistrict : Gwadar District";
    }
    else if (first_five >= 55201 && first_five <= 55299) {
        cout << "\nDistrict : Turbat District";
    }

    ///                     <-Zhob-->                  ///
    else if (first_five >= 57101 && first_five <= 57199) {
        cout << "\nDistrict : Zhob District";
    }
    else if (first_five >= 57201 && first_five <= 57299) {
        cout << "\nDistrict : Sherani District";
    }

    ///                     <--Gilgit-Baltistan-->                  ///
    ///                     <--Gilgit-->                  ///
    else if (first_five >= 71101 && first_five <= 71199) {
        cout << "\nDistrict : Gilgit District";
    }
    else if (first_five >= 71301 && first_five <= 71399) {
        cout << "\nDistrict : Hunza District";
    }

    ///                     <--Baltistan-->                  ///
    else if (first_five >= 72101 && first_five <= 72199) {
        cout << "\nDistrict : Skardu District";
    }
    else if (first_five >= 72201 && first_five <= 72299) {
        cout << "\nDistrict : Shigar District";
    }

    
    ///                     <--Kashmir-->                  ///
    ///                     <--Muzaffarabad-->                  ///
    else if (first_five >= 81101 && first_five <= 81199) {
        cout << "\nDistrict : Muzaffarabad District";
    }
    else if (first_five >= 81201 && first_five <= 81299) {
        cout << "\nDistrict : Hattian bala District";
    }

    ///                     <--Mirpur-->                  ///
    else if (first_five >= 83101 && first_five <= 83199) {
        cout << "\nDistrict : Mirpur District";
    }
    else if (first_five >= 83201 && first_five <= 83299) {
        cout << "\nDistrict : Kotli District";
    }
    

    ///                     <--Tehsil-->                  ///
    ///                     <--Punjab-->                  ///
    ///                     <--Lahore-->                  ///
    if (first_five >= 35201 && first_five <= 35299) {
        cout << "\nTehsil : Lahore ";
    }
    else if (first_five >= 35401 && first_five <= 35499) {
        cout << "\nTehsil : NanKana Sahib ";
    }
    
    ///                     <--Rawalpindi-->                  ///
    else if (first_five >= 37401 && first_five <= 37499) {
            cout << "\nTehsil : Rawalpindi ";
    }
    else if (first_five >= 37501 && first_five <= 37599) {
            cout << "\nTehsil : Murree ";
    }

    ///                     <--Gujranwala-->                  ///
    else if (first_five >= 34101 && first_five <= 34199) {
            cout << "\nTehsil : Gujranwala";
    }
    else if (first_five >= 34501 && first_five <= 34599) {
            cout << "\nTehsil : Sialkot ";
    }

    ///                     <--Faislabad-->                  ///
    else if (first_five >= 34201 && first_five <= 34299) {
        cout << "\nTehsil : Chiniot ";
    }
    else if (first_five >= 37101 && first_five <= 37199) {
        cout << "\nTehsil : Faislabad ";
    }
    ///                     <--Multan-->                  ///
    else if (first_five >= 36301 && first_five <= 36399) {
        cout << "\nTehsil : Multan ";
    }
    else if (first_five >= 36601 && first_five <= 36699) {
        cout << "\nTehsil : Khanewal ";
    }

    ///                     <--Sindh-->                  ///
    ///                     <--Karachi-->                  ///
    else if (first_five >= 42101 && first_five <= 42199) {
        cout << "\nTehsil : Liaqatabad ";
    }
    else if (first_five >= 42201 && first_five <= 42299) {
        cout << "\nTehsil : Karachi Central ";
    }

    ///                     <--Hyderabad-->                  ///
    else if (first_five >= 41101 && first_five <= 41199) {
        cout << "\nTehsil : Hyderabad City";
    }
    else if (first_five >= 41701 && first_five <= 41799) {
        cout << "\nTehsil : Jamshoro ";
    }

    ///                     <--Sukkur-->                  ///
    else if (first_five >= 44101 && first_five <= 44199) {
        cout << "\nTehsil : Sukkur ";
    }
    else if (first_five >= 44201 && first_five <= 44299) {
        cout << "\nTehsil : Gotki ";
    }

    ///                     <--Larkana-->                  ///
    else if (first_five >= 43101 && first_five <= 43199) {
        cout << "\nTehsil : Larkana ";
    }
    else if (first_five >= 43401 && first_five <= 43499) {
        cout << "\nTehsil : Jacobabad ";
    }

    ///                     <--KPK-->                  ///
    ///                     <--Peshawar-->                  ///
    else if (first_five >= 16101 && first_five <= 16199) {
        cout << "\nTehsil : Peshawar ";
    }
    else if (first_five >= 16401 && first_five <= 16499) {
        cout << "\nTehsil : Kohat ";
    }

    ///                     <--Mardan-->                  ///
    else if (first_five >= 17101 && first_five <= 17199) {
        cout << "\nTehsil : Mardan ";
    }
    else if (first_five >= 17201 && first_five <= 17299) {
        cout << "\nTehsil : Swabi ";
    }

    ///                     <--Kohat-->                  ///
    else if (first_five >= 18101 && first_five <= 18199) {
        cout << "\nTehsil : Kohat ";
    }
    else if (first_five >= 17201 && first_five <= 17299) {
        cout << "\nTehsil : Hangu ";
    }


    ///                     <--Balochistan-->                  ///
    ///                     <--Quetta-->                  ///
    else if (first_five >= 54101 && first_five <= 54199) {
        cout << "\nTehsil : Quetta ";
    }
    else if (first_five >= 54201 && first_five <= 54299) {
        cout << "\nTehsil : Pishin ";
    }

    ///                     <--Makran-->                  ///
    else if (first_five >= 55101 && first_five <= 55199) {
        cout << "\nTehsil : Gwadar ";
    }
    else if (first_five >= 55201 && first_five <= 55299) {
        cout << "\nTehsil : Kech (Turbat) ";
    }

    ///                     <-Zhob-->                  ///
    else if (first_five >= 57101 && first_five <= 57199) {
        cout << "\nTehsil : Zhob ";
    }
    else if (first_five >= 57201 && first_five <= 57299) {
        cout << "\nTehsil : Sherani ";
    }

    ///                     <--Gilgit-Baltistan-->                  ///
    ///                     <--Gilgit-->                  ///
    else if (first_five >= 71101 && first_five <= 71199) {
        cout << "\nTehsil : Gilgit ";
    }
    else if (first_five >= 71301 && first_five <= 71399) {
        cout << "\nTehsil : Hunza ";
    }

    ///                     <--Baltistan-->                  ///
    else if (first_five >= 72101 && first_five <= 72199) {
        cout << "\nTehsil : Skardu ";
    }
    else if (first_five >= 72201 && first_five <= 72299) {
        cout << "\nTehsil : Shigar ";
    }

    
    ///                     <--Kashmir-->                  ///
    ///                     <--Muzaffarabad-->                  ///
    else if (first_five >= 81101 && first_five <= 81199) {
        cout << "\nTehsil : Muzaffarabad ";
    }
    else if (first_five >= 81201 && first_five <= 81299) {
        cout << "\nTehsil : Hattian Bala ";
    }

    ///                     <--Mirpur-->                  ///
    else if (first_five >= 83101 && first_five <= 83199) {
        cout << "\nTehsil : Mirpur ";
    }
    else if (first_five >= 83201 && first_five <= 83299) {
        cout << "\nTehsil : Kotli ";
    }
    
    //                      <--Union Council-->           ///
    
    ///                     <--Punjab-->                  ///
    
    if (first_five >= 35201 && first_five <= 35599) {
        cout << "\nUnion Council : UC-41";
    }
    else if (first_five >= 37101 && first_five <= 37499) {
        cout << "\nUnion Council : UC-21";
    }
    else if (first_five >= 34101 && first_five <= 34699) {
        cout << "\nUnion Council : Gujranwala Division";
    }
    else if (first_five >= 36301 && first_five <= 36699) {
        cout << "\nUnion Council : UC-4";
    }
    else if (first_five >= 38401 && first_five <= 38499) {
        cout << "\nUnion Council : UC-12";
    }
    
    ///                     <--SINDH-->                  ///
    else if (first_five >= 42101 && first_five <= 42699) {
        cout << "\nUnion Council : UC-7";
    }
    else if (first_five >= 41101 && first_five <= 41799) {
        cout << "\nUnion Council : UC-2";
    }
    else if (first_five >= 44101 && first_five <= 44399) {
        cout << "\nUnion Council : UC-8";
    }
    else if (first_five >= 43101 && first_five <= 43599) {
        cout << "\nUnion Council : UC-45";
    }

    ///                     <--KPK-->                  ///
    else if (first_five >= 16101 && first_five <= 16399) {
        cout << "\nUnion Council : UC-44";
    }
    else if (first_five >= 17101 && first_five <= 17299) {
        cout << "\nUnion Council : UC-41";
    }
    else if (first_five >= 18101 && first_five <= 18399) {
        cout << "\nUnion Council : UC-10";
    }

    ///                     <--Balochistan-->                  ///
    else if (first_five >= 54101 && first_five <= 54499) {
        cout << "\nUnion Council : UC-12";
    }
    else if (first_five >= 55101 && first_five <= 55399) {
        cout << "\nUnion Council : UC-14";
    }
    else if (first_five >= 57101 && first_five <= 57699) {
        cout << "\nUnion Council : UC-47";
    }

    ///                     <--Gigit-Baltistan-->                  ///
    else if (first_five >= 71101 && first_five <= 71499) {
        cout << "\nUnion Council : UC-22";
    }
    else if (first_five >= 72101 && first_five <= 72499) {
        cout << "\nUnion Council : UC-44";
    }
    
     ///                     <--Jammu & Kahsmir-->                  ///
    else if (first_five >= 81101 && first_five <= 81399) {
        cout << "\nUnion Council : UC-78";
    }
    else if (first_five >= 83101 && first_five <= 83399) {
        cout << "\nUnion Council : UC-25";
    }
    
    //             <--Family Tree-->
    int family_tree = ((cnic[5] - '0')*1000000) + ((cnic[6] - '0')*100000) + ((cnic[7] - '0')*10000) +
                      ((cnic[8] - '0')*1000) + ((cnic[9] - '0')*100) + ((cnic[10] - '0')*10) + 
                      ((cnic[11] - '0')*1);

    cout << "\nFamily Tree Number : " << family_tree;
    if (((cnic[5] - '0')*1000000) == 0 || ((cnic[5] - '0')*1000000) == 1) {
        cout << "\nHousehold Type : Joint Family";
    }
    else if (((cnic[5] - '0')*1000000) >= 3 || ((cnic[5] - '0')*1000000) <= 5) {
        cout << "\nHousehold Type : Nuclear Family";
    }
    else
        cout << "\nHousehold Type : Extended Family";

    
}
