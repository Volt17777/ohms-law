#include<iostream>
#include "utils/formeln.hpp"
using namespace std;


int main(){
    

    string Menunames[]{"Resistance(R)", "Current(I)", "Voltage(U)", "Power(P)"};
    double Values[4]{};

    cout << "for not given values enter 0\n"
         << "enter following values: \n";

    for (int i = 0; i < 4; i++){
        cout << "enter the: " << Menunames[i] << " value: ";
        cin >> Values[i];
        if ((Values[0] != 0) && (Values[1] != 0)){
            break;
        }else if ((Values[0] != 0) && (Values[2] != 0)){
            break;
        }else if ((Values[1] != 0) && (Values[2] != 0)){
            break;
        }
    }


    double R_value = Values[0];
    double I_value = Values[1];
    double U_value = Values[2];
    double P_value = Values[3];

    double R_result = R_value;
    double I_result = I_value;
    double U_result = U_value;
    double P_result = P_value;
    

    //Given: R & I
    if((R_result != 0) && (I_result != 0)){
        U_result = U(R_value, I_value, P_value);
        P_result = P(U_value, R_value, I_value);

    //Given: R & U
    }else if((R_result != 0) && (U_result != 0)){
        I_result = I(U_value, R_value, P_value);
        P_result = P(U_value, R_value, I_value);

    //Given: R & P
    }else if((R_result != 0) && (P_result != 0)){
        I_result = I(U_value, R_value, P_value);
        U_result = U(R_value, I_value, P_value);

    //Given: I & U
    }else if((I_result != 0) && (U_result != 0)){
        R_result = R(U_value, I_value, P_value);
        P_result = P(U_value, R_value, I_value);

    //Given: I & P
    }else if((I_result != 0) && (P_result != 0)){
        R_result = R(U_value, I_value, P_value);
        U_result = U(R_value, I_value, P_value);

    //Given: U & P
    }else{
        R_result = R(U_value, I_value, P_value);
        I_result = I(U_value, R_value, P_value);
    }


    cout << "----------------------------------------\n";
    cout << "Resistance(R) = " << R_result << " Ohms\n";
    cout << "Current(I) = " << I_result << " Amps\n";
    cout << "Voltage(U) = " << U_result << " Volts\n";
    cout << "Power(P) = " << P_result << " Watts\n";


    cout << "\n \n";
    cout << "enter anything to exit";

    int keepopen;
    cin >> keepopen;

    return 0;
}
