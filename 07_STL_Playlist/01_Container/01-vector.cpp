#include <bits/stdc++.h>
using namespace std;


int main () {
    // how to create vector
    vector<int> marks;

    // cout <<*(marks.begin()) <<endl;
    marks.push_back(3);
    // marks.push_back(3);
    // marks.push_back(3);
    // marks.push_back(3);
    // marks.push_back(3);
    marks.push_back(3);
    marks.push_back(13);
    marks.push_back(49);
    marks.push_back(24);
    marks.push_back(57);

    // marks[0] = 40; // error: Segmentation fault (core dumped)

    // cout <<marks.size() <<endl; // how many element are in this bucket
    // cout <<marks.capacity() <<endl; // what's the actual capacity of these bucket

    // Remove element form end
    // marks.pop_back();

    // cout <<marks.size() <<endl;

    // cout <<marks.front() <<endl;

    // cout <<marks.empty() <<endl; // return 0 menas not empty 1 means empty

    // if(marks.empty() == true){
    //     cout <<"Vector is empty" <<endl;
    // }else {
    //     cout <<"Vector is not empty" <<endl;
    // }

    // marks.emplace(marks.begin(), 56);
    marks.emplace(marks.begin() + 2, 72);
    marks.emplace_back(60);

    // marks.assign(4, 21);
    // marks.assign({5, 6, 7});
    marks.insert(marks.begin(), 908);

    // cout <<marks[0] <<endl;
    // cout <<marks.at(2) <<endl;
    // cout <<marks.back() <<endl; // give u last index value

    // remove value we use
    // marks.erase(marks.begin() + 1); // remove index 1 value
    // marks.erase(marks.begin(), marks.begin() + 3); // range based removing value

    // Sort & reverse
    // sort(marks.begin(), marks.end());
    // reverse(marks.begin(), marks.end());

    // cout <<*max_element(marks.begin(), marks.end()) <<endl;
    // cout <<*min_element(marks.begin(), marks.end()) <<endl;
    // cout <<accumulate(marks.begin(), marks.end(), 2) <<endl;

    // Find
    // if(find(marks.begin(), marks.end(), 72) != marks.end()){
    //     cout <<"Found" <<endl;
    // }else{
    //     cout <<"Not Found" <<endl;
    // }

    // Count
    // cout <<count(marks.begin(), marks.end(), 3) <<endl;

    // for(int x : marks){
    //     cout <<x <<" ";
    // }cout <<endl;



    // 2D Vector
    // 3 rows, 4 columns, sab 0 se bhara
    vector<vector<int>> grid(3, vector<int>(4, 0));

    grid[0][3] = 4;
    grid[1][2] = 8;
    grid[2][1] = 2;

    for(int i=0; i<grid.size(); i++){
        for(int j=0; j<grid[i].size(); j++){
            cout <<grid[i][j] <<" "; 
        }cout <<endl;
    }



    return 0;
}