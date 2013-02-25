class Graph{
	int *nodes, nSize, eSize;
	struct edge{
		int start, end;
	};
	edge *edges;
public:
	Graph(void);
	int addNode();			//adds a node to nodes and returns the position of the new node
	void delNode(int i);	//deletes a node i from nodes. has to cleanup the edges too and other stuff related
	void print();			//print nodes and edges array
	~Graph(void);
};