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
static const char *ng0 = "C:/Users/f/Desktop/rojina/madar Manteghi/Smart Home Management System/Module02/GasDetectorSensor_tb.v";
static int ng1[] = {1, 0};
static int ng2[] = {4, 0};
static int ng3[] = {29, 0};
static int ng4[] = {0, 0};



static void Always_21_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t24, t3, 0, 0, 1, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_24_1(char *t0)
{
    char t8[8];
    char t16[8];
    char t25[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t27;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 3824);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t0 + 2088);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_greatereq(t8, 32, t4, 32, t5, 32);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(28, ng0);

LAB9:    xsi_set_current_line(29, ng0);
    t7 = (t0 + 1928);
    t9 = (t7 + 56U);
    t15 = *((char **)t9);
    t17 = (t0 + 1928);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng3)));
    t21 = (t0 + 2088);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_signed_minus(t25, 32, t23, 32, t24, 32);
    memset(t26, 0, 8);
    xsi_vlog_signed_minus(t26, 32, t20, 32, t25, 32);
    xsi_vlog_generic_get_index_select_value(t16, 1, t15, t19, 2, t26, 32, 1);
    t27 = (t0 + 1768);
    xsi_vlogvar_assign_value(t27, t16, 0, 0, 1);
    goto LAB8;

}

static void Initial_32_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);

LAB4:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3312);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3312);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}


extern void work_m_00000000000995507571_2034935021_init()
{
	static char *pe[] = {(void *)Always_21_0,(void *)Always_24_1,(void *)Initial_32_2};
	xsi_register_didat("work_m_00000000000995507571_2034935021", "isim/GasDetectorSensor_tb_isim_beh.exe.sim/work/m_00000000000995507571_2034935021.didat");
	xsi_register_executes(pe);
}
