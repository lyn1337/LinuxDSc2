# Makefile for fwver

EXEC = wfcdump
OBJS = wfcdump.o

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $(OBJS) $(LDLIBS$(LDLIBS_$@))

romfs:
	$(ROMFSINST) /bin/$(EXEC)

clean:
	rm -f $(EXEC) *.elf *.gdb *.o
