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
static const char *ng0 = "C:/Users/f/Desktop/rojina/madar Manteghi/Smart Home Management System/Module07/ControlUnit.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {5U, 0U};



static void Cont_57_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5832);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t3, 0, 35);
    xsi_driver_vfirst_trans(t2, 0, 34);
    t8 = (t0 + 5688);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Cont_58_1(char *t0)
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

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5896);
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
    t18 = (t0 + 5704);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_59_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 4624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3048);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 5960);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 5720);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng2)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng3)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t40, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Initial_61_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(61, ng0);

LAB2:    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3048);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Always_65_4(char *t0)
{
    char t6[8];
    char t22[8];
    char t37[8];
    char t53[8];
    char t61[8];
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;

LAB0:    t1 = (t0 + 5120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5736);
    *((int *)t2) = 1;
    t3 = (t0 + 5152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
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
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t23) != 0)
        goto LAB11;

LAB12:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB13;

LAB14:    memcpy(t61, t22, 8);

LAB15:    t89 = (t61 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t61);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB29:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t22) = 1;
    goto LAB12;

LAB11:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB12;

LAB13:    t35 = (t0 + 1368U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB19;

LAB16:    if (t49 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t37) = 1;

LAB19:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t54) != 0)
        goto LAB22;

LAB23:    t62 = *((unsigned int *)t22);
    t63 = *((unsigned int *)t53);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = (t22 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB15;

LAB18:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t53) = 1;
    goto LAB23;

LAB22:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB23;

LAB24:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t22 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t22);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t83 = *((unsigned int *)t53);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t87 & t85);
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    goto LAB26;

LAB27:    xsi_set_current_line(67, ng0);
    t95 = ((char*)((ng2)));
    t96 = (t0 + 3048);
    xsi_vlogvar_assign_value(t96, t95, 0, 0, 3);
    goto LAB29;

}

static void Always_71_5(char *t0)
{
    char t6[8];
    char t22[8];
    char t37[8];
    char t53[8];
    char t61[8];
    char t100[8];
    char t106[8];
    char t122[8];
    char t130[8];
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    int t154;
    int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;

LAB0:    t1 = (t0 + 5368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 5752);
    *((int *)t2) = 1;
    t3 = (t0 + 5400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
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
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t23) != 0)
        goto LAB11;

LAB12:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB13;

LAB14:    memcpy(t61, t22, 8);

LAB15:    t89 = (t61 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t61);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(74, ng0);

LAB30:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB34;

LAB31:    if (t18 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t6) = 1;

LAB34:    memset(t22, 0, 8);
    t8 = (t6 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t8) != 0)
        goto LAB37;

LAB38:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB39;

LAB40:    memcpy(t61, t22, 8);

LAB41:    t89 = (t61 + 4);
    t93 = *((unsigned int *)t89);
    t94 = (~(t93));
    t97 = *((unsigned int *)t61);
    t98 = (t97 & t94);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB59;

LAB56:    if (t18 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t6) = 1;

LAB59:    memset(t22, 0, 8);
    t8 = (t6 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t8) != 0)
        goto LAB62;

LAB63:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB64;

LAB65:    memcpy(t61, t22, 8);

LAB66:    memset(t100, 0, 8);
    t75 = (t61 + 4);
    t93 = *((unsigned int *)t75);
    t94 = (~(t93));
    t97 = *((unsigned int *)t61);
    t98 = (t97 & t94);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t75) != 0)
        goto LAB80;

LAB81:    t89 = (t100 + 4);
    t101 = *((unsigned int *)t100);
    t102 = *((unsigned int *)t89);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB82;

LAB83:    memcpy(t130, t100, 8);

