#include "main.h"

/**
 * create_file - create a file with content inside
 * @filename: name of file
 * @text_content: content to put into the file
 * Return: 1 on sucess -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		int lenWrite, len_Text;

		for (len_Text = 0; text_content[len_Text] != '\0'; len_Text++)
			;
		lenWrite = write(fd, text_content, (len_Text));
		if (lenWrite == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
