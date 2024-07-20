#include "Graph_1.h"

int main() {
    const auto *g = new Graph();
    g->addEdge(1, 2);
    g->addEdge(4, 3);
    g->addEdge(3, 0);

    cout << (g->hasEdge(4, 2) ? "There is an Edge" : "There is no Edge") << endl;
    cout << (g->hasEdge(4, 3) ? "There is an Edge" : "There is no Edge") << endl;


    g->print();
    delete g;
}
