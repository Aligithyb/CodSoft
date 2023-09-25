#include "iostream"
#include "Simplecalc.h"
#include "ctype.h"
using namespace std;
int main(){
    Simplecalc calc;
    double n1,n2;
    char operation;
    char response;
    char ys = 'Y';
    char No ='N';
    char low = tolower(ys);
    char lown = tolower(No);
    cout<<"if it is two number operation press(y) or if it is one number operation press(n)\n";
    cin>>response;
    if (response == low || response== ys){
        cout<<"enter two numbers\n";
        cin>>n1;
        cin>>n2;
        cout<<"choose THE operation you want from :  + , -, * , / , **\n";
        cin>>operation;
        switch (operation) {
            case '+':
                calc.add(n1,n2);
                break;
            case '-':
                calc.subtract(n1,n2);
                break;
            case '*':
                calc.multiply(n1,n2);
                break;
            case '/':
                calc.divide(n1,n2);
                break;
            default:
                cout<<"invalid operation"<<endl;
                return 1;
        }
        cout<<"Result:"<<calc.getresult()<<endl;

    } else if(response== lown || response==No){
        cout<<"enter one number";
        cin>>n1;
        cout<<"choose from these two options sqrt , abs";
        cin>>operation;
        switch (operation) {
            case 'sqrt':
                calc.squareroot(n1);
                break;
            case 'abs':
                calc.abs(n1);
                break;

        }
        cout<<"Result:"<<calc.getresult()<<endl;
    }
}