//
// Simple time problem
//
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter time in seconds: ";
    int n; cin>>n;
    int h=n/(60*60);
    cout<<"hours: "<<h;
    n=n-(60*60);
    int m = n/60;
    cout<<"min: "<<m;
    n=n-60;
    cout<<"seconds: "<<n;
}
