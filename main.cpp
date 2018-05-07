#include <bits/stdc++.h>
typedef int ll;
using namespace std;
char id[10];
char name[10];
char age[3];
class files{
 public : void insert(){
    fstream myfile;
    myfile.open("test.txt",ios :: out | ios::app);{

        cout<<"enter id ";
    cin.getline(id,10);
    cout<<"enter Name ";
    cin.getline(name,10);
    cout<<"enter age ";
    cin.getline(age,3);
    myfile<<id<<'|'<<name<<'|'<<age<<endl;

    }
myfile.close();
}
public : void read() {
    ifstream myfile;
    string id,name,age;
    myfile.open("test.txt",ios :: in);
    while(!myfile.eof()){
    getline(myfile,id,'|');
    getline(myfile,name,'|');
    getline(myfile,age);
    if(id!="")
    cout<<id<<" "<<name<<" "<<age<<endl;
    }
    myfile.close();
}

public : void search() {
    ifstream myfile;
    string key;
    cin>>key;
    bool flag=true;
    string id,name,age;
    myfile.open("test.txt",ios :: in);
    while(!myfile.eof()){
    getline(myfile,id,'|');
    getline(myfile,name,'|');
    getline(myfile,age,'|');
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
ifstream myfile;
    string key;
    cout<<"enter the id"<<endl;
    cin>>key;
    string id,name,age;
    fstream temp;
    temp.open("temp.txt",ios ::out);
    myfile.open("test.txt",ios :: in);
    while(!myfile.eof()){
    getline(myfile,id,'|');
    getline(myfile,name,'|');
    getline(myfile,age);
    if(id==key){

        cout<<"enter id ";
    cin>>id;
    cin.ignore();
    cout<<"enter Name ";
    getline(cin,name);
    cout<<"enter age ";
    getline(cin,age);
    temp<<id<<'|'<<name<<'|'<<age<<endl;
    }
    else if(id!="")
        temp<<id<<'|'<<name<<'|'<<age<<endl;
    }
    myfile.close();
    temp.close();
    remove("test.txt");
    rename("temp.txt","test.txt");
}
void del(){

    ifstream myfile;
    string key;
    bool flag=false;
    cout<<"enter the id"<<endl;
    cin>>key;
    string id,name,age;
    fstream temp;
    temp.open("temp.txt",ios ::out);
    myfile.open("test.txt",ios :: in);
    while(!myfile.eof()){
    getline(myfile,id,'|');
    getline(myfile,name,'|');
    getline(myfile,age);
    if(id==key){
            cout<<"record is deleted"<<endl;
            flag=true;
            continue;
            }
    else if(id!="")
        temp<<id<<'|'<<name<<'|'<<age<<endl;
    }
    if(!flag)
        cout<<"record not found "<<endl;
    myfile.close();
    temp.close();
    remove("test.txt");
    rename("temp.txt","test.txt");
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
