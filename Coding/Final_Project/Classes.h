#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <string>
#include <list>
using namespace std;


class IP {
public: //depending on the compiler, private:
	int ip[4];
public:
	IP(int a, int b, int c, int d);
	IP();
	~IP();
};


class NetworkItem{
public: //depending on the compiler, protected:
	string ItemName;
	IP m_ip;
public:
	virtual void Print()const;
	virtual int Size();
	virtual NetworkItem* clone();
	NetworkItem();
	~NetworkItem();
};


class Net : public NetworkItem{
	list<NetworkItem*> NetItemList;
	list<IP> IPList;	
public:
	bool AddCopy(const NetworkItem* item);
	bool Add(NetworkItem* item);
	bool remove(const IP ipremove);
	Net(string name, IP nums);
	Net();
	~Net();
	virtual void Print(string a)const;
	virtual int Size();
	virtual Net* clone();
};


class PC : public NetworkItem{
int *mem;
public: 
	PC(string name, IP nums);
	PC();
	~PC();
	virtual PC* clone();
};

#endif