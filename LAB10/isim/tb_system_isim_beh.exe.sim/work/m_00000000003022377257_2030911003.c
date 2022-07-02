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
static const char *ng0 = "C:/Users/f/Desktop/rojina/madar Manteghi/project10/p10/fsm.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {9U, 0U};
static unsigned int ng7[] = {10U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};



static void Always_44_0(char *t0)
{
    char t6[8];
    char t18[8];
    char t37[8];
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;

LAB0:    t1 = (t0 + 4576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4896);
    *((int *)t2) = 1;
    t3 = (t0 + 4608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2136U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB10;

LAB11:    memcpy(t45, t6, 8);

LAB12:    t73 = (t45 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t45);
    t77 = (t76 & t75);
    t78 = (t77 != 0);
    if (t78 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(54, ng0);

LAB30:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB31:    t5 = ((char*)((ng1)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t64 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng2)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t64 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng4)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t64 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng6)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t64 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng7)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t64 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng8)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t64 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng9)));
    t64 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t64 == 1)
        goto LAB44;

LAB45:
LAB46:
LAB28:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t19 = (t0 + 2296U);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    t19 = (t20 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t19) == 0)
        goto LAB13;

LAB15:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;

LAB16:    t27 = (t18 + 4);
    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (~(t29));
    *((unsigned int *)t18) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB18;

LAB17:    t35 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t35 & 1U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 1U);
    memset(t37, 0, 8);
    t38 = (t18 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t18);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t38) != 0)
        goto LAB21;

LAB22:    t46 = *((unsigned int *)t6);
    t47 = *((unsigned int *)t37);
    t48 = (t46 | t47);
    *((unsigned int *)t45) = t48;
    t49 = (t6 + 4);
    t50 = (t37 + 4);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t49);
    t53 = *((unsigned int *)t50);
    t54 = (t52 | t53);
    *((unsigned int *)t51) = t54;
    t55 = *((unsigned int *)t51);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB12;

LAB13:    *((unsigned int *)t18) = 1;
    goto LAB16;

LAB18:    t31 = *((unsigned int *)t18);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t18) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB17;

LAB19:    *((unsigned int *)t37) = 1;
    goto LAB22;

LAB21:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB22;

LAB23:    t57 = *((unsigned int *)t45);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t45) = (t57 | t58);
    t59 = (t6 + 4);
    t60 = (t37 + 4);
    t61 = *((unsigned int *)t59);
    t62 = (~(t61));
    t63 = *((unsigned int *)t6);
    t64 = (t63 & t62);
    t65 = *((unsigned int *)t60);
    t66 = (~(t65));
    t67 = *((unsigned int *)t37);
    t68 = (t67 & t66);
    t69 = (~(t64));
    t70 = (~(t68));
    t71 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t71 & t69);
    t72 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t72 & t70);
    goto LAB25;

LAB26:    xsi_set_current_line(47, ng0);

LAB29:    xsi_set_current_line(48, ng0);
    t79 = ((char*)((ng1)));
    t80 = (t0 + 3336);
    xsi_vlogvar_assign_value(t80, t79, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB28;

LAB32:    xsi_set_current_line(58, ng0);

LAB47:    xsi_set_current_line(59, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 3656);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB46;

LAB34:    xsi_set_current_line(65, ng0);

LAB48:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 2616U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t5 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t3) == 0)
        goto LAB49;

LAB51:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;

LAB52:    t13 = (t6 + 4);
    t19 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t6) = t15;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB54;

LAB53:    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t24 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t24 & 1U);
    t20 = (t6 + 4);
    t25 = *((unsigned int *)t20);
    t29 = (~(t25));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 3);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t12 = ((char*)((ng2)));
    memset(t18, 0, 8);
    t13 = (t6 + 4);
    t19 = (t12 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t12);
    t17 = (t15 ^ t16);
    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t19);
    t23 = (t21 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t19);
    t30 = (t25 | t29);
    t31 = (~(t30));
    t32 = (t24 & t31);
    if (t32 != 0)
        goto LAB61;

LAB58:    if (t30 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t18) = 1;