LAB84:    t162 = (t130 + 4);
    t163 = *((unsigned int *)t162);
    t164 = (~(t163));
    t165 = *((unsigned int *)t130);
    t166 = (t165 & t164);
    t167 = (t166 != 0);
    if (t167 > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB102;

LAB99:    if (t18 != 0)
        goto LAB101;

LAB100:    *((unsigned int *)t6) = 1;

LAB102:    memset(t22, 0, 8);
    t8 = (t6 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB103;

LAB104:    if (*((unsigned int *)t8) != 0)
        goto LAB105;

LAB106:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB107;

LAB108:    memcpy(t61, t22, 8);

LAB109:    memset(t100, 0, 8);
    t75 = (t61 + 4);
    t93 = *((unsigned int *)t75);
    t94 = (~(t93));
    t97 = *((unsigned int *)t61);
    t98 = (t97 & t94);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB121;

LAB122:    if (*((unsigned int *)t75) != 0)
        goto LAB123;

LAB124:    t89 = (t100 + 4);
    t101 = *((unsigned int *)t100);
    t102 = *((unsigned int *)t89);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB125;

LAB126:    memcpy(t130, t100, 8);

LAB127:    t162 = (t130 + 4);
    t163 = *((unsigned int *)t162);
    t164 = (~(t163));
    t165 = *((unsigned int *)t130);
    t166 = (t165 & t164);
    t167 = (t166 != 0);
    if (t167 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB145;

LAB142:    if (t18 != 0)
        goto LAB144;

LAB143:    *((unsigned int *)t6) = 1;

LAB145:    memset(t22, 0, 8);
    t8 = (t6 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB146;

LAB147:    if (*((unsigned int *)t8) != 0)
        goto LAB148;

LAB149:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB150;

LAB151:    memcpy(t61, t22, 8);

LAB152:    t89 = (t61 + 4);
    t93 = *((unsigned int *)t89);
    t94 = (~(t93));
    t97 = *((unsigned int *)t61);
    t98 = (t97 & t94);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB164;

LAB165:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB170;

LAB167:    if (t18 != 0)
        goto LAB169;

LAB168:    *((unsigned int *)t6) = 1;

LAB170:    memset(t22, 0, 8);
    t8 = (t6 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB171;

LAB172:    if (*((unsigned int *)t8) != 0)
        goto LAB173;

LAB174:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB175;

LAB176:    memcpy(t61, t22, 8);

LAB177:    t89 = (t61 + 4);
    t93 = *((unsigned int *)t89);
    t94 = (~(t93));
    t97 = *((unsigned int *)t61);
    t98 = (t97 & t94);
    t99 = (t98 != 0);
    if (t99 > 0)
        goto LAB189;

LAB190:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB191:
LAB166:
LAB141:
LAB98:
LAB55:
LAB29:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    *((unsigned int *)t22) = 1;
    goto LAB12;

LAB11:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB12;

LAB13:    t35 = (t0 + 1368U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB19;

LAB16:    if (t49 != 0)
        goto LAB18;

LAB17:    *((unsigned int *)t37) = 1;

LAB19:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t54) != 0)
        goto LAB22;

LAB23:    t62 = *((unsigned int *)t22);
    t63 = *((unsigned int *)t53);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = (t22 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB15;

LAB18:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t53) = 1;
    goto LAB23;

LAB22:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB23;

LAB24:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t22 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t22);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t83 = *((unsigned int *)t53);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t87 & t85);
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    goto LAB26;

LAB27:    xsi_set_current_line(73, ng0);
    t95 = ((char*)((ng2)));
    t96 = (t0 + 3208);
    xsi_vlogvar_assign_value(t96, t95, 0, 0, 3);
    goto LAB29;

LAB33:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t22) = 1;
    goto LAB38;

LAB37:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB38;

LAB39:    t29 = (t0 + 3048);
    t30 = (t29 + 56U);
    t35 = *((char **)t30);
    t36 = ((char*)((ng2)));
    memset(t37, 0, 8);
    t38 = (t35 + 4);
    t39 = (t36 + 4);
    t34 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t36);
    t41 = (t34 ^ t40);
    t42 = *((unsigned int *)t38);
    t43 = *((unsigned int *)t39);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB45;

LAB42:    if (t48 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t37) = 1;

LAB45:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t51 = *((unsigned int *)t54);
    t55 = (~(t51));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t54) != 0)
        goto LAB48;

