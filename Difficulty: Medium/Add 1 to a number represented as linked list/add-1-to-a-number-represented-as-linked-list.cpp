//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* reverselist(Node* head){
        Node* prev=NULL;
        
        while(head){
            Node* nxxt=head->next;
            head->next=prev;
            prev=head;
            head=nxxt;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        head=reverselist(head);
        Node* temp=head;
        int carry=1;
        
        while(temp && carry){
            int val=temp->data+carry;
            
            temp->data=val%10;
            carry=val/10;
            if(carry && !temp->next)
                temp->next=new Node(0);
            temp=temp->next;
        }
        
        head=reverselist(head);
        return head;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends