
CC = g++
SRCDIR = src
BUILDDIR = build
TARGETDIR = bin
TESTDIR = test
TARGET = program
TESTTARGET = test
TESTSOURCE = carTest.cpp

SRCEXT = cpp
SOURCES = $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
OBJECTS = $(patsubst $(SRCDIR)/%,$(BUILDDIR)/%,$(SOURCES:.$(SRCEXT)=.o))
CFLAGS = -std=c++11 -g -Wall
TESTFLAG = -lboost_unit_test_framework
INC = -I include

$(TARGET): $(OBJECTS)
	@echo " Linking..."
	@mkdir -p $(TARGETDIR)
	$(CC) $^ -o $(TARGETDIR)/$(TARGET)

$(BUILDDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(BUILDDIR)
	@echo " $(CC) $(CFLAGS) $(INC) -c -o $@ $<"; $(CC) $(CFLAGS) $(INC) -c -o $@ $<

tests:
	@mkdir -p $(TARGETDIR)
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $(INC) -c $(SRCDIR)/Vehicle.cpp -o $(BUILDDIR)/Vehicle.o
	$(CC) $(BUILDDIR)/Vehicle.o -o $(TARGETDIR)/test -lboost_unit_test_framework

run:
	./bin/$(TARGET)

runtests:
	./bin/$(TESTTARGET)

clean:
	@echo " Cleaning...";
	@echo " $(RM) -r $(BUILDDIR) $(TARGETDIR)"; $(RM) -r $(BUILDDIR) $(TARGETDIR)

.PHONY: clean