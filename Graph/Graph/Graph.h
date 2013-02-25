class Graph{
	int *nodes, size;
	struct edge{
		int start, end;
	};
	edge *edges;
public:
	Graph(void);
	~Graph(void);
};