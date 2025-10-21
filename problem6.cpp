#include <iostream>
using namespace std;
float rec(float a) {

    if (a==1) {
        return 1;
    }
    return (1.0/(a*a))+rec(a-1);

}



int main() {
    float a;
    cin >> a;
    cout<<rec(a);
}