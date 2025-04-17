/*
typecasting means type conversion 
basically 2 type of typecasting are used in cpp
1- implicit type casting - automatic type conversion
2 - explicit type casting  -  type conversion done by user

*/
#include<iostream>
using namespace std;
int main (){

// 1- implicit type casting 
// examples 

// 1-int to float

int num1 = 2;
float num2 = 3.5;

float add = num1+num2;
cout<<add<<endl;


// 2- char to int


char a = 'A';
int b = 0;
int sum2 = a+b;
cout<<sum2<<endl;

// 3- int to char 
int c = 2 ;
char d = 'B';
char add3 = c+d;
cout<<add3<<endl;

// 4- bool to char

bool a1 = 1;
char b1 = 'A';
char add4 = a1+b1;
cout<<add4<<endl;


// 5- int to bool - 
int a2 = 15 ;
bool b2 = 1;
bool sum3 = a2+b2;
cout<<sum3  <<endl;


//6- int to bool

int a3 = 10;
bool b3 = 1 ;
bool s3 = a3+b3;
cout<<s3  <<endl;


int a4 = 0;
char b4 = 'a';
int s4 = a4+b4;
cout<<s4<<endl;

int a5 = 10;
bool b5 = 2 ;
int s5 = a3+b3;
cout<<s5  <<endl;


int a6 = 65 ; 
char b6 = a6+1;
cout<<b6<<endl;

// 2- explicit typecasting


int a7 = 10;
float b7 = 5.5;
float sum = a7 +(int )b7 ;
cout<<sum<<endl;


//double into int
double pi = 3.14159265;
int intpi = (int)pi;
cout<<intpi<<endl;


//float into int  


float flo = 65.5;
char res = (char)flo;
cout<<res<<endl;


//int to float ;
int a8 = 10 ; 
float b8 = 3.0 ;

float res7= a8/ b8;
cout<<res7<<endl; 

}