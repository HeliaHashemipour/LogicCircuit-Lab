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
static const char *ng0 = "C:/Users/f/Desktop/rojina/madar Manteghi/Smart Home Management System/Module01/AdderSubtractor32bit.v";



static void Cont_31_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t19[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t26, 8);

LAB16:    t16 = (t0 + 3088);
    t27 = (t16 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t3, 8);
    xsi_driver_vfirst_trans(t16, 0, 31);
    t31 = (t0 + 3008);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    t16 = (t0 + 1208U);
    t18 = *((char **)t16);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_minus(t19, 32, t17, 32, t18, 32);
    goto LAB9;

LAB10:    t16 = (t0 + 1048U);
    t24 = *((char **)t16);
    t16 = (t0 + 1208U);
    t25 = *((char **)t16);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 32, t24, 32, t25, 32);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t19, 32, t26, 32);
    goto LAB16;

LAB14:    memcpy(t3, t19, 8);
    goto LAB16;

}


extern void work_m_00000000001198633192_3271766324_init()
{
	static char *pe[] = {(void *)Cont_31_0};
	xsi_register_didat("work_m_00000000001198633192_3271766324", "isim/TemperatureCalculator_tb_isim_beh.exe.sim/work/m_00000000001198633192_3271766324.didat");
	xsi_register_executes(pe);
}
