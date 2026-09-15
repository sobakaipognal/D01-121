#include <stdio.h>

typedef int datatype;

typedef struct tree
{
    datatype key;
    struct tree *left, *right;
    struct tree *parent; // ссылка на родителя
} tree;

tree * findBrother(tree *root, int key)
{
    if(root == NULL || root->key == key) return 0;
    char rotation;
    tree *node = root;
    while(key != node->key && (node->left != NULL || node->right != NULL))
    {
        if(key < node->key)
        {
            if(node->left == NULL) return 0;
            node = node->left;
            rotation = 'l';
        }
        else if (key > node->key)
        {
            if(node->right == NULL) return 0;
            node = node->right;
            rotation = 'r';
        }
    }

    if(key == node->key && rotation == 'r')
    {
        node = node->parent;
        return node->left;
    } 
    else if(key == node->key && rotation == 'l') 
    {
        node = node->parent;
        return node->right;
    }
    else
    {
        return 0;
    }
}