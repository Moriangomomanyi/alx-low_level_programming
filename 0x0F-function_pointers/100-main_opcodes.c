#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Print opcodes of the main function
 * @bytes: Number of bytes to print
 */
void print_opcodes(int bytes)
{
	asm(
			"main:                 \n"
			"   push   %rbp         \n"
			"   mov    %rsp,%rbp    \n"
			"   sub    $0x30,%rsp   \n"
			"   mov    %edi,-0x24(%rbp)\n"
			"   mov    -0x24(%rbp),%eax\n"
			"   test   %eax,%eax    \n"
			"   jns    400694 <main+0x4> \n"
			"   lea    0x2c9(%rip),%rdi\n"
			"   call   400550 <puts@plt> \n"
			"   mov    $0x2,%eax    \n"
			"   jmp    400696 <main+0x6> \n"
			"   mov    $0x0,%eax    \n"
			"   mov    %ebp,%rsp    \n"
			"   pop    %rbp         \n"
			"   ret                 \n"
			"   nopl   0x0(%rax)    \n"
	:
	:
	: "rax", "rdi"
	);

	unsigned char *func_ptr = (unsigned char *)print_opcodes;
	int i;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", func_ptr[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on incorret, 2 on negative bytes
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(bytes);

	return (0);
}