LAB49:    t59 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t53);
    t63 = (t59 & t62);
    *((unsigned int *)t61) = t63;
    t65 = (t22 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t64 = *((unsigned int *)t65);
    t68 = *((unsigned int *)t66);
    t69 = (t64 | t68);
    *((unsigned int *)t67) = t69;
    t70 = *((unsigned int *)t67);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB44:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t53) = 1;
    goto LAB49;

LAB48:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB49;

LAB50:    t72 = *((unsigned int *)t61);
    t73 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t72 | t73);
    t75 = (t22 + 4);
    t76 = (t53 + 4);
    t74 = *((unsigned int *)t22);
    t77 = (~(t74));
    t78 = *((unsigned int *)t75);
    t79 = (~(t78));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t85 = (~(t83));
    t80 = (t77 & t79);
    t84 = (t82 & t85);
    t86 = (~(t80));
    t87 = (~(t84));
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t87);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t86);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t87);
    goto LAB52;

LAB53:    xsi_set_current_line(76, ng0);
    t95 = ((char*)((ng4)));
    t96 = (t0 + 3208);
    xsi_vlogvar_assign_value(t96, t95, 0, 0, 3);
    goto LAB55;

LAB58:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t22) = 1;
    goto LAB63;

LAB62:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB63;

LAB64:    t29 = (t0 + 2648U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng2)));
    memset(t37, 0, 8);
    t35 = (t30 + 4);
    t36 = (t29 + 4);
    t34 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t29);
    t41 = (t34 ^ t40);
    t42 = *((unsigned int *)t35);
    t43 = *((unsigned int *)t36);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t35);
    t47 = *((unsigned int *)t36);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB70;

LAB67:    if (t48 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t37) = 1;

LAB70:    memset(t53, 0, 8);
    t39 = (t37 + 4);
    t51 = *((unsigned int *)t39);
    t55 = (~(t51));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t39) != 0)
        goto LAB73;

LAB74:    t59 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t53);
    t63 = (t59 & t62);
    *((unsigned int *)t61) = t63;
    t54 = (t22 + 4);
    t60 = (t53 + 4);
    t65 = (t61 + 4);
    t64 = *((unsigned int *)t54);
    t68 = *((unsigned int *)t60);
    t69 = (t64 | t68);
    *((unsigned int *)t65) = t69;
    t70 = *((unsigned int *)t65);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB66;

LAB69:    t38 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t53) = 1;
    goto LAB74;

LAB73:    t52 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB74;

LAB75:    t72 = *((unsigned int *)t61);
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t61) = (t72 | t73);
    t66 = (t22 + 4);
    t67 = (t53 + 4);
    t74 = *((unsigned int *)t22);
    t77 = (~(t74));
    t78 = *((unsigned int *)t66);
    t79 = (~(t78));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t67);
    t85 = (~(t83));
    t80 = (t77 & t79);
    t84 = (t82 & t85);
    t86 = (~(t80));
    t87 = (~(t84));
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t86);
    t90 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t90 & t87);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t86);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t87);
    goto LAB77;

LAB78:    *((unsigned int *)t100) = 1;
    goto LAB81;

LAB80:    t76 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB81;

LAB82:    t95 = (t0 + 3048);
    t96 = (t95 + 56U);
    t104 = *((char **)t96);
    t105 = ((char*)((ng4)));
    memset(t106, 0, 8);
    t107 = (t104 + 4);
    t108 = (t105 + 4);
    t109 = *((unsigned int *)t104);
    t110 = *((unsigned int *)t105);
    t111 = (t109 ^ t110);
    t112 = *((unsigned int *)t107);
    t113 = *((unsigned int *)t108);
    t114 = (t112 ^ t113);
    t115 = (t111 | t114);
    t116 = *((unsigned int *)t107);
    t117 = *((unsigned int *)t108);
    t118 = (t116 | t117);
    t119 = (~(t118));
    t120 = (t115 & t119);
    if (t120 != 0)
        goto LAB88;

LAB85:    if (t118 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t106) = 1;

