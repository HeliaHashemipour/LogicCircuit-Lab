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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    simprims_ver_u_00000000001518412038_3351940313_init();
    simprims_ver_m_00000000002512495004_1715877197_init();
    simprims_ver_u_00000000001518412038_0211181436_init();
    simprims_ver_m_00000000000515035322_2003506896_init();
    simprims_ver_m_00000000003598591109_3256702861_init();
    simprims_ver_m_00000000001255213976_2021654676_init();
    simprims_ver_m_00000000003359274523_2662658903_init();
    simprims_ver_m_00000000000648012491_3151998091_init();
    simprims_ver_m_00000000001867363923_1692233196_init();
    work_m_00000000001638187451_2550508747_init();
    work_m_00000000001254409922_1887914140_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001254409922_1887914140");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
