#include <iostream>
using namespace std;

int main() {
    int n, x=1, y=1, z=0;
    cout<< "scrivi il numero n"<<endl;
    cin>>n;
    cout<<x<<endl<<y<<endl;
    for (int i=0; i<=n; i++)
    {
       z=x + y;
       x=y;
       y=z;
       cout<< z<<endl;
    }
    
    return 0;
}
