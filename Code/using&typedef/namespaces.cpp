#include <iostream>

// Namespaces allow multiple variables with the same name

using namespace std;

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main() {

    int x = 210;

    cout << x << endl;
    cout << first::x << endl;
    cout << second::x << endl;    

    return 0;
}