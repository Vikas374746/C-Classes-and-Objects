#include <iostream>
using namespace std;

class Cube {
public:
    int height = 2;
    int width = 3;
    int length = 5;

    // Function to calculate volume
    int volume() {
        return height * width * length;
    }
};

int main() {
    Cube c1; // Create object
    cout << "Volume: " << c1.volume() << endl;
    return 0;
}
