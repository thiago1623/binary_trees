CC=gcc -g -Wall -Wextra -Werror -pedantic --std=c90

%:
	clear
	$(CC) $(files)
	./a.out
	betty-style $(files)
	betty-doc $(files) 1>/dev/null

0: files=$*-*.c mains/$*-main.c binary_tree_print.c
2: files=$*-*.c mains/$*-main.c 0-binary_tree_node.c binary_tree_print.c
%: files=$*-*.c mains/$*-main.c 0-binary_tree_node.c binary_tree_print.c
%: files=$*-*.c mains/$*-main.c 0-binary_tree_node.c binary_tree_print.c 2-binary_tree_insert_right.c
14: files=$*-*.c mains/$*-main.c 0-binary_tree_node.c binary_tree_print.c 2-binary_tree_insert_right.c 1-binary_tree_insert_left.c
