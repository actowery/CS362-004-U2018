
CXX = g++

CXXFLAGS += -Wall

CXXFLAGS += -pedantic-errors

CXXFLAGS += -g

#CXXFLAGS += -O3

#LDFLAGS = -lboost_date_time



OBJS = testme.o

SRCS = testme.cpp




test: ${OBJS}
				${CXX} ${LDFLAGS} ${OBJS} -o test

run:
				./test

clean:
				rm *.o test
