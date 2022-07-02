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
static const char *ng0 = "G:/prgs/prjs/tamrin/nikta/Module04/LampState.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};



static void Always_30_0(char *t0)
{
    char t7[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(33, ng0);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB8;

LAB7:    t8 = (t6 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB9;

LAB10:    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB12;

LAB13:    goto LAB2;

LAB8:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t7) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(34, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 1448);
    t19 = (t0 + 1448);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t0 + 1608);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_bit_index(t18, t21, 2, t24, 32, 1);
    t25 = (t18 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    if (t27 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1608);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB14:    xsi_vlogvar_assign_value(t17, t16, 0, *((unsigned int *)t18), 1);
    goto LAB15;

}


extern void work_m_00000000004288324136_3447180395_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000004288324136_3447180395", "isim/LightingSystem_isim_beh.exe.sim/work/m_00000000004288324136_3447180395.didat");
	xsi_register_executes(pe);
}