LAB88:    memset(t122, 0, 8);
    t123 = (t106 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (~(t124));
    t126 = *((unsigned int *)t106);
    t127 = (t126 & t125);
    t128 = (t127 & 1U);
    if (t128 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t123) != 0)
        goto LAB91;

LAB92:    t131 = *((unsigned int *)t100);
    t132 = *((unsigned int *)t122);
    t133 = (t131 & t132);
    *((unsigned int *)t130) = t133;
    t134 = (t100 + 4);
    t135 = (t122 + 4);
    t136 = (t130 + 4);
    t137 = *((unsigned int *)t134);
    t138 = *((unsigned int *)t135);
    t139 = (t137 | t138);
    *((unsigned int *)t136) = t139;
    t140 = *((unsigned int *)t136);
    t141 = (t140 != 0);
    if (t141 == 1)
        goto LAB93;

LAB94:
LAB95:    goto LAB84;

LAB87:    t121 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB88;

LAB89:    *((unsigned int *)t122) = 1;
    goto LAB92;

LAB91:    t129 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB92;

LAB93:    t142 = *((unsigned int *)t130);
    t143 = *((unsigned int *)t136);
    *((unsigned int *)t130) = (t142 | t143);
    t144 = (t100 + 4);
    t145 = (t122 + 4);
    t146 = *((unsigned int *)t100);
    t147 = (~(t146));
    t148 = *((unsigned int *)t144);
    t149 = (~(t148));
    t150 = *((unsigned int *)t122);
    t151 = (~(t150));
    t152 = *((unsigned int *)t145);
    t153 = (~(t152));
    t154 = (t147 & t149);
    t155 = (t151 & t153);
    t156 = (~(t154));
    t157 = (~(t155));
    t158 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t158 & t156);
    t159 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t159 & t157);
    t160 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t160 & t156);
    t161 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t161 & t157);
    goto LAB95;

LAB96:    xsi_set_current_line(78, ng0);
    t168 = ((char*)((ng5)));
    t169 = (t0 + 3208);
    xsi_vlogvar_assign_value(t169, t168, 0, 0, 3);
    goto LAB98;

LAB101:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB102;

LAB103:    *((unsigned int *)t22) = 1;
    goto LAB106;

LAB105:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB106;

LAB107:    t29 = (t0 + 2648U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t35 = (t30 + 4);
    t36 = (t29 + 4);
    t34 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t29);
    t41 = (t34 ^ t40);
    t42 = *((unsigned int *)t35);
    t43 = *((unsigned int *)t36);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t35);
    t47 = *((unsigned int *)t36);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB113;

LAB110:    if (t48 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t37) = 1;

LAB113:    memset(t53, 0, 8);
    t39 = (t37 + 4);
    t51 = *((unsigned int *)t39);
    t55 = (~(t51));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t39) != 0)
        goto LAB116;

LAB117:    t59 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t53);
    t63 = (t59 & t62);
    *((unsigned int *)t61) = t63;
    t54 = (t22 + 4);
    t60 = (t53 + 4);
    t65 = (t61 + 4);
    t64 = *((unsigned int *)t54);
    t68 = *((unsigned int *)t60);
    t69 = (t64 | t68);
    *((unsigned int *)t65) = t69;
    t70 = *((unsigned int *)t65);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB118;

LAB119:
LAB120:    goto LAB109;

LAB112:    t38 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB113;

LAB114:    *((unsigned int *)t53) = 1;
    goto LAB117;

LAB116:    t52 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB117;

LAB118:    t72 = *((unsigned int *)t61);
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t61) = (t72 | t73);
    t66 = (t22 + 4);
    t67 = (t53 + 4);
    t74 = *((unsigned int *)t22);
    t77 = (~(t74));
    t78 = *((unsigned int *)t66);
    t79 = (~(t78));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t67);
    t85 = (~(t83));
    t80 = (t77 & t79);
    t84 = (t82 & t85);
    t86 = (~(t80));
    t87 = (~(t84));
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t86);
    t90 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t90 & t87);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t86);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t87);
    goto LAB120;

