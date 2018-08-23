/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
    queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            Node *current=q.front();
            if(current->left)
                q.push(current->left);
            if(current->right)
                q.push(current->right);
            cout<<current->data<<" ";
            q.pop();
        }

    }
