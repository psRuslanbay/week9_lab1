#include <iostream>
using namespace std;
void rec(int a) {
    if (a==-1) {
        return;
    }
    cout << a << endl;
    rec(a - 1);
}



int main() {
    rec(10);
}