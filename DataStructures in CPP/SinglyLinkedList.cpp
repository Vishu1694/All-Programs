#include<iostream>

using namespace std;

struct node {
	int data;
	node* link;
};

node* head;

void add() {
	node* temp = new node();
	if(head==NULL) {
		head = temp;
		cout<<"Enter data: ";
		cin>>temp->data;
		temp->link=NULL;
		return;
	}
	node* temp1 = new node();
	cout<<"\nEnter data: ";
	cin>>temp1->data;
	temp1->link=NULL;
	temp=head;
	while(temp->link!=NULL) {
		temp=temp->link;
	}
	temp->link=temp1;
}

void display() {
	node* temp = head;
	if(head==NULL) {
		cout<<"No data";
		return;
	}
	else {
		while(temp->link!=NULL) {
			cout<<temp->data<<endl;
			temp=temp->link;
		}
		cout<<temp->data;
	}
}

void del() {
	node* temp=head;
	node* temp1=temp->link;
	int loc;
	cout<<"\n\nBelow are the elements present\nEnter the location which you want to delete\n";
	display();
	cout<<"\n\n";
	cin>>loc;
	int a = 1;
	--loc;
	if(loc==0) {
		head=temp1;
		delete(temp);
		return;
	}
	while(temp1->link!=NULL) {
		if(a==loc) {
			temp->link = temp1->link;
			delete(temp1);
			return;
		}
		temp = temp1;
		temp1 = temp1->link;
		a++;
	}
	temp->link=NULL;
	delete(temp1);
	return;
}

int main() {
	head = NULL;
	int choice;
	here:cout<<"\n\n1.Display all elements\n2.Add Elements\n3.Delete Elements\n4.Exit\n\n";
	cin>>choice;
	cout<<"\n\n";
	switch(choice) {
		case 1: display();
				goto here;
		case 2: add();
				goto here;
		case 3: del();
				goto here;
		case 4: exit(0);
		default: cout<<"Wrong choice";
	}
	return 0;
}
