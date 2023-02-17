CC = g++
CFLAGS = -g --std=c++17 -Werror -pedantic

all: VDayHeart Run

VDayHeart: VDayHeart.o
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

Run:
	./VDayHeart


%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

lint: 
	cpplint --filter=-build/include_subdir,-build/c++11 --root=. *.hpp *.cpp

clean:
	rm *.o VDayHeart