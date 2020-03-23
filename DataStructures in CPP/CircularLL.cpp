#include<iostream>

using namespace std;

struct node {
	int data;
	node* link;
};

node* head;

int display() {
	node* temp = new node();
	if(head!=NULL) {
		temp=head;
		while(temp->link!=head) {
			cout<<temp->data<<endl;
			temp=temp->link;
		}
		cout<<temp->data;
		return 1;
	}
	else {
		cout<<"No data";
		return 0;
	}
}

void add() {
	node* temp = new node();
	if(head==NULL) {
		head=temp;
		cout<<"\n\nEnter data: ";
		cin>>temp->data;
		temp->link=head;
	}
	else {
		temp=head;
		while(temp->link!=head) {
			temp=temp->link;
		}
		node* temp1 = new node();
		temp->link=temp1;
		temp1->link=head;
		cout<<"Enter data: ";
		cin>>temp1->data;
	}
}

void del() {
	int loc;
	int a=1;
	if(display()==0) {
		return;
	}
	cout<<"\n\nBelow is the data\n";
	a=display();
	cout<<"\n\nEnter the location whose data you want to delete\n\nLocation: ";
	cin>>loc;
	--loc;
	if(loc<0) {
		cout<<"\nWrong entry, try again";
		return;
	}
	if(loc==0) {
		node* temp = head;
		node* temp1 = temp->link;
		if(temp1==head) {
			head=NULL;
			delete temp;
			return;
		}
		while (temp1->link!=temp)
		{
			temp1=temp1->link;
		}
		temp1->link=temp->link;
		head=temp->link;
		delete temp;
		
	}
	else {
		node* temp = head;
		node* temp1 = temp->link;
		while(temp1->link!=head) {
			if(loc==a) {
				temp->link = temp1->link;
				temp1->link=NULL;
				delete temp1;
				return;
			}
			temp = temp1;
			temp1 = temp1->link;
			a++;
		}
		temp->link=head;
		temp1->link=NULL;
		delete temp1;
		return;
	}
	/*
	node* temp = head;
	node* temp1 = temp->link;
	while(temp1->link!=head){
		if(loc==a) {
				temp->link = temp1->link;
				temp1->link=NULL;
				delete temp1;
				return;
			}
			temp = temp1;
			temp1 = temp1->link;
			a++;
		}
		temp->link=head;
		temp1->link=NULL;
		delete temp1;
		return;
	*/
}

int main() {
	head = NULL;
	int choice;
	here:cout<<"\n\n1.Display all data\n2.Add data\n3.Delete any data\n4.Exit";
	cout<<"\n\nAnswer: ";
	cin>>choice;
	switch(choice) {
		case 1: cout<<"\n\n";
				display();
				goto here;
		case 2: add();
				goto here;
		case 3: del();
				goto here;
		case 4: exit(0);
	}
	return 0;
}
