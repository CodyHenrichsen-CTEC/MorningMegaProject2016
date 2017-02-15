//
//  Node.hpp
//  MorningMegaProject
//
//  Created by Cody Henrichsen on 2/13/17.
//  Copyright © 2017 CTEC. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

template <class Type>
class Node
{
private:
    Type nodeData;
    Node<Type>* nodePointer;
public:
    Node();
    Node(Type data);
    Node(Type data, Node<Type> * nextPointer);
    
    Type getNodeData();
    Node<Type> * getNodePointer();
    void setNodeData(Type value);
    void setNodePointer(Node<Type> * nextPointer);
};

/*
 Implementation section of the templated class!
 */

template <class Type>
Node<Type> :: Node()
{
    nodePointer = nullptr;
    //Explicitly NOT initializing nodeData
    //Because I do not know what Type it is.
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->nodeData = data;
    this->nodePointer = nullptr;
}

template <class Type>
Node<Type> :: Node(Type value, Node<Type> * nextNode)
{
    this->nodeData = value;
    this->nodePointer = nextNode;
}

template <class Type>
Type Node<Type> :: getNodeData()
{
    return nodeData;
}

template <class Type>
Node<Type> * Node<Type> :: getNodePointer()
{
    return nodePointer;
}

template <class Type>
void Node<Type> :: setNodeData(Type data)
{
    this->nodeData = data;
}

template <class Type>
void Node<Type> :: setNodePointer(Node<Type> * pointer)
{
    this->nodePointer = pointer;
}

#endif /* Node_hpp */





