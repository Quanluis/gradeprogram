#include <iostream>
using namespace std;

int main(){

    //Variables

    double grade;

    const int 

     F = 50,
     D = 60,
     C = 70,
     B = 80,
     A = 90,
     min = 0,
     max = 100;

    // I/O 

    cout << "What is your grade? ";
    cin >> grade ;

    if((grade >= min) && (grade <= max)){
        if(grade >= A){
        cout << "You got a A";
    } else if (grade >= B) {
        cout << "You got a B";
    } else if (grade >= C){
        cout << "You got a C";
    } else if (grade >= D){
        cout << "You got a D";
    } else if (grade >= F){
        cout << "You got a F";
    } else if (grade < F){
        cout << "You got a F";
    }
    } else {
        cout << "You cannot enter less than 0 and more than 100.";
    }
   
    return 0;
}