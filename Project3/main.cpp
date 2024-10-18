using namespace std;
#include <iostream>
#include <random>
class fraction {
private:
    int a, b;
public:
    int GetA() {
        return a;
    }
    int GetB() {
        return b;
    }
    void SetA(int a1) {
        a = a1;
    }
    void SetB(int b1) {
        b = b1;
    }
    void Print() {
        cout << "Result (a/b): " << a / b << endl;
    }
    void Input(int c, int d) {
        SetA(c);
        SetB(d);
    }
    void InputRandom() {
        srand(time(0));
        SetA(1 + rand() % (100 - 1 + 1));
        SetB(1 + rand() % (100 - 1 + 1));
    }
};
int main()
{
    fraction c;
    c.Input(10, 2);
    c.Print();
    fraction d;
    d.InputRandom();
    d.Print();
}