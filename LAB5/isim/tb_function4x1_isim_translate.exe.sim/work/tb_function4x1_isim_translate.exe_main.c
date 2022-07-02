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
    simprims_ver_m_00000000003598591109_4131348459_init();
    simprims_ver_m_00000000001255213976_2021654676_init();
    simprims_ver_m_00000000003359274523_2662658903_init();
    simprims_ver_m_00000000000648012491_3151998091_init();
    simprims_ver_m_00000000001867363923_1692233196_init();
    work_m_00000000001463791204_0603462659_init();
    work_m_00000000000087133053_0415324401_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000087133053_0415324401");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
