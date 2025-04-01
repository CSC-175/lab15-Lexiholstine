#include<iostream>
using namespace std;

// Function prototypes
void getInfo(int&n, int&k);
double computeWays(int n, int k);
double factorial(int);

/*******************************************************************
* getLotteryInfo                                                   *
* Gets and validates lottery info from the user and places it in   *
* reference parameters referencing variables in the main function. *
********************************************************************/

/*******************************************************************
* computeWays                                                      *
* Computes and returns the number of different possible sets       *
* of k numbers that can be chosen from a set of n numbers.         *
* The formula for this is     k!(n- k)!                            *
*                             --------                             *
*                                 n!                               *
* Note that the computation is done in a way that does not require *
* multiplying two factorials together. This is done to prevent any *
* intermediate result becoming so large that it causes overflow.   *
********************************************************************/


/*******************************************************************
* factorial                                                        *
* This function computes factorials recursively.                   *
*******************************************************************/
void getInfo(int &n, int &k) {
    cout << "How many balls (1-12) are in the pool to pick from?" << endl;
    cin >> n;
    if (n>12) {
        cout<<"Input Error!"<< endl;
        cout << "How many balls (1-12) are in the pool to pick from?" << endl;
        cin >> n;
    }
    else {

    }
    cout << "How many balls (1-7) must be drawn?" << endl;
    cin >> k;
    if (k>7) {
        cout<<"Input Error!" << endl;
        cout << "How many balls (1-7) must be drawn?" << endl;
        cin >> k;
    }
    else {

    }
}
double factorial(int n) {
    if (n==0) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

double computeWays(int n, int k) {
    return (factorial(k)*factorial(n-k)/factorial(n));
}





