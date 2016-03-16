#pragma once

#include "List.h"

void sort_by_value(list l)
{
	for (int start = 0; start < l.count; start++)
	{
		// Find smallest value in node list
		char smallest_value = l.nodes[start].value;
		int location = start;
		for (int i = start + 1; i < l.count; i = i + 1)
		{
			if (l.nodes[i].value < smallest_value)
			{
				smallest_value = l.nodes[i].value;
				location = i;
			}
		}

		// If smallest isn't the first entry, then swap first entry with the smallest
		if (location != start)
		{
			// remmeber what was in first entry
			char first_value = l.nodes[start].value;

			// copy smallest entry into the first spot
			l.nodes[start].value = smallest_value;

			// copy first entry into smallest entry's spot
			l.nodes[location].value = first_value;
		}
	}
}
