#include<iostream>
using namespace std;

int primeCheck(int num ){
    if (num<=1){
        cout<<"number is not prime";
        return 0;
    }
        for(int i = 2 ; i*i <=num ; i++) {
            if (num%i==0){
                cout<<"not prime";
                return 0;
            }
        }
    cout<<"prime";
    return 0;
}

int main (){
    int num ;
    cout<<"enter the number -: ";
    cin>>num;
    primeCheck(num);
}