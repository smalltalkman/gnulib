/* Test of sigabbrev_np() function.

   Copyright (C) 2020-2026 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, see <https://www.gnu.org/licenses/>.  */

#include <config.h>

/* Specification.  */
#include <string.h>

#include "signature.h"
SIGNATURE_CHECK (sigabbrev_np, const char *, (int));

#include <signal.h>

#include "macros.h"

int
main (void)
{
  /* Signals specified by ISO C.  */
  ASSERT (streq (sigabbrev_np (SIGABRT), "ABRT"));
  ASSERT (streq (sigabbrev_np (SIGFPE), "FPE"));
  ASSERT (streq (sigabbrev_np (SIGILL), "ILL"));
  ASSERT (streq (sigabbrev_np (SIGINT), "INT"));
  ASSERT (streq (sigabbrev_np (SIGSEGV), "SEGV"));
  ASSERT (streq (sigabbrev_np (SIGTERM), "TERM"));

  /* Signals specified by POSIX.
     <https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/signal.h.html>  */
  #ifdef SIGALRM
  ASSERT (streq (sigabbrev_np (SIGALRM), "ALRM"));
  #endif
  #ifdef SIGBUS
  ASSERT (streq (sigabbrev_np (SIGBUS), "BUS"));
  #endif
  #ifdef SIGCHLD
  ASSERT (streq (sigabbrev_np (SIGCHLD), "CHLD"));
  #endif
  #ifdef SIGCONT
  ASSERT (streq (sigabbrev_np (SIGCONT), "CONT"));
  #endif
  #ifdef SIGHUP
  ASSERT (streq (sigabbrev_np (SIGHUP), "HUP"));
  #endif
  #ifdef SIGKILL
  ASSERT (streq (sigabbrev_np (SIGKILL), "KILL"));
  #endif
  #ifdef SIGPIPE
  ASSERT (streq (sigabbrev_np (SIGPIPE), "PIPE"));
  #endif
  #ifdef SIGQUIT
  ASSERT (streq (sigabbrev_np (SIGQUIT), "QUIT"));
  #endif
  #ifdef SIGSTOP
  ASSERT (streq (sigabbrev_np (SIGSTOP), "STOP"));
  #endif
  #ifdef SIGTSTP
  ASSERT (streq (sigabbrev_np (SIGTSTP), "TSTP"));
  #endif
  #ifdef SIGTTIN
  ASSERT (streq (sigabbrev_np (SIGTTIN), "TTIN"));
  #endif
  #ifdef SIGTTOU
  ASSERT (streq (sigabbrev_np (SIGTTOU), "TTOU"));
  #endif
  #ifdef SIGUSR1
  ASSERT (streq (sigabbrev_np (SIGUSR1), "USR1"));
  #endif
  #ifdef SIGUSR2
  ASSERT (streq (sigabbrev_np (SIGUSR2), "USR2"));
  #endif
  #ifdef SIGPOLL
  ASSERT (streq (sigabbrev_np (SIGPOLL), "POLL"));
  #endif
  #ifdef SIGPROF
  ASSERT (streq (sigabbrev_np (SIGPROF), "PROF"));
  #endif
  #ifdef SIGSYS
  ASSERT (streq (sigabbrev_np (SIGSYS), "SYS"));
  #endif
  #ifdef SIGTRAP
  ASSERT (streq (sigabbrev_np (SIGTRAP), "TRAP"));
  #endif
  #ifdef SIGURG
  ASSERT (streq (sigabbrev_np (SIGURG), "URG"));
  #endif
  #ifdef SIGVTALRM
  ASSERT (streq (sigabbrev_np (SIGVTALRM), "VTALRM"));
  #endif
  #ifdef SIGXCPU
  ASSERT (streq (sigabbrev_np (SIGXCPU), "XCPU"));
  #endif
  #ifdef SIGXFSZ
  ASSERT (streq (sigabbrev_np (SIGXFSZ), "XFSZ"));
  #endif

  /* Other signals on other systems.  */
  /* native Windows */
  #ifdef SIGBREAK
  ASSERT (streq (sigabbrev_np (SIGBREAK), "BREAK"));
  #endif
  /* AIX */
  #ifdef SIGCPUFAIL
  ASSERT (streq (sigabbrev_np (SIGCPUFAIL), "CPUFAIL"));
  #endif
  /* AIX */
  #ifdef SIGDANGER
  ASSERT (streq (sigabbrev_np (SIGDANGER), "DANGER"));
  #endif
  /* Mac OS X, FreeBSD, NetBSD, OpenBSD, Minix, AIX, Cygwin, mingw */
  #ifdef SIGEMT
  ASSERT (streq (sigabbrev_np (SIGEMT), "EMT"));
  #endif
  /* Mac OS X, FreeBSD, NetBSD, OpenBSD, Minix */
  #if defined SIGINFO && SIGINFO != SIGPWR
  ASSERT (streq (sigabbrev_np (SIGINFO), "INFO"));
  #endif
  /* AIX */
  #ifdef SIGKAP
  ASSERT (streq (sigabbrev_np (SIGKAP), "KAP"));
  #endif
  /* Haiku */
  #ifdef SIGKILLTHR
  ASSERT (streq (sigabbrev_np (SIGKILLTHR), "KILLTHR"));
  #endif
  /* Minix */
  #ifdef SIGKMEM
  ASSERT (streq (sigabbrev_np (SIGKMEM), "KMEM"));
  #endif
  /* Minix */
  #ifdef SIGKMESS
  ASSERT (streq (sigabbrev_np (SIGKMESS), "KMESS"));
  #endif
  /* Minix */
  #ifdef SIGKSIG
  ASSERT (streq (sigabbrev_np (SIGKSIG), "KSIG"));
  #endif
  /* Minix */
  #ifdef SIGKSIGSM
  ASSERT (streq (sigabbrev_np (SIGKSIGSM), "KSIGSM"));
  #endif
  /* FreeBSD */
  #ifdef SIGLIBRT
  ASSERT (streq (sigabbrev_np (SIGLIBRT), "LIBRT"));
  #endif
  /* AIX */
  #ifdef SIGMIGRATE
  ASSERT (streq (sigabbrev_np (SIGMIGRATE), "MIGRATE"));
  #endif
  /* AIX */
  #ifdef SIGMSG
  ASSERT (streq (sigabbrev_np (SIGMSG), "MSG"));
  #endif
  /* AIX */
  #ifdef SIGPRE
  ASSERT (streq (sigabbrev_np (SIGPRE), "PRE"));
  #endif
  /* Linux, NetBSD, Minix, AIX, Cygwin */
  #ifdef SIGPWR
  ASSERT (streq (sigabbrev_np (SIGPWR), "PWR"));
  #endif
  /* AIX */
  #ifdef SIGRECONFIG
  ASSERT (streq (sigabbrev_np (SIGRECONFIG), "RECONFIG"));
  #endif
  /* AIX */
  #ifdef SIGRECOVERY
  ASSERT (streq (sigabbrev_np (SIGRECOVERY), "RECOVERY"));
  #endif
  /* AIX */
  #ifdef SIGRETRACT
  ASSERT (streq (sigabbrev_np (SIGRETRACT), "RETRACT"));
  #endif
  /* AIX */
  #ifdef SIGSAK
  ASSERT (streq (sigabbrev_np (SIGSAK), "SAK"));
  #endif
  /* Minix */
  #ifdef SIGSNDELAY
  ASSERT (streq (sigabbrev_np (SIGSNDELAY), "SNDELAY"));
  #endif
  /* AIX */
  #ifdef SIGSOUND
  ASSERT (streq (sigabbrev_np (SIGSOUND), "SOUND"));
  #endif
  /* Linux */
  #ifdef SIGSTKFLT
  ASSERT (streq (sigabbrev_np (SIGSTKFLT), "STKFLT"));
  #endif
  /* AIX */
  #ifdef SIGSYSERROR
  ASSERT (streq (sigabbrev_np (SIGSYSERROR), "SYSERROR"));
  #endif
  /* AIX */
  #ifdef SIGTALRM
  ASSERT (streq (sigabbrev_np (SIGTALRM), "TALRM"));
  #endif
  /* FreeBSD, OpenBSD */
  #ifdef SIGTHR
  ASSERT (streq (sigabbrev_np (SIGTHR), "THR"));
  #endif
  /* AIX */
  #ifdef SIGVIRT
  ASSERT (streq (sigabbrev_np (SIGVIRT), "VIRT"));
  #endif
  /* AIX */
  #ifdef SIGWAITING
  ASSERT (streq (sigabbrev_np (SIGWAITING), "WAITING"));
  #endif
  /* Linux, Mac OS X, FreeBSD, NetBSD, OpenBSD, Minix, AIX, Cygwin, Haiku */
  #ifdef SIGWINCH
  ASSERT (streq (sigabbrev_np (SIGWINCH), "WINCH"));
  #endif

  ASSERT (sigabbrev_np (-714) == NULL);

  return test_exit_status;
}
