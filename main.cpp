#include <bits/stdc++.h>
typedef int ll;
using namespace std;
char id[10];
char name[10];
char amount[10];
char type[10];
char price[10];
char shelfNumber[10];
class files{
 public : void insert(){
    fstream myfile;
    myfile.open("test.txt",ios :: out | ios::app);{

        cout<<"enter id ";
    cin.getline(id,10);
    cout<<"enter Name ";
    cin.getline(name,10);
    cout<<"enter amount ";
    cin.getline(amount,10);
    cout<<"enter type ";
    cin.getline(type,10);
    cout<<"enter price ";
    cin.getline(price,10);
    cout<<"enter shelf number ";
    cin.getline(shelfNumber,10);

    myfile<<id<<'|'<<name<<'|'<<type<<'|'<<price<<'|'<<shelfNumber<<endl;
    }
myfile.close();
}
public : void read() {
    ifstream myfile;
    string id,name,amount,shelfNumber,type,price;
    myfile.open("test.txt",ios :: in);
    while(!myfile.eof()){
    getline(myfile,id,'|');
    getline(myfile,name,'|');
    getline(myfile,amount,'|');
    getline(myfile,type,'|');
    getline(myfile,price,'|');
    getline(myfile,shelfNumber);
    if(id!="")
    cout<<id<<" "<<name<<" "<<amount<<" "<<type<<" "<<price<<" "<<shelfNumber<<endl;
    }
    myfile.close();
}

public : void search() {
    ifstream myfile;
    string key;
    cin>>key;
    bool flag=true;
    string id,name,shelfNumber,amount,type,price;
    myfile.open("test.txt",ios :: in);
    while(!myfile.eof()){
    getline(myfile,id,'|');
    getline(myfile,name,'|');
    getline(myfile,amount,'|');
    getline(myfile,type,'|');
    getline(myfile,price,'|');
    getline(myfile,shelfNumber);
    if(id==key){
    cout<<"found"<<endl;
    flag=false;
    break;
   }
    }
    if(flag) cout<<"Not found "<<endl;
    myfile.close();
}
void update(){
    fstream myfile;
    string key;
    cout<<"enter the id"<<endl;
    cin>>key;
    string id,name,type,shelfNumber,price,amount;
    fstream temp;
    temp.open("temp.txt",ios ::out);
    myfile.open("test.txt",ios :: in | ios ::out);
    while(!myfile.eof()){
    getline(myfile,id,'|');
    getline(myfile,name,'|');
    getline(myfile,amount,'|');
    getline(myfile,type,'|');
    getline(myfile,price,'|');
    getline(myfile,shelfNumber);

    if(id==key){
       cout<<"enter id ";
    cin>>id;
    cin.ignore();
    cout<<"enter Name ";
    getline(cin,name);
     cout<<"enter amount ";
    getline(cin,amount);
    cout<<"enter type ";
    getline(cin,type);
    cout<<"enter price ";
    getline(cin,price);
    cout<<"enter shelf number ";
    getline(cin,shelfNumber);

      myfile<<id<<'|'<<name<<'|'<<type<<'|'<<price<<'|'<<shelfNumber<<endl;
    }
    else if(id!="");
    }
    myfile.close();
    temp.close();/*
    remove("test.txt");
    rename("temp.txt","test.txt");*/

}
void del(){

    fstream myfile;
    string key;
    bool flag=false;
    cout<<"enter the id"<<endl;
    cin>>key;
    string id,name,age;
    fstream temp;
    temp.open("temp.txt",ios ::out);
    myfile.open("test.txt",ios :: in | ios ::out );
    while(!myfile.eof()){
            int x=myfile.tellg();
    getline(myfile,id,'|');
    getline(myfile,name,'|');
    getline(myfile,age);
    if(id==key){
            if(x!=0)x--;
            myfile.seekg(x);
            cout<<"record is deleted"<<endl;
            myfile<<"0";
            flag=true;
            break;
            }
    else if(id!="");
    }
    if(!flag)
        cout<<"record not found "<<endl;
    myfile.close();
    /*
    remove("test.txt");
    rename("temp.txt","test.txt");
*/
}
};
int main()
{
    files ob;
    int x=1;
    while(x>0 && x<6)
    {
        cout<<"to insert press 1 "<<endl;
         cout<<"to read press 2 "<<endl;
         cout<<"to search press 3 "<<endl;
        cout<<"to update press 4 "<<endl;
        cout<<"to delete press 5 "<<endl;
       cin>>x;
       cin.ignore();
         if(x==1)
            ob.insert();
        else if(x==2)
        ob.read();
        else if(x==3)
        ob.search();
        else if(x==4)
        ob.update();
        else if(x==5)
        ob.del();

    }
       return 0;
}
