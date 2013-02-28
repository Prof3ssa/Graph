#pragma once
#include "Graph.h"
#include <iostream>
using namespace std;

Graph::Graph(void){
	nSize = 1;
	eSize = 0;
	nodes = new int[nSize];
	edges = new edge[eSize];
	nodes[0] = 0;
}
Graph::~Graph(){
	delete[] nodes;
	delete[] edges;
}

int Graph::addNode(){
	int *newNodes = new int[nSize+1];
	for(int i=0;i<nSize;i++){
		newNodes[i] = nodes[i];
	}
	newNodes[nSize] = newNodes[nSize-1]+1;
	delete[] nodes;
	nodes = newNodes;
	nSize++;
	return nSize-1;
}
int Graph::addEdge(int start, int end){
	edge *newEdges = new edge[eSize+1], newEdge;
	for(int i=0;i<eSize;i++)
		newEdges[i] = edges[i];
	newEdge.start = start;
	newEdge.end = end;
	newEdges[eSize++] = newEdge;
	delete[] edges;
	edges = newEdges;
	return eSize-1;
}

//checks if i and j are connected
//now, it only looks for direct connections. Need to work on a way 
//to get all paths
bool Graph::isConnected(int i, int j){
	//need to work on this algorithm to also search paths. For now it's only direct links
	for(int i=0;i<eSize;i++){
		if((edges[i].start == i || edges[i].end == i) && (edges[i].start == j || edges[i].end == j))
			return true;
	}
	return false;
}

// returns the distance between i and j
// dummy function for now
int Graph::distance(int i, int j){
	// throws NOT_CONNECTED exception when no edge found
	int distance = 0, iPos, jPos;
	try{
		iPos = getedgePos(i);
		jPos = getedgePos(j);
	}catch(int i){
		if(i==EDGE_NOT_FOUND)
			throw i;
	}
	throw NOT_CONNECTED;
}

// prints the edges and nodes arrays
void Graph::print(){
	cout<<"{";
	for(int i=0;i<nSize;i++)
		cout<<nodes[i]<<",";
	cout<<"\b}\n";
	cout<<"{";
	for(int i=0;i<eSize;i++)
		cout<<"["<<edges[i].start<<","<<edges[i].end<<"],";
	cout<<"\b}\n";
}
int Graph::getedgePos(int e){
	// this needs to return an array of edges instead of one. 
	// throws EDGE_NOT_FOUND exception if the node is not present in the edges array
	for(int i=0;i<Graph::eSize;i++)
		if(edges[i].start == e || edges[i].end == e)
			return i;
	throw EDGE_NOT_FOUND;
}
