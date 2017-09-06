#pragma once
#include <vector>
#include <queue>
#include <stdlib.h>
#include <iostream>
#include "StateStruct.h"
#include "Map.h"

class Node
{
public:
	
	Node(StateStruct::State state, Node* parent, int cost);
	~Node();

	void expandChildren();
	int heuristic();

	

	int pathCost;

	/// heuristicCost is f(n) = g(n) + h(n)
	int heuristicCost;
	StateStruct::State getState() { return mState; };
	std::vector<Node*> getChildren() { return mChildren; };

private:
	int mCost;
	StateStruct::State mState;
	Node* mParent;
	std::vector<Node*> mChildren;

};



