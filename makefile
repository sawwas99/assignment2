all: assignment2.x

assignment2.x: 
	g++ -std=c++11 -o assign2.x main.cpp Jet.cpp Bicycle.cpp Car.cpp Vehicle.cpp PoweredVehicle.cpp

clean:
	rm assign2.x
