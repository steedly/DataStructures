#pragma once


void ASCII_Printer(char c, FILE *fp)
{
	//fprintf(fp, "\n here's what %c looks like:\n", c);
	switch (c)
	{
	case 'A':
		fprintf(fp, "         \n"); 
		fprintf(fp, "  ****** \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		break;
	case 'B':
		fprintf(fp, "         \n");
		fprintf(fp, " ******* \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " ******* \n");
		fprintf(fp, " ******* \n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ******* \n");
		break;
	case 'C':
		fprintf(fp, "         \n");
		fprintf(fp, "  *******\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " ********\n");
		fprintf(fp, "  *******\n");
		break;
	case 'D':
		fprintf(fp, "         \n");
		fprintf(fp, " ******* \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ******* \n");
		break;
	case 'E':
		fprintf(fp, "         \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		break;
	case 'F':
		fprintf(fp, "         \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		break;
	case 'G':
		fprintf(fp, "         \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **  ****\n");
		fprintf(fp, " **  ****\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		break;
	case 'H':
		fprintf(fp, "         \n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		break;
	case 'I':
		fprintf(fp, "         \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		break;
	case 'J':
		fprintf(fp, "         \n");
		fprintf(fp, "     ****\n");
		fprintf(fp, "     ****\n");
		fprintf(fp, "       **\n");
		fprintf(fp, "       **\n");
		fprintf(fp, "       **\n");
		fprintf(fp, "       **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " ********\n");
		fprintf(fp, "  ****** \n");
		break;
	case 'K':
		fprintf(fp, "         \n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **   ** \n");
		fprintf(fp, " ** ***  \n");
		fprintf(fp, " *****   \n");
		fprintf(fp, " ****    \n");
		fprintf(fp, " *****   \n");
		fprintf(fp, " ** ***  \n");
		fprintf(fp, " **   ** \n");
		fprintf(fp, " **    **\n");
		break;
	case 'L':
		fprintf(fp, "         \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		break;
	case 'M':
		fprintf(fp, "         \n");
		fprintf(fp, "  ****** \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		break;
	case 'N':
		fprintf(fp, "         \n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " ***   **\n");
		fprintf(fp, " ***   **\n");
		fprintf(fp, " ****  **\n");
		fprintf(fp, " ****  **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " **  ****\n");
		fprintf(fp, " **   ***\n");
		fprintf(fp, " **    **\n");
		break;
	case 'O':
		fprintf(fp, "         \n");
		fprintf(fp, "  ****** \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " ********\n");
		fprintf(fp, "  ****** \n");
		break;
	case 'P':
		fprintf(fp, "         \n");
		fprintf(fp, " ******* \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ******* \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		break;
	case 'Q':
		fprintf(fp, "         \n");
		fprintf(fp, "  ****** \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " **  ****\n");
		fprintf(fp, "  *******\n");
		fprintf(fp, "       **\n");
		break;
	case 'R':
		fprintf(fp, "         \n");
		fprintf(fp, " ******* \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ******* \n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		break;
	case 'S':
		fprintf(fp, "         \n");
		fprintf(fp, "  *******\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " **      \n");
		fprintf(fp, " **      \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		fprintf(fp, "       **\n");
		fprintf(fp, "       **\n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ******* \n");
		break;
	case 'T':
		fprintf(fp, "         \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		break;
	case 'U':
		fprintf(fp, "         \n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " ********\n");
		fprintf(fp, "  ****** \n");
		break;
	case 'V':
		fprintf(fp, "         \n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, "  **  ** \n");
		fprintf(fp, "   ****  \n");
		fprintf(fp, "    **   \n");
		break;
	case 'W':
		fprintf(fp, "         \n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ** ** **\n");
		fprintf(fp, " ********\n");
		fprintf(fp, "  ****** \n");
		break;
	case 'X':
		fprintf(fp, "         \n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, "  **  ** \n");
		fprintf(fp, "   ****  \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "   ****  \n");
		fprintf(fp, "  **  ** \n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		break;
	case 'Y':
		fprintf(fp, "         \n");
		fprintf(fp, " **    **\n");
		fprintf(fp, " **    **\n");
		fprintf(fp, "  **  ** \n");
		fprintf(fp, "   ****  \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "    **   \n");
		break;
	case 'Z':
		fprintf(fp, "         \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		fprintf(fp, "       **\n");
		fprintf(fp, "      ** \n");
		fprintf(fp, "     **  \n");
		fprintf(fp, "    **   \n");
		fprintf(fp, "   **    \n");
		fprintf(fp, "  **     \n");
		fprintf(fp, " ********\n");
		fprintf(fp, " ********\n");
		break;
		fprintf(fp, "Yay!\n");

		

	default:
		fprintf(fp, "I don't know how to print a %c!\n", c);
		break;
	}
}