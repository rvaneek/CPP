//
// Created by Aneek on 22-07-2024.
//

#ifndef GRAPH_H
#define GRAPH_H

#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

class Node {
    int data;
    Node *next;

public:
    Node() {
        data = 0;
        next = nullptr;
    }

    explicit Node(const int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Graph {
    map<int, Node *> adjancencyList;
    int vertexCount = 0;

public:
    explicit Graph(const int data) {
        if (adjancencyList.count(data) == 0) {
            adjancencyList[data] = new Node(data);
            vertexCount++;
        }else {
            cout<<"Vertex already Exists."<<endl;
        }
    }

    ~Graph() {
        auto it = adjancencyList.begin();
        while (it != adjancencyList.end())
            delete adjancencyList[it++->first];
    }
};


#endif //GRAPH_H
