/*
 * (C) Copyright 2008-2017 Fuzhou Rockchip Electronics Co., Ltd
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef _ROCKCHIP_VOP_REG_H
#define _ROCKCHIP_VOP_REG_H

/* rk3288 register definition */
#define RK3288_REG_CFG_DONE			0x0000
#define RK3288_VERSION_INFO			0x0004
#define RK3288_SYS_CTRL				0x0008
#define RK3288_SYS_CTRL1			0x000c
#define RK3288_DSP_CTRL0			0x0010
#define RK3288_DSP_CTRL1			0x0014
#define RK3288_DSP_BG				0x0018
#define RK3288_MCU_CTRL				0x001c
#define RK3288_INTR_CTRL0			0x0020
#define RK3288_INTR_CTRL1			0x0024
#define RK3288_WIN0_CTRL0			0x0030
#define RK3288_WIN0_CTRL1			0x0034
#define RK3288_WIN0_COLOR_KEY			0x0038
#define RK3288_WIN0_VIR				0x003c
#define RK3288_WIN0_YRGB_MST			0x0040
#define RK3288_WIN0_CBR_MST			0x0044
#define RK3288_WIN0_ACT_INFO			0x0048
#define RK3288_WIN0_DSP_INFO			0x004c
#define RK3288_WIN0_DSP_ST			0x0050
#define RK3288_WIN0_SCL_FACTOR_YRGB		0x0054
#define RK3288_WIN0_SCL_FACTOR_CBR		0x0058
#define RK3288_WIN0_SCL_OFFSET			0x005c
#define RK3288_WIN0_SRC_ALPHA_CTRL		0x0060
#define RK3288_WIN0_DST_ALPHA_CTRL		0x0064
#define RK3288_WIN0_FADING_CTRL			0x0068

/* win1 register */
#define RK3288_WIN1_CTRL0			0x0070
#define RK3288_WIN1_CTRL1			0x0074
#define RK3288_WIN1_COLOR_KEY			0x0078
#define RK3288_WIN1_VIR				0x007c
#define RK3288_WIN1_YRGB_MST			0x0080
#define RK3288_WIN1_CBR_MST			0x0084
#define RK3288_WIN1_ACT_INFO			0x0088
#define RK3288_WIN1_DSP_INFO			0x008c
#define RK3288_WIN1_DSP_ST			0x0090
#define RK3288_WIN1_SCL_FACTOR_YRGB		0x0094
#define RK3288_WIN1_SCL_FACTOR_CBR		0x0098
#define RK3288_WIN1_SCL_OFFSET			0x009c
#define RK3288_WIN1_SRC_ALPHA_CTRL		0x00a0
#define RK3288_WIN1_DST_ALPHA_CTRL		0x00a4
#define RK3288_WIN1_FADING_CTRL			0x00a8
/* win2 register */
#define RK3288_WIN2_CTRL0			0x00b0
#define RK3288_WIN2_CTRL1			0x00b4
#define RK3288_WIN2_VIR0_1			0x00b8
#define RK3288_WIN2_VIR2_3			0x00bc
#define RK3288_WIN2_MST0			0x00c0
#define RK3288_WIN2_DSP_INFO0			0x00c4
#define RK3288_WIN2_DSP_ST0			0x00c8
#define RK3288_WIN2_COLOR_KEY			0x00cc
#define RK3288_WIN2_MST1			0x00d0
#define RK3288_WIN2_DSP_INFO1			0x00d4
#define RK3288_WIN2_DSP_ST1			0x00d8
#define RK3288_WIN2_SRC_ALPHA_CTRL		0x00dc
#define RK3288_WIN2_MST2			0x00e0
#define RK3288_WIN2_DSP_INFO2			0x00e4
#define RK3288_WIN2_DSP_ST2			0x00e8
#define RK3288_WIN2_DST_ALPHA_CTRL		0x00ec
#define RK3288_WIN2_MST3			0x00f0
#define RK3288_WIN2_DSP_INFO3			0x00f4
#define RK3288_WIN2_DSP_ST3			0x00f8
#define RK3288_WIN2_FADING_CTRL			0x00fc
/* win3 register */
#define RK3288_WIN3_CTRL0			0x0100
#define RK3288_WIN3_CTRL1			0x0104
#define RK3288_WIN3_VIR0_1			0x0108
#define RK3288_WIN3_VIR2_3			0x010c
#define RK3288_WIN3_MST0			0x0110
#define RK3288_WIN3_DSP_INFO0			0x0114
#define RK3288_WIN3_DSP_ST0			0x0118
#define RK3288_WIN3_COLOR_KEY			0x011c
#define RK3288_WIN3_MST1			0x0120
#define RK3288_WIN3_DSP_INFO1			0x0124
#define RK3288_WIN3_DSP_ST1			0x0128
#define RK3288_WIN3_SRC_ALPHA_CTRL		0x012c
#define RK3288_WIN3_MST2			0x0130
#define RK3288_WIN3_DSP_INFO2			0x0134
#define RK3288_WIN3_DSP_ST2			0x0138
#define RK3288_WIN3_DST_ALPHA_CTRL		0x013c
#define RK3288_WIN3_MST3			0x0140
#define RK3288_WIN3_DSP_INFO3			0x0144
#define RK3288_WIN3_DSP_ST3			0x0148
#define RK3288_WIN3_FADING_CTRL			0x014c
/* hwc register */
#define RK3288_HWC_CTRL0			0x0150
#define RK3288_HWC_CTRL1			0x0154
#define RK3288_HWC_MST				0x0158
#define RK3288_HWC_DSP_ST			0x015c
#define RK3288_HWC_SRC_ALPHA_CTRL		0x0160
#define RK3288_HWC_DST_ALPHA_CTRL		0x0164
#define RK3288_HWC_FADING_CTRL			0x0168
/* post process register */
#define RK3288_POST_DSP_HACT_INFO		0x0170
#define RK3288_POST_DSP_VACT_INFO		0x0174
#define RK3288_POST_SCL_FACTOR_YRGB		0x0178
#define RK3288_POST_SCL_CTRL			0x0180
#define RK3288_POST_DSP_VACT_INFO_F1		0x0184
#define RK3288_DSP_HTOTAL_HS_END		0x0188
#define RK3288_DSP_HACT_ST_END			0x018c
#define RK3288_DSP_VTOTAL_VS_END		0x0190
#define RK3288_DSP_VACT_ST_END			0x0194
#define RK3288_DSP_VS_ST_END_F1			0x0198
#define RK3288_DSP_VACT_ST_END_F1		0x019c

#define RK3288_BCSH_COLOR_BAR			0x01b0
#define RK3288_BCSH_BCS				0x01b4
#define RK3288_BCSH_H				0x01b8
#define RK3288_GRF_SOC_CON15			0x03a4
/* register definition end */

