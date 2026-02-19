#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    if(x>=0 && x<=20){
    if (x >= 12)
        cout << "Yes";
    else
        cout << "No";
    }
    else{
        cout<<"Numero fuera de rango";
    }

    return 0;
}
