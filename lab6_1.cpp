#include<iostream>
using namespace std;

int main(){
    int integer,even=0,odd=0;
    cout << "Enter an integer: ";
    cin >>integer;
        while (integer!=0){
            
            if(integer%2==0){
                even+=1;
            }else{
                odd+=1;
            }
            cout << "Enter an integer: ";
            cin >>integer;
        }
        

    cout << "#Even numbers = "<<even<<endl;
    cout << "#Odd numbers = "<<odd;
    return 0;
}
