#include <iostream>
#include "Graph.h"

using namespace std;

int main(){
	cout<<"Hello world!"<<endl;
	Graph g;
	g.print();
	cout<<"added node "<<g.addNode()<<endl;
	cout<<"added node "<<g.addNode()<<endl;
	cout<<"added node "<<g.addNode()<<endl;
	cout<<"added node "<<g.addNode()<<endl;
	cout<<"added node "<<g.addNode()<<endl;
	g.addEdge(0,3);
	g.addEdge(3,2);
	g.addEdge(1,5);
	g.print();
	return 0;
}