#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
    public:
        Node(){}
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
        Node(int data, Node *next){
            this->data = data;
            this->next = next;
        }

        Node *convertArrayToLinkedlist(vector<int> &arr){
            Node *head = new Node(arr[0]);
            Node *ptr = head;
            for(int i = 1 ; i < arr.size(); i++){
                Node *temp = new Node(arr[i]);
                ptr->next  = temp;
                ptr = ptr->next;
            }
            return head;
        } 
        void Traversal(Node *head){
            Node *ptr = head;
            while (ptr->next != nullptr)
            {
                std::cout << ptr->data << std::endl;
                ptr = ptr->next;
            }
            
        }  
};

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node *head = new Node;
    head = head->convertArrayToLinkedlist(arr);
    
    head->Traversal(head);
    return 0;
}