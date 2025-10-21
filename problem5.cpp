#include <iostream>
using namespace std;
int rec(int a,int b) {

    if (b==0) {
        return 1;
    }
    return a*rec(a,b-1);

}



int main() {
    int a,b;
    cin >> a>>b;
    cout<<rec(a,b);
}