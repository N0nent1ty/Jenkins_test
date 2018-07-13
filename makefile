CFLAG=-lgtest -lpthread -std=c++11
test.exe:test.cpp
	g++ ${CFLAG} $< -o $@ 	
