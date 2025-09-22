#include<bits/stdc++.h>
using namespace std;
int t,x,y,y_takes_screen,x_bucket,extra_screen;

void do_this(){
    cin>>t; while(t--){
        cin>>x>>y; if(y%2==0){
            y_takes_screen=y/2; x_bucket=y_takes_screen*7; 
            if(x<=x_bucket){cout<<y_takes_screen<<endl;}
            else{
                extra_screen = (x-x_bucket)%15==0 ? (x-x_bucket)/15 : ((x-x_bucket)/15)+1;
                cout<<y_takes_screen+extra_screen<<endl;
            }
        }else{
            y_takes_screen=(y/2)+1; x_bucket=(y_takes_screen*7)+4;
            if(x<=x_bucket){cout<<y_takes_screen<<endl;}
            else{
                extra_screen = (x-x_bucket)%15==0 ? (x-x_bucket)/15 : ((x-x_bucket)/15)+1;
                cout<<y_takes_screen+extra_screen<<endl;
            }
        }
    }
}

int main(){
    do_this();
    return 0;
}
