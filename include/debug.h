#include <stdio.h>
#include <stdint.h>

#include "cross_platform.h"

void init_sink(const char *fn, FILE **sinkp, const char *name);
void init_printk(const char *fn);
void init_warnk(const char *fn);
void init_meta_strace(const char *fn);

void printk(const char *fmt, ...) ATTR_CHECK_FORMAT(printf, 1, 2);
void warnk(const char *fmt, ...) ATTR_CHECK_FORMAT(printf, 1, 2);
[[noreturn]] void panic(const char *fmt, ...) ATTR_CHECK_FORMAT(printf, 1, 2);
void print_regs(void);
void dump_instr(void);
void meta_strace_pre(int syscall_num, char *syscall_name, ...);
void meta_strace_post(int syscall_num, char *syscall_name, uint64_t ret, ...);
// void meta_strace_sigdeliver(int signum);
void meta_strace_info(const char *fmt, ...) ATTR_CHECK_FORMAT(printf, 1, 2);
