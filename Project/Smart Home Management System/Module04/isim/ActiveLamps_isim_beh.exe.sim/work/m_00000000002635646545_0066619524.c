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
static const char *ng0 = "G:/prgs/prjs/tamrin/nikta/Module04/ActiveLamps.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {8U, 0U};



static void Cont_33_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1295409688);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 3576);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3592);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(55, ng0);

LAB22:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(39, ng0);

LAB18:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(43, ng0);

LAB19:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB17;

LAB11:    xsi_set_current_line(47, ng0);

LAB20:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    memset(t7, 0, 8);
    t9 = (t7 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 15U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 15U);
    t17 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t17, t7, 0, 0, 1, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(51, ng0);

LAB21:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB17;

}


extern void work_m_00000000002635646545_0066619524_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000002635646545_0066619524", "isim/ActiveLamps_isim_beh.exe.sim/work/m_00000000002635646545_0066619524.didat");
	xsi_register_executes(pe);
}
