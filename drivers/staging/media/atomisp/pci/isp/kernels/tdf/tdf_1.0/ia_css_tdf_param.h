/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 */

#ifndef __IA_CSS_TDF_PARAM_H
#define __IA_CSS_TDF_PARAM_H

#include "type_support.h"
#include "vmem.h" /* needed for VMEM_ARRAY */

struct ia_css_isp_tdf_vmem_params {
	VMEM_ARRAY(pyramid, ISP_VEC_NELEMS);
	VMEM_ARRAY(threshold_flat, ISP_VEC_NELEMS);
	VMEM_ARRAY(threshold_detail, ISP_VEC_NELEMS);
};

struct ia_css_isp_tdf_dmem_params {
	s32 Epsilon_0;
	s32 Epsilon_1;
	s32 EpsScaleText;
	s32 EpsScaleEdge;
	s32 Sepa_flat;
	s32 Sepa_Edge;
	s32 Blend_Flat;
	s32 Blend_Text;
	s32 Blend_Edge;
	s32 Shading_Gain;
	s32 Shading_baseGain;
	s32 LocalY_Gain;
	s32 LocalY_baseGain;
};

#endif /* __IA_CSS_TDF_PARAM_H */
