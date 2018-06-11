#include <bits/stdc++.h>
typedef int ll;
using namespace std;
int main()
{
    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        bool f=true;
        while(x){
            if(x%2==0){
                x/=2;

            }
            else
                x--;
                if(f)
                    f=false;
                else
                    f=true;
        }
        if(f)
            cout<<"Akash"<<endl;
        else
            cout<<"Aayush"<<endl;
    }
       return 0;
}
