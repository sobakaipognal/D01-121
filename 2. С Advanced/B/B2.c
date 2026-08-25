//~ typedef struct list {
//~ void *address;
//~ size_t size;
//~ char comment[64];
//~ struct list *next;
//~ } list;

size_t totalMemoryUsage(list *head)
{
	if(head == NULL) return 0;
	
	size_t max_size = head->size;
	
	list *current = head->next;
	
	while(current != NULL)
	{
		max_size += current->size;
		current = current->next;
	}
return max_size;
}