/* rk3368 register definition */
#define RK3368_REG_CFG_DONE			0x0000
#define RK3368_VERSION_INFO			0x0004
#define RK3368_SYS_CTRL				0x0008
#define RK3368_SYS_CTRL1			0x000c
#define RK3368_DSP_CTRL0			0x0010
#define RK3368_DSP_CTRL1			0x0014
#define RK3368_DSP_BG				0x0018
#define RK3368_MCU_CTRL				0x001c
#define RK3368_LINE_FLAG			0x0020
#define RK3368_INTR_EN				0x0024
#define RK3368_INTR_CLEAR			0x0028
#define RK3368_INTR_STATUS			0x002c
#define RK3368_WIN0_CTRL0			0x0030
#define RK3368_WIN0_CTRL1			0x0034
#define RK3368_WIN0_COLOR_KEY			0x0038
#define RK3368_WIN0_VIR				0x003c
#define RK3368_WIN0_YRGB_MST			0x0040
#define RK3368_WIN0_CBR_MST			0x0044
#define RK3368_WIN0_ACT_INFO			0x0048
#define RK3368_WIN0_DSP_INFO			0x004c
#define RK3368_WIN0_DSP_ST			0x0050
#define RK3368_WIN0_SCL_FACTOR_YRGB		0x0054
#define RK3368_WIN0_SCL_FACTOR_CBR		0x0058
#define RK3368_WIN0_SCL_OFFSET			0x005c
#define RK3368_WIN0_SRC_ALPHA_CTRL		0x0060
#define RK3368_WIN0_DST_ALPHA_CTRL		0x0064
#define RK3368_WIN0_FADING_CTRL			0x0068
#define RK3368_WIN0_CTRL2			0x006c
#define RK3368_WIN1_CTRL0			0x0070
#define RK3368_WIN1_CTRL1			0x0074
#define RK3368_WIN1_COLOR_KEY			0x0078
#define RK3368_WIN1_VIR				0x007c
#define RK3368_WIN1_YRGB_MST			0x0080
#define RK3368_WIN1_CBR_MST			0x0084
#define RK3368_WIN1_ACT_INFO			0x0088
#define RK3368_WIN1_DSP_INFO			0x008c
#define RK3368_WIN1_DSP_ST			0x0090
#define RK3368_WIN1_SCL_FACTOR_YRGB		0x0094
#define RK3368_WIN1_SCL_FACTOR_CBR		0x0098
#define RK3368_WIN1_SCL_OFFSET			0x009c
#define RK3368_WIN1_SRC_ALPHA_CTRL		0x00a0
#define RK3368_WIN1_DST_ALPHA_CTRL		0x00a4
#define RK3368_WIN1_FADING_CTRL			0x00a8
#define RK3368_WIN1_CTRL2			0x00ac
#define RK3368_WIN2_CTRL0			0x00b0
#define RK3368_WIN2_CTRL1			0x00b4
#define RK3368_WIN2_VIR0_1			0x00b8
#define RK3368_WIN2_VIR2_3			0x00bc
#define RK3368_WIN2_MST0			0x00c0
#define RK3368_WIN2_DSP_INFO0			0x00c4
#define RK3368_WIN2_DSP_ST0			0x00c8
#define RK3368_WIN2_COLOR_KEY			0x00cc
#define RK3368_WIN2_MST1			0x00d0
#define RK3368_WIN2_DSP_INFO1			0x00d4
#define RK3368_WIN2_DSP_ST1			0x00d8
#define RK3368_WIN2_SRC_ALPHA_CTRL		0x00dc
#define RK3368_WIN2_MST2			0x00e0
#define RK3368_WIN2_DSP_INFO2			0x00e4
#define RK3368_WIN2_DSP_ST2			0x00e8
#define RK3368_WIN2_DST_ALPHA_CTRL		0x00ec
#define RK3368_WIN2_MST3			0x00f0
#define RK3368_WIN2_DSP_INFO3			0x00f4
#define RK3368_WIN2_DSP_ST3			0x00f8
#define RK3368_WIN2_FADING_CTRL			0x00fc
#define RK3368_WIN3_CTRL0			0x0100
#define RK3368_WIN3_CTRL1			0x0104
#define RK3368_WIN3_VIR0_1			0x0108
#define RK3368_WIN3_VIR2_3			0x010c
#define RK3368_WIN3_MST0			0x0110
#define RK3368_WIN3_DSP_INFO0			0x0114
#define RK3368_WIN3_DSP_ST0			0x0118
#define RK3368_WIN3_COLOR_KEY			0x011c
#define RK3368_WIN3_MST1			0x0120
#define RK3368_WIN3_DSP_INFO1			0x0124
#define RK3368_WIN3_DSP_ST1			0x0128
#define RK3368_WIN3_SRC_ALPHA_CTRL		0x012c
#define RK3368_WIN3_MST2			0x0130
#define RK3368_WIN3_DSP_INFO2			0x0134
#define RK3368_WIN3_DSP_ST2			0x0138
#define RK3368_WIN3_DST_ALPHA_CTRL		0x013c
#define RK3368_WIN3_MST3			0x0140
#define RK3368_WIN3_DSP_INFO3			0x0144
#define RK3368_WIN3_DSP_ST3			0x0148
#define RK3368_WIN3_FADING_CTRL			0x014c
#define RK3368_HWC_CTRL0			0x0150
#define RK3368_HWC_CTRL1			0x0154
#define RK3368_HWC_MST				0x0158
#define RK3368_HWC_DSP_ST			0x015c
#define RK3368_HWC_SRC_ALPHA_CTRL		0x0160
#define RK3368_HWC_DST_ALPHA_CTRL		0x0164
#define RK3368_HWC_FADING_CTRL			0x0168
#define RK3368_HWC_RESERVED1			0x016c
#define RK3368_POST_DSP_HACT_INFO		0x0170
#define RK3368_POST_DSP_VACT_INFO		0x0174
#define RK3368_POST_SCL_FACTOR_YRGB		0x0178
#define RK3368_POST_RESERVED			0x017c
#define RK3368_POST_SCL_CTRL			0x0180
#define RK3368_POST_DSP_VACT_INFO_F1		0x0184
#define RK3368_DSP_HTOTAL_HS_END		0x0188
#define RK3368_DSP_HACT_ST_END			0x018c
#define RK3368_DSP_VTOTAL_VS_END		0x0190
#define RK3368_DSP_VACT_ST_END			0x0194
#define RK3368_DSP_VS_ST_END_F1			0x0198
#define RK3368_DSP_VACT_ST_END_F1		0x019c
#define RK3368_PWM_CTRL				0x01a0
#define RK3368_PWM_PERIOD_HPR			0x01a4
#define RK3368_PWM_DUTY_LPR			0x01a8
#define RK3368_PWM_CNT				0x01ac
#define RK3368_BCSH_COLOR_BAR			0x01b0
#define RK3368_BCSH_BCS				0x01b4
#define RK3368_BCSH_H				0x01b8
#define RK3368_BCSH_CTRL			0x01bc
#define RK3368_CABC_CTRL0			0x01c0
#define RK3368_CABC_CTRL1			0x01c4
#define RK3368_CABC_CTRL2			0x01c8
#define RK3368_CABC_CTRL3			0x01cc
#define RK3368_CABC_GAUSS_LINE0_0		0x01d0
#define RK3368_CABC_GAUSS_LINE0_1		0x01d4
#define RK3368_CABC_GAUSS_LINE1_0		0x01d8
#define RK3368_CABC_GAUSS_LINE1_1		0x01dc
#define RK3368_CABC_GAUSS_LINE2_0		0x01e0
#define RK3368_CABC_GAUSS_LINE2_1		0x01e4
#define RK3368_FRC_LOWER01_0			0x01e8
#define RK3368_FRC_LOWER01_1			0x01ec
#define RK3368_FRC_LOWER10_0			0x01f0
#define RK3368_FRC_LOWER10_1			0x01f4
#define RK3368_FRC_LOWER11_0			0x01f8
#define RK3368_FRC_LOWER11_1			0x01fc
#define RK3368_IFBDC_CTRL			0x0200
#define RK3368_IFBDC_TILES_NUM			0x0204
#define RK3368_IFBDC_FRAME_RST_CYCLE		0x0208
#define RK3368_IFBDC_BASE_ADDR			0x020c
#define RK3368_IFBDC_MB_SIZE			0x0210
#define RK3368_IFBDC_CMP_INDEX_INIT		0x0214
#define RK3368_IFBDC_VIR			0x0220
#define RK3368_IFBDC_DEBUG0			0x0230
#define RK3368_IFBDC_DEBUG1			0x0234
#define RK3368_LATENCY_CTRL0			0x0250
#define RK3368_RD_MAX_LATENCY_NUM0		0x0254
#define RK3368_RD_LATENCY_THR_NUM0		0x0258
#define RK3368_RD_LATENCY_SAMP_NUM0		0x025c
#define RK3368_WIN0_DSP_BG			0x0260
#define RK3368_WIN1_DSP_BG			0x0264
#define RK3368_WIN2_DSP_BG			0x0268
#define RK3368_WIN3_DSP_BG			0x026c
#define RK3368_SCAN_LINE_NUM			0x0270
#define RK3368_CABC_DEBUG0			0x0274
#define RK3368_CABC_DEBUG1			0x0278
#define RK3368_CABC_DEBUG2			0x027c
#define RK3368_DBG_REG_000			0x0280
#define RK3368_DBG_REG_001			0x0284
#define RK3368_DBG_REG_002			0x0288
#define RK3368_DBG_REG_003			0x028c
#define RK3368_DBG_REG_004			0x0290
#define RK3368_DBG_REG_005			0x0294
#define RK3368_DBG_REG_006			0x0298
#define RK3368_DBG_REG_007			0x029c
#define RK3368_DBG_REG_008			0x02a0
#define RK3368_DBG_REG_016			0x02c0
#define RK3368_DBG_REG_017			0x02c4
#define RK3368_DBG_REG_018			0x02c8
#define RK3368_DBG_REG_019			0x02cc
#define RK3368_DBG_REG_020			0x02d0
#define RK3368_DBG_REG_021			0x02d4
#define RK3368_DBG_REG_022			0x02d8
#define RK3368_DBG_REG_023			0x02dc
#define RK3368_DBG_REG_028			0x02f0
#define RK3368_MMU_DTE_ADDR			0x0300
#define RK3368_MMU_STATUS			0x0304
#define RK3368_MMU_COMMAND			0x0308
#define RK3368_MMU_PAGE_FAULT_ADDR		0x030c
#define RK3368_MMU_ZAP_ONE_LINE			0x0310
#define RK3368_MMU_INT_RAWSTAT			0x0314
#define RK3368_MMU_INT_CLEAR			0x0318
#define RK3368_MMU_INT_MASK			0x031c
#define RK3368_MMU_INT_STATUS			0x0320
#define RK3368_MMU_AUTO_GATING			0x0324
#define RK3368_WIN2_LUT_ADDR			0x0400
#define RK3368_WIN3_LUT_ADDR			0x0800
#define RK3368_HWC_LUT_ADDR			0x0c00
#define RK3368_GAMMA_LUT_ADDR			0x1000
#define RK3368_CABC_GAMMA_LUT_ADDR		0x1800
#define RK3368_MCU_BYPASS_WPORT			0x2200
#define RK3368_MCU_BYPASS_RPORT			0x2300
#define RK3368_GRF_SOC_CON6			0x0418
/* rk3368 register definition end */

