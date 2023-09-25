//
// Created by Asus on 9/25/2023.
//
#ifndef TASK1_C_SIMPLECALC_H
#define TASK1_C_SIMPLECALC_H
class Simplecalc {
    double result;
public:
    void add(double n1,double n2);
    void subtract(double n1,double n2);
    void multiply(double n1,double n2);
    void divide(double n1,double n2);
    void squareroot(double n1);
    void power(double n1,double n2);
    void abs(double n1);
    double getresult();


};


#endif //TASK1_C_SIMPLECALC_H
