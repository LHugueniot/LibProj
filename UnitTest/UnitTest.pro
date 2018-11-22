TARGET=UnitTest
SOURCES += main.cpp \
../HairSim/HairSim.cpp \
../HairSim/HairSim.h
INCLUDEPATH+= /usr/local/include /public/devel/2018/include ../HairSim/
LIBS+= -L/usr/local/lib -lgtest
CONFIG+=c++11
