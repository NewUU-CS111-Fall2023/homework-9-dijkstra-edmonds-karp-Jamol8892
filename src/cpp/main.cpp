/*
 USE THIS FILE FOR YOUR TESTS,
 AUTOGRADER WILL NOT EXECUTE THIS FILE.
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <vector>
#include <queue>
#include "task_1.cpp"
#include "task_2.cpp"
#include "task_3.cpp"
#include "task_4.cpp"
#include "task_5.cpp"
#include "task_6.cpp"

using namespace std;

int main() {
    Problem1 problem1;
    vector<vector<pair<int, int>>> graph = {
            // ... graph data ...
    };
    int source = 0;  // Or any other starting vertex
    problem1.dijkstra(graph, source);

    return 0;
}
