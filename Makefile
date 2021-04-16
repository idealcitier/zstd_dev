demo:demo.o util.o
	g++ demo.o util.o libzstd.a -o demo 

util.o:util.cpp
	g++ -c util.cpp

demo.o:demo.cpp
	g++ -c demo.cpp

clean:
	rm demo
