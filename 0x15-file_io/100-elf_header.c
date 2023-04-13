#include <stdio.h>
#include <stdint.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <stdlib.h>
#include <elf.h>

void display_error(const char *error_message) {
fprintf(stderr, "Error: %s\n", error_message);
exit(98);
}
void display_elf_header_info(const Elf64_Ehdr *elf_header) {
printf("Magic: %02x %02x %02x %02x\n",
		elf header->e_indent[EI_MAG0],
		elf header->e_indent[EI_MAG1],
		elf header->e_indent[EI_MAG2],
		elf header->e_indent[EI_MAG3],

printf("Class: %s\n", (elf_header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "ELF32");
printf("Data: %s\n", (elf_header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "unknown");
printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);
printf("OS/ABI: %s\n", (elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX System V ABI" : "unknown");
printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
printf("Type: %d\n", elf_header->e_type);
printf("Entry point address: 0x%lx\n", (unsigned long) elf_header->e_entry);

}
int main(int argc, char argv[]){
if (argc != 2){
display error("Usage: elf_header elf_filename");
}
int fd = open(argv[1], 0_RDONLY);
if (fd == -1) {
display_error("Failed to open file");
}
Elf64_Ehdr elf_header;
if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
display_error("Failed to read ELF header");
}
if (memcmp(elf_header.e_indent, ELFMAG, SELFMAG) != 0) {
display_error("File is not on ELF file");
}
display_elf_header_info(&elf_header);
close(fd);
return 0;
