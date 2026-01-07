# Flags
CC = gcc
CFLAGS = -Wall -Wextra -g -std=c11

# Diretórios
SRCDIR = src
INCDIR = include
BUILDDIR = build
BINDIR = bin

# Origens e destinos
TARGET = $(BINDIR)/morse
SOURCES = $(filter-out $(SRCDIR)/aes.c, $(wildcard $(SRCDIR)/*.c))
OBJECTS = $(patsubst $(SRCDIR)/%.c, $(BUILDDIR)/%.o, $(SOURCES))

# A primeira regra é a padrão (o que é executado quando você digita 'make')
all: $(TARGET)

# Regra para linkar os arquivos objeto e criar o executável final
$(TARGET): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

# Regra para compilar os arquivos-fonte (.c) em arquivos objeto (.o)
$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) -c $< -o $@

# Regra para limpar os arquivos gerados (compilados)
clean:
	rm -rf $(BUILDDIR) $(BINDIR)
