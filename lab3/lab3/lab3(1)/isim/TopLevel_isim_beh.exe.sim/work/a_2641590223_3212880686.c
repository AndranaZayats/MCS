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
static const char *ng0 = "C:/Users/Zver/Desktop/MKS/lab3/lab3(1)/SegmentDecoder.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_2641590223_3212880686_p_0(char *t0)
{
    char t10[16];
    char t16[16];
    char t21[16];
    char t25[16];
    char t31[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    unsigned char t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    char *t30;
    char *t32;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;

LAB0:    xsi_set_current_line(53, ng0);
    t1 = xsi_get_transient_memory(12U);
    memset(t1, 0, 12U);
    t2 = t1;
    memset(t2, (unsigned char)2, 12U);
    t3 = (t0 + 4008U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 12U);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 3888U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 8U);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 10609);
    *((int *)t1) = 7;
    t2 = (t0 + 10613);
    *((int *)t2) = 0;
    t5 = 7;
    t6 = 0;

LAB2:    if (t5 >= t6)
        goto LAB3;

LAB5:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    t7 = (11 - 11);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = (t0 + 6136);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    t7 = (11 - 7);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = (t0 + 6200);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    t7 = (11 - 3);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = (t0 + 6264);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    t1 = (t0 + 6040);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 4008U);
    t4 = *((char **)t3);
    t7 = (11 - 3);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t3 = (t4 + t9);
    t11 = (t10 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 3;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 3);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t12 = (t0 + 10617);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 3;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (3 - 0);
    t14 = (t19 * 1);
    t14 = (t14 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t14;
    t20 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t3, t10, t12, t16);
    if (t20 != 0)
        goto LAB6;

