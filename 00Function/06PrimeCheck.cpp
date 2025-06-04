#include<iostream>
using namespace std;

int primeCheck(int num ){
    if (num<=1){
        // cout<<"number is not prime";
        return false;
    }
        for(int i = 2 ; i*i <=num ; i++) {
            if (num%i==0){
                // cout<<"not prime";
                return false;
            }
        }
    // cout<<"prime";
    return true;
}

int main (){
    int num ;
    cout<<"enter the number -: ";
    cin>>num;
    int result  = primeCheck(num);
    if (result){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
}