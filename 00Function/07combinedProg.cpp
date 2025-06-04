#include<iostream>
using namespace std;
// create program that print table of a number
// serach nuber is even or odd
// factroial of that number
// number is prime or not
// print 1 to number
    int table (int num){
        for (int i = 1 ; i <=num ; i++){
            cout<<i*num<<" ";
        }
        return 0;
    }
    int oddEven(int num){
        if (num%2==0){
            cout<<"even";
        }
        cout<<"odd";
        return 0;
    }

    int factorial(int num){
        int fact = 1;
        for(int i = 1 ; i<=num ;i++){
            fact = fact*i;
        }
        cout<<fact;
        return 0;
    }
    int primeCheck(int num){
        if (num<=1){
            cout<<"not prime";
            return 0;
        }
        for (int i = 2; i*i<=num ;i++){
            if (num%i==0){
                cout<<"not prime";
                return 0;
            }
        }
        cout<<"prime";
        return 0;
    }

    int printNum(int num ){
        for (int i = 0 ; i <=num ;i++){
            cout<<i<<" ";
        }
        return 0;
    }

int main (){
    int num ;
    cout<<"enter the number -:";
    cin>>num;
    table(num);
    cout<<endl;
    oddEven(num);
    cout<<endl;
    factorial(num);
    cout<<endl;
    primeCheck(num);
    cout<<endl;
    printNum(num);
}