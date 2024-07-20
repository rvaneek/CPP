#include "Graph_1.h"

int main() {
    auto *g = new Graph();
    g->addEdge(1, 2);
    g->addEdge(4, 3);
    g->addEdge(3, 0);

    cout << g->hasEdge(4, 2) << endl;
    cout << g->hasEdge(4, 3) << endl;

    g->print();
    delete g;
}
