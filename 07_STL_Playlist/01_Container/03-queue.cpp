#include <bits/stdc++.h>
using namespace std;

int main () {
    // Create a queue
    queue<int> que;

    // insertion
    que.push(34);
    que.push(90);
    que.push(56);
    que.push(78);
    que.push(12);
    que.push(1);
    que.push(5);


    // deletion
    que.pop();

    // print the queue
    while (!que.empty()) {
        cout << que.front() << " ";
        que.pop();
    }cout <<endl;


    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> b10cf43 (Add implementations for list and queue data structures)
