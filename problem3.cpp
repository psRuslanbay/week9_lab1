#include <iostream>
using namespace std;
int rec(int a) {

    if (a==1) {
        return 1;
    }
    return a+rec(a-1);

}



int main() {
    int a;
    cin >> a;
    cout<<rec(a);
}