#include<iostream>
#include<math.h>

using namespace std;

void lineLength(int x1, int y1, int x2, int y2){
    double length = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Length of the line : " << length << endl;
}

int main(){
    cout << "Welcome to Line Comparison Computation" << endl;
    int x1, y1, x2, y2;
    cout << "Point 1 -> (x1, y1) coordinates: ";
    cin >> x1 >> y1;
    cout << "Point 2 -> (x2, y2) coordinates: ";
    cin >> x2 >> y2;
    lineLength(x1, y1, x2, y2);

    return 0;
}
