
#include <iostream>

using namespace std;

int main()
{
    int apartment[9][6] = {
       {1,0,0,1,0,0},//9Ãþ
       {1,0,0,0,0,0},
       {0,1,1,1,0,0},
       {0,1,1,0,0,0},
       {0,1,0,1,0,0},
       {0,1,0,0,0,0},
       {0,0,1,1,0,0},
       {0,0,1,0,0,0},
       {0,0,0,1,0,0} //1Ãþ
    };//1È£        6È£

    int all_on = 0;
    int over_one_on = 0;
    int floor1, floor2;

    cin >> floor1 >> floor2;

    for (int i = 0; i < 6; i++) {
        if (apartment[9 - floor1][i] + apartment[9 - floor2][i] == 2) {
            all_on++;
            over_one_on++;
        }
        else if (apartment[9 - floor1][i] + apartment[9 - floor2][i] == 1) {
            over_one_on++;
        }
    }



    cout << all_on << endl << over_one_on;

    return 0;
}