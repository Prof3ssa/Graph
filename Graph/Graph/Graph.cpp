#include "Graph.h"

Graph::Graph(void){
	size = 1;
	nodes = new int[size];
	edges = new edge[size];
}
Graph::~Graph(){
	delete[] nodes;
	delete[] edges;
}