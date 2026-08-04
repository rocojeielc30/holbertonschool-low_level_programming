#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be duplicated and stored in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	char *new_string;
	size_t new_len;
	size_t str_length;

	if (str == NULL || head == NULL)
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
		str_length++;
	new_len = str_length;

	new->str = new_string;
	new->len = new_len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (new);
}
