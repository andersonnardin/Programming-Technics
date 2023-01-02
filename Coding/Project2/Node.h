#ifndef NODE_H
#define NODE_H
class Node{
char data;
Node *link;
public:
Node(char d, Node *l=0);
~Node();
char GetData()const;
Node * GetLink()const;
void SetData(char d);
void SetLink(Node *l);
};
#endif