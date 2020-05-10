CC = g++
SRCDIR = src
BUILDDIR = build
TARGETDIR = bin
TESTDIR = test
TARGET = program
TESTTARGET = test
TESTSOURCE = OldBookTest.cpp

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
	$(CC) $(CFLAGS) $(INC) -c $(SRCDIR)/OldBook.cpp -o $(BUILDDIR)/OldBook.o
	$(CC) $(CFLAGS) $(INC) -c $(SRCDIR)/Date.cpp -o $(BUILDDIR)/Date.o
	$(CC) $(CFLAGS) $(INC) -c $(TESTDIR)/OldBookTest.cpp -o $(BUILDDIR)/test.o
	$(CC) $(BUILDDIR)/test.o $(BUILDDIR)/Date.o $(BUILDDIR)/OldBook.o -o $(TARGETDIR)/test -lboost_unit_test_framework

run:
	./bin/$(TARGET)

runtests:
	./bin/$(TESTTARGET)

clean:
	@echo " Cleaning...";
	@echo " $(RM) -r $(BUILDDIR) $(TARGETDIR)"; $(RM) -r $(BUILDDIR) $(TARGETDIR)

.PHONY: clean