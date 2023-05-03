#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*left=NULL;
    Node*right=NULL;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
int search(int inorder[],int start,int end,int curr ){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }return -1;
}
void print(Node * root){
    if(root==NULL)return;
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
Node* buildtree(int preorder[],int inorder[],int start,int end){
    static int index=0;
    if(start>end){
        return NULL;
    }
    int curr=preorder[index];
    index++;
    Node* node=new Node(curr);
    if(start==end)return node;
    int pos=search(inorder,start,end,curr);
    node->left=buildtree(preorder,inorder,start,pos-1);
    node->right=buildtree(preorder,inorder,pos+1,end);
    return node;

}
int main(){
    int preorder[]={7,2,4,3,5};
    int inorder[]={4,2,7,5,3};


    // buildtree
    Node* root=buildtree(preorder,inorder,0,4);
    print(root);


return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//  string str="helloworld";
//  int fint=str.find('wo');
//  cout<<fint;

// return 0;
// }