LAB121:    *((unsigned int *)t100) = 1;
    goto LAB124;

LAB123:    t76 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t76) = 1;
    goto LAB124;

LAB125:    t95 = (t0 + 3048);
    t96 = (t95 + 56U);
    t104 = *((char **)t96);
    t105 = ((char*)((ng4)));
    memset(t106, 0, 8);
    t107 = (t104 + 4);
    t108 = (t105 + 4);
    t109 = *((unsigned int *)t104);
    t110 = *((unsigned int *)t105);
    t111 = (t109 ^ t110);
    t112 = *((unsigned int *)t107);
    t113 = *((unsigned int *)t108);
    t114 = (t112 ^ t113);
    t115 = (t111 | t114);
    t116 = *((unsigned int *)t107);
    t117 = *((unsigned int *)t108);
    t118 = (t116 | t117);
    t119 = (~(t118));
    t120 = (t115 & t119);
    if (t120 != 0)
        goto LAB131;

LAB128:    if (t118 != 0)
        goto LAB130;

LAB129:    *((unsigned int *)t106) = 1;

LAB131:    memset(t122, 0, 8);
    t123 = (t106 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (~(t124));
    t126 = *((unsigned int *)t106);
    t127 = (t126 & t125);
    t128 = (t127 & 1U);
    if (t128 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t123) != 0)
        goto LAB134;

LAB135:    t131 = *((unsigned int *)t100);
    t132 = *((unsigned int *)t122);
    t133 = (t131 & t132);
    *((unsigned int *)t130) = t133;
    t134 = (t100 + 4);
    t135 = (t122 + 4);
    t136 = (t130 + 4);
    t137 = *((unsigned int *)t134);
    t138 = *((unsigned int *)t135);
    t139 = (t137 | t138);
    *((unsigned int *)t136) = t139;
    t140 = *((unsigned int *)t136);
    t141 = (t140 != 0);
    if (t141 == 1)
        goto LAB136;

LAB137:
LAB138:    goto LAB127;

LAB130:    t121 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB131;

LAB132:    *((unsigned int *)t122) = 1;
    goto LAB135;

LAB134:    t129 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB135;

LAB136:    t142 = *((unsigned int *)t130);
    t143 = *((unsigned int *)t136);
    *((unsigned int *)t130) = (t142 | t143);
    t144 = (t100 + 4);
    t145 = (t122 + 4);
    t146 = *((unsigned int *)t100);
    t147 = (~(t146));
    t148 = *((unsigned int *)t144);
    t149 = (~(t148));
    t150 = *((unsigned int *)t122);
    t151 = (~(t150));
    t152 = *((unsigned int *)t145);
    t153 = (~(t152));
    t154 = (t147 & t149);
    t155 = (t151 & t153);
    t156 = (~(t154));
    t157 = (~(t155));
    t158 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t158 & t156);
    t159 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t159 & t157);
    t160 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t160 & t156);
    t161 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t161 & t157);
    goto LAB138;

LAB139:    xsi_set_current_line(80, ng0);
    t168 = ((char*)((ng6)));
    t169 = (t0 + 3208);
    xsi_vlogvar_assign_value(t169, t168, 0, 0, 3);
    goto LAB141;

LAB144:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB145;

LAB146:    *((unsigned int *)t22) = 1;
    goto LAB149;

LAB148:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB149;

LAB150:    t29 = (t0 + 3048);
    t30 = (t29 + 56U);
    t35 = *((char **)t30);
    t36 = ((char*)((ng5)));
    memset(t37, 0, 8);
    t38 = (t35 + 4);
    t39 = (t36 + 4);
    t34 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t36);
    t41 = (t34 ^ t40);
    t42 = *((unsigned int *)t38);
    t43 = *((unsigned int *)t39);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB156;

LAB153:    if (t48 != 0)
        goto LAB155;

LAB154:    *((unsigned int *)t37) = 1;

LAB156:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t51 = *((unsigned int *)t54);
    t55 = (~(t51));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB157;

