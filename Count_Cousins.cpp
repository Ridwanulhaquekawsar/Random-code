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


-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->right = NULL;
        this->left = NULL;
    }
};
map<int, int> mp;
void level_wise_nodes(Node *root)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        Node *pr = q.front().first;
        int lv = q.front().second;
        q.pop();
        
        mp[lv]++;
        if (pr->left)
            q.push({pr->left, lv + 1});
        if (pr->right)
            q.push({pr->right, lv + 1});
    }
}

void find_cousin(Node *root)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    cout << 0 << " ";
    while (!q.empty())
    {
        Node *pr = q.front().first;
        int lv = q.front().second;
        q.pop();

        if (pr->left && pr->right)
            cout << mp[lv + 1] - 2 << " " << mp[lv + 1] - 2 << " ";
        else if (pr->left || pr->right)
            cout << mp[lv + 1] - 1 << " ";

        if (pr->left)
            q.push({pr->left, lv + 1});
        if (pr->right)
            q.push({pr->right, lv + 1});
    }
}
void tree_input(Node *&root)
{
    int val;
    cin >> val;
    queue<Node *> q;
    if (val != -1)
    {
        root = new Node(val);
        q.push(root);
    }
    while (!q.empty())
    {
        Node *pr = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        if (l != -1)
        {
            myLeft = new Node(l);
            pr->left = myLeft;
            q.push(myLeft);
        }
        if (r != -1)
        {
            myRight = new Node(r);
            pr->right = myRight;
            q.push(myRight);
        }
    }
}

int main()
{
    Node *root = NULL;
    tree_input(root);
    level_wise_nodes(root);
    find_cousin(root);

    return 0;
}
