#include <iostream>
#include <string>
#include <list>
#include "Classes.h"
using namespace std;

int main(){

//A possible test to assess the developed class hierarchy:
Net root("root",IP(10,1,3,1));
PC* pc= new PC("pc",IP());
root.Add(pc);
Net* nodo1 = new Net("node1",IP());
for(int i=0;i<5;i++){
	PC* pc = new PC("pc1",IP());
	nodo1->Add(pc);}
Net* nodo2 = new Net("node2",IP());
for(int i=0;i<5;i++){
	PC* pc = new PC("pc2",IP());
	nodo2->Add(pc);}
nodo1->AddCopy(nodo2);
root.Add(nodo1);
root.AddCopy(nodo2);
root.Add(nodo2);
root.Print("");
cout<<"Net size = "<<root.Size()<<endl;
root.remove(IP(10,1,3,3));//where w.x.y.z is the address of the NetworkItem to be removed
root.Print("");
cout<<"Net size = "<<root.Size()<<endl;

/*
//My tests to assess the class hierarchy:
Net root("root",IP(10,1,3,1));
PC* pc= new PC("pc1",IP());
root.Add(pc);
root.Print("");
cout<<"-----------------------"<<endl;
PC* pc2= new PC("pc2",IP());
root.Add(pc2);
root.Print("");
cout<<"-----------------------"<<endl;
PC* pc3= new PC("pc3",IP());
root.Add(pc3);
root.Print("");
cout<<"-----------------------"<<endl;
root.Size();
cout<<"-----------------------"<<endl;
root.remove(IP(10,1,3,3));
root.Print("");
*/
}