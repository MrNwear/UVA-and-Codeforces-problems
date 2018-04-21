#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    int k;
    cin>>k;
    while(k--){
            bool flag=false;
    cin>>n;
    int x=0,y=0,z=0,s=sqrt(n);
    for(;x<=s;x++){
        for(y=0;y<=s;y++)
        {
          for(z=1;z<=s;z++)
                if(n==(x*x+y*y+z*z))
                    {
                        cout<<x<<" "<<y<<" "<<z<<" "<<endl;
                        flag=true;
                    break;
                    }
                    if(flag)
                        break;
            }
        if(flag)
            break;
        }
        if(!flag)
            cout<<"-1"<<endl;
    }
    return 0;
}
