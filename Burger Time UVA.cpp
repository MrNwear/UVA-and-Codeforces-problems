#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
int main(){
string s;
int n;
cin>>n;
    while(n!=0){
        cin>>s;
        int r=100000000,d=20000000,min=20000000;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                r=i;
                if(abs(d-r)<min)
                    min=abs(d-r);
                }
                else if(s[i]=='D'){
                d=i;
                if(abs(d-r)<min)
                    min=abs(d-r);
                }
                else if(s[i]=='Z')
                {
                    min=0;
                    break;
                }

        }
        cout<<min<<endl;
        cin>>n;
    }
       return 0;
       }
