/* 
* This file is part of STiD135 OXFORD LLA 
* 
* Copyright (c) <2014>-<2018>, STMicroelectronics - All Rights Reserved 
* Author(s): Mathias Hilaire (mathias.hilaire@st.com), Thierry Delahaye (thierry.delahaye@st.com) for STMicroelectronics. 
* 
* License terms: BSD 3-clause "New" or "Revised" License. 
* 
* Redistribution and use in source and binary forms, with or without 
* modification, are permitted provided that the following conditions are met: 
* 
* 1. Redistributions of source code must retain the above copyright notice, this 
* list of conditions and the following disclaimer. 
* 
* 2. Redistributions in binary form must reproduce the above copyright notice, 
* this list of conditions and the following disclaimer in the documentation 
* and/or other materials provided with the distribution. 
* 
* 3. Neither the name of the copyright holder nor the names of its contributors 
* may be used to endorse or promote products derived from this software 
* without specific prior written permission. 
* 
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE 
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
* 
*/ 
#ifndef _DVBSX_LNBCTRL_REG_INIT_H
#define _DVBSX_LNBCTRL_REG_INIT_H

/* -------------------------------------------------------------------------
 * File name  : dvbsx_lnbctrl_reg_init.h
 * File type  : C header file
 * -------------------------------------------------------------------------
 * Description:  Register map constants
 * Generated by spirit2regtest v2.24_alpha3
 * -------------------------------------------------------------------------
 */


/* Register map constants */

/* LNB_VER */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VER                               0x00000000
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VER__DEFAULT                      0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VER_LNB_IP_VERSION__MASK          0xFF      

/* LNB_FPWM0 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_FPWM0                             0x00000004
#define RC8CODEW_DVBSX_LNBCTRL_LNB_FPWM0__DEFAULT                    0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_FPWM0_FPWM__MASK                  0x0F      

/* LNB_FPWM1 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_FPWM1                             0x00000005
#define RC8CODEW_DVBSX_LNBCTRL_LNB_FPWM1__DEFAULT                    0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_FPWM1_FPWM__MASK                  0xFF      

/* LNB_FADC0 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_FADC0                             0x00000006
#define RC8CODEW_DVBSX_LNBCTRL_LNB_FADC0__DEFAULT                    0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_FADC0_FADC__MASK                  0x0F      

/* LNB_FADC1 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_FADC1                             0x00000007
#define RC8CODEW_DVBSX_LNBCTRL_LNB_FADC1__DEFAULT                    0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_FADC1_FADC__MASK                  0xFF      

/* LNB_FTIMER */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_FTIMER                            0x00000008
#define RC8CODEW_DVBSX_LNBCTRL_LNB_FTIMER__DEFAULT                   0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_FTIMER_FTIMER__MASK               0xFF      

/* LNB_VCTRL */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VCTRL                             0x00000009
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VCTRL__DEFAULT                    0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VCTRL_VLNB_ON_EN__MASK            0x01      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VCTRL_VLNB_SEL__MASK              0x02      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VCTRL_LOWI_CTRL_EN__MASK          0x10      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VCTRL_FPWM_HALF_EN__MASK          0x20      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VCTRL_PWM_OPENLOOP__MASK          0x40      

/* LNB_DMAX */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DMAX                              0x0000000a
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DMAX__DEFAULT                     0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DMAX_PWM_DMAX__MASK               0xFF      

/* LNB_DFORCED */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DFORCED                           0x0000000b
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DFORCED__DEFAULT                  0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DFORCED_PWM_DFORCED__MASK         0xFF      

