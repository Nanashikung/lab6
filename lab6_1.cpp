#include<iostream>
using namespace std;

int main(){
    int even=0,odd=0;
    int input;
    while(input != 0){
        cout << "Enter an integer: ";
        cin >> input;
        if(input%2==0 && input!=0){
            even+=1;
        }else if(input%2!=0 && input!=0){
            odd+=1;
        }
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}
