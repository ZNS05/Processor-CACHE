# Processor-CACHE
Disabling the processor CACHE

------------------------------------
Device Characteristics: 
• Processor – Intel Celeron N3050; 
• RAM – DDR3 8 GB; 
• HARD drive – 512 GB; 
• Operating system – Linux mint;
------------------------------------

Disabling the processor CACHE was carried out through the operating system kernel settings. Basic commands for using the Linux OS kernel:
• insmod: 
Description: The command is used to load a new kernel module into a running kernel. 
Example: insmod <module_name> 
• rmmod: 
Description: The command is used to unload (delete) a kernel module from a running kernel. 
Example: rmmod <module_name> 
• dmesg: 
Description: The command is designed to read and output kernel messages, which usually provide information about system events, errors, module loading, and other important events. Example: dmesg
The CACHE itself is disabled in the cache.c file. The write_cr0() function is used exclusively in configuring the operating system kernel and allows you to change the bit register cr0 responsible for the processor CACHE. The read_cr0() function allows you to see the current value of the cr0 register bit.
