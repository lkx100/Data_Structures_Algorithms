// Queues in Linked List
#include <iostream>
using namespace std;

int choice;

class Node{

	public:
		int data;
		Node* next;

	Node(int data){
		this -> data = data;
		this -> next = NULL;
	}
};

void enqueue(Node* &head, Node* &tail){
	// insert at tail
	int d;
	cout << "Enter data : ";
	cin >> d;
	if (head == NULL){
		Node* temp = new Node(d);
		temp -> next = head;
		head = temp;    // tail & head both will point to first node 
		tail = head;
	}
	else {
		Node* newNode = new Node(d);
		Node* temp = head;
		while (temp -> next != NULL){
			temp = temp -> next;
		}
		temp -> next = newNode;
		tail = newNode;
	}
	cout << "\n" << d << " Enqueued!" << endl;
}

void dequeue(Node* &head, Node* &tail){
	// delete from head
	if (head == NULL){
		cout << "\nCannot dequeue an Empty List" << endl;
		return;
	}
	Node* temp = head;
	head = head -> next;
	temp -> next = NULL;
	cout << "\n" << temp -> data << " Dequed!" << endl;
	delete temp;
}

void printList(Node* &head){
	if (head == NULL){
		cout << "\nEmpty Queue !" << endl;
	}
	else {
		cout << "\nList : ";
		Node* temp = head;
		while (temp != NULL){
			cout << temp -> data << " ";
			temp = temp -> next;
		}
		cout << endl;
	}
}

void headTail(Node* &head, Node* &tail){
	if (head == NULL){
		cout << "\nEmpty Queue" << endl;
	}
	else {
		cout << "\nFront : " << head -> data << ", Rear : " << tail -> data << endl;
	}
}

void accept(){
	cout << "\n1. Enque\n2. Dequeue\n3. Show Queue\n4. Display Front & Rear\n5. Exit the Program\nEnter Choice : ";
	cin >> choice;
}

int main(){
	
	Node* head = NULL;
	Node* tail = head;

	accept();

	while (1) {
		switch ( choice ) {
		case 1:
			enqueue(head, tail);
			break;
		
		case 2:
			dequeue(head, tail);
			break;

		case 3:
			printList(head);
			break;

		case 4:
			headTail(head, tail);
			break;

		case 5:
			cout << "Thank you for your time" << endl;
			return 0;

		default:
			cout << "Invalid Choice! Try Again" << endl;
			break;
		}
		accept();
	}

}