#include <iostream>
#include <string>

using namespace std;


int main() { 
    int a,b,i,d;
    cout<<"----------Hello Welcome to out Vending Machine---------"<<endl;
    cout<<"***We have variety of products***"<<endl<<"Press---1 for Soda(20Rs)---"<<endl<<"Press---2 for Ice cream(30Rs)---"<<endl;
    cout<<"Press---3 for Chocolate shake(40Rs)---"<<endl;
    cout<<"Press---4 for neemo pani(20rs)---"<<endl;
    cin>>a;

    switch(a){
        case 1:
            cout<<"Thanku for chosing this soda"<<endl;
            break;
        case 2:
            cout<<"Thanku for chosing Ice Cream"<<endl;
            break;
        case 3:
            cout<<"Thanku for chosing this Chcolate Shake"<<endl;
            break;
        case 4:
            cout<<"Thanku for chosing this Neemo Pani"<<endl;
            break;}
    d=0;
    cout<<"How many items would you like to buy of this repective product"<<endl;
    cin>>b;
    for (i=0;i<b;i++){
        
            if (a==1){cout<<"your "<<i+1<<" soda Enjoy!!"<<endl;
            d+=20;}
            else if (a==2){cout<<"your "<<i+1<<" Ice Cream Enjoy!!"<<endl;
            d+=30;}
            else if (a==3){cout<<"your "<<i+1<<" Chocolate Shake Enjoy!!"<<endl;
            d+=40;}
            else if (a==4){cout<<"your "<<i+1<<" Neemo Pani Enjoy!!"<<endl;
            d+=20;
            }
        cout<<"Your Total Amount is "<<d;
  
    }

    return 0;

}