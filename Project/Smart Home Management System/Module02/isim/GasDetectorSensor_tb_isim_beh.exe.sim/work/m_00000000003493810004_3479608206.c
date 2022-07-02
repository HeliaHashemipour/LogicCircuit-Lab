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
static const char *ng0 = "C:/Users/f/Desktop/rojina/madar Manteghi/Smart Home Management System/Module02/GasDetectorSensor.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {15U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {14U, 0U};
static unsigned int ng17[] = {16U, 0U};
static unsigned int ng18[] = {17U, 0U};
static unsigned int ng19[] = {18U, 0U};
static unsigned int ng20[] = {19U, 0U};
static unsigned int ng21[] = {25U, 0U};
static unsigned int ng22[] = {20U, 0U};
static unsigned int ng23[] = {21U, 0U};
static unsigned int ng24[] = {22U, 0U};
static unsigned int ng25[] = {23U, 0U};
static unsigned int ng26[] = {24U, 0U};
static unsigned int ng27[] = {26U, 0U};



static void Cont_42_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 6976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 6056);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8168);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 8040);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_44_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 7224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 8056);
    *((int *)t2) = 1;
    t3 = (t0 + 7256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 4856U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5896);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(48, ng0);

LAB13:    xsi_set_current_line(49, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 5736);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 5, 0LL);
    goto LAB12;

}

static void Always_55_2(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 7472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 8072);
    *((int *)t2) = 1;
    t3 = (t0 + 7504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 5736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng24)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng25)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng26)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB59;

LAB60:
LAB62:
LAB61:    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB63:    goto LAB2;

LAB7:    xsi_set_current_line(60, ng0);

