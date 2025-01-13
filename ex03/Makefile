CPP = c++
CPP_FLAGS = -Wall -Werror -Wextra -std=c++98

PROGRAM_NAME = animal

SRCDIR := .
CLASSDIR := $(SRCDIR)/class
BASEDIR := $(CLASSDIR)/base
DERIVEDDIR := $(CLASSDIR)/derived
INCDIR := ./includes

SRC := $(wildcard $(SRCDIR)/*.cpp) \
       $(wildcard $(CLASSDIR)/*.cpp) \
       $(wildcard $(BASEDIR)/*.cpp) \
       $(wildcard $(DERIVEDDIR)/*.cpp)

INCLUDES := -I$(INCDIR)

OBJDIR := objs
OBJS := $(SRC:$(SRCDIR)/%.cpp=$(OBJDIR)/$(SRCDIR)/%.o)
OBJS := $(OBJS:$(CLASSDIR)/%.cpp=$(OBJDIR)/$(CLASSDIR)/%.o)
OBJS := $(OBJS:$(BASEDIR)/%.cpp=$(OBJDIR)/$(BASEDIR)/%.o)
OBJS := $(OBJS:$(DERIVEDDIR)/%.cpp=$(OBJDIR)/$(DERIVEDDIR)/%.o)

all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(OBJS)
	$(CPP) $(CPP_FLAGS) $(INCLUDES) -o $@ $^

$(OBJDIR):
	@mkdir -p $(OBJDIR)/$(CLASSDIR)
	@mkdir -p $(OBJDIR)/$(BASEDIR)
	@mkdir -p $(OBJDIR)/$(DERIVEDDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CPP) $(CPP_FLAGS) $(INCLUDES) -o $@ -c $<

$(OBJDIR)/$(CLASSDIR)/%.o: $(CLASSDIR)/%.cpp | $(OBJDIR)
	$(CPP) $(CPP_FLAGS) $(INCLUDES) -o $@ -c $<

$(OBJDIR)/$(BASEDIR)/%.o: $(BASEDIR)/%.cpp | $(OBJDIR)
	$(CPP) $(CPP_FLAGS) $(INCLUDES) -o $@ -c $<

$(OBJDIR)/$(DERIVEDDIR)/%.o: $(DERIVEDDIR)/%.cpp | $(OBJDIR)
	$(CPP) $(CPP_FLAGS) $(INCLUDES) -o $@ -c $<

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(PROGRAM_NAME)

re: fclean all

.PHONY: all clean fclean re
