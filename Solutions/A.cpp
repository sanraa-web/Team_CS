//A
#include <iostream>
using namespace std;
    
int main()
{
    int t; //cantidad de veces
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<max(x,y)<<endl;
    }

    return 0;
}