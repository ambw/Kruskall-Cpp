#include "Graph.h"
#include <iostream>
using namespace std;
int main()
{
    Graph graph;
    graph.createGraph();
    graph.FindSpanningTree();
    cout << "\n Mini " << graph.GetMinimumCost();
}