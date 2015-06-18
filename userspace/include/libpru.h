
#define PRU_DRAM0 0
#define PRU_DRAM1 1
#define PRU_SHRAM 2
#define TIMEOUT -1

enum pruss_mem {
	EVENTOUT0 = 0,
	EVENTOUT1,
	EVENTOUT2,
	EVENTOUT3,
	EVENTOUT4,
	EVENTOUT5,
	EVENTOUT6,
	EVENTOUT7,
	MAXEVENTOUT,
};

int pruss_write(unsigned const int mem_name, int wordoffset, int *data, size_t bytelength);

int pruss_read(unsigned const int mem_name, int wordoffset, int *data, size_t bytelength);

void pruss_interrupt(int sysevent);

void hostevt_poll(int hostevt, void (*callback)(int));