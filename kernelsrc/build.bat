clang -I ..\src\vendor\eBPF\include -target bpf -Werror -O2 -c -g myxdp.c -o myxdp.o