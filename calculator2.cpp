#include <iostream>
#include <string>

using namespace std;

int add(int x,int y);
int multiply(int a, int b);
int main() { 
    string str;
    cout<<"Enter your name: "; getline(cin,str);
    cout<<str<<endl;
    int a;
    int b;
    
    a =2 , b=3;
    cout<< add(a,b)<<endl;
    cout<< multiply(a,b)<<endl;
    switch(a){
        case 1:
            cout<<"Your Output is 1"<<endl;
        case 2:
            cout<<"Your Output is 2"<<endl;
        default:
            cout<<"None"<<endl;

    }

    // print();
    return 0;
   

}

int add(int x, int y){
    return x + y;
}

int multiply(int a, int b){ return a*b;}