/* LNB_VSEL0 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSEL0                             0x0000000c
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSEL0__DEFAULT                    0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VSEL0_VSENSE_MAX__MASK            0xFF      

/* LNB_VSEL1 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSEL1                             0x0000000d
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSEL1__DEFAULT                    0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VSEL1_VSENSE_HIGH__MASK           0xFF      

/* LNB_VSEL2 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSEL2                             0x0000000e
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSEL2__DEFAULT                    0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VSEL2_VSENSE_LOW__MASK            0xFF      

/* LNB_VSEL3 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSEL3                             0x0000000f
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSEL3__DEFAULT                    0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VSEL3_VSENSE_MIN__MASK            0xFF      

/* LNB_DCFLT0 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DCFLT0                            0x00000010
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DCFLT0__DEFAULT                   0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DCFLT0_DCFLT_K_EXP__MASK          0x0F      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DCFLT0_DCFLT_K_MAN__MASK          0x70      

/* LNB_DCFLT1 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DCFLT1                            0x00000011
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DCFLT1__DEFAULT                   0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DCFLT1_DCFLT_ORDER__MASK          0x03      

/* LNB_LOOPFLT0 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_LOOPFLT0                          0x00000012
#define RC8CODEW_DVBSX_LNBCTRL_LNB_LOOPFLT0__DEFAULT                 0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_LOOPFLT0_LOOPFLT_GP_EXP__MASK     0x0F      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_LOOPFLT0_LOOPFLT_GP_MAN__MASK     0x70      

/* LNB_LOOPFLT1 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_LOOPFLT1                          0x00000013
#define RC8CODEW_DVBSX_LNBCTRL_LNB_LOOPFLT1__DEFAULT                 0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_LOOPFLT1_LOOPFLT_GI_EXP__MASK     0x0F      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_LOOPFLT1_LOOPFLT_GI_MAN__MASK     0x70      

/* LNB_VSTABLE1 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSTABLE1                          0x00000014
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSTABLE1__DEFAULT                 0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VSTABLE1_VSTABLE_TIME__MASK       0x0F      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VSTABLE1_VSTABLE_TH__MASK         0x70      

/* LNB_VSTABLE2 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSTABLE2                          0x00000015
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSTABLE2__DEFAULT                 0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VSTABLE2_VTRANS_TIMEOUT__MASK     0x07      

/* LNB_ISAF0 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_ISAF0                             0x00000016
#define RC8CODEW_DVBSX_LNBCTRL_LNB_ISAF0__DEFAULT                    0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_ISAF0_ISENSE_TEN_EXP__MASK        0x0F      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_ISAF0_ISENSE_TEN_MAN__MASK        0x70      

/* LNB_ISAF1 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_ISAF1                             0x00000017
#define RC8CODEW_DVBSX_LNBCTRL_LNB_ISAF1__DEFAULT                    0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_ISAF1_ISENSE_TDIS_RATIO__MASK     0x0F      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_ISAF1_ISENSE_LIMIT_MODE__MASK     0x10      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_ISAF1_ISENSE_LIMIT_K__MASK        0x60      

/* LNB_SCSAF */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_SCSAF                             0x00000018
#define RC8CODEW_DVBSX_LNBCTRL_LNB_SCSAF__DEFAULT                    0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_SCSAF_SC_TON_EXP__MASK            0x0F      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_SCSAF_SC_TON_MAN__MASK            0x70      

