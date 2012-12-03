#ifndef DIJKSTRA
#define DIJKSTRA

#define ELEMENTTYPE int

struct node {
    ELEMENTTYPE data;
    
};

struct dij_node {
    ELEMENTTYPE data;
    double  neigbourDist;
    double  minDist;
    node * neigbour;
    node * lastnode;
};

struct dij_node * PITEM, ITEM;

class dijstra
{
public:
    dijstra();
    virtual ~dijstra(int n_nodes, ELEMENTTYPE[] nodeValue);
    void constructNet(int index_a, int index_b, double neighbourDist);
    void getDijkstra();
    void output();
    PITEM pHead;
};


#endif
