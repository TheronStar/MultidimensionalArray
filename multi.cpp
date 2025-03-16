#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    string map[6][6];
    int x = 0;
    int y = 0;
    string in = "";
    

    while (in != "EXIT") {
        cout << "Input X Coordinate: ";
        cin >> x;
        cout << "Input Y Coordinate: ";
        cin >> y;
        cout << "Input Value, or 'FINISH' to exit loop: ";
        cin >> in;
        if (in == "FINISH") {break;}
        map[x][y] = in;
    }
    
    for (int x = 0; x < 6; x++) {
        for (int y = 0; y < 6; y++) {
            cout << "[" << x << "]" << "[" << y << "]" << map[x][y] << "\n";
        }
    }

    return 0;
}