LAB64:    xsi_set_current_line(61, ng0);
    t9 = (t0 + 5176U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB68;

LAB65:    if (t23 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t11) = 1;

LAB68:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB71:    goto LAB63;

LAB9:    xsi_set_current_line(67, ng0);

LAB72:    xsi_set_current_line(68, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB76;

LAB73:    if (t23 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t11) = 1;

LAB76:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB77;

LAB78:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB79:    goto LAB63;

LAB11:    xsi_set_current_line(74, ng0);

LAB80:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB84;

LAB81:    if (t23 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t11) = 1;

LAB84:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB87:    goto LAB63;

LAB13:    xsi_set_current_line(81, ng0);

LAB88:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB92;

LAB89:    if (t23 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t11) = 1;

LAB92:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB95:    goto LAB63;

LAB15:    xsi_set_current_line(88, ng0);

LAB96:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB100;

LAB97:    if (t23 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t11) = 1;

LAB100:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB103:    goto LAB63;

LAB17:    xsi_set_current_line(95, ng0);

LAB104:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB108;

LAB105:    if (t23 != 0)
        goto LAB107;

LAB106:    *((unsigned int *)t11) = 1;

LAB108:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB109;

LAB110:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB111:    goto LAB63;

LAB19:    xsi_set_current_line(102, ng0);

LAB112:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB116;

LAB113:    if (t23 != 0)
        goto LAB115;

LAB114:    *((unsigned int *)t11) = 1;

LAB116:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB117;

LAB118:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB119:    goto LAB63;

LAB21:    xsi_set_current_line(109, ng0);

LAB120:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB124;

LAB121:    if (t23 != 0)
        goto LAB123;

LAB122:    *((unsigned int *)t11) = 1;

LAB124:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB125;

LAB126:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB127:    goto LAB63;

LAB23:    xsi_set_current_line(116, ng0);

LAB128:    xsi_set_current_line(117, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB132;

LAB129:    if (t23 != 0)
        goto LAB131;

LAB130:    *((unsigned int *)t11) = 1;

LAB132:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB133;

LAB134:    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB135:    goto LAB63;

LAB25:    xsi_set_current_line(123, ng0);

LAB136:    xsi_set_current_line(124, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB140;

LAB137:    if (t23 != 0)
        goto LAB139;

LAB138:    *((unsigned int *)t11) = 1;

LAB140:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB141;

LAB142:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB143:    goto LAB63;

LAB27:    xsi_set_current_line(130, ng0);

LAB144:    xsi_set_current_line(131, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB148;

LAB145:    if (t23 != 0)
        goto LAB147;

LAB146:    *((unsigned int *)t11) = 1;

LAB148:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB149;

LAB150:    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB151:    goto LAB63;

LAB29:    xsi_set_current_line(138, ng0);

LAB152:    xsi_set_current_line(139, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB156;

LAB153:    if (t23 != 0)
        goto LAB155;

LAB154:    *((unsigned int *)t11) = 1;

LAB156:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB157;

LAB158:    xsi_set_current_line(142, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB159:    goto LAB63;

LAB31:    xsi_set_current_line(145, ng0);

LAB160:    xsi_set_current_line(146, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB164;

LAB161:    if (t23 != 0)
        goto LAB163;

LAB162:    *((unsigned int *)t11) = 1;

LAB164:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB165;

LAB166:    xsi_set_current_line(149, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB167:    goto LAB63;

LAB33:    xsi_set_current_line(152, ng0);

LAB168:    xsi_set_current_line(153, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB172;

LAB169:    if (t23 != 0)
        goto LAB171;

LAB170:    *((unsigned int *)t11) = 1;

LAB172:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB173;

LAB174:    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB175:    goto LAB63;

LAB35:    xsi_set_current_line(159, ng0);

LAB176:    xsi_set_current_line(160, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB180;

LAB177:    if (t23 != 0)
        goto LAB179;

LAB178:    *((unsigned int *)t11) = 1;

LAB180:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB181;

LAB182:    xsi_set_current_line(163, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB183:    goto LAB63;

LAB37:    xsi_set_current_line(166, ng0);

LAB184:    xsi_set_current_line(167, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB188;

LAB185:    if (t23 != 0)
        goto LAB187;

LAB186:    *((unsigned int *)t11) = 1;

LAB188:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB189;

LAB190:    xsi_set_current_line(170, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB191:    goto LAB63;

LAB39:    xsi_set_current_line(173, ng0);

LAB192:    xsi_set_current_line(174, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB196;

LAB193:    if (t23 != 0)
        goto LAB195;

LAB194:    *((unsigned int *)t11) = 1;

LAB196:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB197;

LAB198:    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB199:    goto LAB63;

LAB41:    xsi_set_current_line(180, ng0);

LAB200:    xsi_set_current_line(181, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB204;

LAB201:    if (t23 != 0)
        goto LAB203;

LAB202:    *((unsigned int *)t11) = 1;

LAB204:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB205;

LAB206:    xsi_set_current_line(184, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB207:    goto LAB63;

LAB43:    xsi_set_current_line(187, ng0);

LAB208:    xsi_set_current_line(188, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB212;

LAB209:    if (t23 != 0)
        goto LAB211;

LAB210:    *((unsigned int *)t11) = 1;

LAB212:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB213;

LAB214:    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB215:    goto LAB63;

LAB45:    xsi_set_current_line(194, ng0);

LAB216:    xsi_set_current_line(195, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB220;

LAB217:    if (t23 != 0)
        goto LAB219;

LAB218:    *((unsigned int *)t11) = 1;

LAB220:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB221;

LAB222:    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB223:    goto LAB63;

LAB47:    xsi_set_current_line(203, ng0);

LAB224:    xsi_set_current_line(204, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB228;

LAB225:    if (t23 != 0)
        goto LAB227;

LAB226:    *((unsigned int *)t11) = 1;

LAB228:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB229;

LAB230:    xsi_set_current_line(207, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB231:    goto LAB63;

LAB49:    xsi_set_current_line(210, ng0);

LAB232:    xsi_set_current_line(211, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB236;

LAB233:    if (t23 != 0)
        goto LAB235;

LAB234:    *((unsigned int *)t11) = 1;

LAB236:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB237;

LAB238:    xsi_set_current_line(214, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB239:    goto LAB63;

LAB51:    xsi_set_current_line(217, ng0);

LAB240:    xsi_set_current_line(218, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB244;

LAB241:    if (t23 != 0)
        goto LAB243;

LAB242:    *((unsigned int *)t11) = 1;

LAB244:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB245;

LAB246:    xsi_set_current_line(221, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB247:    goto LAB63;

LAB53:    xsi_set_current_line(224, ng0);

LAB248:    xsi_set_current_line(225, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB252;

LAB249:    if (t23 != 0)
        goto LAB251;

LAB250:    *((unsigned int *)t11) = 1;

LAB252:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB253;

LAB254:    xsi_set_current_line(228, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB255:    goto LAB63;

LAB55:    xsi_set_current_line(231, ng0);

LAB256:    xsi_set_current_line(232, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB260;

LAB257:    if (t23 != 0)
        goto LAB259;

LAB258:    *((unsigned int *)t11) = 1;

LAB260:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB261;

LAB262:    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB263:    goto LAB63;

LAB57:    xsi_set_current_line(238, ng0);

LAB264:    xsi_set_current_line(239, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB268;

LAB265:    if (t23 != 0)
        goto LAB267;

LAB266:    *((unsigned int *)t11) = 1;

LAB268:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB269;

LAB270:    xsi_set_current_line(242, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB271:    goto LAB63;

LAB59:    xsi_set_current_line(246, ng0);

LAB272:    xsi_set_current_line(247, ng0);
    t3 = (t0 + 5176U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t3);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB276;

LAB273:    if (t23 != 0)
        goto LAB275;

LAB274:    *((unsigned int *)t11) = 1;

LAB276:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB277;

LAB278:    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);

LAB279:    goto LAB63;

LAB67:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(62, ng0);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 5, 0LL);
    goto LAB71;

LAB75:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB76;

LAB77:    xsi_set_current_line(69, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB79;

LAB83:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB84;

LAB85:    xsi_set_current_line(76, ng0);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB87;

LAB91:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(83, ng0);
    t12 = ((char*)((ng6)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB95;

LAB99:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(90, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB103;

LAB107:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB108;

LAB109:    xsi_set_current_line(97, ng0);
    t12 = ((char*)((ng9)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB111;

LAB115:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB116;

LAB117:    xsi_set_current_line(104, ng0);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB119;

LAB123:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB124;

LAB125:    xsi_set_current_line(111, ng0);
    t12 = ((char*)((ng11)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB127;

LAB131:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB132;

LAB133:    xsi_set_current_line(118, ng0);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB135;

LAB139:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB140;

LAB141:    xsi_set_current_line(125, ng0);
    t12 = ((char*)((ng13)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB143;

LAB147:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB148;

LAB149:    xsi_set_current_line(132, ng0);
    t12 = ((char*)((ng14)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB151;

LAB155:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB156;

LAB157:    xsi_set_current_line(140, ng0);
    t12 = ((char*)((ng4)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB159;

LAB163:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB164;

LAB165:    xsi_set_current_line(147, ng0);
    t12 = ((char*)((ng16)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB167;

LAB171:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB172;

LAB173:    xsi_set_current_line(154, ng0);
    t12 = ((char*)((ng14)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB175;

LAB179:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB180;

LAB181:    xsi_set_current_line(161, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB183;

LAB187:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB188;

LAB189:    xsi_set_current_line(168, ng0);
    t12 = ((char*)((ng18)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB191;

LAB195:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB196;

LAB197:    xsi_set_current_line(175, ng0);
    t12 = ((char*)((ng19)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB199;

LAB203:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB204;

LAB205:    xsi_set_current_line(182, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB207;

LAB211:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB212;

LAB213:    xsi_set_current_line(189, ng0);
    t12 = ((char*)((ng21)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB215;

LAB219:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB220;

LAB221:    xsi_set_current_line(196, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB223;

LAB227:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB228;

LAB229:    xsi_set_current_line(205, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB231;

LAB235:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB236;

LAB237:    xsi_set_current_line(212, ng0);
    t12 = ((char*)((ng24)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB239;

LAB243:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB244;

LAB245:    xsi_set_current_line(219, ng0);
    t12 = ((char*)((ng25)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB247;

LAB251:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB252;

LAB253:    xsi_set_current_line(226, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB255;

LAB259:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB260;

LAB261:    xsi_set_current_line(233, ng0);
    t12 = ((char*)((ng21)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB263;

LAB267:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB268;

LAB269:    xsi_set_current_line(240, ng0);
    t12 = ((char*)((ng27)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB271;

LAB275:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB276;

LAB277:    xsi_set_current_line(248, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 5896);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 5, 0LL);
    goto LAB279;

}

static void Always_257_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 7720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(257, ng0);
    t2 = (t0 + 8088);
    *((int *)t2) = 1;
    t3 = (t0 + 7752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(258, ng0);

LAB5:    xsi_set_current_line(259, ng0);
    t4 = (t0 + 5736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng22)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng27)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(272, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(261, ng0);

LAB16:    xsi_set_current_line(262, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(265, ng0);

LAB17:    xsi_set_current_line(266, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(269, ng0);

LAB18:    xsi_set_current_line(270, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 6056);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB15;

}


extern void work_m_00000000003493810004_3479608206_init()
{
	static char *pe[] = {(void *)Cont_42_0,(void *)Always_44_1,(void *)Always_55_2,(void *)Always_257_3};
	xsi_register_didat("work_m_00000000003493810004_3479608206", "isim/GasDetectorSensor_tb_isim_beh.exe.sim/work/m_00000000003493810004_3479608206.didat");
	xsi_register_executes(pe);
}
