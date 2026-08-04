#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be duplicated and stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *new_string;
	size_t new_len;
	size_t str_length;

	if (head == NULL || str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new_string = strdup(str);
	if (new_string == NULL)
	{
		free(new);
		return (NULL);
	}
	str_length = 0;
	while (str[str_length] != '\0')
	{
		str_length++;
	}
	new_len = str_length;

	
	new->str = new_string;
	new->len = new_len;
	new->next = *head;

	*head = new;

	return (new);
}
