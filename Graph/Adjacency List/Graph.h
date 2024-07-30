//
// Created by Aneek on 23-07-2024.
//

#ifndef GRAPH_H
#define GRAPH_H

#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int vertex;
    Node *next;

    Node() {
        this->vertex = 0;
        this->next = nullptr;
    }

    explicit Node(const int vertex) {
        this->vertex = vertex;
        this->next = nullptr;
    }

    Node(const int vertex, Node *next) {
        this->vertex = vertex;
        this->next = next;
    }
};


class Graph {
    Node *adjList[10]{};
    int vertexNum;

public:
    Graph() {
        for (auto &i: adjList)
            i = nullptr;
        vertexNum = 0;
    }

    void addVertex() {
        if (vertexNum >= 10)
            return;
        cout << ++vertexNum << " Added." << endl;
    }

    void addEdge(int source, int destination) {
        auto newNode = new Node(destination);
        newNode->next = adjList[source - 1];
        adjList[source - 1] = newNode;

        newNode = new Node(source);
        newNode->next=adjList[destination-1];

    }
};


#endif //GRAPH_H
