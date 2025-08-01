// To check weater number is prime or not
// Input - 10 
// Output Number is not prime
#include <iostream>
using namespace std;
int main (){
int i, num;
bool isprime=true;
cout << "Enter a number:" <<endl;
cin >> num;
for(i=2;i<num;i++){
    if (num%i==0){
    isprime = false;
    break;}
    
}
if (isprime)
    cout << "Number is Prime";

else cout << "Number is not Prime";
return 0;
}