#define RK3366_REG_CFG_DONE			0x0000
#define RK3366_VERSION_INFO			0x0004
#define RK3366_SYS_CTRL				0x0008
#define RK3366_SYS_CTRL1			0x000c
#define RK3366_DSP_CTRL0			0x0010
#define RK3366_DSP_CTRL1			0x0014
#define RK3366_DSP_BG				0x0018
#define RK3366_MCU_CTRL				0x001c
#define RK3366_WB_CTRL0				0x0020
#define RK3366_WB_CTRL1				0x0024
#define RK3366_WB_YRGB_MST			0x0028
#define RK3366_WB_CBR_MST			0x002c
#define RK3366_WIN0_CTRL0			0x0030
#define RK3366_WIN0_CTRL1			0x0034
#define RK3366_WIN0_COLOR_KEY			0x0038
#define RK3366_WIN0_VIR				0x003c
#define RK3366_WIN0_YRGB_MST			0x0040
#define RK3366_WIN0_CBR_MST			0x0044
#define RK3366_WIN0_ACT_INFO			0x0048
#define RK3366_WIN0_DSP_INFO			0x004c
#define RK3366_WIN0_DSP_ST			0x0050
#define RK3366_WIN0_SCL_FACTOR_YRGB		0x0054
#define RK3366_WIN0_SCL_FACTOR_CBR		0x0058
#define RK3366_WIN0_SCL_OFFSET			0x005c
#define RK3366_WIN0_SRC_ALPHA_CTRL		0x0060
#define RK3366_WIN0_DST_ALPHA_CTRL		0x0064
#define RK3366_WIN0_FADING_CTRL			0x0068
#define RK3366_WIN0_CTRL2			0x006c
#define RK3366_WIN1_CTRL0			0x0070
#define RK3366_WIN1_CTRL1			0x0074
#define RK3366_WIN1_COLOR_KEY			0x0078
#define RK3366_WIN1_VIR				0x007c
#define RK3366_WIN1_YRGB_MST			0x0080
#define RK3366_WIN1_CBR_MST			0x0084
#define RK3366_WIN1_ACT_INFO			0x0088
#define RK3366_WIN1_DSP_INFO			0x008c
#define RK3366_WIN1_DSP_ST			0x0090
#define RK3366_WIN1_SCL_FACTOR_YRGB		0x0094
#define RK3366_WIN1_SCL_FACTOR_CBR		0x0098
#define RK3366_WIN1_SCL_OFFSET			0x009c
#define RK3366_WIN1_SRC_ALPHA_CTRL		0x00a0
#define RK3366_WIN1_DST_ALPHA_CTRL		0x00a4
#define RK3366_WIN1_FADING_CTRL			0x00a8
#define RK3366_WIN1_CTRL2			0x00ac
#define RK3366_WIN2_CTRL0			0x00b0
#define RK3366_WIN2_CTRL1			0x00b4
#define RK3366_WIN2_VIR0_1			0x00b8
#define RK3366_WIN2_VIR2_3			0x00bc
#define RK3366_WIN2_MST0			0x00c0
#define RK3366_WIN2_DSP_INFO0			0x00c4
#define RK3366_WIN2_DSP_ST0			0x00c8
#define RK3366_WIN2_COLOR_KEY			0x00cc
#define RK3366_WIN2_MST1			0x00d0
#define RK3366_WIN2_DSP_INFO1			0x00d4
#define RK3366_WIN2_DSP_ST1			0x00d8
#define RK3366_WIN2_SRC_ALPHA_CTRL		0x00dc
#define RK3366_WIN2_MST2			0x00e0
#define RK3366_WIN2_DSP_INFO2			0x00e4
#define RK3366_WIN2_DSP_ST2			0x00e8
#define RK3366_WIN2_DST_ALPHA_CTRL		0x00ec
#define RK3366_WIN2_MST3			0x00f0
#define RK3366_WIN2_DSP_INFO3			0x00f4
#define RK3366_WIN2_DSP_ST3			0x00f8
#define RK3366_WIN2_FADING_CTRL			0x00fc
#define RK3366_WIN3_CTRL0			0x0100
#define RK3366_WIN3_CTRL1			0x0104
#define RK3366_WIN3_VIR0_1			0x0108
#define RK3366_WIN3_VIR2_3			0x010c
#define RK3366_WIN3_MST0			0x0110
#define RK3366_WIN3_DSP_INFO0			0x0114
#define RK3366_WIN3_DSP_ST0			0x0118
#define RK3366_WIN3_COLOR_KEY			0x011c
#define RK3366_WIN3_MST1			0x0120
#define RK3366_WIN3_DSP_INFO1			0x0124
#define RK3366_WIN3_DSP_ST1			0x0128
#define RK3366_WIN3_SRC_ALPHA_CTRL		0x012c
#define RK3366_WIN3_MST2			0x0130
#define RK3366_WIN3_DSP_INFO2			0x0134
#define RK3366_WIN3_DSP_ST2			0x0138
#define RK3366_WIN3_DST_ALPHA_CTRL		0x013c
#define RK3366_WIN3_MST3			0x0140
#define RK3366_WIN3_DSP_INFO3			0x0144
#define RK3366_WIN3_DSP_ST3			0x0148
#define RK3366_WIN3_FADING_CTRL			0x014c
#define RK3366_HWC_CTRL0			0x0150
#define RK3366_HWC_CTRL1			0x0154
#define RK3366_HWC_MST				0x0158
#define RK3366_HWC_DSP_ST			0x015c
#define RK3366_HWC_SRC_ALPHA_CTRL		0x0160
#define RK3366_HWC_DST_ALPHA_CTRL		0x0164
#define RK3366_HWC_FADING_CTRL			0x0168
#define RK3366_HWC_RESERVED1			0x016c
#define RK3366_POST_DSP_HACT_INFO		0x0170
#define RK3366_POST_DSP_VACT_INFO		0x0174
#define RK3366_POST_SCL_FACTOR_YRGB		0x0178
#define RK3366_POST_RESERVED			0x017c
#define RK3366_POST_SCL_CTRL			0x0180
#define RK3366_POST_DSP_VACT_INFO_F1		0x0184
#define RK3366_DSP_HTOTAL_HS_END		0x0188
#define RK3366_DSP_HACT_ST_END			0x018c
#define RK3366_DSP_VTOTAL_VS_END		0x0190
#define RK3366_DSP_VACT_ST_END			0x0194
#define RK3366_DSP_VS_ST_END_F1			0x0198
#define RK3366_DSP_VACT_ST_END_F1		0x019c
#define RK3366_PWM_CTRL				0x01a0
#define RK3366_PWM_PERIOD_HPR			0x01a4
#define RK3366_PWM_DUTY_LPR			0x01a8
#define RK3366_PWM_CNT				0x01ac
#define RK3366_BCSH_COLOR_BAR			0x01b0
#define RK3366_BCSH_BCS				0x01b4
#define RK3366_BCSH_H				0x01b8
#define RK3366_BCSH_CTRL			0x01bc
#define RK3366_CABC_CTRL0			0x01c0
#define RK3366_CABC_CTRL1			0x01c4
#define RK3366_CABC_CTRL2			0x01c8
#define RK3366_CABC_CTRL3			0x01cc
#define RK3366_CABC_GAUSS_LINE0_0		0x01d0
#define RK3366_CABC_GAUSS_LINE0_1		0x01d4
#define RK3366_CABC_GAUSS_LINE1_0		0x01d8
#define RK3366_CABC_GAUSS_LINE1_1		0x01dc
#define RK3366_CABC_GAUSS_LINE2_0		0x01e0
#define RK3366_CABC_GAUSS_LINE2_1		0x01e4
#define RK3366_FRC_LOWER01_0			0x01e8
#define RK3366_FRC_LOWER01_1			0x01ec
#define RK3366_FRC_LOWER10_0			0x01f0
#define RK3366_FRC_LOWER10_1			0x01f4
#define RK3366_FRC_LOWER11_0			0x01f8
#define RK3366_FRC_LOWER11_1			0x01fc
#define RK3366_INTR_EN0				0x0280
#define RK3366_INTR_CLEAR0			0x0284
#define RK3366_INTR_STATUS0			0x0288
#define RK3366_INTR_RAW_STATUS0			0x028c
#define RK3366_INTR_EN1				0x0290
#define RK3366_INTR_CLEAR1			0x0294
#define RK3366_INTR_STATUS1			0x0298
#define RK3366_INTR_RAW_STATUS1			0x029c
#define RK3366_LINE_FLAG			0x02a0
#define RK3366_VOP_STATUS			0x02a4
#define RK3366_BLANKING_VALUE			0x02a8
#define RK3366_WIN0_DSP_BG			0x02b0
#define RK3366_WIN1_DSP_BG			0x02b4
#define RK3366_WIN2_DSP_BG			0x02b8
#define RK3366_WIN3_DSP_BG			0x02bc
#define RK3366_WIN2_LUT_ADDR			0x0400
#define RK3366_WIN3_LUT_ADDR			0x0800
#define RK3366_HWC_LUT_ADDR			0x0c00
#define RK3366_GAMMA0_LUT_ADDR			0x1000
#define RK3366_GAMMA1_LUT_ADDR			0x1400
#define RK3366_CABC_GAMMA_LUT_ADDR		0x1800
#define RK3366_MCU_BYPASS_WPORT			0x2200
#define RK3366_MCU_BYPASS_RPORT			0x2300
#define RK3366_MMU_DTE_ADDR			0x2400
#define RK3366_MMU_STATUS			0x2404
#define RK3366_MMU_COMMAND			0x2408
#define RK3366_MMU_PAGE_FAULT_ADDR		0x240c
#define RK3366_MMU_ZAP_ONE_LINE 		0x2410
#define RK3366_MMU_INT_RAWSTAT			0x2414
#define RK3366_MMU_INT_CLEAR			0x2418
#define RK3366_MMU_INT_MASK			0x241c
#define RK3366_MMU_INT_STATUS			0x2420
#define RK3366_MMU_AUTO_GATING			0x2424

