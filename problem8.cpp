#include <iostream>
using namespace std;
int rec(int a) {

    if (a==0) {
        return 0;
    }
    return a%10+rec(a/10);

}



int main() {
    int a,b;
    cin >> a;
    cout<<rec(a);
}