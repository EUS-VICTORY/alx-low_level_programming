#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints result of multiplication of two numbers
 * @argc: argument counter
 * @argv: numbers to be multiplied
 *Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
}
