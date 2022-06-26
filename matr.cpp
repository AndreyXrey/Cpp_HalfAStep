#include <iostream>
#include <iomanip>

using namespace std;

//const unsigned int DIM1 = 3;
//const unsigned int DIM2 = 5;

int ary[3][5];

int main() {

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            ary[i][j] = (i ) * 10 + (j+ 1);
        }
   }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << setw(4) << ary[i][j];
        }
        cout << endl;
    }

    return 0;
}
