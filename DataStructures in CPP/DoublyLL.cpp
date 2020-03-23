#include<iostream>

using namespace std;

struct node {
	node* linkprev;
	int data;
	node* linknext;
};

node* head;

void add() {
	node* temp = new node();
	if(head==NULL) {
		head = temp;
		temp->linkprev = head;
		temp->linknext = NULL;
		cout<<"\n\nEnter data: ";
		cin>>temp->data;
		return;
	}
	node* temp1 = new node();
	temp = head;
	while(temp->linknext!=NULL) {
		temp = temp->linknext;
	}
	temp->linknext = temp1;
	temp1->linkprev = temp;
	cout<<"\n\nEnter data: ";
	cin>>temp1->data;
	return;
}

void display() {
	node* temp = new node();
	temp = head;
	if(temp==NULL) {
		cout<<"\n\nNo data to display\n";
		return;
	}
	cout<<"\n\nBelow is the data\n";
	while(temp->linknext!=NULL) {
		cout<<temp->data<<endl;
		temp = temp->linknext;
		
	}
	cout<<temp->data;
	return;
}

void del() {
	int loc;
	if(head==NULL) {
		cout<<"\n\nNothing to delete\n";
		return;
	}
	node* temp = new node();
	node* temp1 = new node();
	temp=head;
	cout<<"\n\nEnter the position of the element you want to delete: ";
	cin>>loc;
	//--loc;
	int a=1,flag=0;
	if(loc==1) {
		head = temp->linknext;
		if(head==NULL) {
			delete(temp);
			return;
		}
		temp1 = temp->linknext;
		temp1->linkprev = head;
		delete(temp);
		return;
	}
	while(temp->linknext!=NULL) {
		if(loc==a) {
			temp1 = temp->linkprev;
			temp1->linknext = temp->linknext;
			temp1 = temp->linknext;
			temp1->linkprev = temp->linkprev;
			delete(temp);
			return;
		}
		temp = temp->linknext;
		a++;
	}
	temp1 = temp->linkprev;
	temp1->linknext = NULL;
	delete(temp);
	return;
}

int main() {
	int choice;
	head = NULL;
	here:cout<<"\n\nChoose\n1.Add Element\n2.Display All Element\n3.Delete element\n4.Exit\n\nAnswer: ";
	cin>>choice;
	switch(choice) {
		case 1: add();
				goto here;
		case 2: display();
				goto here;
		case 3: del();
				goto here;
		case 4: exit(0);
	}
	return 0;
}
