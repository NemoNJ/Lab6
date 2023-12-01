#include<iostream>
using namespace std;

int main(){
int N ,counteven = 0,countodd = 0;
    cout << "Enter an integer: ";
    cin >> N;
    while(N != 0){
        if(N%2 == 0){
            counteven += 1;
        }
        else{
            countodd += 1;
        }
    cout << "Enter an integer: ";
    cin >> N;
    }
    cout << "#Even numbers = " << counteven <<"\n";
    cout << "#Odd numbers = "<< countodd ;
    return 0;
}