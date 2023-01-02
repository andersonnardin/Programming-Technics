#include <iostream>
#include <fstream>
using namespace std;
int TestRead();
int TestWrite();

int main(){
	TestRead();
	TestWrite();
	return 0;
}

int TestRead(){
	ifstream infile("lettura.txt");
	if (!infile){
		cout<<"ERROR OPENING FILE"<<endl;
		return -1;
	}
	int num;
	infile>>num;
	int* data = new int[num];
	int i=0;
	while(infile>>data[i] && i<num)
	{
		cout<<data[i]<<endl;
		i++;
	}
	delete [] data;
	infile.close();
	return 0;
}

int TestWrite(){
	const int num=10;
	int seed=3;
	srand(seed);
	int data[num];
	for (int i=0; i<num; i++)
		data[i]=rand();
	ofstream outfile("scrittura.txt");
	if (!outfile){
		cout<<" ERROR OPENING FILE "<<endl;
		return -1;
	}
	outfile<<"Number of values: "<<num<<endl;
	for (int i=0; i<num; i++)
		outfile<<data[i]<<endl;
	outfile.close();
	return 0;
}