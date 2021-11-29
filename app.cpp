/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jazz Faye Olario
 */

#include "std_lib_facilities.h"

class quadratic {}; //for reporting errors

double square_root(double a, double b, double c){

    double s = b * b - 4 * a *c; //Formula before getting the sqrt

    if (s < 0) throw quadratic { };

    return s; 
}

int main(){
    try{

        double a, b, c, x1, x2; //declaration of variables

        cout << "Please enter the value for a, b and c: \n";
        cout << "a: ";
        cin >> a;
        cout << "b: ";
        cin >> b;
        cout << "c: ";
        cin >> c;


        //Formulas to get the roots
        x1 = (-b + sqrt(square_root(a,b,c))) / (2 * a);
        x2 = (-b - sqrt(square_root(a,b,c))) / (2 * a);

        cout << "The answers are the following: \n";
            if(x1 == x2){ //the two roots are equal then we only print 1 of them and say it has only ONE ROOT
                cout << "x = " << x1 << "\nThe equation has ONE ROOT.";
            }else{ //If it has 2 ROOTS then print both
                cout << "x1 = " << x1 << "\n";
                cout << "x2 = " << x2 << "\n"; 
                cout << "The equation has TWO ROOTS.";
            }      
        
    }catch(quadratic){
        cout << "The equation has NO REAL ROOTS."; //If it has not real roots
    }
    
    return 0;
}