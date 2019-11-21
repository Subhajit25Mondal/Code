//
// Playing with files
//

#include <iostream>
#include <fstream>
using namespace std;
int main(){
    cout<<"Enter name: "; char name[10]; cin>>name; cout<<endl;
    cout<<"Enter College: "; char coll[20]; cin>>coll; cout<<endl;

    ofstream file("text.txt", ios::out);
    file<<name<<endl<<coll;
    cout<<"Written in file"<<endl;
    return 0;
}