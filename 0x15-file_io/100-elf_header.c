#include <stdio.h>
#include <elf.h>
#include "main.h"
/**
 * main - Entry point, displays the ELF header of an ELF file
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
		exit(98);
	}

	bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes_read != sizeof(Elf64_Ehdr))
	{
		dprintf(STDERR_FILENO, "Error: Failed to read ELF header\n");
		close(fd);
		exit(98);
	}

	check_elf_format(header.e_ident);
	display_elf_header_info(&header);

	close(fd);
	return (0);
}

/**
 * check_elf_format - Checks if the file is an ELF file
 * @e_ident: Pointer to an array containing the ELF magic numbers
 * Return: nothing
 */
void check_elf_format(unsigned char *e_ident)
{
if (e_ident[0] != 0x7f || e_ident[1] != 'E' || e_ident[2] != 'L' || e_ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}

void print_magic(Elf64_Ehdr *header);
void print_elf_header_details(Elf64_Ehdr *header);
void print_type(Elf64_Ehdr *header);
void print_entrypoint(Elf64_Ehdr *header);

/**
 * display_elf_header_info - Orchestrates the display of ELF header information
 * @header: Pointer to the ELF header structure
 */
void display_elf_header_info(Elf64_Ehdr *header)
{
	print_magic(header);
	print_elf_header_details(header);
	print_type(header);
	print_entrypoint(header);
}
/**
 * print_magic - print magic
 * @header: Pointer to the #lF header structure
 */
void print_magic(Elf64_Ehdr *header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
}
/**
 * print_elf_header_details - print details :).
 * @header: Pointer to the #lF header structure
 */
void print_elf_header_details(Elf64_Ehdr *header)
{
	printf("Class:                             ");
	switch (header->e_ident[EI_CLASS])
	{
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
	}

	printf("Data:                              ");
	switch (header->e_ident[EI_DATA])
	{
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_DATA]);
	}

	printf("Version: %u (current)\n", header->e_ident[EI_VERSION]);

	printf("OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_OSABI]);
	}

	printf("ABI Version: %u\n", header->e_ident[EI_ABIVERSION]);
}
/**
 * print_type - print type
 * @header: Pointer to the #lF header structure
 */
void print_type(Elf64_Ehdr *header)
{
	printf("Type:                              ");
	switch (header->e_type)
	{
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_type);
	}
}
/**
 * print_entrypoint - print entry point
 * @header: Pointer to the #lF header structure
 */
void print_entrypoint(Elf64_Ehdr *header)
{
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}
