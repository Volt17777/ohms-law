#include<iostream>
#include "utils/formeln.hpp"
using namespace std;


int main(){
    

    string Menunames[]{"Wiederstand(R)", "Strom(I)", "Spannung(U)", "Leistung(P)"};
    double Werte[4]{};

    cout << "fuer nicht vorhandene Daten eine '0' einfuegen\n"
            << "Es muessen 2 Daten angegeben werden\n"
            << "geben sie nun folgende Daten ein: \n";

    for (int i = 0; i < 4; i++){
        cout << "geben Sie den: " << Menunames[i] << " ein: ";
        cin >> Werte[i];
    }


    double R_wert = Werte[0];
    double I_wert = Werte[1];
    double U_wert = Werte[2];
    double P_wert = Werte[3];

    double R_result = R_wert;
    double I_result = I_wert;
    double U_result = U_wert;
    double P_result = P_wert;
    

    //Geg: R & I
    if((R_result != 0) && (I_result != 0)){
        U_result = U(R_wert, I_wert, P_wert);
        P_result = P(U_wert, R_wert, I_wert);

    //Geg: R & U
    }else if((R_result != 0) && (U_result != 0)){
        I_result = I(U_wert, R_wert, P_wert);
        P_result = P(U_wert, R_wert, I_wert);

    //Geg: R & P
    }else if((R_result != 0) && (P_result != 0)){
        I_result = I(U_wert, R_wert, P_wert);
        U_result = U(R_wert, I_wert, P_wert);

    //Geg: I & U
    }else if((I_result != 0) && (U_result != 0)){
        R_result = R(U_wert, I_wert, P_wert);
        P_result = P(U_wert, R_wert, I_wert);

    //Geg: I & P
    }else if((I_result != 0) && (P_result != 0)){
        R_result = R(U_wert, I_wert, P_wert);
        U_result = U(R_wert, I_wert, P_wert);

    //Geg U & P
    }else{
        R_result = R(U_wert, I_wert, P_wert);
        I_result = I(U_wert, R_wert, P_wert);
    }


    cout << "----------------------------------------\n";
    cout << "Wiederstand(R) = " << R_result << " Ohm\n";
    cout << "Strom(I) = " << I_result << " Ampere\n";
    cout << "Spannung(U) = " << U_result << " Volt\n";
    cout << "Leistung(P) = " << P_result << " Watt\n";


    cout << "\n \n";
    cout << "enter anything to exit";

    int keepopen;
    cin >> keepopen;

    return 0;
}
