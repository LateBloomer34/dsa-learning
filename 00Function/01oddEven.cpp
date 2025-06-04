// function to check number is add or even

#include<iostream>
using namespace std;

int oddEven(int num){
    if (num%2==0){
        return true;
    }
    return false;
}

int main (){
    int num; 
    cout<<"enter the num"<<endl;
    cin>>num;
    int res = oddEven(num);
    if(res){
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}