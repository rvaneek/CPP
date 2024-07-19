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
};

int main() {
    auto *g = new Graph();
    g->addEdge(1, 2);
    g->addEdge(4, 3);
    g->addEdge(3,0);

    g->print();
    delete g;
}
