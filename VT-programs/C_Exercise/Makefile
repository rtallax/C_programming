SRCS:=main.c
EXE:=out

CC=gcc
STRIP=strip

$(EXE):
	$(CC) $(SRCS) -o $(EXE) -DCOPY
	$(STRIP) $(EXE)
clean:
	rm -rf *.o $(EXE) 
