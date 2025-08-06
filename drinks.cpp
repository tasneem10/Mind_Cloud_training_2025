#include <iostream>
using namespace std;

int main(){

    int n; //the number of drinks in the fridge 
    float p; //the volume fraction of orange juice in the drinks

    cout << "Enter number of drinks: " << endl;
    cin >> n;
    cout << "Enter the volume fraction of orange juice in each drink." << endl;
    
    for(int i=0; i<n; i++){

        cin >> p;
        p +=p;

    }

    p = (p/n);
    cout << "The volume fraction in percent of orange juice: " << p << endl;
}