/* rk3399 register definition */
#define RK3399_REG_CFG_DONE			0x0000
#define RK3399_VERSION_INFO			0x0004
#define RK3399_SYS_CTRL				0x0008
#define RK3399_SYS_CTRL1			0x000c
#define RK3399_DSP_CTRL0			0x0010
#define RK3399_DSP_CTRL1			0x0014
#define RK3399_DSP_BG				0x0018
#define RK3399_MCU_CTRL				0x001c
#define RK3399_WB_CTRL0				0x0020
#define RK3399_WB_CTRL1				0x0024
#define RK3399_WB_YRGB_MST			0x0028
#define RK3399_WB_CBR_MST			0x002c
#define RK3399_WIN0_CTRL0			0x0030
#define RK3399_WIN0_CTRL1			0x0034
#define RK3399_WIN0_COLOR_KEY			0x0038
#define RK3399_WIN0_VIR				0x003c
#define RK3399_WIN0_YRGB_MST			0x0040
#define RK3399_WIN0_CBR_MST			0x0044
#define RK3399_WIN0_ACT_INFO			0x0048
#define RK3399_WIN0_DSP_INFO			0x004c
#define RK3399_WIN0_DSP_ST			0x0050
#define RK3399_WIN0_SCL_FACTOR_YRGB		0x0054
#define RK3399_WIN0_SCL_FACTOR_CBR		0x0058
#define RK3399_WIN0_SCL_OFFSET			0x005c
#define RK3399_WIN0_SRC_ALPHA_CTRL		0x0060
#define RK3399_WIN0_DST_ALPHA_CTRL		0x0064
#define RK3399_WIN0_FADING_CTRL			0x0068
#define RK3399_WIN0_CTRL2			0x006c
#define RK3399_WIN1_CTRL0			0x0070
#define RK3399_WIN1_CTRL1			0x0074
#define RK3399_WIN1_COLOR_KEY			0x0078
#define RK3399_WIN1_VIR				0x007c
#define RK3399_WIN1_YRGB_MST			0x0080
#define RK3399_WIN1_CBR_MST			0x0084
#define RK3399_WIN1_ACT_INFO			0x0088
#define RK3399_WIN1_DSP_INFO			0x008c
#define RK3399_WIN1_DSP_ST			0x0090
#define RK3399_WIN1_SCL_FACTOR_YRGB		0x0094
#define RK3399_WIN1_SCL_FACTOR_CBR		0x0098
#define RK3399_WIN1_SCL_OFFSET			0x009c
#define RK3399_WIN1_SRC_ALPHA_CTRL		0x00a0
#define RK3399_WIN1_DST_ALPHA_CTRL		0x00a4
#define RK3399_WIN1_FADING_CTRL			0x00a8
#define RK3399_WIN1_CTRL2			0x00ac
#define RK3399_WIN2_CTRL0			0x00b0
#define RK3399_WIN2_CTRL1			0x00b4
#define RK3399_WIN2_VIR0_1			0x00b8
#define RK3399_WIN2_VIR2_3			0x00bc
#define RK3399_WIN2_MST0			0x00c0
#define RK3399_WIN2_DSP_INFO0			0x00c4
#define RK3399_WIN2_DSP_ST0			0x00c8
#define RK3399_WIN2_COLOR_KEY			0x00cc
#define RK3399_WIN2_MST1			0x00d0
#define RK3399_WIN2_DSP_INFO1			0x00d4
#define RK3399_WIN2_DSP_ST1			0x00d8
#define RK3399_WIN2_SRC_ALPHA_CTRL		0x00dc
#define RK3399_WIN2_MST2			0x00e0
#define RK3399_WIN2_DSP_INFO2			0x00e4
#define RK3399_WIN2_DSP_ST2			0x00e8
#define RK3399_WIN2_DST_ALPHA_CTRL		0x00ec
#define RK3399_WIN2_MST3			0x00f0
#define RK3399_WIN2_DSP_INFO3			0x00f4
#define RK3399_WIN2_DSP_ST3			0x00f8
#define RK3399_WIN2_FADING_CTRL			0x00fc
#define RK3399_WIN3_CTRL0			0x0100
#define RK3399_WIN3_CTRL1			0x0104
#define RK3399_WIN3_VIR0_1			0x0108
#define RK3399_WIN3_VIR2_3			0x010c
#define RK3399_WIN3_MST0			0x0110
#define RK3399_WIN3_DSP_INFO0			0x0114
#define RK3399_WIN3_DSP_ST0			0x0118
#define RK3399_WIN3_COLOR_KEY			0x011c
#define RK3399_WIN3_MST1			0x0120
#define RK3399_WIN3_DSP_INFO1			0x0124
#define RK3399_WIN3_DSP_ST1			0x0128
#define RK3399_WIN3_SRC_ALPHA_CTRL		0x012c
#define RK3399_WIN3_MST2			0x0130
#define RK3399_WIN3_DSP_INFO2			0x0134
#define RK3399_WIN3_DSP_ST2			0x0138
#define RK3399_WIN3_DST_ALPHA_CTRL		0x013c
#define RK3399_WIN3_MST3			0x0140
#define RK3399_WIN3_DSP_INFO3			0x0144
#define RK3399_WIN3_DSP_ST3			0x0148
#define RK3399_WIN3_FADING_CTRL			0x014c
#define RK3399_HWC_CTRL0			0x0150
#define RK3399_HWC_CTRL1			0x0154
#define RK3399_HWC_MST				0x0158
#define RK3399_HWC_DSP_ST			0x015c
#define RK3399_HWC_SRC_ALPHA_CTRL		0x0160
#define RK3399_HWC_DST_ALPHA_CTRL		0x0164
#define RK3399_HWC_FADING_CTRL			0x0168
#define RK3399_HWC_RESERVED1			0x016c
#define RK3399_POST_DSP_HACT_INFO		0x0170
#define RK3399_POST_DSP_VACT_INFO		0x0174
#define RK3399_POST_SCL_FACTOR_YRGB		0x0178
#define RK3399_POST_RESERVED			0x017c
#define RK3399_POST_SCL_CTRL			0x0180
#define RK3399_POST_DSP_VACT_INFO_F1		0x0184
#define RK3399_DSP_HTOTAL_HS_END		0x0188
#define RK3399_DSP_HACT_ST_END			0x018c
#define RK3399_DSP_VTOTAL_VS_END		0x0190
#define RK3399_DSP_VACT_ST_END			0x0194
#define RK3399_DSP_VS_ST_END_F1			0x0198
#define RK3399_DSP_VACT_ST_END_F1		0x019c
#define RK3399_PWM_CTRL				0x01a0
#define RK3399_PWM_PERIOD_HPR			0x01a4
#define RK3399_PWM_DUTY_LPR			0x01a8
#define RK3399_PWM_CNT				0x01ac
#define RK3399_BCSH_COLOR_BAR			0x01b0
#define RK3399_BCSH_BCS				0x01b4
#define RK3399_BCSH_H				0x01b8
#define RK3399_BCSH_CTRL			0x01bc
#define RK3399_CABC_CTRL0			0x01c0
#define RK3399_CABC_CTRL1			0x01c4
#define RK3399_CABC_CTRL2			0x01c8
#define RK3399_CABC_CTRL3			0x01cc
#define RK3399_CABC_GAUSS_LINE0_0		0x01d0
#define RK3399_CABC_GAUSS_LINE0_1		0x01d4
#define RK3399_CABC_GAUSS_LINE1_0		0x01d8
#define RK3399_CABC_GAUSS_LINE1_1		0x01dc
#define RK3399_CABC_GAUSS_LINE2_0		0x01e0
#define RK3399_CABC_GAUSS_LINE2_1		0x01e4
#define RK3399_FRC_LOWER01_0			0x01e8
#define RK3399_FRC_LOWER01_1			0x01ec
#define RK3399_FRC_LOWER10_0			0x01f0
#define RK3399_FRC_LOWER10_1			0x01f4
#define RK3399_FRC_LOWER11_0			0x01f8
#define RK3399_FRC_LOWER11_1			0x01fc
#define RK3399_AFBCD0_CTRL			0x0200
#define RK3399_AFBCD0_HDR_PTR			0x0204
#define RK3399_AFBCD0_PIC_SIZE			0x0208
#define RK3399_AFBCD0_STATUS			0x020c
#define RK3399_AFBCD1_CTRL			0x0220
#define RK3399_AFBCD1_HDR_PTR			0x0224
#define RK3399_AFBCD1_PIC_SIZE			0x0228
#define RK3399_AFBCD1_STATUS			0x022c
#define RK3399_AFBCD2_CTRL			0x0240
#define RK3399_AFBCD2_HDR_PTR			0x0244
#define RK3399_AFBCD2_PIC_SIZE			0x0248
#define RK3399_AFBCD2_STATUS			0x024c
#define RK3399_AFBCD3_CTRL			0x0260
#define RK3399_AFBCD3_HDR_PTR			0x0264
#define RK3399_AFBCD3_PIC_SIZE			0x0268
#define RK3399_AFBCD3_STATUS			0x026c
#define RK3399_INTR_EN0				0x0280
#define RK3399_INTR_CLEAR0			0x0284
#define RK3399_INTR_STATUS0			0x0288
#define RK3399_INTR_RAW_STATUS0			0x028c
#define RK3399_INTR_EN1				0x0290
#define RK3399_INTR_CLEAR1			0x0294
#define RK3399_INTR_STATUS1			0x0298
#define RK3399_INTR_RAW_STATUS1			0x029c
#define RK3399_LINE_FLAG			0x02a0
#define RK3399_VOP_STATUS			0x02a4
#define RK3399_BLANKING_VALUE			0x02a8
#define RK3399_MCU_BYPASS_PORT			0x02ac
#define RK3399_WIN0_DSP_BG			0x02b0
#define RK3399_WIN1_DSP_BG			0x02b4
#define RK3399_WIN2_DSP_BG			0x02b8
#define RK3399_WIN3_DSP_BG			0x02bc
#define RK3399_YUV2YUV_WIN			0x02c0
#define RK3399_YUV2YUV_POST			0x02c4
#define RK3399_AUTO_GATING_EN			0x02cc
#define RK3399_WIN0_CSC_COE			0x03a0
#define RK3399_WIN1_CSC_COE			0x03c0
#define RK3399_WIN2_CSC_COE			0x03e0
#define RK3399_WIN3_CSC_COE			0x0400
#define RK3399_HWC_CSC_COE			0x0420
#define RK3399_BCSH_R2Y_CSC_COE			0x0440
#define RK3399_BCSH_Y2R_CSC_COE			0x0460
#define RK3399_POST_YUV2YUV_Y2R_COE		0x0480
#define RK3399_POST_YUV2YUV_3X3_COE		0x04a0
#define RK3399_POST_YUV2YUV_R2Y_COE		0x04c0
#define RK3399_WIN0_YUV2YUV_Y2R			0x04e0
#define RK3399_WIN0_YUV2YUV_3X3			0x0500
#define RK3399_WIN0_YUV2YUV_R2Y			0x0520
#define RK3399_WIN1_YUV2YUV_Y2R			0x0540
#define RK3399_WIN1_YUV2YUV_3X3			0x0560
#define RK3399_WIN1_YUV2YUV_R2Y			0x0580
#define RK3399_WIN2_YUV2YUV_Y2R			0x05a0
#define RK3399_WIN2_YUV2YUV_3X3			0x05c0
#define RK3399_WIN2_YUV2YUV_R2Y			0x05e0
#define RK3399_WIN3_YUV2YUV_Y2R			0x0600
#define RK3399_WIN3_YUV2YUV_3X3			0x0620
#define RK3399_WIN3_YUV2YUV_R2Y			0x0640
#define RK3399_WIN2_LUT_ADDR			0x1000
#define RK3399_WIN3_LUT_ADDR			0x1400
#define RK3399_HWC_LUT_ADDR			0x1800
#define RK3399_CABC_GAMMA_LUT_ADDR		0x1c00
#define RK3399_GAMMA_LUT_ADDR			0x2000
/* rk3399 register definition end */

