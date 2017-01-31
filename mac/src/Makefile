# g++ -I. -I$SYSTEMC_HOME/include -L. -L$SYSTEMC_HOME/lib-linux64 -Wl,-rpath=$SYSTEMC_HOME/lib-linux64 -o run main.cpp -lsystemc -lm simple_process_ex.cpp

SYSTEMC = /usr/local/systemc231

SRC = main.cpp
EXTRA_LIBS = mac.cpp monitor.cpp stimulus.cpp top.cpp

EXEC = run

TARGET_ARCH = linux64

INCDIR = -I. -I.. -I$(SYSTEMC)/include
LIBDIR = -L. -L.. -L$(SYSTEMC)/lib-$(TARGET_ARCH)

LIBS   =  -lsystemc -lm $(EXTRA_LIBS)

all:
	g++ $(INCDIR) $(LIBDIR) -Wl,-rpath=$(SYSTEMC)/lib-$(TARGET_ARCH) -o $(EXEC) $(SRC) $(LIBS)

