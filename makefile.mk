DED_FLAGS = -Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal -Winline -Wunreachable-code -Wmissing-declarations -Wmissing-include-dirs -Wswitch-enum -Wswitch-default -Weffc++ -Wmain -Wextra -Wall -g -pipe -fexceptions -Wcast-qual -Wconversion -Wctor-dtor-privacy -Wempty-body -Wformat-security -Wformat=2 -Wignored-qualifiers -Wlogical-op -Wno-missing-field-initializers -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wsign-promo -Wstack-usage=8192 -Wstrict-aliasing -Wstrict-null-sentinel -Wtype-limits -Wwrite-strings -Werror=vla -D_DEBUG -D_EJUDGE_CLIENT_SIDE
COMPILE_FILE = g++ -c



%.o : %.c
	$(COMPILE_FILE) $% -o $@ $(DED_FLAGS)


Release: RunSQE.o Solve_Quad_Eq.o Input.o Output_Roots.o F_comp.o Testing.o Colour_Output.o
	g++ -o Release RunSQE.o Solve_Quad_Eq.o Input.o Output_Roots.o F_comp.o Testing.o Colour_Output.o
	rm -rf *.o

%.o : %.c
	-D NDEBUG $(COMPILE_FILE) $% -o $@ $(DED_FLAGS)
Release_Debug: RunSQE.o Solve_Quad_Eq.o Input.o Output_Roots.o F_comp.o Testing.o Colour_Output.o
	g++ -o Release_Debug RunSQE.o Solve_Quad_Eq.o Input.o Output_Roots.o F_comp.o Testing.o Colour_Output.o
	rm -rf *.o
all: Release
all: Release_Debug