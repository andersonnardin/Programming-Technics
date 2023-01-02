#include "Node.h"
#include <iostream>
using namespace std;
Node::Node(char d, Node *l){
data=d;
link=l;
cout<<"Node("<<data<<")"<<endl;
}
Node::~Node(){
cout<<"~Node("<<data<<")"<<endl;
}
char Node::GetData()const{
return data;
}
Node * Node::GetLink()const{
return link;
}
void Node::SetData(char d){
data=d;
}
void Node::SetLink(Node *l){
link=l;
}