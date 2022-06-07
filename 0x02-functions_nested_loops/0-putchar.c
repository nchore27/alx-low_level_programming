#include <unistd.h>
#include <string.h>

/**
 * main - print putchar
 * description - Write a program that prints _putchar, followed by a new line.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	char str[] = "_putchar\n";

	write(1, str, strlen(str));

	return (0);
}
