#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct list 
{
	char word[20];
	struct list *next;
}list_t;

void add_to_list(list_t *head);
void swap_list(list_t *head);
void print_list(list_t *head);
void delete_list(list_t *head);

int main()
{
	list_t *head = calloc(1, sizeof(list_t));
	add_to_list(head);
	swap_list(head);
	print_list(head);
		
}

void add_to_list(list_t *head)
{
	list_t *node = head;
	char ch;
	int i = 0;
	while (1)
	{
		ch=getchar();
		if (ch == '.')
		{
			node->next = NULL;
			node->word[i] = '\0';
			break;
		}
		
		if(ch==' ') 
		{
			node->next = calloc(1, sizeof(list_t));
			node = node->next;
			node->word[i] = '\0';
			i = 0;
		}
		else
		{
			node->word[i] = ch;
			++i;
		}
	}
}

void swap_list(list_t *head)
{
	list_t *node = head;
	bool been_swaped = 1;
	while(been_swaped)
	{
		while(node->next)
		{
			if(strcmp(node->word, node->next->word) > 0)
			{
				char temp[20];
				strcpy(temp, node->word);
				strcpy(node->word, node->next->word);
				strcpy(node->next->word, temp);
				been_swaped = 1;
			}
			else
			{
				been_swaped = 0;
			}
			node = node->next;
		}
	}
}

void print_list(list_t *head)
{
	list_t *node = head;
	int i = 0;
	
	while(node)
	{
		printf("%s", node->word);
		++i;
		node = node->next;
	}
}
