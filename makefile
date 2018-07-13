CFLAG=-lgtest -lpthread
test.exe:test.cpp
	g++ ${CFLAG} $< -o $@ 	
