#pragma once

struct node
{
	char value;
	int address;
};

struct list
{
	node* nodes;
	int count;
};

void print_nodes(list l)
{
	for (int i = 0; i < l.count; i++)
	{
		printf("Entry %d is %c and points to entry %d\n", i, l.nodes[i].value, l.nodes[i].address);
	}
	printf("\n");
}

void print_nodes_by_address(list l, int head)
{
	while (head !=-1)
	{
		printf("Entry %d is %c and points to entry %d\n", head, l.nodes[head].value, l.nodes[head].address);
		head = l.nodes[head].address;
	}
}

// Initialize nodes for the first time
void initialize_nodes(list l)
{
	for (int i = 0; i < l.count; i = i + 1)
	{
		char offset = rand() % 26;
		l.nodes[i].value = 'a' + offset;
		l.nodes[i].address = i + 1;
	}
	l.nodes[l.count - 1].address = -1;
	print_nodes(l);
}