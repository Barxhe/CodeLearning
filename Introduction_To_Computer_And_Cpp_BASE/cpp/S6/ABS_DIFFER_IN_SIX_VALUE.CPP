#include<iostream>
using namespace std;

int main(){

    int a[6]//设定样本容量
    int maxJ = 0;
    int minO = 100;

    for (int i = 0; i < 6; i++)//遍历样本
        cin >> a[i];
    }

    for (int i = 0; i < 6; i++){
        if (a[i] % 2 == 0; //judge template is even
            int tempO = a[i];
            if (tempO < minO){
                minO = tempO;
            }
        }

        if (a[i] % 2 != 0){ //judge template is odd
            int tempJ = a[i];
            if (tempJ > maxJ){
                maxJ = tempJ;
            }
        }
    }

    cout << abs(maxJ - minO) << endl;//output

    system("pause");
    return 0;
}
