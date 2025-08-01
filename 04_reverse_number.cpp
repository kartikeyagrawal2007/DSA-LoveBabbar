//To print reverse of a number 
//Input-852145
//Output-541258
#include <iostream>
using namespace std;

int main () {
    int i , n;
    cout << "Enter a number: ";
    cin >> i;
     while (i != 0) {
        n = i % 10;
        cout << n;
        i = i / 10;
    }

    cout << endl;
    return 0;
}