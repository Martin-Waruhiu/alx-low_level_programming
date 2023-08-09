#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

void look_elf(unsigned char *e_ident);
void prints_magic(unsigned char *e_ident);
void printing_class(unsigned char *e_ident);
void prints_data(unsigned char *e_ident);
void printing_version(unsigned char *e_ident);
void printing_entrys(unsigned long int e_entry, unsigned char *e_ident);
void printing_osabi(unsigned char *e_ident);
void prints_abiversion(unsigned char *e_ident);
void printing_type(unsigned int e_type, unsigned char *e_ident);
void closes_elf(int elf);
/**
 * look_elf - func to check for an elf
 * @e_ident: - pointer to magic array
 */
void look_elf(unsigned char *e_ident)
{
	int i; /*index*/

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
		    e_ident[i] != 'E' &&
		    e_ident[i] != 'L' &&
		    e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: not an elf file\n");
			exit(98);
		}
	}
}
/**
 * prints_magic - func to print magic numbers
 * @e_ident: - ptr to array of ELF magic numbers
 */
void prints_magic(unsigned char *e_ident)
{
	int x;

	printf("magic: ");

	for (x = 0; x < EI_NIDENT; x++) /*EI_IDENT - size of e_ident array*/
	{
		printf("%02x", e_ident[x]);
		if (x == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * printing_class - func to print efl class
 * @e_ident: - ptr to array of class
 */
void printing_class(unsigned char *e_ident)
{
	printf("class: ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * prints_data - prints data of efl
 * @e_ident: pointer to data array
 */
void prints_data(unsigned char *e_ident)
{
	printf("Data: ");

	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("NONE\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
 * printing_version - prints elf version
 * @e_ident: - ptr to array of version
 */
void printing_version(unsigned char *e_ident)
{
	printf("version: %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("(current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}
/**
 * printing_osabi - func to print osabi
 * @e_ident: - ptr to array of OSABI
 */
void printing_osabi(unsigned char *e_ident)
{
	printf("OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}
/**
 * prints_abiversion - prinrs ABI version of elf
 * @e_ident: - pointer to array of ABI versions
 */
void prints_abiversion(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n", e_ident[EI_ABIVERSION]);
}
/**
 * printing_type - prints type
 * @e_type: types
 * @e_ident: array of class
 */
void printing_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;
	printf("Type: ");
	switch (e_type)
	{
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}
/**
 * printing_entrys - prints the entry adress
 * @e_entry: adress
 * @e_ident: ptr to Elf classEs
 */
void printing_entrys(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}
/**
 * closes_elf - closing elf
 * @elf: fd
 */
void closes_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fdd %d\n", elf);
		exit(98);
	}
}
/**
 * main - entry point
 * @argc: no of arg
 * @argv: argument vector
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head;
	int x, q;

	x = open(argv[1], O_RDONLY);
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	head = malloc(sizeof(Elf64_Ehdr));
	if (head == NULL)
	{
		closes_elf(x);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	q = read(x, head, sizeof(Elf64_Ehdr));
	if (q == -1)
	{
		free(head);
		closes_elf(x);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	look_elf(head->e_ident);
	printf("ELF Head:\n");
	prints_magic(head->e_ident);
	printing_class(head->e_ident);
	prints_data(head->e_ident);
	printing_version(head->e_ident);
	printing_osabi(head->e_ident);
	prints_abiversion(head->e_ident);
	printing_type(head->e_type, head->e_ident);
	printing_entrys(head->e_entry, head->e_ident);

	free(head);
	closes_elf(x);
	return (0);
}