LAB8:
LAB7:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    t7 = (11 - 7);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = (t10 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 7;
    t4 = (t3 + 4U);
    *((int *)t4) = 4;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t13 = (4 - 7);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t14;
    t4 = (t0 + 10625);
    t12 = (t16 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 0;
    t15 = (t12 + 4U);
    *((int *)t15) = 3;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t19 = (3 - 0);
    t14 = (t19 * 1);
    t14 = (t14 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t14;
    t20 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t1, t10, t4, t16);
    if (t20 != 0)
        goto LAB9;

LAB11:
LAB10:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    t7 = (11 - 11);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = (t10 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 11;
    t4 = (t3 + 4U);
    *((int *)t4) = 8;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t13 = (8 - 11);
    t14 = (t13 * -1);
    t14 = (t14 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t14;
    t4 = (t0 + 10633);
    t12 = (t16 + 0U);
    t15 = (t12 + 0U);
    *((int *)t15) = 0;
    t15 = (t12 + 4U);
    *((int *)t15) = 3;
    t15 = (t12 + 8U);
    *((int *)t15) = 1;
    t19 = (3 - 0);
    t14 = (t19 * 1);
    t14 = (t14 + 1);
    t15 = (t12 + 12U);
    *((unsigned int *)t15) = t14;
    t20 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t1, t10, t4, t16);
    if (t20 != 0)
        goto LAB12;

LAB14:
LAB13:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    t7 = (11 - 10);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t3 = (t0 + 3888U);
    t4 = *((char **)t3);
    t13 = (7 - 7);
    t14 = (t13 * -1);
    t23 = (1U * t14);
    t24 = (0 + t23);
    t3 = (t4 + t24);
    t20 = *((unsigned char *)t3);
    t12 = ((IEEE_P_2592010699) + 4024);
    t15 = (t16 + 0U);
    t17 = (t15 + 0U);
    *((int *)t17) = 10;
    t17 = (t15 + 4U);
    *((int *)t17) = 0;
    t17 = (t15 + 8U);
    *((int *)t17) = -1;
    t19 = (0 - 10);
    t29 = (t19 * -1);
    t29 = (t29 + 1);
    t17 = (t15 + 12U);
    *((unsigned int *)t17) = t29;
    t11 = xsi_base_array_concat(t11, t10, t12, (char)97, t1, t16, (char)99, t20, (char)101);
    t17 = (t0 + 4008U);
    t18 = *((char **)t17);
    t17 = (t18 + 0);
    t29 = (11U + 1U);
    memcpy(t17, t11, t29);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    t13 = (7 - 1);
    t7 = (7 - t13);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t4 = ((IEEE_P_2592010699) + 4024);
    t11 = (t16 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 6;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t19 = (0 - 6);
    t14 = (t19 * -1);
    t14 = (t14 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t14;
    t3 = xsi_base_array_concat(t3, t10, t4, (char)97, t1, t16, (char)99, (unsigned char)2, (char)101);
    t12 = (t0 + 3888U);
    t15 = *((char **)t12);
    t12 = (t15 + 0);
    t14 = (7U + 1U);
    memcpy(t12, t3, t14);

LAB4:    t1 = (t0 + 10609);
    t5 = *((int *)t1);
    t2 = (t0 + 10613);
    t6 = *((int *)t2);
    if (t5 == t6)
        goto LAB5;

LAB15:    t13 = (t5 + -1);
    t5 = t13;
    t3 = (t0 + 10609);
    *((int *)t3) = t5;
    goto LAB2;

LAB6:    xsi_set_current_line(57, ng0);
    t18 = (t0 + 4008U);
    t22 = *((char **)t18);
    t14 = (11 - 3);
    t23 = (t14 * 1U);
    t24 = (0 + t23);
    t18 = (t22 + t24);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 3;
    t27 = (t26 + 4U);
    *((int *)t27) = 0;
    t27 = (t26 + 8U);
    *((int *)t27) = -1;
    t28 = (0 - 3);
    t29 = (t28 * -1);
    t29 = (t29 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t29;
    t27 = (t0 + 10621);
    t32 = (t31 + 0U);
    t33 = (t32 + 0U);
    *((int *)t33) = 0;
    t33 = (t32 + 4U);
    *((int *)t33) = 3;
    t33 = (t32 + 8U);
    *((int *)t33) = 1;
    t34 = (3 - 0);
    t29 = (t34 * 1);
    t29 = (t29 + 1);
    t33 = (t32 + 12U);
    *((unsigned int *)t33) = t29;
    t33 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t18, t25, t27, t31);
    t35 = (t0 + 4008U);
    t36 = *((char **)t35);
    t29 = (11 - 3);
    t37 = (t29 * 1U);
    t38 = (0 + t37);
    t35 = (t36 + t38);
    t39 = (t21 + 12U);
    t40 = *((unsigned int *)t39);
    t41 = (1U * t40);
    memcpy(t35, t33, t41);
    goto LAB7;

LAB9:    xsi_set_current_line(60, ng0);
    t15 = (t0 + 4008U);
    t17 = *((char **)t15);
    t14 = (11 - 7);
    t23 = (t14 * 1U);
    t24 = (0 + t23);
    t15 = (t17 + t24);
    t18 = (t25 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = 7;
    t22 = (t18 + 4U);
    *((int *)t22) = 4;
    t22 = (t18 + 8U);
    *((int *)t22) = -1;
    t28 = (4 - 7);
    t29 = (t28 * -1);
    t29 = (t29 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t29;
    t22 = (t0 + 10629);
    t27 = (t31 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = 0;
    t30 = (t27 + 4U);
    *((int *)t30) = 3;
    t30 = (t27 + 8U);
    *((int *)t30) = 1;
    t34 = (3 - 0);
    t29 = (t34 * 1);
    t29 = (t29 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t29;
    t30 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t15, t25, t22, t31);
    t32 = (t0 + 4008U);
    t33 = *((char **)t32);
    t29 = (11 - 7);
    t37 = (t29 * 1U);
    t38 = (0 + t37);
    t32 = (t33 + t38);
    t35 = (t21 + 12U);
    t40 = *((unsigned int *)t35);
    t41 = (1U * t40);
    memcpy(t32, t30, t41);
    goto LAB10;

LAB12:    xsi_set_current_line(63, ng0);
    t15 = (t0 + 4008U);
    t17 = *((char **)t15);
    t14 = (11 - 11);
    t23 = (t14 * 1U);
    t24 = (0 + t23);
    t15 = (t17 + t24);
    t18 = (t25 + 0U);
    t22 = (t18 + 0U);
    *((int *)t22) = 11;
    t22 = (t18 + 4U);
    *((int *)t22) = 8;
    t22 = (t18 + 8U);
    *((int *)t22) = -1;
    t28 = (8 - 11);
    t29 = (t28 * -1);
    t29 = (t29 + 1);
    t22 = (t18 + 12U);
    *((unsigned int *)t22) = t29;
    t22 = (t0 + 10637);
    t27 = (t31 + 0U);
    t30 = (t27 + 0U);
    *((int *)t30) = 0;
    t30 = (t27 + 4U);
    *((int *)t30) = 3;
    t30 = (t27 + 8U);
    *((int *)t30) = 1;
    t34 = (3 - 0);
    t29 = (t34 * 1);
    t29 = (t29 + 1);
    t30 = (t27 + 12U);
    *((unsigned int *)t30) = t29;
    t30 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t15, t25, t22, t31);
    t32 = (t0 + 4008U);
    t33 = *((char **)t32);
    t29 = (11 - 11);
    t37 = (t29 * 1U);
    t38 = (0 + t37);
    t32 = (t33 + t38);
    t35 = (t21 + 12U);
    t40 = *((unsigned int *)t35);
    t41 = (1U * t40);
    memcpy(t32, t30, t41);
    goto LAB13;

}

static void work_a_2641590223_3212880686_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    int t29;
    char *t30;
    int t32;
    char *t33;
    int t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11};

LAB0:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6056);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 4248U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 4U);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 4128U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 10770);
    t4 = (t0 + 4488U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 3U);

LAB6:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 4488U);
    t3 = *((char **)t1);
    t12 = (0 - 2);
    t40 = (t12 * -1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t1 = (t3 + t42);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 6328);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 4488U);
    t3 = *((char **)t1);
    t12 = (1 - 2);
    t40 = (t12 * -1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t1 = (t3 + t42);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 6392);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 4488U);
    t3 = *((char **)t1);
    t12 = (2 - 2);
    t40 = (t12 * -1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t1 = (t3 + t42);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 6456);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 4368U);
    t3 = *((char **)t1);
    t12 = (6 - 6);
    t40 = (t12 * -1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t1 = (t3 + t42);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 6520);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 4368U);
    t3 = *((char **)t1);
    t12 = (5 - 6);
    t40 = (t12 * -1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t1 = (t3 + t42);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 6584);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 4368U);
    t3 = *((char **)t1);
    t12 = (4 - 6);
    t40 = (t12 * -1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t1 = (t3 + t42);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 6648);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 4368U);
    t3 = *((char **)t1);
    t12 = (3 - 6);
    t40 = (t12 * -1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t1 = (t3 + t42);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 6712);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 4368U);
    t3 = *((char **)t1);
    t12 = (2 - 6);
    t40 = (t12 * -1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t1 = (t3 + t42);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 6776);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 4368U);
    t3 = *((char **)t1);
    t12 = (1 - 6);
    t40 = (t12 * -1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t1 = (t3 + t42);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 6840);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 4368U);
    t3 = *((char **)t1);
    t12 = (0 - 6);
    t40 = (t12 * -1);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t1 = (t3 + t42);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 6904);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 6968);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 4128U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t3 = (char *)((nl0) + t8);
    goto **((char **)t3);

