
all: mathfacts.o
	./$^

mathfacts.o: mathfacts.cpp
	g++ -g $^ -o $@

clean:
	rm -f mathfacts.o