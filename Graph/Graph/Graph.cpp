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