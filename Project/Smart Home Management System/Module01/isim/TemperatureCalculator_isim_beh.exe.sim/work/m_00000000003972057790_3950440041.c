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
static const char *ng0 = "C:/Users/f/Desktop/rojina/madar Manteghi/Smart Home Management System/Module01/TemperatureCalculator.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {6, 0};



static void Cont_35_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t28[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 7);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 7);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t21);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t44, 8);

LAB16:    t43 = (t0 + 4416);
    t45 = (t43 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 255U;
    t50 = t49;
    t51 = (t3 + 4);
    t52 = *((unsigned int *)t3);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t43, 0, 7);
    t57 = (t0 + 4304);
    *((int *)t57) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t26 = (t0 + 1208U);
    t27 = *((char **)t26);
    t26 = ((char*)((ng1)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_minus(t28, 8, t27, 8, t26, 8);
    memset(t25, 0, 8);
    t29 = (t25 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (~(t31));
    *((unsigned int *)t25) = t32;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB18;

LAB17:    t37 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t37 & 255U);
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 255U);
    goto LAB9;

LAB10:    t43 = (t0 + 1208U);
    t44 = *((char **)t43);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 8, t25, 8, t44, 8);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

LAB18:    t33 = *((unsigned int *)t25);
    t34 = *((unsigned int *)t30);
    *((unsigned int *)t25) = (t33 | t34);
    t35 = *((unsigned int *)t29);
    t36 = *((unsigned int *)t30);
    *((unsigned int *)t29) = (t35 | t36);
    goto LAB17;

}

static void Cont_36_1(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 32767U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 32767U);
    t13 = ((char*)((ng2)));
    xsi_vlogtype_concat(t3, 16, 16, 2U, t13, 1, t4, 15);
    t14 = (t0 + 4480);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 65535U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 15);
    t27 = (t0 + 4320);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_39_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_rshift(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 4544);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4336);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000003972057790_3950440041_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Cont_36_1,(void *)Cont_39_2};
	xsi_register_didat("work_m_00000000003972057790_3950440041", "isim/TemperatureCalculator_isim_beh.exe.sim/work/m_00000000003972057790_3950440041.didat");
	xsi_register_executes(pe);
}
