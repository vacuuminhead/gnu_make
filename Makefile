objects := $(patsubst %.cpp, %.o, $(wildcard *.cpp))
CC := g++

all : my_programm

my_programm: $(objects)
	$(CC) $^ -o $@
clean:
	rm *.o my_programm*
test_w: 
	my_programm test.txt

test_l:
	./my_programm test.txt