/* LNB_OCSAF0 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_OCSAF0                            0x00000019
#define RC8CODEW_DVBSX_LNBCTRL_LNB_OCSAF0__DEFAULT                   0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_OCSAF0_OC_TON_EXP__MASK           0x0F      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_OCSAF0_OC_TON_MAN__MASK           0x70      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_OCSAF0_OCSAF_DIS__MASK            0x80      

/* LNB_OCSAF1 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_OCSAF1                            0x0000001a
#define RC8CODEW_DVBSX_LNBCTRL_LNB_OCSAF1__DEFAULT                   0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_OCSAF1_OC_TOFF_RATIO__MASK        0x0F      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_OCSAF1_VLNB_ON_POCL_EN__MASK      0x10      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_OCSAF1_VLNB_OFF_CLR__MASK         0x20      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_OCSAF1_VLNB_OFF_DLY__MASK         0xC0      

/* LNB_DSQDRV0 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV0                           0x0000001c
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV0__DEFAULT                  0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV0_DSQDRV_EN__MASK           0x01      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV0_DSQDRV_MODE__MASK         0x02      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV0_DSQDRV_AGC_EN__MASK       0x04      

/* LNB_DSQDRV1 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV1                           0x0000001d
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV1__DEFAULT                  0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV1_DSQDRV_AMP_TH__MASK       0x0F      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV1_DSQDRV_AGC_SPEED__MASK    0xF0      

/* LNB_DSQDRV2 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV2                           0x0000001e
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV2__DEFAULT                  0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV2_DSQDRV_DC__MASK           0x0F      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV2_DSQDRV_GAIN__MASK         0xF0      

/* LNB_DSQDRV3 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV3                           0x0000001f
#define RC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV3__DEFAULT                  0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV3_DSQDRV_K_EXP__MASK        0x0F      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_DSQDRV3_DSQDRV_K_MAN__MASK        0x70      

/* LNB_LOWICTRL1 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_LOWICTRL1                         0x00000020
#define RC8CODEW_DVBSX_LNBCTRL_LNB_LOWICTRL1__DEFAULT                0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_LOWICTRL1_LOWI_CTRL_MODE__MASK    0x03      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_LOWICTRL1_LOWI_CTRL_START__MASK   0x04      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_LOWICTRL1_LOWI_CTRL_FORCED__MASK  0x08      

/* LNB_LOWICTRL2 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_LOWICTRL2                         0x00000021
#define RC8CODEW_DVBSX_LNBCTRL_LNB_LOWICTRL2__DEFAULT                0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_LOWICTRL2_LOWI_CTRL_DC__MASK      0x0F      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_LOWICTRL2_LOWI_CTRL_TH__MASK      0xF0      

/* LNB_LOWICTRL3 */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_LOWICTRL3                         0x00000022
#define RC8CODEW_DVBSX_LNBCTRL_LNB_LOWICTRL3__DEFAULT                0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_LOWICTRL3_LOWI_CTRL_TIME__MASK    0x0F      

/* LNB_SAFSTAT */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_SAFSTAT                           0x00000024
#define RC8CODEW_DVBSX_LNBCTRL_LNB_SAFSTAT__DEFAULT                  0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_SAFSTAT_ISENSE_OVER_STATUS__MASK  0x01      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_SAFSTAT_SC_OVER_STATUS__MASK      0x02      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_SAFSTAT_OC_OVER_STATUS__MASK      0x04      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_SAFSTAT_VSTABLE_STATUS__MASK      0x10      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_SAFSTAT_LOWI_STATUS__MASK         0x20      

/* LNB_VSENSESTAT */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSENSESTAT                        0x00000025
#define RC8CODEW_DVBSX_LNBCTRL_LNB_VSENSESTAT__DEFAULT               0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_VSENSESTAT_VSENSE_STATUS__MASK    0xFF      

/* LNB_PWMDSTAT */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_PWMDSTAT                          0x00000026
#define RC8CODEW_DVBSX_LNBCTRL_LNB_PWMDSTAT__DEFAULT                 0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_PWMDSTAT_PWM_DATA_STATUS__MASK    0xFF      

/* LNB_ITEN */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_ITEN                              0x00000028
#define RC8CODEW_DVBSX_LNBCTRL_LNB_ITEN__DEFAULT                     0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_ITEN_ISENSE_OVER_IT_EN__MASK      0x01      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_ITEN_SC_OVER_IT_EN__MASK          0x02      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_ITEN_OC_OVER_IT_EN__MASK          0x04      

/* LNB_ITSTAT */
#define RC8CODEW_DVBSX_LNBCTRL_LNB_ITSTAT                            0x00000029
#define RC8CODEW_DVBSX_LNBCTRL_LNB_ITSTAT__DEFAULT                   0x0       
#define FC8CODEW_DVBSX_LNBCTRL_LNB_ITSTAT_ISENSE_OVER_IT_STAT__MASK  0x01      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_ITSTAT_SC_OVER_IT_STAT__MASK      0x02      
#define FC8CODEW_DVBSX_LNBCTRL_LNB_ITSTAT_OC_OVER_IT_STAT__MASK      0x04      


/* Number of registers */
#define C8CODEW_DVBSX_LNBCTRL_REG_NBREGS                             36        

/* Number of fields */
#define C8CODEW_DVBSX_LNBCTRL_REG_NBFIELDS                           69        



#endif /* #ifndef _DVBSX_LNBCTRL_REG_INIT_H */