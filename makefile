CFLAGS=-std=c++11 -g

vector:
	g++ $(CFLAGS) main.cpp -o vector

clean:
	rm -f vector
	
