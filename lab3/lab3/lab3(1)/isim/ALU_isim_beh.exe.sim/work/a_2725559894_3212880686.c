/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/MKS/MKS_Lab3_UN_v8/ALU.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_767632659_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2725559894_3212880686_p_0(char *t0)
{
    char t26[16];
    char t37[16];
    char t38[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t39;
    unsigned int t40;
    unsigned char t41;
    unsigned int t42;
    unsigned int t43;

LAB0:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 6417);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB12:    t5 = (t0 + 6420);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB13:    t8 = (t0 + 6423);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB14:    t11 = (t0 + 6426);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB15:    t14 = (t0 + 6429);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB16:    t17 = (t0 + 6432);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB17:    t20 = (t0 + 6435);
    t22 = xsi_mem_cmp(t20, t2, 3U);
    if (t22 == 1)
        goto LAB9;

LAB18:    t23 = (t0 + 6438);
    t25 = xsi_mem_cmp(t23, t2, 3U);
    if (t25 == 1)
        goto LAB10;

LAB19:
LAB11:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 6260U);
    t3 = (t0 + 1032U);
    t5 = *((char **)t3);
    t3 = (t0 + 6244U);
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (8U != t40);
    if (t41 == 1)
        goto LAB34;

LAB35:    t9 = (t0 + 4200);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t1 = (t0 + 4088);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(45, ng0);
    t27 = (t0 + 1192U);
    t28 = *((char **)t27);
    t27 = (t0 + 6260U);
    t29 = (t0 + 1032U);
    t30 = *((char **)t29);
    t29 = (t0 + 6244U);
    t31 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t26, t28, t27, t30, t29);
    t32 = (t0 + 4200);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t31, 8U);
    xsi_driver_first_trans_fast(t32);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 6260U);
    t1 = xsi_base_array_concat(t1, t37, t3, (char)99, (unsigned char)2, (char)97, t2, t5, (char)101);
    t6 = (t0 + 1032U);
    t8 = *((char **)t6);
    t9 = ((IEEE_P_2592010699) + 4024);
    t11 = (t0 + 6244U);
    t6 = xsi_base_array_concat(t6, t38, t9, (char)99, (unsigned char)2, (char)97, t8, t11, (char)101);
    t12 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t26, t1, t37, t6, t38);
    t14 = (t26 + 12U);
    t39 = *((unsigned int *)t14);
    t40 = (1U * t39);
    t41 = (9U != t40);
    if (t41 == 1)
        goto LAB21;

LAB22:    t15 = (t0 + 4264);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 9U);
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB4:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 6260U);
    t3 = (t0 + 1032U);
    t5 = *((char **)t3);
    t3 = (t0 + 6244U);
    t6 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t26, t2, t1, t5, t3);
    t8 = (t26 + 12U);
    t39 = *((unsigned int *)t8);
    t40 = (1U * t39);
    t41 = (8U != t40);
    if (t41 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 4200);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB5:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 6260U);
    t3 = (t0 + 1032U);
    t5 = *((char **)t3);
    t3 = (t0 + 6244U);
    t6 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t26, t2, t1, t5, t3);
    t8 = (t0 + 2288U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t11 = (t26 + 12U);
    t39 = *((unsigned int *)t11);
    t40 = (1U * t39);
    memcpy(t8, t6, t40);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t39 = (15 - 7);
    t40 = (t39 * 1U);
    t42 = (0 + t40);
    t1 = (t2 + t42);
    t3 = (t0 + 4200);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t39 = (15 - 15);
    t40 = (t39 * 1U);
    t42 = (0 + t40);
    t1 = (t2 + t42);
    t3 = (t26 + 0U);
    t5 = (t3 + 0U);
    *((int *)t5) = 15;
    t5 = (t3 + 4U);
    *((int *)t5) = 8;
    t5 = (t3 + 8U);
    *((int *)t5) = -1;
    t4 = (8 - 15);
    t43 = (t4 * -1);
    t43 = (t43 + 1);
    t5 = (t3 + 12U);
    *((unsigned int *)t5) = t43;
    t41 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t26, 0);
    if (t41 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 4264);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB26:    goto LAB2;

LAB6:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t39 = (7 - 6);
    t40 = (t39 * 1U);
    t42 = (0 + t40);
    t1 = (t2 + t42);
    t3 = (t0 + 4200);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_delta(t3, 0U, 7U, 0LL);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 4200);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 7U, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 6260U);
    t1 = xsi_base_array_concat(t1, t26, t3, (char)97, t2, t5, (char)99, (unsigned char)2, (char)101);
    t39 = (8U + 1U);
    t41 = (9U != t39);
    if (t41 == 1)
        goto LAB28;

LAB29:    t6 = (t0 + 4264);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 9U);
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB7:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t39 = (7 - 7);
    t40 = (t39 * 1U);
    t42 = (0 + t40);
    t1 = (t2 + t42);
    t3 = (t0 + 4200);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_delta(t3, 1U, 7U, 0LL);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4200);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 6244U);
    t1 = xsi_base_array_concat(t1, t26, t3, (char)97, t2, t5, (char)99, (unsigned char)2, (char)101);
    t39 = (8U + 1U);
    t41 = (9U != t39);
    if (t41 == 1)
        goto LAB30;

LAB31:    t6 = (t0 + 4264);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 9U);
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB8:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t39 = (7 - 7);
    t40 = (t39 * 1U);
    t42 = (0 + t40);
    t1 = (t2 + t42);
    t3 = (t0 + 4200);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 7U);
    xsi_driver_first_trans_delta(t3, 1U, 7U, 0LL);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 4200);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = ((IEEE_P_2592010699) + 4024);
    t5 = (t0 + 6260U);
    t1 = xsi_base_array_concat(t1, t26, t3, (char)97, t2, t5, (char)99, (unsigned char)2, (char)101);
    t39 = (8U + 1U);
    t41 = (9U != t39);
    if (t41 == 1)
        goto LAB32;

LAB33:    t6 = (t0 + 4264);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 9U);
    xsi_driver_first_trans_fast(t6);
    goto LAB2;

LAB9:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 4200);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4200);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB20:;
LAB21:    xsi_size_not_matching(9U, t40, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(8U, t40, 0);
    goto LAB24;

LAB25:    xsi_set_current_line(54, ng0);
    t5 = (t0 + 4264);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    goto LAB26;

LAB28:    xsi_size_not_matching(9U, t39, 0);
    goto LAB29;

LAB30:    xsi_size_not_matching(9U, t39, 0);
    goto LAB31;

LAB32:    xsi_size_not_matching(9U, t39, 0);
    goto LAB33;

LAB34:    xsi_size_not_matching(8U, t40, 0);
    goto LAB35;

}

static void work_a_2725559894_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(80, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 4328);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4104);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2725559894_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(82, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = (8 - 8);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 4392);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 4120);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2725559894_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2725559894_3212880686_p_0,(void *)work_a_2725559894_3212880686_p_1,(void *)work_a_2725559894_3212880686_p_2};
	xsi_register_didat("work_a_2725559894_3212880686", "isim/ALU_isim_beh.exe.sim/work/a_2725559894_3212880686.didat");
	xsi_register_executes(pe);
}
