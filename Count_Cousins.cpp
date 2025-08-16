#include<bits/stdc++.h>
using namespace std;
int sz,n,l,r,totl;

class Node{
   public:
      int val;
      Node* left;
      Node* right;
   Node(int val){
      this->val = val;
      this->left = NULL;
      this->right = NULL;
   }
};

Node* input_tree(){
    cin>>n; Node* root=new Node(n); queue<Node*>q; q.push(root); Node* p; Node* left; Node* right; while(!q.empty()){
        p=q.front(); q.pop(); cin>>l>>r; if(l!=-1){left=new Node(l); p->left=left; q.push(left);} if(r!=-1){
            right=new Node(r); p->right=right; q.push(right);
        }
    }return root;
}

void cnt_cousin(Node* root){
    if (!root){return;} queue<pair<Node*,Node*>>q; q.push({root,NULL}); while(!q.empty()){
        sz=q.size(); totl=sz; vector<pair<Node*,Node*>>lvlnodes; while(sz--){lvlnodes.push_back(q.front()); q.pop();} map<Node*,int>sibcnt; for(auto p : lvlnodes){
            sibcnt[p.second]++;} for(auto p : lvlnodes){
            Node* node=p.first; Node* prnt=p.second; node->val=totl-sibcnt[prnt]; if(node->left){q.push({node->left,node});} if(node->right){q.push({node->right,node});}
        }
    }
}

void print_tree(Node* root){
    queue<Node*>q({root}); while(!q.empty()){Node* p=q.front(); q.pop(); cout<<p->val<<" "; if(p->left){q.push(p->left);} if(p->right){q.push(p->right);}}
}

int main(){
    Node* root=input_tree(); cnt_cousin(root); print_tree(root);
}
