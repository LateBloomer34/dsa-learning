// function to check number is add or even

#include<iostream>
using namespace std;

int oddEven(int num){
    if (num%2==0){
        // cout<<"even";
        return true;
    }
    else{
        // cout<<"odd";
    }
    return false;
}

int main (){
    int num1 , num2 , num3; 
    cout<<"enter the num"<<endl;
    cin>>num1>>num2>>num3;
    int res = oddEven(num1);
    if(res){
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
    cout<<endl;
   res = oddEven(num2);
    if(res){
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
    cout<<endl;
    res = oddEven(num3);
    if(res){
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}