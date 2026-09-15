typedef struct {
    tree *node;
    int pos;
} queue_item;

void btUpView(tree *root)
{
    if (root == NULL)
        return;

    int capacity = 16;
    int front = 0;
    int back = 0;

    queue_item *queue = malloc(capacity * sizeof(queue_item));

    queue[back++] = (queue_item){root, 0};

    int min_pos = 0;
    int max_pos = 0;

    /* Находим крайние горизонтальные позиции */
    while (front < back)
    {
        queue_item current = queue[front++];

        if (current.pos < min_pos)
            min_pos = current.pos;

        if (current.pos > max_pos)
            max_pos = current.pos;

        if (current.node->left != NULL)
        {
            if (back >= capacity)
            {
                capacity *= 2;
                queue = realloc(queue,
                                capacity * sizeof(queue_item));
            }

            queue[back++] =
                (queue_item){current.node->left,
                             current.pos - 1};
        }

        if (current.node->right != NULL)
        {
            if (back >= capacity)
            {
                capacity *= 2;
                queue = realloc(queue,
                                capacity * sizeof(queue_item));
            }

            queue[back++] =
                (queue_item){current.node->right,
                             current.pos + 1};
        }
    }

    int size = max_pos - min_pos + 1;

    int *top = malloc(size * sizeof(int));
    int *used = calloc(size, sizeof(int));

    front = 0;
    back = 0;

    queue[back++] = (queue_item){root, 0};

    /* BFS: первый узел на позиции виден сверху */
    while (front < back)
    {
        queue_item current = queue[front++];

        int index = current.pos - min_pos;

        if (!used[index])
        {
            top[index] = current.node->key;
            used[index] = 1;
        }

        if (current.node->left != NULL)
        {
            queue[back++] =
                (queue_item){current.node->left,
                             current.pos - 1};
        }

        if (current.node->right != NULL)
        {
            queue[back++] =
                (queue_item){current.node->right,
                             current.pos + 1};
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (used[i])
            printf("%d ", top[i]);
    }

    free(top);
    free(used);
    free(queue);
}