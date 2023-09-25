//
// Created by Asus on 9/25/2023.
//
#include "math.h"
#include "Simplecalc.h"

void Simplecalc::add(double n1, double n2) {
    result = n1 + n2;

}

void Simplecalc::subtract(double n1, double n2) {
    result = n1 - n2;

}

void Simplecalc::multiply(double n1, double n2) {
    result = n1 * n2;

}

void Simplecalc::divide(double n1, double n2) {
    result = n1 / n2;

}

void Simplecalc::squareroot(double n1) {
    result = sqrt(n1);

}

void Simplecalc::power(double n1, double n2) {
    result = pow(n1,n2);

}

void Simplecalc::abs(double n1) {
    result = ::abs(n1);

}

double Simplecalc::getresult() {
    return result;
}
