﻿#include <avr/io.h>
#include <string.h>
#include <stdint.h>
#include "Temp_log.h"

void init_templog(void)
{
	print_usage();
}

void print_usage(void)
{
	printf("Temperature logger\n====================\nCommands:\n");
	printf("h\tShow the command list\n");
	printf("e\tExit from the program\n");
	printf("l\tList available ports\n");
	printf("p\tSet port name\n");
	printf("w\tSet write filename\n");
	printf("o\tOpen port\n");
	printf("s\tStart logging / Stop logging\n");
	printf("c\tClose port\n");
	printf("r\tSet read filename\n");
	printf("a\tCalculate average in given period\n");
}

void list_ports(void)
{
	
}
void set_port_name(void)
{
	
}
void set_write_file(void)
{
	
}
void open_port(void)
{
	
}