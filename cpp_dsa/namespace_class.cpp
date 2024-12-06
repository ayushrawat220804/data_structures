#include <iostream>
using namespace std;

namespace variable1 {
    class Printer {
    public:
        void printMessage(string s) {
            cout << "Hello from variable1: " << s << endl;
        }
    };
}

namespace variable2 {
    class Printer {
    public:
        void printMessage(string s) {
            cout << "Hello from variable2: " << s << endl;
        }
    };
}

int main() {
    variable1::Printer p1;
    p1.printMessage("Value1");

    variable2::Printer p2;
    p2.printMessage("Value2");

    return 0;
}
