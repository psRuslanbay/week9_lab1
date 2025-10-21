#include <iostream>
using namespace std;
int rec(int a,int b) {

    if (b==0) {
        return 0;
    }
    if (b<0) {

        return -(a+rec(a,abs(b)-1));
    }
    if (b>0) {
        return a+rec(a,b-1);
    }

}



int main() {
    int a,b;
    cin >> a>>b;
    cout<<rec(a,b);
}