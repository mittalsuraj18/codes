/*
Create a blalanced binary tree from input array 
*/
#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *left;
	node *right;
};
node * create_tree(int arr[],int n)
{
	queue<node *> q;
	node *Head=new node();
	Head->data=arr[0];
	//Head->left=new node();
	//Head->right=new node();
	Head->left=NULL;
	Head->right=NULL;
	q.push(Head);
	for(int i=1;i<n;i=i+2)
	{
		node *temp=new node();
		if(i<n){
		temp->data=arr[i];
		temp->left=NULL;
		temp->right=NULL;
	    q.front()->left=temp;
	    q.push(temp);
	    temp=new node();
	    }
	    if(i+1<n){
	    temp->data=arr[i+1];
	    temp->left=NULL;
	    temp->right=NULL;
	    q.front()->right=temp;
	    q.push(temp);
	    }
	    q.pop();
	}
	/*while(!q.empty())
	{
		q.front()=NULL;
		q.pop();
	}*/
	return Head;
}
void preorder(node * root)
{
	if(root==NULL)
		return;
	else 
	{
		preorder(root->left);
		cout<<root->data<<" ";
		preorder(root->right);
	}
	
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	int arr[20];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	node *root=create_tree(arr,n);
	preorder(root);
	return 0;
}