/* rk3328 register definition end */
#define RK3328_REG_CFG_DONE			0x00000000
#define RK3328_VERSION_INFO			0x00000004
#define RK3328_SYS_CTRL				0x00000008
#define RK3328_SYS_CTRL1			0x0000000c
#define RK3328_DSP_CTRL0			0x00000010
#define RK3328_DSP_CTRL1			0x00000014
#define RK3328_DSP_BG				0x00000018
#define RK3328_AUTO_GATING_EN			0x0000003c
#define RK3328_LINE_FLAG			0x00000040
#define RK3328_VOP_STATUS			0x00000044
#define RK3328_BLANKING_VALUE			0x00000048
#define RK3328_WIN0_DSP_BG			0x00000050
#define RK3328_WIN1_DSP_BG			0x00000054
#define RK3328_DBG_PERF_LATENCY_CTRL0		0x000000c0
#define RK3328_DBG_PERF_RD_MAX_LATENCY_NUM0	0x000000c4
#define RK3328_DBG_PERF_RD_LATENCY_THR_NUM0	0x000000c8
#define RK3328_DBG_PERF_RD_LATENCY_SAMP_NUM0	0x000000cc
#define RK3328_INTR_EN0				0x000000e0
#define RK3328_INTR_CLEAR0			0x000000e4
#define RK3328_INTR_STATUS0			0x000000e8
#define RK3328_INTR_RAW_STATUS0			0x000000ec
#define RK3328_INTR_EN1				0x000000f0
#define RK3328_INTR_CLEAR1			0x000000f4
#define RK3328_INTR_STATUS1			0x000000f8
#define RK3328_INTR_RAW_STATUS1			0x000000fc
#define RK3328_WIN0_CTRL0			0x00000100
#define RK3328_WIN0_CTRL1			0x00000104
#define RK3328_WIN0_COLOR_KEY			0x00000108
#define RK3328_WIN0_VIR				0x0000010c
#define RK3328_WIN0_YRGB_MST			0x00000110
#define RK3328_WIN0_CBR_MST			0x00000114
#define RK3328_WIN0_ACT_INFO			0x00000118
#define RK3328_WIN0_DSP_INFO			0x0000011c
#define RK3328_WIN0_DSP_ST			0x00000120
#define RK3328_WIN0_SCL_FACTOR_YRGB		0x00000124
#define RK3328_WIN0_SCL_FACTOR_CBR		0x00000128
#define RK3328_WIN0_SCL_OFFSET			0x0000012c
#define RK3328_WIN0_SRC_ALPHA_CTRL		0x00000130
#define RK3328_WIN0_DST_ALPHA_CTRL		0x00000134
#define RK3328_WIN0_FADING_CTRL			0x00000138
#define RK3328_WIN0_CTRL2			0x0000013c
#define RK3328_DBG_WIN0_REG0			0x000001f0
#define RK3328_DBG_WIN0_REG1			0x000001f4
#define RK3328_DBG_WIN0_REG2			0x000001f8
#define RK3328_DBG_WIN0_RESERVED		0x000001fc
#define RK3328_WIN1_CTRL0			0x00000200
#define RK3328_WIN1_CTRL1			0x00000204
#define RK3328_WIN1_COLOR_KEY			0x00000208
#define RK3328_WIN1_VIR				0x0000020c
#define RK3328_WIN1_YRGB_MST			0x00000210
#define RK3328_WIN1_CBR_MST			0x00000214
#define RK3328_WIN1_ACT_INFO			0x00000218
#define RK3328_WIN1_DSP_INFO			0x0000021c
#define RK3328_WIN1_DSP_ST			0x00000220
#define RK3328_WIN1_SCL_FACTOR_YRGB		0x00000224
#define RK3328_WIN1_SCL_FACTOR_CBR		0x00000228
#define RK3328_WIN1_SCL_OFFSET			0x0000022c
#define RK3328_WIN1_SRC_ALPHA_CTRL		0x00000230
#define RK3328_WIN1_DST_ALPHA_CTRL		0x00000234
#define RK3328_WIN1_FADING_CTRL			0x00000238
#define RK3328_WIN1_CTRL2			0x0000023c
#define RK3328_DBG_WIN1_REG0			0x000002f0
#define RK3328_DBG_WIN1_REG1			0x000002f4
#define RK3328_DBG_WIN1_REG2			0x000002f8
#define RK3328_DBG_WIN1_RESERVED		0x000002fc
#define RK3328_WIN2_CTRL0			0x00000300
#define RK3328_WIN2_CTRL1			0x00000304
#define RK3328_WIN2_COLOR_KEY			0x00000308
#define RK3328_WIN2_VIR				0x0000030c
#define RK3328_WIN2_YRGB_MST			0x00000310
#define RK3328_WIN2_CBR_MST			0x00000314
#define RK3328_WIN2_ACT_INFO			0x00000318
#define RK3328_WIN2_DSP_INFO			0x0000031c
#define RK3328_WIN2_DSP_ST			0x00000320
#define RK3328_WIN2_SCL_FACTOR_YRGB		0x00000324
#define RK3328_WIN2_SCL_FACTOR_CBR		0x00000328
#define RK3328_WIN2_SCL_OFFSET			0x0000032c
#define RK3328_WIN2_SRC_ALPHA_CTRL		0x00000330
#define RK3328_WIN2_DST_ALPHA_CTRL		0x00000334
#define RK3328_WIN2_FADING_CTRL			0x00000338
#define RK3328_WIN2_CTRL2			0x0000033c
#define RK3328_DBG_WIN2_REG0			0x000003f0
#define RK3328_DBG_WIN2_REG1			0x000003f4
#define RK3328_DBG_WIN2_REG2			0x000003f8
#define RK3328_DBG_WIN2_RESERVED		0x000003fc
#define RK3328_WIN3_CTRL0			0x00000400
#define RK3328_WIN3_CTRL1			0x00000404
#define RK3328_WIN3_COLOR_KEY			0x00000408
#define RK3328_WIN3_VIR				0x0000040c
#define RK3328_WIN3_YRGB_MST			0x00000410
#define RK3328_WIN3_CBR_MST			0x00000414
#define RK3328_WIN3_ACT_INFO			0x00000418
#define RK3328_WIN3_DSP_INFO			0x0000041c
#define RK3328_WIN3_DSP_ST			0x00000420
#define RK3328_WIN3_SCL_FACTOR_YRGB		0x00000424
#define RK3328_WIN3_SCL_FACTOR_CBR		0x00000428
#define RK3328_WIN3_SCL_OFFSET			0x0000042c
#define RK3328_WIN3_SRC_ALPHA_CTRL		0x00000430
#define RK3328_WIN3_DST_ALPHA_CTRL		0x00000434
#define RK3328_WIN3_FADING_CTRL			0x00000438
#define RK3328_WIN3_CTRL2			0x0000043c
#define RK3328_DBG_WIN3_REG0			0x000004f0
#define RK3328_DBG_WIN3_REG1			0x000004f4
#define RK3328_DBG_WIN3_REG2			0x000004f8
#define RK3328_DBG_WIN3_RESERVED		0x000004fc

