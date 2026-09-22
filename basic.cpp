#include <bits/stdc++.h>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main() {
    int count = 5;
    double price = 100;
    char grad = 'A';
    bool done = true;
    string str = "Learning C++";

    cout << "Hello " << str <<endl;

    int x, y;

    // cin >>x >> y;

    // if(x > y){
    //     cout <<x <<" is greater then " <<y <<endl;
    // }else {
    //     cout <<y <<" is greater then " <<x <<endl;
    // }


    int arrayLength = 5;
    int nums[5] = {10, 20, 30, 40, 50};
    nums[2] = 60;

    for(int i=0; i<5; i++){
        cout <<nums[i] << " ";
    }

    cout <<endl;

    // cout <<add(67, 54) <<endl;




    return 0;
}