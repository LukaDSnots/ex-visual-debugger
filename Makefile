CXX=clang++
CXX_FLAGS=-std=c++20 -Iincludes -Wall -Wextra -Werror -O0 -g

exec: bin/exec

bin/exec: ./src/driver.cc ./src/utilities.cc ./includes/utilities.hpp
	$(CXX) $(CXX_FLAGS) ./src/driver.cc ./src/utilities.cc -o $@

.DEFAULT_GOAL := exec
.PHONY: exec clean

clean:
	rm -rf bin/*