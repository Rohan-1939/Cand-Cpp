#include <iostream>
using namespace std;

class AddAmount {
private:
    int amount;
public:
    AddAmount() {
        amount = 50;
    }

    AddAmount(int add) {
        amount = 50 + add;
    }

    void display() {
        cout << "Final amount in the Piggie Bank: $" << amount << endl;
    }
};

int main() {
    AddAmount obj1;
    obj1.display();

    AddAmount obj2(30);
    obj2.display();

    return 0;
}

