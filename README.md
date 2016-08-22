# Linux_Kernel

This repository contains a Linux Kernel Module (LKM) with license GPLv3. You can use them freely.

Run the "make" command to generate a kernel object (hallo_module.ko). You'll need the headers of the kernel version you want to use. 

Use "insmod" to load the module and "rmmod" to unload it.

The module prints the message "Hallo Welt!" (Hello world!) on the screen on load and "Auf Wiedersehen welt!" (Goodbye World!) on unload.
