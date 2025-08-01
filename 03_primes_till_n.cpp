//to prime prime numbers till n 
//input - 10
//output - 2 3 5 7
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a Number" << endl;
    cin >> n;

    for (int i = 2 ; i <= n ; i++) {
        bool isprime = true;
        for (int a = 2 ; a < i ; a++) {
            if (i % a == 0) {
                isprime = false;
                break;
            }
        }

        if (isprime)
            cout << i << " ";
    }

    return 0;
}