LAB8:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 4248U);
    t3 = *((char **)t1);
    t1 = (t0 + 10653);
    t12 = xsi_mem_cmp(t1, t3, 4U);
    if (t12 == 1)
        goto LAB14;

LAB25:    t7 = (t0 + 10657);
    t13 = xsi_mem_cmp(t7, t3, 4U);
    if (t13 == 1)
        goto LAB15;

LAB26:    t10 = (t0 + 10661);
    t14 = xsi_mem_cmp(t10, t3, 4U);
    if (t14 == 1)
        goto LAB16;

LAB27:    t15 = (t0 + 10665);
    t17 = xsi_mem_cmp(t15, t3, 4U);
    if (t17 == 1)
        goto LAB17;

LAB28:    t18 = (t0 + 10669);
    t20 = xsi_mem_cmp(t18, t3, 4U);
    if (t20 == 1)
        goto LAB18;

LAB29:    t21 = (t0 + 10673);
    t23 = xsi_mem_cmp(t21, t3, 4U);
    if (t23 == 1)
        goto LAB19;

LAB30:    t24 = (t0 + 10677);
    t26 = xsi_mem_cmp(t24, t3, 4U);
    if (t26 == 1)
        goto LAB20;

LAB31:    t27 = (t0 + 10681);
    t29 = xsi_mem_cmp(t27, t3, 4U);
    if (t29 == 1)
        goto LAB21;

