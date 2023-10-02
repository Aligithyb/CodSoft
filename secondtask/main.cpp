#include <iostream>
#include <cstdlib>
#include "ctime"
using namespace std;

int main() {
    srand(time(0));
    int randnum = rand() % 100 + 1;
    int userresponse;
    int timestried = 0;
    cout<<"Welcome to the Guessing Game\n";
    do {
        cout<<"Enter your guess (between 1 and 100): ";
        cin>>userresponse;
        timestried++;
        if(userresponse > randnum){
            cout<<"Too High\n";
        } else if(userresponse < randnum){
            cout<<"Too Low\n";
        }else{
            cout<<"Congrats you guessed the number "<<randnum<<"correctly in"<<timestried<<"attempts\n";
        }
    } while (userresponse != randnum);
}
