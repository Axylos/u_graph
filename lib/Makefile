IDIR =../include
VERSION=c99
CC=gcc
CFLAGS=-I$(IDIR) -g -std=$(VERSION)

ODIR=obj
TDIR=tests
LDIR=../lib

LIBS=-lvec

_DEPS = gcontr.h ug_node.h ug_edge.h u_graph.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

#_T_DEPS = 
#T_DEPS = $(patsubst %,$(TDIR)/%,$(_T_DEPS))

_OBJ = gcontr.o ug_node.o ug_edge.o u_graph.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

#_TEST_OBJ = 
#TEST_OBJ = $(patsubst %, $(TDIR)/%,$(_TEST_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

#$(TDIR)/%.o: %.c $(DEPS) $(T_DEPS)
#	$(CC) -c -o $@ $< $(CFLAGS)

cont: $(OBJ)
	gcc -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(TDIR)/*.o *~ core $(INCDIR)/*~