#define RK3328_HWC_CTRL0			0x00000500
#define RK3328_HWC_CTRL1			0x00000504
#define RK3328_HWC_MST				0x00000508
#define RK3328_HWC_DSP_ST			0x0000050c
#define RK3328_HWC_SRC_ALPHA_CTRL		0x00000510
#define RK3328_HWC_DST_ALPHA_CTRL		0x00000514
#define RK3328_HWC_FADING_CTRL			0x00000518
#define RK3328_HWC_RESERVED1			0x0000051c
#define RK3328_POST_DSP_HACT_INFO		0x00000600
#define RK3328_POST_DSP_VACT_INFO		0x00000604
#define RK3328_POST_SCL_FACTOR_YRGB		0x00000608
#define RK3328_POST_RESERVED			0x0000060c
#define RK3328_POST_SCL_CTRL			0x00000610
#define RK3328_POST_DSP_VACT_INFO_F1		0x00000614
#define RK3328_DSP_HTOTAL_HS_END		0x00000618
#define RK3328_DSP_HACT_ST_END			0x0000061c
#define RK3328_DSP_VTOTAL_VS_END		0x00000620
#define RK3328_DSP_VACT_ST_END			0x00000624
#define RK3328_DSP_VS_ST_END_F1			0x00000628
#define RK3328_DSP_VACT_ST_END_F1		0x0000062c
#define RK3328_BCSH_COLOR_BAR			0x00000640
#define RK3328_BCSH_BCS				0x00000644
#define RK3328_BCSH_H				0x00000648
#define RK3328_BCSH_CTRL			0x0000064c
#define RK3328_FRC_LOWER01_0			0x00000678
#define RK3328_FRC_LOWER01_1			0x0000067c
#define RK3328_FRC_LOWER10_0			0x00000680
#define RK3328_FRC_LOWER10_1			0x00000684
#define RK3328_FRC_LOWER11_0			0x00000688
#define RK3328_FRC_LOWER11_1			0x0000068c
#define RK3328_DBG_POST_REG0			0x000006e8
#define RK3328_DBG_POST_RESERVED		0x000006ec
#define RK3328_DBG_DATAO			0x000006f0
#define RK3328_DBG_DATAO_2			0x000006f4

