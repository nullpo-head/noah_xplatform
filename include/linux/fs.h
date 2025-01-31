/*-
 * Copyright (c) 2016 Yuichi Nishiwaki, Takaya Saeki
 * Copyright (c) 2007 Roman Divacky
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD$
 */

#ifndef _LINUX_FILE_H_
#define	_LINUX_FILE_H_

#include <fcntl.h>

#define LINUX_AT_FDCWD -100
#define LINUX_AT_SYMLINK_NOFOLLOW 0x100
/* You must treat E_ACCESS as E_REMOVEDIR in unlinkat */
#define LINUX_AT_EACCESS 0x200
#define LINUX_AT_REMOVEDIR 0x200
#define LINUX_AT_SYMLINK_FOLLOW 0x400
#define LINUX_AT_NO_AUTOMOUNT 0x800
#define LINUX_AT_EMPTY_PATH 0x1000

/*
 * posix_fadvise advice
 */
#define	LINUX_POSIX_FADV_NORMAL		0
#define	LINUX_POSIX_FADV_RANDOM		1
#define	LINUX_POSIX_FADV_SEQUENTIAL    	2
#define	LINUX_POSIX_FADV_WILLNEED      	3
#define	LINUX_POSIX_FADV_DONTNEED      	4
#define	LINUX_POSIX_FADV_NOREUSE       	5

/*
 * mount flags
 */
#define	LINUX_MS_RDONLY		0x0001
#define	LINUX_MS_NOSUID		0x0002
#define	LINUX_MS_NODEV		0x0004
#define	LINUX_MS_NOEXEC		0x0008
#define	LINUX_MS_REMOUNT	0x0020

/*
 * common open/fcntl flags
 */
#define	LINUX_O_RDONLY		00000000
#define	LINUX_O_WRONLY		00000001
#define	LINUX_O_RDWR		00000002
#define	LINUX_O_ACCMODE		00000003
#define	LINUX_O_CREAT		00000100
#define	LINUX_O_EXCL		00000200
#define	LINUX_O_NOCTTY		00000400
#define	LINUX_O_TRUNC		00001000
#define	LINUX_O_APPEND		00002000
#define	LINUX_O_NONBLOCK	00004000
#define	LINUX_O_NDELAY		LINUX_O_NONBLOCK
#define	LINUX_O_SYNC		00010000
#define	LINUX_FASYNC		00020000
#define	LINUX_O_DIRECT		00040000	/* Direct disk access hint */
#define	LINUX_O_LARGEFILE	00100000
#define	LINUX_O_DIRECTORY	00200000	/* Must be a directory */
#define	LINUX_O_NOFOLLOW	00400000	/* Do not follow links */
#define	LINUX_O_NOATIME		01000000
#define	LINUX_O_CLOEXEC		02000000
#define	LINUX_O_PATH		010000000

#define	LINUX_F_DUPFD		0
#define	LINUX_F_GETFD		1
#define	LINUX_F_SETFD		2
#define	LINUX_F_GETFL		3
#define	LINUX_F_SETFL		4
#ifndef LINUX_F_GETLK
#define	LINUX_F_GETLK		5
#define	LINUX_F_SETLK		6
#define	LINUX_F_SETLKW		7
#endif
#ifndef LINUX_F_SETOWN
#define	LINUX_F_SETOWN		8
#define	LINUX_F_GETOWN		9
#endif
#ifndef LINUX_F_SETSIG
#define	LINUX_F_SETSIG		10
#define	LINUX_F_GETSIG		11
#endif
#ifndef LINUX_F_SETOWN_EX
#define	LINUX_F_SETOWN_EX	15
#define	LINUX_F_GETOWN_EX	16
#define	LINUX_F_GETOWNER_UIDS	17
#endif

#define	LINUX_F_SPECIFIC_BASE	1024

