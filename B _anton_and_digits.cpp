#include <iostream>
using namespace std;

int main(){

    int k2, k3, k5, k6;

    cout << "Enter the value of k2: " << endl; //take the digit k2 value from user
    cin >> k2;

    cout << "Enter the value of k3: " << endl; //take the digit k3 value from user
    cin >> k3;

    cout << "Enter the value of k5: " << endl; //take the digit k5 value from user
    cin >> k5;

    cout << "Enter the value of k6: " << endl; //take the digit k6 value from user
    cin >> k6;

    int all_256 = min(min(k2, k5), k6); //maximum possible number of 256
    int numk2 = k2 - all_256; //the remaining of digit k2
    int all_32 = min(k3, numk2); //maximum possible number of 32

    int sum = (256*all_256) + (32*all_32); //sum of availabels numbers of 256 & 32

    cout << "The maximum possible sum of 256 & 32: " << sum << endl;
}