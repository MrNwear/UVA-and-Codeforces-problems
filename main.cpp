#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main(){
string s;
cin>>s;
int i,j,n,cas=1;
while(s!="")
{
    int a[1000]={};
    cin>>n;
    for(int f=1;f<=n;f++){
        cin>>i>>j;
        for(int x=min(i,j)+1;x<=max(i,j);x++){
            if(s[x]!=s[i]){
                a[f]=1;
                break;
            }
        }
    }

    for(int r=1;r<=cas;r++){
    cout<<"Case "<<cas<<":"<<endl;
    for(int q=1;q<=n;q++)
        if(a[q]==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
cas++;
}
       return 0;
       }
