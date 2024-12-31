
#include <iostream>
using namespace std;
int math() {
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    int x;
    int y;
    cin >> x;
    y = a * x * x + b * x + c;
    cout << "y= " << y << endl;

    return 0;
}
int main()
{
    math();
    return 0;
}