#define	LINUX_F_SETLEASE	(LINUX_F_SPECIFIC_BASE + 0)
#define	LINUX_F_GETLEASE	(LINUX_F_SPECIFIC_BASE + 1)
#define	LINUX_F_CANCELLK	(LINUX_F_SPECIFIC_BASE + 5)
#define	LINUX_F_DUPFD_CLOEXEC	(LINUX_F_SPECIFIC_BASE + 6)
#define	LINUX_F_NOTIFY		(LINUX_F_SPECIFIC_BASE + 2)
#define	LINUX_F_SETPIPE_SZ	(LINUX_F_SPECIFIC_BASE + 7)
#define	LINUX_F_GETPIPE_SZ	(LINUX_F_SPECIFIC_BASE + 8)

#define	LINUX_F_GETLKP		36
#define	LINUX_F_SETLKP		37
#define	LINUX_F_SETLKPW		38

#define	LINUX_F_OWNER_TID	0
#define	LINUX_F_OWNER_PID	1
#define	LINUX_F_OWNER_PGRP	2

#ifndef LINUX_F_RDLCK
#define	LINUX_F_RDLCK		0
#define	LINUX_F_WRLCK		1
#define	LINUX_F_UNLCK		2
#endif

/*
 * getdents family of syscalls
 */
struct l_dirent {
	l_ulong		d_ino;
	l_off_t		d_off;
	l_ushort	d_reclen;
	char		d_name[LINUX_NAME_MAX + 1];
};

struct l_dirent64 {
	uint64_t	d_ino;
	int64_t		d_off;
	l_ushort	d_reclen;
	u_char		d_type;
	char		d_name[LINUX_NAME_MAX + 1];
};

/*
 * mount flags
 */
#define	LINUX_MS_RDONLY		0x0001
#define	LINUX_MS_NOSUID		0x0002
#define	LINUX_MS_NODEV		0x0004
#define	LINUX_MS_NOEXEC		0x0008
#define	LINUX_MS_REMOUNT	0x0020

/*
 * stat family of syscalls
 */

struct l_newstat {
  l_dev_t		st_dev;
  l_ino_t		st_ino;
  l_ulong		st_nlink;
  l_uint		st_mode;
  l_uid_t		st_uid;
  l_gid_t		st_gid;
  l_uint		__st_pad1;
  l_dev_t		st_rdev;
  l_off_t		st_size;
  l_long		st_blksize;
  l_long		st_blocks;
  struct l_timespec	st_atim;
  struct l_timespec	st_mtim;
  struct l_timespec	st_ctim;
  l_long		__unused1;
  l_long		__unused2;
  l_long		__unused3;
};

typedef struct {
  l_int		val[2];
} l_fsid_t;

struct l_statfs {
  l_long	f_type;
  l_long	f_bsize;
  l_long	f_blocks;
  l_long	f_bfree;
  l_long	f_bavail;
  l_long	f_files;
  l_long	f_ffree;
  l_fsid_t	f_fsid;
  l_long	f_namelen;
  l_long        f_frsize;
  l_long	f_flags;
  l_long	f_spare[4];
};

#define LINUX_ST_RDONLY       0x0001
#define LINUX_ST_NOSUID       0x0002
#define LINUX_ST_NODEV        0x0004
#define LINUX_ST_NOEXEC       0x0008
#define LINUX_ST_SYNCHRONOUS  0x0010
#define LINUX_ST_VALID        0x0020
#define LINUX_ST_MANDLOCK     0x0040
#define LINUX_ST_NOATIME      0x0400
#define LINUX_ST_NODIRATIME   0x0800
#define LINUX_ST_RELATIME     0x1000

#define LINUX_FD_SETSIZE 1024

typedef unsigned long l_fd_set[LINUX_FD_SETSIZE / (8 * sizeof(long))];

/*
 * flock
 */
struct l_flock {
  l_short l_type;
  l_short l_whence;
  l_long  l_start;
  l_long  l_len;
  l_pid_t l_pid;
};

#endif	/* !_LINUX_FILE_H_ */
