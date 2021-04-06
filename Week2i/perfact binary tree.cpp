    #include<bits/stdc++.h>
    using namespace std;

    struct node{
        int data;
        node *left,*right;
    };

    node* new_node(int data)
    {
        node* temp=new node();
        temp->data=data;
        temp->left=temp->right=NULL;

        return temp;

    }
    int height(struct node* root)
    {
        node* temp=root;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->left;
        }
        return count;
    }

    bool isPerfactUtil(struct node* root,int level,int h)
    {
        if(!root)return true;
        else if(root->right && root->left)
        return isPerfactUtil(root->left,level+1,h)
                    &&isPerfactUtil(root->right,level+1,h);
        else if(!root->left &&!root->right)
        return (level+1==h);
        else 
        return false;
    }
    bool isPerfact(struct node* root)
    {
        int h=height(root);
        return isPerfactUtil(root,0,h);
    }
    int main()
    {
        struct node* root=NULL;
        root=new_node(10);
         root->left=new_node(20);
          root->left->left=new_node(30);
           root->left->right=new_node(12);
            root->right=new_node(18);
             root->right->left=new_node(22);

            if(isPerfact(root))
            cout<<"yes";
            else
            cout<<"No";
            
             return 0;

    

    }
