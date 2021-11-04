#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main() {
    srand(time(0));
    int ans = rand()%100;
    int n;
    cout<<"*************************************************************"<<endl;
    cout<<"\t If you want play the Guess the Number game."<<endl;
    cout<<"\t please press any key!"<<endl;
    cout<<"\t otherwise press -1."<<endl;
    cout<<"************************************************************"<<endl;
    cout<<"\t Press The Key : ";
    int ch;
    cin>>ch;
    string chance[5] = {"First","Second","Third","Forth","Fifth and Last"};
    int i=1;
    if(ch != -1) {
        do {
            if(i==5) {
                cout<<"\t This is Your Last Chance!  *"<<endl;
            }
            cout<<"\t Guess The Number : ";
            cin>>n;
            if(n == -1) {
                cout<<"************************************************************"<<endl;
                cout<<"\t Oh no! that's ok The answer is : "<<ans<<endl;
                cout<<"\t please play again To improve your thinking power"<<endl;
                cout<<"************************************************************"<<endl;  
                break;
            }

            if(n < ans) {
                cout<<"\t Your number is smaller."<<endl;
                cout<<"\t Please try again"<<endl;
            }
            else if(n == ans) {
                cout<<"\t wohoo! Congradulation Your number is correct."<<endl;
                break;
            }
            else {
                cout<<"\t Your number is greater."<<endl;
                cout<<"\t Please try again"<<endl;
            }
            i++;
            cout<<endl;
            cout<<"****************************************************"<<endl;
            cout<<endl;
        }while(n != -1 && i <= 5);
    }
    else {
        return 0;
    }

    if(i == 6) {
        cout<<"************************************************************"<<endl;
        cout<<"\t Oh no! that's ok The answer is : "<<ans<<endl;
        cout<<"\t please play again To improve your thinking power"<<endl;
        cout<<"************************************************************"<<endl;   
    }
    return 0;
}