/* sdr to hdr */
#define RK3328_SDR2HDR_CTRL			0x00000700
#define RK3328_EOTF_OETF_Y0			0x00000704
#define RK3328_RESERVED0001			0x00000708
#define RK3328_RESERVED0002			0x0000070c
#define RK3328_EOTF_OETF_Y1			0x00000710
#define RK3328_EOTF_OETF_Y64			0x0000080c
#define RK3328_OETF_DX_DXPOW1			0x00000810
#define RK3328_OETF_DX_DXPOW64			0x0000090c
#define RK3328_OETF_XN1				0x00000910
#define RK3328_OETF_XN63			0x00000a08

/* hdr to sdr */
#define RK3328_HDR2SDR_CTRL			0x00000a10
#define RK3328_HDR2SDR_SRC_RANGE		0x00000a14
#define RK3328_HDR2SDR_NORMFACEETF		0x00000a18
#define RK3328_RESERVED0003			0x00000a1c
#define RK3328_HDR2SDR_DST_RANGE		0x00000a20
#define RK3328_HDR2SDR_NORMFACCGAMMA		0x00000a24
#define RK3328_EETF_OETF_Y0			0x00000a28
#define RK3328_SAT_Y0				0x00000a2c
#define RK3328_EETF_OETF_Y1			0x00000a30
#define RK3328_SAT_Y1				0x00000ab0
#define RK3328_SAT_Y8				0x00000acc

#define RK3328_HWC_LUT_ADDR			0x00000c00

/* rk3036 register definition */
#define RK3036_SYS_CTRL			0x00
#define RK3036_DSP_CTRL0		0x04
#define RK3036_DSP_CTRL1		0x08
#define RK3036_INT_SCALER		0x0c
#define RK3036_INT_STATUS		0x10
#define RK3036_ALPHA_CTRL		0x14
#define RK3036_WIN0_COLOR_KEY		0x18
#define RK3036_WIN1_COLOR_KEY		0x1c
#define RK3036_WIN0_YRGB_MST		0x20
#define RK3036_WIN0_CBR_MST		0x24
#define RK3036_WIN1_VIR			0x28
#define RK3036_AXI_BUS_CTRL		0x2c
#define RK3036_WIN0_VIR			0x30
#define RK3036_WIN0_ACT_INFO		0x34
#define RK3036_WIN0_DSP_INFO		0x38
#define RK3036_WIN0_DSP_ST		0x3c
#define RK3036_WIN0_SCL_FACTOR_YRGB	0x40
#define RK3036_WIN0_SCL_FACTOR_CBR	0x44
#define RK3036_WIN0_SCL_OFFSET		0x48
#define RK3036_HWC_MST			0x58
#define RK3036_HWC_DSP_ST		0x5c
#define RK3036_DSP_HTOTAL_HS_END	0x6c
#define RK3036_DSP_HACT_ST_END		0x70
#define RK3036_DSP_VTOTAL_VS_END	0x74
#define RK3036_DSP_VACT_ST_END		0x78
#define RK3036_DSP_VS_ST_END_F1		0x7c
#define RK3036_DSP_VACT_ST_END_F1	0x80
#define RK3036_GATHER_TRANSFER		0x84
#define RK3036_VERSION_INFO		0x94
#define RK3036_REG_CFG_DONE		0x90
#define RK3036_WIN1_MST			0xa0
#define RK3036_WIN1_ACT_INFO		0xb4
#define RK3036_WIN1_DSP_INFO		0xb8
#define RK3036_WIN1_DSP_ST		0xbc
#define RK3036_WIN1_SCL_FACTOR_YRGB	0xc0
#define RK3036_WIN1_SCL_OFFSET		0xc8
#define RK3036_BCSH_CTRL		0xd0
#define RK3036_BCSH_COLOR_BAR		0xd4
#define RK3036_BCSH_BCS			0xd8
#define RK3036_BCSH_H			0xdc
#define RK3036_WIN1_LUT_ADDR		0x400
#define RK3036_HWC_LUT_ADDR		0x800
/* rk3036 register definition end */

