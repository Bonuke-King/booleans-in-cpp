#include <iostream>
using namespace std;

int main ()
{

bool isCodingFun = true;
cout << endl;
bool isFishTasty = false;

cout << isCodingFun;
cout << endl<< endl;
cout << isFishTasty;

cout <<endl<<endl<<endl;

//boolean expression returns a boolean value : 1 (true)
//or 0 (false), by comparing values /variables.

int x=10;
int y =9;
cout << (x>y); //returns 1 (true), because 10 is higher than 9
cout << endl;

cout << (10==16); //returs 0 (false),because 10 is not eqyal to 15

cout << endl;
int myAge =0;
int votingAge = 18;
cout <<"Enter the your age:"<<endl;
cin >> myAge;

if (myAge >=votingAge)
{
cout << "Old enough to vote!"<<endl;


}
else
{
    cout << "Not old enough to vote.!" <<endl;
}

 return 0;   
}
