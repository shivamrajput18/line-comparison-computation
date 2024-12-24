#include <iostream>
#include <cmath>

using namespace std;

double calculateLength(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void compareTwoLines(double length1, double length2)
{
    if (length1 == length2)
    {
        cout << "The two lines are equal." << endl;
    }
    else if (length1 > length2)
    {
        cout << "The first line is greater than second line." << endl;
    }
    else
    {
        cout << "The second line is greater than first line." << endl;
    }
}

int main()
{
    cout << "Welcome to Line Comparison Computation" << endl;
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;

    cout << "Enter coordinates for the first line (x1, y1) and (x2, y2): ";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << "Enter coordinates for the second line (x3, y3) and (x4, y4): ";
    cin >> x3 >> y3 >> x4 >> y4;

    double length1 = calculateLength(x1, y1, x2, y2);
    double length2 = calculateLength(x3, y3, x4, y4);
    compareTwoLines(length1, length2);

    return 0;
}
