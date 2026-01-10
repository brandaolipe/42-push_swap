#include "../include/push_swap.h" 

static int	get_node_place(t_stack *stack, int	target);
static void	push_min_to_b(t_stack **stack_a, t_stack **stack_b, int target_id);

void	three_nodes_order(t_stack **stack)
{
	int	first;
	int	second;
	int	last;
	
	first = (*stack)->id;
	second = (*stack)->next->id;
	last =	last_node(*stack)->id;
	
	if (already_ordered(*stack))
		return ;
	if (first > second && first > last)
		ra(stack);
	else if (second > first && second > last)
		rra(stack);
	if ((*stack)->id > (*stack)->next->id)
		sa(stack);
}

void	four_nodes_order(t_stack **stack_a, t_stack **stack_b)
{
	int	pos;

	pos = get_node_place(*stack_a, 0);
	if (pos > 2)
	{
		while ((*stack_a)->id != 0)
			rra(stack_a);
	}
	else
	{
		while ((*stack_a)->id != 0)
			ra(stack_a);
	}
	if (!already_ordered(*stack_a))
	{
		push_b(stack_a, stack_b);
		three_nodes_order(stack_a);
		push_a(stack_a, stack_b);
	}
}

void	five_nodes_order(t_stack **stack_a, t_stack **stack_b)
{
	push_min_to_b(stack_a, stack_b, 0);
	push_min_to_b(stack_a, stack_b, 1);
	three_nodes_order(stack_a);
	while (*stack_b)
		push_a(stack_a, stack_b);
}

static int	get_node_place(t_stack *stack, int	target)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		if (stack->id == target)
			return (pos);
		pos++;
		stack = stack->next;
	}
	return (-1);
}

static void	push_min_to_b(t_stack **stack_a, t_stack **stack_b, int target_id)
{
	int	pos;
	int	size;

	pos = get_node_place(*stack_a, target_id);
	size = stack_size(*stack_a);
	if (pos <= size / 2)
	{
		while ((*stack_a)->id != target_id)
			ra(stack_a);
	}
	else
	{
		while ((*stack_a)->id != target_id)
			rra(stack_a);
	}
	push_b(stack_a, stack_b);
}
