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
	cout<<"2 and 3 are "<<(g.isConnected(2,3)?"connected":"not connected")<<endl;
	try{
		cout<<"distance 0 and 2 is "<<g.distance(0,2)<<endl;
	}catch(int i){
		cout<<"Cought "<<i<<endl;
	}
	g.print();
	return 0;
}