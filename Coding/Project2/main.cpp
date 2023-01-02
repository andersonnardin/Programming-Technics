#include "Node.h"
#include <iostream>
using namespace std;

int main(){
Node *n=new Node('A');
n->SetLink(new Node('B'));
cout<<n->GetData()<<" ";
cout<<n->GetLink()->GetData()<<endl;
delete n->GetLink();
delete n;
}