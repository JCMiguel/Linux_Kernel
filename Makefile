# Un archivo Makefile para compilar el modulo... o eso intento jeje
# make -C /lib/modules/`uname -r`/build M=$PWD

#obj-y = hallo_module.o
obj-m := halloKernel.o
halloKernel-y := hallo_module.o

all:
	make -C /lib/modules/`uname -r`/build M=$(PWD)

