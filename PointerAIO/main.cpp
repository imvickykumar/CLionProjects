#include <iostream>

using namespace std;


int main () {
    int var1;
    int var2;

//    cout << "Address of var1 variable: ";
//    cout << &var1 << endl;
//
//    cout << "Address of var2 variable: ";
//    cout << &var2 << endl;


//    int    *ip;    // pointer to an integer
//    double *dp;    // pointer to a double
//    float  *fp;    // pointer to a float
//    char   *ch;     // pointer to character
//
//
//    int  var = 20;   // actual variable declaration.
//    int  *ip;        // pointer variable
//
//    ip = &var;       // store address of var in pointer variable
//
//    cout << "Value of var variable: ";
//    cout << var << endl;
//
//    // print the address stored in ip pointer variable
//    cout << "Address stored in ip variable: ";
//    cout << ip << endl;
//
//    // access the value at the address available in pointer
//    cout << "Value of *ip variable: ";
//    cout << *ip << endl;


    //Difference between pointer and references;

    // declare simple variables
    int    i;
    double d;

    // declare reference variables
    int&    r = i;
    double& s = d;

    i = 5;
    cout << "Value of i : " << i << endl;
    cout << "Value of i reference : " << r  << endl;
    cout << "Value of i : " << i << endl;


    d = 11.7;
    cout << "Value of d : " << d << endl;
    cout << "Value of d reference : " << s  << endl;

    return 0;
}