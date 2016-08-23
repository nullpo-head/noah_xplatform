#include <stdint.h>

#define SYSCALLS                                \
  SYSCALL(0, read)                              \
  SYSCALL(1, write)                             \
  SYSCALL(2, open)                              \
  SYSCALL(3, close)                             \
  SYSCALL(4, newstat)                           \
  SYSCALL(5, newfstat)                          \
  SYSCALL(6, newlstat)                          \
  SYSCALL(7, unimplemented)                     \
  SYSCALL(8, unimplemented)                     \
  SYSCALL(9, mmap)                              \
  SYSCALL(10, mprotect)                         \
  SYSCALL(11, munmap)                           \
  SYSCALL(12, brk)                              \
  SYSCALL(13, rt_sigaction)                     \
  SYSCALL(14, rt_sigprocmask)                   \
  SYSCALL(15, unimplemented)                    \
  SYSCALL(16, ioctl)                            \
  SYSCALL(17, unimplemented)                    \
  SYSCALL(18, unimplemented)                    \
  SYSCALL(19, unimplemented)                    \
  SYSCALL(20, writev)                           \
  SYSCALL(21, access)                           \
  SYSCALL(22, unimplemented)                    \
  SYSCALL(23, unimplemented)                    \
  SYSCALL(24, unimplemented)                    \
  SYSCALL(25, unimplemented)                    \
  SYSCALL(26, unimplemented)                    \
  SYSCALL(27, unimplemented)                    \
  SYSCALL(28, unimplemented)                    \
  SYSCALL(29, unimplemented)                    \
  SYSCALL(30, unimplemented)                    \
  SYSCALL(31, unimplemented)                    \
  SYSCALL(32, unimplemented)                    \
  SYSCALL(33, dup2)                             \
  SYSCALL(34, unimplemented)                    \
  SYSCALL(35, unimplemented)                    \
  SYSCALL(36, unimplemented)                    \
  SYSCALL(37, unimplemented)                    \
  SYSCALL(38, unimplemented)                    \
  SYSCALL(39, getpid)                           \
  SYSCALL(40, unimplemented)                    \
  SYSCALL(41, socket)                           \
  SYSCALL(42, connect)                          \
  SYSCALL(43, unimplemented)                    \
  SYSCALL(44, unimplemented)                    \
  SYSCALL(45, unimplemented)                    \
  SYSCALL(46, unimplemented)                    \
  SYSCALL(47, unimplemented)                    \
  SYSCALL(48, unimplemented)                    \
  SYSCALL(49, unimplemented)                    \
  SYSCALL(50, unimplemented)                    \
  SYSCALL(51, unimplemented)                    \
  SYSCALL(52, unimplemented)                    \
  SYSCALL(53, unimplemented)                    \
  SYSCALL(54, setsockopt)                       \
  SYSCALL(55, getsockopt)                       \
  SYSCALL(56, clone)                            \
  SYSCALL(57, fork)                             \
  SYSCALL(58, unimplemented)                    \
  SYSCALL(59, execve)                           \
  SYSCALL(60, exit)                             \
  SYSCALL(61, wait4)                            \
  SYSCALL(62, unimplemented)                    \
  SYSCALL(63, uname)                            \
  SYSCALL(64, unimplemented)                    \
  SYSCALL(65, unimplemented)                    \
  SYSCALL(66, unimplemented)                    \
  SYSCALL(67, unimplemented)                    \
  SYSCALL(68, unimplemented)                    \
  SYSCALL(69, unimplemented)                    \
  SYSCALL(70, unimplemented)                    \
  SYSCALL(71, unimplemented)                    \
  SYSCALL(72, fcntl)                            \
  SYSCALL(73, unimplemented)                    \
  SYSCALL(74, unimplemented)                    \
  SYSCALL(75, unimplemented)                    \
  SYSCALL(76, unimplemented)                    \
  SYSCALL(77, unimplemented)                    \
  SYSCALL(78, getdents)                         \
  SYSCALL(79, getcwd)                           \
  SYSCALL(80, unimplemented)                    \
  SYSCALL(81, unimplemented)                    \
  SYSCALL(82, rename)                           \
  SYSCALL(83, unimplemented)                    \
  SYSCALL(84, unimplemented)                    \
  SYSCALL(85, unimplemented)                    \
  SYSCALL(86, unimplemented)                    \
  SYSCALL(87, unimplemented)                    \
  SYSCALL(88, unimplemented)                    \
  SYSCALL(89, readlink)                         \
  SYSCALL(90, unimplemented)                    \
  SYSCALL(91, unimplemented)                    \
  SYSCALL(92, unimplemented)                    \
  SYSCALL(93, unimplemented)                    \
  SYSCALL(94, unimplemented)                    \
  SYSCALL(95, unimplemented)                    \
  SYSCALL(96, gettimeofday)                     \
  SYSCALL(97, getrlimit)                        \
  SYSCALL(98, unimplemented)                    \
  SYSCALL(99, sysinfo)                          \
  SYSCALL(100, unimplemented)                   \
  SYSCALL(101, unimplemented)                   \
  SYSCALL(102, getuid)                          \
  SYSCALL(103, unimplemented)                   \
  SYSCALL(104, getgid)                          \
  SYSCALL(105, setuid)                          \
  SYSCALL(106, setgid)                          \
  SYSCALL(107, geteuid)                         \
  SYSCALL(108, getegid)                         \
  SYSCALL(109, setpgid)                         \
  SYSCALL(110, getppid)                         \
  SYSCALL(111, getpgrp)                         \
  SYSCALL(112, unimplemented)                   \
  SYSCALL(113, unimplemented)                   \
  SYSCALL(114, unimplemented)                   \
  SYSCALL(115, unimplemented)                   \
  SYSCALL(116, unimplemented)                   \
  SYSCALL(117, unimplemented)                   \
  SYSCALL(118, unimplemented)                   \
  SYSCALL(119, unimplemented)                   \
  SYSCALL(120, unimplemented)                   \
  SYSCALL(121, unimplemented)                   \
  SYSCALL(122, unimplemented)                   \
  SYSCALL(123, unimplemented)                   \
  SYSCALL(124, unimplemented)                   \
  SYSCALL(125, unimplemented)                   \
  SYSCALL(126, unimplemented)                   \
  SYSCALL(127, unimplemented)                   \
  SYSCALL(128, unimplemented)                   \
  SYSCALL(129, unimplemented)                   \
  SYSCALL(130, unimplemented)                   \
  SYSCALL(131, unimplemented)                   \
  SYSCALL(132, unimplemented)                   \
  SYSCALL(133, unimplemented)                   \
  SYSCALL(134, unimplemented)                   \
  SYSCALL(135, unimplemented)                   \
  SYSCALL(136, unimplemented)                   \
  SYSCALL(137, unimplemented)                   \
  SYSCALL(138, unimplemented)                   \
  SYSCALL(139, unimplemented)                   \
  SYSCALL(140, unimplemented)                   \
  SYSCALL(141, unimplemented)                   \
  SYSCALL(142, unimplemented)                   \
  SYSCALL(143, unimplemented)                   \
  SYSCALL(144, unimplemented)                   \
  SYSCALL(145, unimplemented)                   \
  SYSCALL(146, unimplemented)                   \
  SYSCALL(147, unimplemented)                   \
  SYSCALL(148, unimplemented)                   \
  SYSCALL(149, unimplemented)                   \
  SYSCALL(150, unimplemented)                   \
  SYSCALL(151, unimplemented)                   \
  SYSCALL(152, unimplemented)                   \
  SYSCALL(153, unimplemented)                   \
  SYSCALL(154, unimplemented)                   \
  SYSCALL(155, unimplemented)                   \
  SYSCALL(156, unimplemented)                   \
  SYSCALL(157, unimplemented)                   \
  SYSCALL(158, arch_prctl)                      \
  SYSCALL(159, unimplemented)                   \
  SYSCALL(160, unimplemented)                   \
  SYSCALL(161, unimplemented)                   \
  SYSCALL(162, unimplemented)                   \
  SYSCALL(163, unimplemented)                   \
  SYSCALL(164, unimplemented)                   \
  SYSCALL(165, unimplemented)                   \
  SYSCALL(166, unimplemented)                   \
  SYSCALL(167, unimplemented)                   \
  SYSCALL(168, unimplemented)                   \
  SYSCALL(169, unimplemented)                   \
  SYSCALL(170, unimplemented)                   \
  SYSCALL(171, unimplemented)                   \
  SYSCALL(172, unimplemented)                   \
  SYSCALL(173, unimplemented)                   \
  SYSCALL(174, unimplemented)                   \
  SYSCALL(175, unimplemented)                   \
  SYSCALL(176, unimplemented)                   \
  SYSCALL(177, unimplemented)                   \
  SYSCALL(178, unimplemented)                   \
  SYSCALL(179, unimplemented)                   \
  SYSCALL(180, unimplemented)                   \
  SYSCALL(181, unimplemented)                   \
  SYSCALL(182, unimplemented)                   \
  SYSCALL(183, unimplemented)                   \
  SYSCALL(184, unimplemented)                   \
  SYSCALL(185, unimplemented)                   \
  SYSCALL(186, gettid)                          \
  SYSCALL(187, unimplemented)                   \
  SYSCALL(188, unimplemented)                   \
  SYSCALL(189, unimplemented)                   \
  SYSCALL(190, unimplemented)                   \
  SYSCALL(191, unimplemented)                   \
  SYSCALL(192, unimplemented)                   \
  SYSCALL(193, unimplemented)                   \
  SYSCALL(194, unimplemented)                   \
  SYSCALL(195, unimplemented)                   \
  SYSCALL(196, unimplemented)                   \
  SYSCALL(197, unimplemented)                   \
  SYSCALL(198, unimplemented)                   \
  SYSCALL(199, unimplemented)                   \
  SYSCALL(200, unimplemented)                   \
  SYSCALL(201, time)                            \
  SYSCALL(202, unimplemented)                   \
  SYSCALL(203, unimplemented)                   \
  SYSCALL(204, unimplemented)                   \
  SYSCALL(205, unimplemented)                   \
  SYSCALL(206, unimplemented)                   \
  SYSCALL(207, unimplemented)                   \
  SYSCALL(208, unimplemented)                   \
  SYSCALL(209, unimplemented)                   \
  SYSCALL(210, unimplemented)                   \
  SYSCALL(211, unimplemented)                   \
  SYSCALL(212, unimplemented)                   \
  SYSCALL(213, unimplemented)                   \
  SYSCALL(214, unimplemented)                   \
  SYSCALL(215, unimplemented)                   \
  SYSCALL(216, unimplemented)                   \
  SYSCALL(217, unimplemented)                   \
  SYSCALL(218, set_tid_address)                 \
  SYSCALL(219, unimplemented)                   \
  SYSCALL(220, unimplemented)                   \
  SYSCALL(221, fadvise64)                       \
  SYSCALL(222, unimplemented)                   \
  SYSCALL(223, unimplemented)                   \
  SYSCALL(224, unimplemented)                   \
  SYSCALL(225, unimplemented)                   \
  SYSCALL(226, unimplemented)                   \
  SYSCALL(227, unimplemented)                   \
  SYSCALL(228, unimplemented)                   \
  SYSCALL(229, unimplemented)                   \
  SYSCALL(230, unimplemented)                   \
  SYSCALL(231, exit_group)                      \
  SYSCALL(232, unimplemented)                   \
  SYSCALL(233, unimplemented)                   \
  SYSCALL(234, unimplemented)                   \
  SYSCALL(235, unimplemented)                   \
  SYSCALL(236, unimplemented)                   \
  SYSCALL(237, unimplemented)                   \
  SYSCALL(238, unimplemented)                   \
  SYSCALL(239, unimplemented)                   \
  SYSCALL(240, unimplemented)                   \
  SYSCALL(241, unimplemented)                   \
  SYSCALL(242, unimplemented)                   \
  SYSCALL(243, unimplemented)                   \
  SYSCALL(244, unimplemented)                   \
  SYSCALL(245, unimplemented)                   \
  SYSCALL(246, unimplemented)                   \
  SYSCALL(247, unimplemented)                   \
  SYSCALL(248, unimplemented)                   \
  SYSCALL(249, unimplemented)                   \
  SYSCALL(250, unimplemented)                   \
  SYSCALL(251, unimplemented)                   \
  SYSCALL(252, unimplemented)                   \
  SYSCALL(253, unimplemented)                   \
  SYSCALL(254, unimplemented)                   \
  SYSCALL(255, unimplemented)                   \
  SYSCALL(256, unimplemented)                   \
  SYSCALL(257, unimplemented)                   \
  SYSCALL(258, unimplemented)                   \
  SYSCALL(259, unimplemented)                   \
  SYSCALL(260, unimplemented)                   \
  SYSCALL(261, unimplemented)                   \
  SYSCALL(262, unimplemented)                   \
  SYSCALL(263, unimplemented)                   \
  SYSCALL(264, unimplemented)                   \
  SYSCALL(265, unimplemented)                   \
  SYSCALL(266, unimplemented)                   \
  SYSCALL(267, unimplemented)                   \
  SYSCALL(268, unimplemented)                   \
  SYSCALL(269, unimplemented)                   \
  SYSCALL(270, unimplemented)                   \
  SYSCALL(271, unimplemented)                   \
  SYSCALL(272, unimplemented)                   \
  SYSCALL(273, unimplemented)                   \
  SYSCALL(274, unimplemented)                   \
  SYSCALL(275, unimplemented)                   \
  SYSCALL(276, unimplemented)                   \
  SYSCALL(277, unimplemented)                   \
  SYSCALL(278, unimplemented)                   \
  SYSCALL(279, unimplemented)                   \
  SYSCALL(280, unimplemented)                   \
  SYSCALL(281, unimplemented)                   \
  SYSCALL(282, unimplemented)                   \
  SYSCALL(283, unimplemented)                   \
  SYSCALL(284, unimplemented)                   \
  SYSCALL(285, unimplemented)                   \
  SYSCALL(286, unimplemented)                   \
  SYSCALL(287, unimplemented)                   \
  SYSCALL(288, unimplemented)                   \
  SYSCALL(289, unimplemented)                   \
  SYSCALL(290, unimplemented)                   \
  SYSCALL(291, unimplemented)                   \
  SYSCALL(292, unimplemented)                   \
  SYSCALL(293, unimplemented)                   \
  SYSCALL(294, unimplemented)                   \
  SYSCALL(295, unimplemented)                   \
  SYSCALL(296, unimplemented)                   \
  SYSCALL(297, unimplemented)                   \
  SYSCALL(298, unimplemented)                   \
  SYSCALL(299, unimplemented)                   \
  SYSCALL(300, unimplemented)                   \
  SYSCALL(301, unimplemented)                   \
  SYSCALL(302, unimplemented)                   \
  SYSCALL(303, unimplemented)                   \
  SYSCALL(304, unimplemented)                   \
  SYSCALL(305, unimplemented)                   \
  SYSCALL(306, unimplemented)                   \
  SYSCALL(307, unimplemented)                   \
  SYSCALL(308, unimplemented)                   \
  SYSCALL(309, unimplemented)                   \
  SYSCALL(310, unimplemented)                   \
  SYSCALL(311, unimplemented)                   \
  SYSCALL(312, unimplemented)                   \
  SYSCALL(313, unimplemented)                   \
  SYSCALL(314, unimplemented)                   \
  SYSCALL(315, unimplemented)                   \
  SYSCALL(316, unimplemented)                   \
  SYSCALL(317, unimplemented)                   \
  SYSCALL(318, unimplemented)                   \
  SYSCALL(319, unimplemented)                   \
  SYSCALL(320, unimplemented)                   \
  SYSCALL(321, unimplemented)                   \
  SYSCALL(322, unimplemented)                   \
  SYSCALL(323, unimplemented)                   \
  SYSCALL(324, unimplemented)                   \
  SYSCALL(325, unimplemented)                   \
  SYSCALL(326, unimplemented)                   \
  SYSCALL(327, unimplemented)                   \
  SYSCALL(328, unimplemented)

#define NR_SYSCALLS 329

typedef uint64_t (*sc_handler_t)(uint64_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t);

extern sc_handler_t sc_handler_table[NR_SYSCALLS];
