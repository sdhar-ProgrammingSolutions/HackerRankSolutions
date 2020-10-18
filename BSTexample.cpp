#include <iostream>
using namespace std;

class Node
{
    public:
        int key;
        Node *left;
        Node *right;

        Node(int d)
        {
            key = d;
            left = nullptr;
            right = nullptr;
        }
};

class Solution
{
    public:
  		Node* insert(Node* root, int data) 
        {
            if(root == nullptr) 
            {
                return new Node(data);
            }
            else 
            {
                Node* cur;
                if(data <= root->key)
                {
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else
                {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

        // Inorder Traversal
        void inorder(Node *root)  
        {
            if (root != nullptr) 
            {
                // Traverse left
                inorder(root->left);

                // Traverse root
                cout << root->key << " -> ";

                // Traverse right
                inorder(root->right);
            }
        }

        // Find the inorder successor
        Node *minValueNode(Node *node) 
        {
        Node *current = node;

        // Find the leftmost leaf
        while (current && current->left != nullptr)
        {
            current = current->left;
        }
        return current;
        }

        // Deleting a node
        Node *deleteNode(Node *root, int key) 
        {
        // Return if the tree is empty
        if (root == nullptr) 
        {
            return root;
        }
        // Find the node to be deleted
        if (key < root->key)
        {
            root->left = deleteNode(root->left, key);
        }
        else if (key > root->key)
        {  
            root->right = deleteNode(root->right, key);
        }
        else 
        {
            // If the node is with only one child or no child
            if (root->left == NULL) 
            {
            Node *temp = root->right;
            delete root;
            return temp;
            } 
            else if (root->right == NULL) 
            {
            Node *temp = root->left;
            delete root;
            return temp;
            }

            // If the node has two children
            Node *temp = minValueNode(root->right);

            // Place the inorder successor in position of the node to be deleted
            root->key = temp->key;

            // Delete the inorder successor
            root->right = deleteNode(root->right, temp->key);
        }
        return root;
        }


}; //End of Solution



// Driver code
int main()
{
  Node *root = nullptr;
  Solution myTree;
  
  root = myTree.insert(root, 8);
  root = myTree.insert(root, 3);
  root = myTree.insert(root, 1);
  root = myTree.insert(root, 6);
  root = myTree.insert(root, 7);
  root = myTree.insert(root, 10);
  root = myTree.insert(root, 14);
  root = myTree.insert(root, 4);

  cout << "Inorder traversal: ";
  myTree.inorder(root);

  cout << "\nAfter deleting 10\n";
  root = myTree.deleteNode(root, 10);
  cout << "Inorder traversal: ";
  myTree.inorder(root);
}