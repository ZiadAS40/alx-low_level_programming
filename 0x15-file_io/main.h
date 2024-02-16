#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <elf.h>


void print_magic(Elf64_Ehdr *header);
void print_elf_header_details(Elf64_Ehdr *header);
void print_type(Elf64_Ehdr *header);
void print_entrypoint(Elf64_Ehdr *header);
void check_elf_format(unsigned char *e_ident);
void display_elf_header_info(Elf64_Ehdr *header);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t copy_files(char *filename, char *filen);

#endif
