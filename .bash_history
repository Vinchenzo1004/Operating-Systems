sudo apt update
sudo apt install nasm gcc make git vim qemu-system-i386
mkdir myos
ls
wget elvis.rowan.edu/~mckeep82/os/myos.zip
unzip myos.zip
make clean
make
nano kernel.c
make clean
make
nano kernel.c
make clean
make
ls -l os.bin 
nano os.bin
nano boot.asm
make clean
make
ls -l os.bin
nano boot.asm
make clean
make
ls -l os.bin
nano boot.asm
make clean
mkdir include
ls
cd include
vim console.h
cd ..
ls
mkdir console
cd console
nano console.c
vim console.c
vim kernel.c
cd ..
vim kernel.c
make clean
make
cd include/
vim console.h
cd ..
ls
cd console
ls
nano console.c
vim console.c 
vim kernel.c 
nano kernel.c 
cd ..
vim kernel.c
make
make clean
make
vim kernel.c
make clean
make
ls include/
gcc -Iinclude -o kernel.o kernel.c
make clean
make
vim kernel.c
make clean
make
