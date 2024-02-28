#include <iostream>
using namespace std;

int n = 0;
int a[15] = {};

void display(int n){
    cout<<"[";
    for (int i = 0; i < n; i++)
    {
        if(i!=n-1) cout<<a[i]<<" "; else cout<<a[i];
    }
    cout<<"]"<<endl;
}

void back_tracking(int n){
    display(n);
    for (int i = 0; i < n-1; i++)
    {
        a[i] = a[i]+a[i+1];
    }
    if (n!=1) back_tracking(n-1);
    
}

int main() {
    int t = 0;
    cin>>t;
    while (t--)
    {
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        back_tracking(n);
    }
    
    return 0;
}

