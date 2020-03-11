 /**
 * set_string - should set value of a pointer to a char
 * @s: pointer to the pointer we are changing
 * @to: char to set the pointer to
 * Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
