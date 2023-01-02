#include <iostream>
using namespace std;
void ReverseIter();

int main(){
	ReverseIter();
	return 0;
}

void ReverseIter()
{
	char *stack = new char[80];
	int top = 0;
	cin>>stack[top];
	while (stack[top] != '.')
		cin>>stack[++top] ;
	for (top -= 1; top >= 0; top--)
		cout<<stack[top];
	delete [] stack;
}