LAB158:    if (*((unsigned int *)t54) != 0)
        goto LAB159;

LAB160:    t59 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t53);
    t63 = (t59 & t62);
    *((unsigned int *)t61) = t63;
    t65 = (t22 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t64 = *((unsigned int *)t65);
    t68 = *((unsigned int *)t66);
    t69 = (t64 | t68);
    *((unsigned int *)t67) = t69;
    t70 = *((unsigned int *)t67);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB161;

LAB162:
LAB163:    goto LAB152;

LAB155:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB156;

LAB157:    *((unsigned int *)t53) = 1;
    goto LAB160;

LAB159:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB160;

LAB161:    t72 = *((unsigned int *)t61);
    t73 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t72 | t73);
    t75 = (t22 + 4);
    t76 = (t53 + 4);
    t74 = *((unsigned int *)t22);
    t77 = (~(t74));
    t78 = *((unsigned int *)t75);
    t79 = (~(t78));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t85 = (~(t83));
    t80 = (t77 & t79);
    t84 = (t82 & t85);
    t86 = (~(t80));
    t87 = (~(t84));
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t87);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t86);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t87);
    goto LAB163;

LAB164:    xsi_set_current_line(82, ng0);
    t95 = ((char*)((ng1)));
    t96 = (t0 + 3208);
    xsi_vlogvar_assign_value(t96, t95, 0, 0, 3);
    goto LAB166;

LAB169:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB170;

LAB171:    *((unsigned int *)t22) = 1;
    goto LAB174;

LAB173:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB174;

LAB175:    t29 = (t0 + 3048);
    t30 = (t29 + 56U);
    t35 = *((char **)t30);
    t36 = ((char*)((ng1)));
    memset(t37, 0, 8);
    t38 = (t35 + 4);
    t39 = (t36 + 4);
    t34 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t36);
    t41 = (t34 ^ t40);
    t42 = *((unsigned int *)t38);
    t43 = *((unsigned int *)t39);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB181;

LAB178:    if (t48 != 0)
        goto LAB180;

LAB179:    *((unsigned int *)t37) = 1;

LAB181:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t51 = *((unsigned int *)t54);
    t55 = (~(t51));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB182;

LAB183:    if (*((unsigned int *)t54) != 0)
        goto LAB184;

LAB185:    t59 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t53);
    t63 = (t59 & t62);
    *((unsigned int *)t61) = t63;
    t65 = (t22 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t64 = *((unsigned int *)t65);
    t68 = *((unsigned int *)t66);
    t69 = (t64 | t68);
    *((unsigned int *)t67) = t69;
    t70 = *((unsigned int *)t67);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB186;

LAB187:
LAB188:    goto LAB177;

LAB180:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB181;

LAB182:    *((unsigned int *)t53) = 1;
    goto LAB185;

LAB184:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB185;

LAB186:    t72 = *((unsigned int *)t61);
    t73 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t72 | t73);
    t75 = (t22 + 4);
    t76 = (t53 + 4);
    t74 = *((unsigned int *)t22);
    t77 = (~(t74));
    t78 = *((unsigned int *)t75);
    t79 = (~(t78));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t85 = (~(t83));
    t80 = (t77 & t79);
    t84 = (t82 & t85);
    t86 = (~(t80));
    t87 = (~(t84));
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t87);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t86);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t87);
    goto LAB188;

LAB189:    xsi_set_current_line(84, ng0);
    t95 = ((char*)((ng2)));
    t96 = (t0 + 3208);
    xsi_vlogvar_assign_value(t96, t95, 0, 0, 3);
    goto LAB191;

}


extern void work_m_00000000002735652059_1938225339_init()
{
	static char *pe[] = {(void *)Cont_57_0,(void *)Cont_58_1,(void *)Cont_59_2,(void *)Initial_61_3,(void *)Always_65_4,(void *)Always_71_5};
	xsi_register_didat("work_m_00000000002735652059_1938225339", "isim/Control_unit_tb_isim_beh.exe.sim/work/m_00000000002735652059_1938225339.didat");
	xsi_register_executes(pe);
}
