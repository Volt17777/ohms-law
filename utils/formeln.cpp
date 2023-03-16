#include<iostream>
#include<cmath>
using namespace std;

// R = U^2 / P; U / I; P / I^2; 
// I = U / R; P / U; wurzel (P / R); 
// U = I * R; P / I; wurzel (P * R);
// P = U * I; I^2 * R; U^2 / R;


double R(double U, double I, double P){
    
    double result;
    if(U == 0){
        result = P / (I * I);
   
    }else if(I == 0){
        result = (U * U) / P;
    
    }else{
        result = U / I;
    }

    return result;
}


double I(double U, double R, double P){

    double result;
    if(U == 0){
        result = sqrt(P / R);
    
    }else if(R == 0){
        result = P / U;
    
    }else{
        result = U / R;
    }
    
    return result;
}


double U(double R, double I, double P){
    
    double result;
    if(R == 0){
        result = P / I;
    
    }else if(I == 0){
        result = sqrt(P * R);
    
    }else{
        result = I * R;
    }

    return result;
}


double P(double U, double R, double I){
    
    double result;
    if(U == 0){
        result = (I * I) * R;

    }else if(R == 0){
        result = U * I;

    }else{
        result = (U * U) / R;
    }

    return result;
}