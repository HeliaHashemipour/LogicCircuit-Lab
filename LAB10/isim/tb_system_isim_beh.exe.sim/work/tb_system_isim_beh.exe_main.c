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
    work_m_00000000003022377257_2030911003_init();
    work_m_00000000002263700560_3673085417_init();
    work_m_00000000003764320166_3913188552_init();
    work_m_00000000000088098942_2933281589_init();
    work_m_00000000002349870860_1043376690_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002349870860_1043376690");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