/* rk3126 register definition */
#define RK3126_WIN1_MST				0x0004c
#define RK3126_WIN1_DSP_INFO			0x00050
#define RK3126_WIN1_DSP_ST			0x00054
/* rk3126 register definition end */

/* rk3366 register definition */
#define RK3366_LIT_REG_CFG_DONE			0x00000
#define RK3366_LIT_VERSION			0x00004
#define RK3366_LIT_DSP_BG			0x00008
#define RK3366_LIT_MCU_CTRL			0x0000c
#define RK3366_LIT_SYS_CTRL0			0x00010
#define RK3366_LIT_SYS_CTRL1			0x00014
#define RK3366_LIT_SYS_CTRL2			0x00018
#define RK3366_LIT_DSP_CTRL0			0x00020
#define RK3366_LIT_DSP_CTRL2			0x00028
#define RK3366_LIT_VOP_STATUS			0x0002c
#define RK3366_LIT_LINE_FLAG			0x00030
#define RK3366_LIT_INTR_EN			0x00034
#define RK3366_LIT_INTR_CLEAR			0x00038
#define RK3366_LIT_INTR_STATUS			0x0003c
#define RK3366_LIT_WIN0_CTRL0			0x00050
#define RK3366_LIT_WIN0_CTRL1			0x00054
#define RK3366_LIT_WIN0_COLOR_KEY		0x00058
#define RK3366_LIT_WIN0_VIR			0x0005c
#define RK3366_LIT_WIN0_YRGB_MST0		0x00060
#define RK3366_LIT_WIN0_CBR_MST0		0x00064
#define RK3366_LIT_WIN0_ACT_INFO		0x00068
#define RK3366_LIT_WIN0_DSP_INFO		0x0006c
#define RK3366_LIT_WIN0_DSP_ST			0x00070
#define RK3366_LIT_WIN0_SCL_FACTOR_YRGB		0x00074
#define RK3366_LIT_WIN0_SCL_FACTOR_CBR		0x00078
#define RK3366_LIT_WIN0_SCL_OFFSET		0x0007c
#define RK3366_LIT_WIN0_ALPHA_CTRL		0x00080
#define RK3366_LIT_WIN1_CTRL0			0x00090
#define RK3366_LIT_WIN1_CTRL1			0x00094
#define RK3366_LIT_WIN1_VIR			0x00098
#define RK3366_LIT_WIN1_MST			0x000a0
#define RK3366_LIT_WIN1_DSP_INFO		0x000a4
#define RK3366_LIT_WIN1_DSP_ST			0x000a8
#define RK3366_LIT_WIN1_COLOR_KEY		0x000ac
#define RK3366_LIT_WIN1_ALPHA_CTRL		0x000bc
#define RK3366_LIT_HWC_CTRL0			0x000e0
#define RK3366_LIT_HWC_CTRL1			0x000e4
#define RK3366_LIT_HWC_MST			0x000e8
#define RK3366_LIT_HWC_DSP_ST			0x000ec
#define RK3366_LIT_HWC_ALPHA_CTRL		0x000f0
#define RK3366_LIT_DSP_HTOTAL_HS_END		0x00100
#define RK3366_LIT_DSP_HACT_ST_END		0x00104
#define RK3366_LIT_DSP_VTOTAL_VS_END		0x00108
#define RK3366_LIT_DSP_VACT_ST_END		0x0010c
#define RK3366_LIT_DSP_VS_ST_END_F1		0x00110
#define RK3366_LIT_DSP_VACT_ST_END_F1		0x00114
#define RK3366_LIT_BCSH_CTRL			0x00160
#define RK3366_LIT_BCSH_COL_BAR			0x00164
#define RK3366_LIT_BCSH_BCS			0x00168
#define RK3366_LIT_BCSH_H			0x0016c
#define RK3366_LIT_FRC_LOWER01_0		0x00170
#define RK3366_LIT_FRC_LOWER01_1		0x00174
#define RK3366_LIT_FRC_LOWER10_0		0x00178
#define RK3366_LIT_FRC_LOWER10_1		0x0017c
#define RK3366_LIT_FRC_LOWER11_0		0x00180
#define RK3366_LIT_FRC_LOWER11_1		0x00184
#define RK3366_LIT_MCU_RW_BYPASS_PORT		0x0018c
#define RK3366_LIT_DBG_REG_000			0x00190
#define RK3366_LIT_BLANKING_VALUE		0x001f4
#define RK3366_LIT_FLAG_REG_FRM_VALID		0x001f8
#define RK3366_LIT_FLAG_REG			0x001fc
#define RK3366_LIT_HWC_LUT_ADDR			0x00600
#define RK3366_LIT_GAMMA_LUT_ADDR		0x00a00
/* rk3366 register definition end */

/* px30 register definition */
#define PX30_CABC_CTRL0				0x00200
#define PX30_CABC_CTRL1				0x00204
#define PX30_CABC_CTRL2				0x00208
#define PX30_CABC_CTRL3				0x0020c
#define PX30_CABC_GAUSS_LINE0_0			0x00210
#define PX30_CABC_GAUSS_LINE0_1			0x00214
#define PX30_CABC_GAUSS_LINE1_0			0x00218
#define PX30_CABC_GAUSS_LINE1_1			0x0021c
#define PX30_CABC_GAUSS_LINE2_0			0x00220
#define PX30_CABC_GAUSS_LINE2_1			0x00224
#define PX30_AFBCD0_CTRL			0x00240
#define PX30_AFBCD0_HDR_PTR			0x00244
#define PX30_AFBCD0_PIC_SIZE			0x00248
#define PX30_AFBCD0_PIC_OFFSET			0x0024c
#define PX30_AFBCD0_AXI_CTRL			0x00250
#define PX30_GRF_PD_VO_CON1			0x00438
/* px30 register definition end */

/* rk1808 register definition start*/
#define RK1808_GRF_PD_VO_CON1			0x00000444
/* rk1808 register definition end*/

/* RV1126 register definition start */
#define RV1126_WIN2_CTRL0			0x0190
#define RV1126_WIN2_VIR0_1			0x0198
#define RV1126_WIN2_MST0			0x01a0
#define RV1126_WIN2_DSP_INFO0			0x01a4
#define RV1126_WIN2_DSP_ST0			0x01a8
/* RV1126 register definition end   */
#endif /* _ROCKCHIP_VOP_REG_H */
