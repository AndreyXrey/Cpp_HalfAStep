/*#include <iostream>
#include <iomanip>

using namespace std;

int M[3][5][2];
int main (){
	for (int i=0;i<3; i++){
		for(int l=0; l<5; l++){
			for(int h=0;h<2;h++)
			{M[i][l][h]=(i+1)*100+(l+1)*10+(k+1);
			cout<<setw(4)<< M[i][l][h];}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}*/
#include <iostream>
#include <iomanip>

using namespace std;


const unsigned int DIM1 = 3;
const unsigned int DIM2 = 5;
const unsigned int DIM3 = 2;

int ary[DIM1][DIM2][DIM3];

int main() {

    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                ary[i][j][k] = (i + 1) * 100 + (j + 1) * 10 + (k + 1);
                cout << setw(4) << ary[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}

