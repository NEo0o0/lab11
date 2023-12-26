// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<string>
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    string x[10]={"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    cout<<"You will get "<<x[rand ()%9]<<" in this 261102.";

}