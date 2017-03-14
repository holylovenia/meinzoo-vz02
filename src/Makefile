CC = g++
OPTIONS = -std=c++11
SRC = $(wildcard *.cpp)
OBJS = $(SRC:.cpp=.o) $(wildcard */*.o) $(wildcard */*/*.o)
SUBDIRS = animal infrastructure misc

.PHONY: subdirs $(SUBDIRS) all clean

all: subdirs $(OBJS)
	$(CC) $(OPTIONS) $(OBJS) -o ../zoo

subdirs: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@	

%.o: %.cpp
	$(CC) $(OPTIONS) -c -o $@ $<

clean:
	rm -rf $(OBJS)