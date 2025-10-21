#include <iostream>
using namespace std;
float rec(float a) {

    if (a==1) {
        return 1.0/3.0;
    }
    return 1.0/(a*(a+2))+rec(a-1);

}



int main() {
    float a;
    cin >> a;
    cout<<rec(a);
}