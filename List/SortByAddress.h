#pragma once

int sort_by_address(list l, int head)
{
	// don't do anything if there is only one entry in the list
	if (l.nodes[head].address == -1)
		return(head);

	// find the smallest value
	char smallest_value = l.nodes[head].value;
	int location_of_smallest = head;
	int location_pointing_to_smallest = -1;

	int previous_entry = head;
	int current_entry = l.nodes[head].address;
	while(current_entry != -1)
	{
		if (l.nodes[current_entry].value < smallest_value)
		{
			smallest_value = l.nodes[current_entry].value;
			location_pointing_to_smallest = previous_entry;
			location_of_smallest = current_entry;
		}
		previous_entry = current_entry;
		current_entry = l.nodes[current_entry].address;
	}

	if (location_of_smallest != head)
	{
		// the entry pointing to the smallest value points to what the smallest value was pointing to
		l.nodes[location_pointing_to_smallest].address = l.nodes[location_of_smallest].address;

		// smallest entry points to the original head
		l.nodes[location_of_smallest].address = head;
	}

	// run this function again on the *rest* of the list
	int next_smallest_location = sort_by_address(l, l.nodes[location_of_smallest].address);

	// set smallest to point to the second smallest
	l.nodes[location_of_smallest].address = next_smallest_location;

	// return the location of the new head of this sublist
	return(location_of_smallest);
}