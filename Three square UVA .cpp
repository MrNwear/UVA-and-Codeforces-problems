#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int a,b,c,x,n;
  pair<int,pair<int,int> > s[50000];
  for(int i=0;i<50000;i++)
    s[i].first=-1;
  for(a=0;a<225;a++)
    for(b=0;b<225;b++)
        for(c=0;c<225;c++)
        {
            x=a*a+b*b+c*c;
            if(x>50000)
                continue;
            s[x]={a,{b,c}};
        }
        cin>>n;
        while(n--){
            cin>>x;
            if(s[x].first==-1)
            {
                cout<<-1<<endl;
                continue;
            }
            cout<<s[x].second.second<<" "<<s[x].second.first<<" "<<s[x].first<<endl;
        }
    return 0;
}
