CXX = clang++
CXXCLAGS = -std=c++11 -Wall -Wextra -Wpedantic -g -0O

mimir: src/main.cpp
	$(CXX) -std=c++11 -Wall -Wextra -Wpedantic -g -O0 src/main.cpp -o mimir



