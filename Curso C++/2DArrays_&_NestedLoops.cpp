#include <iostream>

using namespace std;

int main()
{
    int numberGrid[4][5] = {
                        {1,3,5,7,9},
                        {2,4,6,8,0},
                        {5,10,15,20,25},
                        {10,20,30,40,50}
                        };
    
    for (int i = 0; i<=3; i++){
        for (int j = 0; j<=4; j++){
            cout << "X: " << j << " Y: " << i << " Num: " << numberGrid[i][j] << endl;
        }
    }

    return 0;
}