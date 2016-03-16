#pragma once

#include "stdio.h"

struct tree_node
{
	char v;
	int l;
	int r;
};

void insert_tree(tree_node* tree, int head, int current)
{
	tree[current].l = -1;
	tree[current].r = -1;
	if (head == current)
		return;

	int current_value = tree[current].v;
	int head_value = tree[head].v;
	
	if (current_value < head_value)
	{
		//is there something in the left side?
		if (tree[head].l == -1)
			tree[head].l = current;
		else
			insert_tree(tree, tree[head].l, current);
	}
	else
	{
		//is there something in the right side?
		if (tree[head].r == -1)
			tree[head].r = current;
		else
			insert_tree(tree, tree[head].r, current);
	}
}

void create_tree(tree_node* tree, int count)
{
	for (int i = 0; i < count; i++)
		insert_tree(tree, 0, i);
}

void print_tree(tree_node* tree, int count)
{
	for (int i = 0; i < count; i++)
		printf("entry %d is %c and l is %d and r is %d\n", i, tree[i].v, tree[i].l, tree[i].r);
}

void print_sorted_tree_values(tree_node* tree, int head)
{
	//print left side of tree
	if (tree[head].l != -1)
		print_sorted_tree_values(tree, tree[head].l);
	
	//print current value
	printf("%c\n", tree[head].v);

	//print right side of tree
	if (tree[head].r != -1)
		print_sorted_tree_values(tree, tree[head].r);
}

void test_tree()
{
	tree_node tree[6];
	tree[0].v = 'S';
	tree[1].v = 'O';
	tree[2].v = 'P';
	tree[3].v = 'H';
	tree[4].v = 'I';
	tree[5].v = 'E';
	create_tree(tree, 6);
	print_tree(tree, 6);
	print_sorted_tree_values(tree, 0);
}