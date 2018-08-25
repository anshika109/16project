#include<iostream>
using namespace std;
int main(){
	int n,queue[10],i,front,rear,data;
	front=-1;
	rear=-1;
	cout<<"enter the no of elements:"<<endl;
	cin>>n;
	cout<<"enter the elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>data;
		if(rear==9)
		cout<<"overflow"<<endl;
		else if(front==-1){
			front=0;
			rear=0;
			queue[rear]=data;
		}
		else{
		rear=rear+1;
		queue[rear]=data;}
	}
	cout<<"inserted queue is:"<<endl;
	for(i=front;i<=rear;i++){
		cout<<queue[i];
	}
	return 0;
}
