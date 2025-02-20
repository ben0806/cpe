#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int top = 1, north = 2, west = 3, east = 4, south = 5, bottom = 6;

        while (n--) {
            string s;
            cin >> s;
            if (s == "north") {
                int temp = top;
                top = south;
                south = bottom;
                bottom = north;
                north = temp;
            } 
            else if (s == "south") {
                int temp = top;
                top = north;
                north = bottom;
                bottom = south;
                south = temp;
            } 
            else if (s == "east") {
                int temp = top;
                top = west;
                west = bottom;
                bottom = east;
                east = temp;
            } 
            else if (s == "west") {
                int temp = top;
                top = east;
                east = bottom;
                bottom = west;
                west = temp;
            }
        }
        cout << top << endl;
    }
}