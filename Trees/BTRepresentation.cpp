class Solution {
public:

    Node* buildTree(vector<int>& v) {

        Node* root = new Node(v[0]);

        queue<Node*> q;
        q.push(root);

        int i = 1;

        while (i < v.size()) {

            Node* curr = q.front();
            q.pop();

            curr->left = new Node(v[i]);
            q.push(curr->left);
            i++;

            if (i < v.size()) {
                curr->right = new Node(v[i]);
                q.push(curr->right);
                i++;
            }
        }

        return root;
    }
};