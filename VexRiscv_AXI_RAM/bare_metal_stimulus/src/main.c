void miaou();
void main() {
	miaou();
}

void irqCallback(int irq){

}

void miaou(){
	int read_val;	
	//writing
	*(volatile int *) 0x00000010 = 10;
	//reading
	read_val = *(volatile char *) 0x00000010;
	*(volatile int *) 0x00000030 = 5030;
	read_val = *(volatile char *) 0x00000030;
	read_val = *(volatile char *) 0x00000010;
	*(volatile int *) 0x00000010 = 20;
	read_val = *(volatile char *) 0x00000010;
	read_val = *(volatile char *) 0x00000030;
}
