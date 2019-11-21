//
// Reverse and process the numbers
//
#include <iostream>
using namespace std;
int reverse(int n){
    int sum=0;
    while(n!=0){
        int m=n;
        m=(m/10);
        m=m*10;
        int diff = n-m;
        sum=sum*10+diff;
        n=n/10;
    }
    return sum;
}
int main(){
    cout<<"Input number: ";
    int n;
    cin>>n;
    int m=reverse(n);
    cout<<endl<<"Reverse it: "<<m;
    cout<<endl<<"Subtract: "<<n<<" - "<<m<<" = "<<n-m;
    int o = reverse(n-m);
    cout<<endl<<"reverse it: "<<o;
    cout<<endl<<"Add: "<<(n-m)<<" + "<<o<<" = "<<(n-m)+o;
}