LAB61:    t26 = (t18 + 4);
    t33 = *((unsigned int *)t26);
    t34 = (~(t33));
    t35 = *((unsigned int *)t18);
    t36 = (t35 & t34);
    t39 = (t36 != 0);
    if (t39 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB64:
LAB57:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB46;

LAB36:    xsi_set_current_line(77, ng0);

LAB65:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 2776U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 2);
    t14 = (t11 & 1);
    *((unsigned int *)t3) = t14;
    t13 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t19 = (t6 + 4);
    t20 = (t13 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t21 = *((unsigned int *)t19);
    t22 = *((unsigned int *)t20);
    t23 = (t21 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t25 | t29);
    t31 = (~(t30));
    t32 = (t24 & t31);
    if (t32 != 0)
        goto LAB69;

LAB66:    if (t30 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t18) = 1;

LAB69:    t27 = (t18 + 4);
    t33 = *((unsigned int *)t27);
    t34 = (~(t33));
    t35 = *((unsigned int *)t18);
    t36 = (t35 & t34);
    t39 = (t36 != 0);
    if (t39 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB72:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB46;

LAB38:    xsi_set_current_line(87, ng0);

LAB73:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 2776U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t3) = t14;
    t13 = ((char*)((ng2)));
    memset(t18, 0, 8);
    t19 = (t6 + 4);
    t20 = (t13 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t21 = *((unsigned int *)t19);
    t22 = *((unsigned int *)t20);
    t23 = (t21 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t25 | t29);
    t31 = (~(t30));
    t32 = (t24 & t31);
    if (t32 != 0)
        goto LAB77;

LAB74:    if (t30 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t18) = 1;

LAB77:    t27 = (t18 + 4);
    t33 = *((unsigned int *)t27);
    t34 = (~(t33));
    t35 = *((unsigned int *)t18);
    t36 = (t35 & t34);
    t39 = (t36 != 0);
    if (t39 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB80:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB46;

LAB40:    xsi_set_current_line(96, ng0);

LAB81:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 2776U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t3) = t14;
    t13 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t19 = (t6 + 4);
    t20 = (t13 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t21 = *((unsigned int *)t19);
    t22 = *((unsigned int *)t20);
    t23 = (t21 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t25 | t29);
    t31 = (~(t30));
    t32 = (t24 & t31);
    if (t32 != 0)
        goto LAB85;

LAB82:    if (t30 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t18) = 1;

LAB85:    t27 = (t18 + 4);
    t33 = *((unsigned int *)t27);
    t34 = (~(t33));
    t35 = *((unsigned int *)t18);
    t36 = (t35 & t34);
    t39 = (t36 != 0);
    if (t39 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB88:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB46;

LAB42:    xsi_set_current_line(106, ng0);

LAB89:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 2616U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB90;

LAB91:
LAB92:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB46;

LAB44:    xsi_set_current_line(114, ng0);

LAB93:    xsi_set_current_line(115, ng0);
    t3 = (t0 + 2776U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t3 = (t6 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t3) = t14;
    t13 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t19 = (t6 + 4);
    t20 = (t13 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t13);
    t17 = (t15 ^ t16);
    t21 = *((unsigned int *)t19);
    t22 = *((unsigned int *)t20);
    t23 = (t21 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t25 | t29);
    t31 = (~(t30));
    t32 = (t24 & t31);
    if (t32 != 0)
        goto LAB97;

LAB94:    if (t30 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t18) = 1;

LAB97:    t27 = (t18 + 4);
    t33 = *((unsigned int *)t27);
    t34 = (~(t33));
    t35 = *((unsigned int *)t18);
    t36 = (t35 & t34);
    t39 = (t36 != 0);
    if (t39 > 0)
        goto LAB98;

LAB99:    xsi_set_current_line(121, ng0);

LAB102:    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB100:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    t2 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    goto LAB46;

LAB49:    *((unsigned int *)t6) = 1;
    goto LAB52;

LAB54:    t16 = *((unsigned int *)t6);
    t17 = *((unsigned int *)t19);
    *((unsigned int *)t6) = (t16 | t17);
    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t21 | t22);
    goto LAB53;

LAB55:    xsi_set_current_line(67, ng0);
    t26 = ((char*)((ng2)));
    t27 = (t0 + 3656);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 4);
    goto LAB57;

LAB60:    t20 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(69, ng0);
    t27 = ((char*)((ng4)));
    t28 = (t0 + 3656);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 4);
    goto LAB64;

LAB68:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB69;

LAB70:    xsi_set_current_line(79, ng0);
    t28 = ((char*)((ng6)));
    t38 = (t0 + 3656);
    xsi_vlogvar_assign_value(t38, t28, 0, 0, 4);
    goto LAB72;

LAB76:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(89, ng0);
    t28 = ((char*)((ng7)));
    t38 = (t0 + 3656);
    xsi_vlogvar_assign_value(t38, t28, 0, 0, 4);
    goto LAB80;

LAB84:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(98, ng0);
    t28 = ((char*)((ng8)));
    t38 = (t0 + 3656);
    xsi_vlogvar_assign_value(t38, t28, 0, 0, 4);
    goto LAB88;

LAB90:    xsi_set_current_line(108, ng0);
    t12 = ((char*)((ng9)));
    t13 = (t0 + 3656);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);
    goto LAB92;

LAB96:    t26 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(116, ng0);

LAB101:    xsi_set_current_line(117, ng0);
    t28 = ((char*)((ng2)));
    t38 = (t0 + 3496);
    xsi_vlogvar_assign_value(t38, t28, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB100;

}


extern void work_m_00000000003022377257_2030911003_init()
{
	static char *pe[] = {(void *)Always_44_0};
	xsi_register_didat("work_m_00000000003022377257_2030911003", "isim/tb_system_isim_beh.exe.sim/work/m_00000000003022377257_2030911003.didat");
	xsi_register_executes(pe);
}
