//
//  main.cpp
//  doublelist
//
//  Created by Ijaz Tufail on 19/09/2022.
//

#include <iostream>
using namespace std;
class doublelist{
    class node{
    public:
        int data;
        node* next;
        node* privious;
    public:
        node( ){
            next=NULL;
            privious=NULL;
            data=0;
            
        }
    };
private:
    int size;
    node* curr;
    node* head;
    node* temp;
    int count;
    int val;
public:
    doublelist( ){
        head=NULL;
        curr=NULL;
        temp=NULL;
        size=0;
        count =0;
        val=0;
        
    }
    void add( ){
        cout<<" enter size of linklist"<<endl;
        cin>>size;
        for( int i =0;i<size;i++){
            temp=new node;
            if( head==NULL){
                
                head=temp;
                curr=head;
                cout<<" enter the data in NO "<<" "<<i <<" list"<<endl;
                cin>>curr->data;
                count++;
                
            }
            else{
                curr=head;
                while (curr->next!=NULL) {
                    curr=curr->next;
                }
                curr->next=temp;
                cout<<" Enter the data in NO "<<i<<" "<<"list"<<endl;
                cin>>temp->data;
                temp->privious=curr;
                 count++;
                    
                    
                }
            
           
            }
            
        }
    void printing( ){
        while (curr->next!=NULL) {
            //cout<<"output"<< " "<<" "<<curr->data<<endl;
            curr=curr->next;
            head=curr;
        }
        
        
          
        
    }
    void atpoint( ){
        temp=new node;
        cout<<" enter the No of linklist value"<<" "<<endl;
        cin>>val;
        curr=head;
        count=0;
        while (curr->data!=val) {
            curr=curr->next;
            count++;
            
        }
        curr=head;
        for( int i=0;i<count-1;i++){
            curr=curr->next;
        }
        temp=curr;
        curr->next->next->privious=temp;
        temp->next=curr->next->next;
        
        
    }
    void remove( ){
        cout<<" enter the No of linklist val"<<" "<<endl;
        cin>>val;
        curr=head;
        count=0;
        while (curr->data!=val) {
            curr=curr->next;
            count++;
        }
        curr=head;
        for( int i=0;i<count-1;i++){
            curr=curr->next;
            
        }
        temp=curr;
        temp->next=curr->next->next;
        curr->next->next->privious=temp;
        curr=curr->next;
        delete curr;
        
        
        
        
    }
};
 
int main( ){
    doublelist l1;
    l1.add();
    l1.printing();
//    l1.atpoint();
//    l1.printing();
//    l1.remove();
//    l1.printing();
    
}
