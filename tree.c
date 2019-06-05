#include <stdio.h>
#include <math.h>
#include <stdlib.h>

static int solution_number;

struct tree_node
{
    int value;
    struct tree_node * sons[9];
    struct tree_node * parent;
    int son_number;
    int layer_number;
};

void back_propagate(struct tree_node * my_node)
{
    struct tree_node * current_node = my_node;
    do
    {
        printf("%d ", current_node->value);
        current_node = current_node->parent;
    }
    while(current_node);
}

int bp(struct tree_node * my_node, int my_array[])
{
    int depth = 0;
    struct tree_node * current_node = my_node;
    do
    {
        my_array[depth] = current_node->value;
        current_node = current_node->parent;
        depth++;
    }
    while(current_node);

    return depth;
}

int tree_iterate(struct tree_node * my_node, int n)
{
    int index;
    //printf("%d\n", my_node->value);

    int my_array[17];

    //if ((my_node->son_number == 0) && (my_node->layer_number == n) && is_prime(my_node->value+1))
    if ((my_node->son_number == 0) && (my_node->layer_number == n))
    {
        //back_propagate(my_node);
        bp(my_node, my_array);

        for(index = n-1; index >= 0; index--)
            printf("%d ", my_array[index]);

        printf("\n");
        solution_number++;
    }

    for(index = 0; index < my_node->son_number; index++)
        tree_iterate(my_node->sons[index], n);
}

int is_prime(int k)
{
    int ii;

    if (k == 2)
        return 1;

    for (ii = 2; ii <= sqrt(k); ii++)
    {
        if (floor(k/ii) * ii == k)
        {
            return 0;
        }
    }

    return 1;
}

void tree_build(struct tree_node * my_node, int n)
{
    int used_number[17];
    int depth;
    int available_number_list[17];
    int available_number_list_size = 0;
    int ii, jj;
    int available;

    struct tree_node * son_list[9];
    struct tree_node * my_tree_node;

    int son_number = 0;

    int my_value = my_node->value;
    int temp;

    depth = bp(my_node, used_number);

    if ((depth == n) && is_prime(my_value+1))
    {
        return;
    }

    for(ii = 2; ii <= n; ii++)
    {
        available = 1;
        for(jj=0; jj<depth; jj++)
        {
            if (used_number[jj] == ii)
            {
                available = 0;
                break;
            }
        }

        if (available == 1)
        {
            available_number_list[available_number_list_size] = ii;
            available_number_list_size++;
        }
    }

    //generate sons
    for (ii = 0; ii < available_number_list_size; ii++)
    {
        temp = available_number_list[ii];

        if ((is_prime(temp + my_value) && (my_node->layer_number != n-1)) || ( is_prime(temp + my_value) && (my_node->layer_number == n-1) && is_prime(temp + 1) ))
        {
            son_list[son_number] = (struct tree_node *) malloc(sizeof(struct tree_node));
            son_list[son_number]->parent = my_node;
            son_list[son_number]->son_number = 0;
            son_list[son_number]->layer_number = (my_node->layer_number)+1;
            son_list[son_number]->value = temp;
            son_number++;
        }
    }

    my_node->son_number = son_number;

    for(ii = 0; ii < son_number; ii++)
        my_node->sons[ii] = son_list[ii];

    for (ii = 0; ii < son_number; ii++)
    {
        tree_build(my_node->sons[ii], n);
    }
}

int main()
{
    struct tree_node * root;
    int index, ii, jj;

    int n;

    printf("input n:\n");
    scanf("%d", &n);

    //n = 6;

    root = (struct tree_node *) malloc(sizeof(struct tree_node));
    root->value = 1;
    root->parent = 0;
    root->layer_number = 1;

    tree_build(root, n);

    tree_iterate(root, n);

    printf("%d\n", solution_number);

    //free(root);

    return 0;
}
