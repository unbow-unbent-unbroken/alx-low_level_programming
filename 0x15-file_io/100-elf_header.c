#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>
#include "main.h"

/**
 * error_exit - prints an error message and exits with a status code
 * @msg: the error message to print
 * @code: the status code to exit with
 */
void error_exit(const char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * read_elf_header - reads and displays the ELF header of a file
 * @fd: the file descriptor of the file to read
 */
void read_elf_header(int fd)
{
	Elf64_Ehdr header;
	ssize_t bytes_read;

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header) ||
	    header.e_ident[EI_MAG0] != ELFMAG0 ||
	    header.e_ident[EI_MAG1] != ELFMAG1 ||
	    header.e_ident[EI_MAG2] != ELFMAG2 ||
	    header.e_ident[EI_MAG3] != ELFMAG3)
	{
		error_exit("Error: Not an ELF file", 98);
	}

	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\n");

	printf("  Class:                             %s\n",
	       (header.e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n",
	       (header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
	printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);

	printf("  Type:                              %s\n",
	       (header.e_type == ET_EXEC) ? "EXEC (Executable file)" :
	       (header.e_type == ET_DYN) ? "DYN (Shared object file)" :
	       (header.e_type == ET_REL) ? "REL (Relocatable file)" :
	       (header.e_type == ET_CORE) ? "CORE (Core file)" : "Unknown");

	printf("  Entry point address:               %#lx\n", (unsigned long)header.e_entry);
}

/**
 * main - reads and displays the ELF header of a file
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: 0 on success, or the corresponding error code on failure
 */
int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
	{
		error_exit("Usage: elf_header elf_filename", 98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		error_exit("Error: Unable to open file", 98);
	}

	read_elf_header(fd);

	close(fd);
	return (0);
}
