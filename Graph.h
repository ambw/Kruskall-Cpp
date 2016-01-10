#ifndef GRAPH_H
#define GRAPH_H
#include <vector>
#include "DisjointSet.h"
using std::vector;

struct Edge
{
    //边集
public:
    int s_v ;
    int e_v ;
    int weight;
};


class Graph
{
private:
    int** graph = nullptr;
    vector<Edge> edges;
    int vertexs;
    int nrOfEdge;
    vector<Edge> MinimumSpanningTree;
    UnionFind unionFind;

public:
    Graph() = default;
    ~Graph();
    void genEedges(); 
    
    //将邻接矩阵转换为边集
    void createGraph();  
    int init();
    void FindSpanningTree();  //生成最小生成树
    long GetMinimumCost();  //计算最小生成树的权重
    vector<Edge> covMinimunSpanningTree();
};


#endif // !GRAPH_H
