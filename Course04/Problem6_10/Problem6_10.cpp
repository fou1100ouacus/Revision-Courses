// Problem6_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<bits/stdc++.h>
using namespace std;
enum enPassFail{pass=1,fail=2};

void read(int& m1, int& m2,int &m3 ) {
    cout << "Enter m1 " << endl;
    cin >> m1;

    cout << "Enter m2 " << endl;
    cin >> m2;
    cout << "Enter m3 " << endl;
    cin >> m3;

}
int sum(int m1,int m2,int m3)
{
    return m1 + m2 + m3;
}
int average(int m1, int m2, int m3)
{
    return sum(m1, m2, m3) / 3;

}
enPassFail checkAverage(int avg)
{
    if (avg>=50)
        return enPassFail::pass;
    else {
        return enPassFail::fail;
    }

}
void print(enPassFail result) {
    if (result == enPassFail::pass) {
        cout << "pass";
    }
    cout << "fail";
}
struct stNumbers {
    int mark1;
    int mark2;
    int mark3;
};

stNumbers readNum()
{

    stNumbers st;

    cout << "Enter mark 1: \n";
    cin >> st.mark1;
    cout << "Enter mark 2: \n";
    cin >> st.mark2;
    cout << "Enter mark 3: \n";
    cin >> st.mark3;

    return st;
}
float sumNumbers(stNumbers st) {
    return st.mark1 + st.mark2 + st.mark3;
}
float averageCalc() {
    return  sumNumbers(readNum()) / 3;  // if we have array we can do arr.length insted of this fixed value 
}

bool CheckAverage() {
    if (averageCalc() >= 60)return true;
    else  return false;
}

int main()
{
    int n1, n2, n3;
    read(n1, n2, n3);
   

   print(checkAverage(average(n1, n2, n3)));
    
}

