#include <iostream>
using namespace std;

namespace variable1 {
    void printMessage(string s) {
        cout << "Hello from variable1: " << s << endl;
    }
}

namespace variable2 {
    void printMessage(string s) {
        cout << "Hello from variable2: " << s << endl;
    }
}

int main() {
    variable1::printMessage("Value1");
    variable2::printMessage("Value2");
    return 0;
}