LAB32:    t30 = (t0 + 10685);
    t32 = xsi_mem_cmp(t30, t3, 4U);
    if (t32 == 1)
        goto LAB22;

LAB33:    t33 = (t0 + 10689);
    t35 = xsi_mem_cmp(t33, t3, 4U);
    if (t35 == 1)
        goto LAB23;

LAB34:
LAB24:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 10763);
    t4 = (t0 + 4368U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 7U);

LAB13:    goto LAB6;

LAB9:    xsi_set_current_line(89, ng0);
    t9 = (t0 + 3272U);
    t10 = *((char **)t9);
    t9 = (t0 + 4248U);
    t11 = *((char **)t9);
    t9 = (t11 + 0);
    memcpy(t9, t10, 4U);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 4128U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)1;
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 10641);
    t4 = (t0 + 4488U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 3U);
    goto LAB8;

LAB10:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t1 = (t0 + 4248U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 4U);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 4128U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 10644);
    t4 = (t0 + 4488U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 3U);
    goto LAB8;

LAB11:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 3592U);
    t3 = *((char **)t1);
    t1 = (t0 + 4248U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 4U);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 4128U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 10647);
    t4 = (t0 + 4488U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 3U);
    goto LAB8;

LAB12:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t1 = (t0 + 4248U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    memcpy(t1, t3, 4U);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 4128U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 10650);
    t4 = (t0 + 4488U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 3U);
    goto LAB8;

LAB14:    xsi_set_current_line(107, ng0);
    t36 = (t0 + 10693);
    t38 = (t0 + 4368U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    memcpy(t38, t36, 7U);
    goto LAB13;

LAB15:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 10700);
    t4 = (t0 + 4368U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 7U);
    goto LAB13;

LAB16:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 10707);
    t4 = (t0 + 4368U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 7U);
    goto LAB13;

LAB17:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 10714);
    t4 = (t0 + 4368U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 7U);
    goto LAB13;

LAB18:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 10721);
    t4 = (t0 + 4368U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 7U);
    goto LAB13;

LAB19:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 10728);
    t4 = (t0 + 4368U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 7U);
    goto LAB13;

LAB20:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 10735);
    t4 = (t0 + 4368U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 7U);
    goto LAB13;

LAB21:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 10742);
    t4 = (t0 + 4368U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 7U);
    goto LAB13;

LAB22:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 10749);
    t4 = (t0 + 4368U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 7U);
    goto LAB13;

LAB23:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 10756);
    t4 = (t0 + 4368U);
    t7 = *((char **)t4);
    t4 = (t7 + 0);
    memcpy(t4, t1, 7U);
    goto LAB13;

LAB35:;
}


extern void work_a_2641590223_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2641590223_3212880686_p_0,(void *)work_a_2641590223_3212880686_p_1};
	xsi_register_didat("work_a_2641590223_3212880686", "isim/TopLevel_isim_beh.exe.sim/work/a_2641590223_3212880686.didat");
	xsi_register_executes(pe);
}
