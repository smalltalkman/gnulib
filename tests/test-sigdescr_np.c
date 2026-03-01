/* Test of sigdescr_np() function.

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
SIGNATURE_CHECK (sigdescr_np, const char *, (int));

#include <signal.h>

#include "macros.h"

int
main (void)
{
  /* Signals specified by ISO C.  */
  ASSERT (streq (sigdescr_np (SIGABRT), "Aborted"));
  ASSERT (streq (sigdescr_np (SIGFPE), "Floating point exception")
          || streq (sigdescr_np (SIGFPE), "Arithmetic exception"));
  ASSERT (streq (sigdescr_np (SIGILL), "Illegal instruction"));
  ASSERT (streq (sigdescr_np (SIGINT), "Interrupt"));
  ASSERT (streq (sigdescr_np (SIGSEGV), "Segmentation fault"));
  ASSERT (streq (sigdescr_np (SIGTERM), "Terminated"));

  /* Signals specified by POSIX.
     <https://pubs.opengroup.org/onlinepubs/9699919799/basedefs/signal.h.html>  */
  #ifdef SIGALRM
  ASSERT (streq (sigdescr_np (SIGALRM), "Alarm clock"));
  #endif
  #ifdef SIGBUS
  ASSERT (streq (sigdescr_np (SIGBUS), "Bus error"));
  #endif
  #ifdef SIGCHLD
  ASSERT (streq (sigdescr_np (SIGCHLD), "Child exited") /* glibc */
          || streq (sigdescr_np (SIGCHLD), "Child stopped or exited"));
  #endif
  #ifdef SIGCONT
  ASSERT (streq (sigdescr_np (SIGCONT), "Continued"));
  #endif
  #ifdef SIGHUP
  ASSERT (streq (sigdescr_np (SIGHUP), "Hangup"));
  #endif
  #ifdef SIGKILL
  ASSERT (streq (sigdescr_np (SIGKILL), "Killed"));
  #endif
  #ifdef SIGPIPE
  ASSERT (streq (sigdescr_np (SIGPIPE), "Broken pipe"));
  #endif
  #ifdef SIGQUIT
  ASSERT (streq (sigdescr_np (SIGQUIT), "Quit"));
  #endif
  #ifdef SIGSTOP
  ASSERT (streq (sigdescr_np (SIGSTOP), "Stopped (signal)"));
  #endif
  #ifdef SIGTSTP
  ASSERT (streq (sigdescr_np (SIGTSTP), "Stopped"));
  #endif
  #ifdef SIGTTIN
  ASSERT (streq (sigdescr_np (SIGTTIN), "Stopped (tty input)"));
  #endif
  #ifdef SIGTTOU
  ASSERT (streq (sigdescr_np (SIGTTOU), "Stopped (tty output)"));
  #endif
  #ifdef SIGUSR1
  ASSERT (streq (sigdescr_np (SIGUSR1), "User defined signal 1"));
  #endif
  #ifdef SIGUSR2
  ASSERT (streq (sigdescr_np (SIGUSR2), "User defined signal 2"));
  #endif
  #ifdef SIGPOLL
  ASSERT (streq (sigdescr_np (SIGPOLL), "I/O possible"));
  #endif
  #ifdef SIGPROF
  ASSERT (streq (sigdescr_np (SIGPROF), "Profiling timer expired"));
  #endif
  #ifdef SIGSYS
  ASSERT (streq (sigdescr_np (SIGSYS), "Bad system call"));
  #endif
  #ifdef SIGTRAP
  ASSERT (streq (sigdescr_np (SIGTRAP), "Trace/breakpoint trap"));
  #endif
  #ifdef SIGURG
  ASSERT (streq (sigdescr_np (SIGURG), "Urgent I/O condition"));
  #endif
  #ifdef SIGVTALRM
  ASSERT (streq (sigdescr_np (SIGVTALRM), "Virtual timer expired"));
  #endif
  #ifdef SIGXCPU
  ASSERT (streq (sigdescr_np (SIGXCPU), "CPU time limit exceeded"));
  #endif
  #ifdef SIGXFSZ
  ASSERT (streq (sigdescr_np (SIGXFSZ), "File size limit exceeded"));
  #endif

  /* Other signals on other systems.  */
  /* native Windows */
  #ifdef SIGBREAK
  ASSERT (streq (sigdescr_np (SIGBREAK), "Ctrl-Break"));
  #endif
  /* AIX */
  #ifdef SIGCPUFAIL
  ASSERT (streq (sigdescr_np (SIGCPUFAIL), "CPU going down"));
  #endif
  /* AIX */
  #ifdef SIGDANGER
  ASSERT (streq (sigdescr_np (SIGDANGER), "Swap space nearly exhausted"));
  #endif
  /* glibc, Mac OS X, FreeBSD, NetBSD, OpenBSD, Minix, AIX, Cygwin, mingw */
  #ifdef SIGEMT
  ASSERT (streq (sigdescr_np (SIGEMT), "Instruction emulation needed")
          /* This completely unintelligible message is seen in glibc.  */
          || streq (sigdescr_np (SIGEMT), "EMT trap"));
  #endif
  /* Mac OS X, FreeBSD, NetBSD, OpenBSD, Minix */
  #if defined SIGINFO && SIGINFO != SIGPWR
  ASSERT (streq (sigdescr_np (SIGINFO), "Information request"));
  #endif
  /* AIX */
  #ifdef SIGKAP
  ASSERT (streq (sigdescr_np (SIGKAP), "Keep Alive Poll"));
  #endif
  /* Haiku */
  #ifdef SIGKILLTHR
  ASSERT (streq (sigdescr_np (SIGKILLTHR), "Kill thread"));
  #endif
  /* Minix */
  #ifdef SIGKMEM
  ASSERT (streq (sigdescr_np (SIGKMEM), "Kernel memory request"));
  #endif
  /* Minix */
  #ifdef SIGKMESS
  ASSERT (streq (sigdescr_np (SIGKMESS), "Kernel message"));
  #endif
  /* Minix */
  #ifdef SIGKSIG
  ASSERT (streq (sigdescr_np (SIGKSIG), "Kernel signal"));
  #endif
  /* Minix */
  #ifdef SIGKSIGSM
  ASSERT (streq (sigdescr_np (SIGKSIGSM), "Kernel signal for signal manager"));
  #endif
  /* FreeBSD */
  #ifdef SIGLIBRT
  ASSERT (streq (sigdescr_np (SIGLIBRT), "Real-time library interrupt"));
  #endif
  /* AIX */
  #ifdef SIGMIGRATE
  ASSERT (streq (sigdescr_np (SIGMIGRATE), "Process migration"));
  #endif
  /* AIX */
  #ifdef SIGMSG
  ASSERT (streq (sigdescr_np (SIGMSG), "Message in the ring"));
  #endif
  /* AIX */
  #ifdef SIGPRE
  ASSERT (streq (sigdescr_np (SIGPRE), "Programmed exception"));
  #endif
  /* Linux, NetBSD, Minix, AIX, Cygwin */
  #ifdef SIGPWR
  ASSERT (streq (sigdescr_np (SIGPWR), "Power failure"));
  #endif
  /* AIX */
  #ifdef SIGRECONFIG
  ASSERT (streq (sigdescr_np (SIGRECONFIG), "Dynamic logical partitioning changed"));
  #endif
  /* AIX */
  #ifdef SIGRECOVERY
  ASSERT (streq (sigdescr_np (SIGRECOVERY), "Kernel recovery"));
  #endif
  /* AIX */
  #ifdef SIGRETRACT
  ASSERT (streq (sigdescr_np (SIGRETRACT), "Retracting Keep Alive Poll"));
  #endif
  /* AIX */
  #ifdef SIGSAK
  ASSERT (streq (sigdescr_np (SIGSAK), "Secure Attention Key"));
  #endif
  /* Minix */
  #ifdef SIGSNDELAY
  ASSERT (streq (sigdescr_np (SIGSNDELAY), "Done sending message"));
  #endif
  /* AIX */
  #ifdef SIGSOUND
  ASSERT (streq (sigdescr_np (SIGSOUND), "Sound configuration changed"));
  #endif
  /* Linux */
  #ifdef SIGSTKFLT
  ASSERT (streq (sigdescr_np (SIGSTKFLT), "Stack fault"));
  #endif
  /* AIX */
  #ifdef SIGSYSERROR
  ASSERT (streq (sigdescr_np (SIGSYSERROR), "Kernel error"));
  #endif
  /* AIX */
  #ifdef SIGTALRM
  ASSERT (streq (sigdescr_np (SIGTALRM), "Thread alarm clock"));
  #endif
  /* FreeBSD, OpenBSD */
  #ifdef SIGTHR
  ASSERT (streq (sigdescr_np (SIGTHR), "Thread library interrupt"));
  #endif
  /* AIX */
  #ifdef SIGVIRT
  ASSERT (streq (sigdescr_np (SIGVIRT), "Virtual time alarm clock"));
  #endif
  /* AIX */
  #ifdef SIGWAITING
  ASSERT (streq (sigdescr_np (SIGWAITING), "Thread waiting"));
  #endif
  /* Linux, Mac OS X, FreeBSD, NetBSD, OpenBSD, Minix, AIX, Cygwin, Haiku */
  #ifdef SIGWINCH
  ASSERT (streq (sigdescr_np (SIGWINCH), "Window changed") /* glibc */
          || streq (sigdescr_np (SIGWINCH), "Window size changed"));
  #endif

  ASSERT (sigdescr_np (-714) == NULL);

  return test_exit_status;
}
