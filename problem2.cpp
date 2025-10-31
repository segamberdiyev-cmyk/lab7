#include <iostream>
using namespace std;

int reversed(int a, int rev = 0){
    if (a<1)
        return rev;
    return reversed(a/10, rev*10 + a%10);
}

int main() {

    cout<<reversed(1234);

    return 0;
}
