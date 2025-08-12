#include <iostream>
using namespace std;

class Cube {
private:
    int height = 2;
    int width = 3;
    int length = 5;

public:
    int volume() {
        return height * width * length;
    }
};

int main() {
    Cube c1;
    cout << "Volume: " << c1.volume() << endl;
    return 0;
}
