#include<iostream>
using namespace std;

int main()
{
    int i,j,k,test,array[50000+1][3]={0},d;

    for(i=0;i*i<=50000;i++)
      for(j=i;i*i+j*j<=50000;j++)
          for(k=j;i*i+j*j+k*k<=50000;k++)
          {
             d = i*i+j*j+k*k;
             if(!array[d][0] && !array[d][1] && !array[d][2]){
                array[d][0]=i;
                array[d][1]=j;
                array[d][2]=k;
            }
         }

    cin>>test;
    for(i=1;i<=test;i++)
    {
         cin>>d;
         if( !array[d][0] && !array[d][1] && !array[d][2] )
            cout<<-1<<endl;
        else
            cout<<array[d][0]<<‘ ‘<<array[d][1]<<‘ ‘<<array[d][2]<<endl;
    }
    return 0;
}
