#include <iostream>
#include <string>
#include <list>
#include "Classes.h"
using namespace std;

//related to IP class
//constructor
IP::IP(){
	ip[0]=0; ip[1]=1; ip[2]=2; ip[3]=3;
}
//destructor
IP::~IP(){
}
IP::IP(int a, int b, int c, int d){
	ip[0]=a; ip[1]=b; ip[2]=c; ip[3]=d;
}



//related to NetworkItem class
//constructor
NetworkItem::NetworkItem(){
}
//destructor
NetworkItem::~NetworkItem(){
}
//methods cloned
void NetworkItem::Print()const{
}
int NetworkItem::Size(){
	return 0;
}
NetworkItem* NetworkItem::clone() {return (new NetworkItem(*this));}



//related to Net class
//constructor
Net::Net(){
}
//destructor
Net::~Net(){
}
//parameters manager
Net::Net(string name, IP nums){
	m_ip = nums;
	//if it was assigned an IP, create a list based on it
	if (m_ip.ip){
		IP n_ip = m_ip;
		for (int i=1; i<20; i++){
			n_ip.ip[3]++;
			IPList.insert(IPList.end(),1,n_ip);
		}
	}
	ItemName = name;
}
//method AddCopy
bool Net::AddCopy(const NetworkItem* item){
	//creates the iterator
	list<NetworkItem*>::iterator it1 = NetItemList.begin();
	//transfer all the items to the net
	for (auto const &i: NetItemList) {
		it1++;
		NetItemList.assign(1,*it1);
    }	
	return 0;
}
//method Add
bool Net::Add(NetworkItem* item){
	//if it was not assigned an IP, take it from the list
	if (item->m_ip.ip[0]==0){
		item->m_ip = IPList.front();
	}
	//insert the item to the list
	NetItemList.insert(NetItemList.end(),1,item);
	//remove the IP from the list of available IPs
	IPList.pop_front();
	return 0;
}
//method remove
bool Net::remove(const IP ipremove){
	//insert the IP to the list of available IPs
	IPList.insert(IPList.end(),1,ipremove);
	//create two iterators to deal with items in the list
	list<NetworkItem*>::iterator it1 = NetItemList.begin();
	list<NetworkItem*>::iterator it2 = NetItemList.begin();
	//search for the IP of the item in the list
	for (auto const &i: NetItemList) {
		//comparison of IPs
		if((i->m_ip.ip[0]==ipremove.ip[0])&&(i->m_ip.ip[1]==ipremove.ip[1])&&(i->m_ip.ip[2]==ipremove.ip[2])&&(i->m_ip.ip[3]==ipremove.ip[3])){
			it2 = it1;
		}
		it1++;
    }
    //remove the item from the list
	NetItemList.remove(*it2);
	return 0;
}
//method Print
void Net::Print(string a)const{
	//search for all the item in the list of the net
	for (auto const &i: NetItemList) {
        cout << "Item Name: " << i->ItemName << " and IP: ";
        for (auto const &j: i->m_ip.ip){
        	cout << j << ".";
        }
        cout << endl;
    }
}
//method Size
int Net::Size(){
	cout<<"The size of the network is: "<<NetItemList.size()*sizeof(int)*4<<" bytes."<<endl;
	return 0;
}
//clone related to the parent
Net* Net::clone(){return (new Net(*this));}



//related to PC class
//constructor
PC::PC(){
}
//destructor
PC::~PC(){
}
//parameters manager
PC::PC(string name, IP nums){
	m_ip = nums;
	ItemName = name;
}
//clone related to the parent
PC* PC::clone(){return (new PC(*this));}