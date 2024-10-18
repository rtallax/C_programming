/* What is the output of the following function?
   start pointing to the first node of the following linked list  */

/* LinkedList 1->2->3->4->5->6 */
void sample(struct node *start)
{
	if(start == NULL)
		return ;
	printf("%d ",start->data);
	
	if(start->next != NULL)
		sample(start->next->next);
	printf("%d ",start->data);
}


