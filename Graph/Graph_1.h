//
// Created by Aneek on 20-07-2024.
//

#ifndef GRAPH_1_H
#define GRAPH_1_H
#include <bits/stdc++.h>
using namespace std;

class Graph {
    int **g;
    int dimension;

public:
    explicit Graph(const int dimension = 5) {
        this->g = new int *[dimension];
        this->dimension = dimension;

        for (int i = 0; i < dimension; i++) {
            g[i] = new int[dimension];
            for (int j = 0; j < dimension; j++)
                g[i][j] = 0;
        }
    }

    void addEdge(int u, int v, int weight = 1) {
        g[u][v] = weight;
        g[v][u] = weight;
    }

    void print() {
        for (auto i = 0; i < dimension; i++) {
            for (auto j = 0; j < dimension; j++) {
                cout << g[i][j] << " ";
            }
            cout << endl;
        }
    }

    bool hasEdge(int u, int v) {
        if (g[u][v])
            return true;
        return false;
    }
};

#endif //GRAPH_1_H
