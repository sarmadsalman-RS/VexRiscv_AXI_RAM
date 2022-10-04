void miaou();
void main() {
	miaou();
}

void irqCallback(int irq){

}

void miaou(){
	int read_val;	
	*(volatile int *) 0x00000010 = 10;
	read_val = *(volatile char *) 0x00000010;
	*(volatile int *) 0x00000030 = 5030;
	*(volatile int *) 0x00000070 = 620;
	read_val = *(volatile char *) 0x00000030;
	read_val = *(volatile char *) 0x00000010;
	*(volatile int *) 0x00000070 = 5810;
	read_val = *(volatile char *) 0x00000030;
	read_val = *(volatile char *) 0x00000040;
	read_val = *(volatile char *) 0x00000060;
	read_val = *(volatile char *) 0x00000080;
	read_val = *(volatile char *) 0x00000070;
	read_val = *(volatile char *) 0x00000040;
}
