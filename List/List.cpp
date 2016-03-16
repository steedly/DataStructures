// List.cpp : Defines the entry point for the console application.
//

#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "List.h"
#include "Tree.h"
#include "SortByValue.h"
#include "SortByAddress.h"

void test_sorting()
{
	const int number_of_nodes = 10;

	// Grab memory for my nodes
	node nodearray[number_of_nodes];
	list l;
	l.nodes = nodearray;
	l.count = number_of_nodes;

	// Initialize nodes for the first time
	initialize_nodes(l);

	// sort by address
	int new_head = sort_by_address(l, 0);
	printf("New head = %d\n", new_head);

	// display the sorted list
	print_nodes_by_address(l, new_head);

	// sort by value
	sort_by_value(l);

	// display the sorted list
	printf("\nWe sorted by value...here's what it looks like:\n");
	print_nodes_by_address(l, new_head);

	// sort by address
	new_head = sort_by_address(l, new_head);
	printf("\nYou screwed it up, so I sorted by address again...here's what it looks like:\n");
	printf("New head = %d\n", new_head);

	// display the sorted list
	print_nodes_by_address(l, new_head);
}

void Sophies_function(int count)
{
	for (int i = 0; i < count; i = i+1)
	{
		printf("%d, ", i);
	}
	printf("%d", count);
}

#include "ASCII_Printer.h"

int main()
{
	int count = 100;
	//test_sorting();
	test_tree();
	//Sophies_function(count);

	FILE *fp;
	fopen_s(&fp, "SophiesOutput.txt", "w");

#if 0
	ASCII_Printer('S', fp);
	ASCII_Printer('O', fp);
	ASCII_Printer('P', fp);
	ASCII_Printer('H', fp);
	ASCII_Printer('I', fp);
	ASCII_Printer('E', fp);
#endif // DEBUG

	//ASCII_Printer('B', fp);
	//ASCII_Printer('E', fp);
	//ASCII_Printer('L', fp);
	//ASCII_Printer('L', fp);
	//ASCII_Printer('A', fp);
	/*
 	ASCII_Printer('A', fp);
	ASCII_Printer('B', fp);
	ASCII_Printer('C', fp);
	ASCII_Printer('D', fp);
	ASCII_Printer('B', fp);
	ASCII_Printer('E', fp);
	ASCII_Printer('F', fp);
	ASCII_Printer('G', fp);
	ASCII_Printer('H', fp);
	ASCII_Printer('I', fp);
	ASCII_Printer('J', fp);
	ASCII_Printer('K', fp);
	ASCII_Printer('L', fp);
	ASCII_Printer('M', fp);
	ASCII_Printer('N', fp);
	ASCII_Printer('O', fp);
	ASCII_Printer('P', fp);
	ASCII_Printer('R', fp);
	ASCII_Printer('Q', fp);
	ASCII_Printer('S', fp);
	ASCII_Printer('T', fp);
	ASCII_Printer('U', fp);
	ASCII_Printer('V', fp);
	ASCII_Printer('W', fp);
	ASCII_Printer('X', fp);
	ASCII_Printer('Y', fp);
	ASCII_Printer('Z', fp);
	*/
	fclose(fp);

	_getch();
}