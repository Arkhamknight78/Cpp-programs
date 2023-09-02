#include<iostream>
#include<queue>
using namespace std;

class tree{
    public:
    int data;
    tree* left;
    tree* right;

    tree(int d){
        data=d;
        left=NULL;
        right=NULL;
    }

};

class Pair{
    public:
    int height;
    int diameter;
};

tree* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }

    tree* root=new tree(d);
    root->left=buildTree();
    root->right=buildTree();

    return root;
}
void bfs(tree* root){
    queue<tree*> q;
    q.push(root); 
    q.push(NULL);
    while(!q.empty()){
        tree* f=q.front();
        if(f==NULL){
            q.pop();
            cout<<endl;
            if(!q.empty()){    
                q.push(NULL);}
        }
        else
        {
            cout<<f->data<<" ,";
            q.pop();
             if(f->left){
                q.push(f->left);
            }           
            if(f->right){
                q.push(f->right);
            }
        }
    }
}

Pair diameter(tree* root){
    Pair p;
    if(root==NULL){
        p.diameter=p.height=0;
        return p;
    }
    //otherwise
    Pair left=diameter(root->left);
    Pair right=diameter(root->right);

    p.height=max(left.height,right.height)+1;
    p.diameter=max(left.height+right.height,max(left.diameter,right.diameter));

return p;
}
void rightview(tree* root, int level, int&maxlevel){
    if(root==NULL){
        return;
    }
    if(maxlevel<level){
        cout<<root->data<<" ";
        maxlevel=level;
    }
    rightview(root->right, level+1, maxlevel);
    rightview(root->left, level+1, maxlevel);
}

int main()
{
    tree* root= buildTree();
    bfs(root);//level order traversal
    cout<<endl;
    int max=0;
    rightview(root,0,max);
    cout<<endl;
    Pair p=diameter(root);
    cout<<p.height<<endl;
    cout<<p.diameter<<endl;
    return 0;
}

