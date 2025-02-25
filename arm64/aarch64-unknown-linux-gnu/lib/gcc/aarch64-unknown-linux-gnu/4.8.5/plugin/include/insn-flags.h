/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_indirect_jump 1
#define HAVE_jump 1
#define HAVE_casesi_dispatch 1
#define HAVE_nop 1
#define HAVE_eh_return 1
#define HAVE_insv_immsi (INTVAL (operands[1]) < GET_MODE_BITSIZE (SImode) \
   && INTVAL (operands[1]) % 16 == 0 \
   && UINTVAL (operands[2]) <= 0xffff)
#define HAVE_insv_immdi (INTVAL (operands[1]) < GET_MODE_BITSIZE (DImode) \
   && INTVAL (operands[1]) % 16 == 0 \
   && UINTVAL (operands[2]) <= 0xffff)
#define HAVE_load_pairsi (rtx_equal_p (XEXP (operands[3], 0), \
		plus_constant (Pmode, \
			       XEXP (operands[1], 0), \
			       GET_MODE_SIZE (SImode))))
#define HAVE_load_pairdi (rtx_equal_p (XEXP (operands[3], 0), \
		plus_constant (Pmode, \
			       XEXP (operands[1], 0), \
			       GET_MODE_SIZE (DImode))))
#define HAVE_store_pairsi (rtx_equal_p (XEXP (operands[2], 0), \
		plus_constant (Pmode, \
			       XEXP (operands[0], 0), \
			       GET_MODE_SIZE (SImode))))
#define HAVE_store_pairdi (rtx_equal_p (XEXP (operands[2], 0), \
		plus_constant (Pmode, \
			       XEXP (operands[0], 0), \
			       GET_MODE_SIZE (DImode))))
#define HAVE_load_pairsf (rtx_equal_p (XEXP (operands[3], 0), \
		plus_constant (Pmode, \
			       XEXP (operands[1], 0), \
			       GET_MODE_SIZE (SFmode))))
#define HAVE_load_pairdf (rtx_equal_p (XEXP (operands[3], 0), \
		plus_constant (Pmode, \
			       XEXP (operands[1], 0), \
			       GET_MODE_SIZE (DFmode))))
#define HAVE_store_pairsf (rtx_equal_p (XEXP (operands[2], 0), \
		plus_constant (Pmode, \
			       XEXP (operands[0], 0), \
			       GET_MODE_SIZE (SFmode))))
#define HAVE_store_pairdf (rtx_equal_p (XEXP (operands[2], 0), \
		plus_constant (Pmode, \
			       XEXP (operands[0], 0), \
			       GET_MODE_SIZE (DFmode))))
#define HAVE_loadwb_pairsi_di ((INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SImode)) && (Pmode == DImode))
#define HAVE_loadwb_pairdi_di ((INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DImode)) && (Pmode == DImode))
#define HAVE_storewb_pairsi_di ((INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (SImode)) && (Pmode == DImode))
#define HAVE_storewb_pairdi_di ((INTVAL (operands[5]) == INTVAL (operands[4]) + GET_MODE_SIZE (DImode)) && (Pmode == DImode))
#define HAVE_subsi3 1
#define HAVE_subdi3 1
#define HAVE_negsi2 1
#define HAVE_negdi2 1
#define HAVE_mulsi3 1
#define HAVE_muldi3 1
#define HAVE_mulsidi3 1
#define HAVE_umulsidi3 1
#define HAVE_maddsidi4 1
#define HAVE_umaddsidi4 1
#define HAVE_msubsidi4 1
#define HAVE_umsubsidi4 1
#define HAVE_smuldi3_highpart 1
#define HAVE_umuldi3_highpart 1
#define HAVE_divsi3 1
#define HAVE_udivsi3 1
#define HAVE_divdi3 1
#define HAVE_udivdi3 1
#define HAVE_cstoreqi_neg 1
#define HAVE_cstorehi_neg 1
#define HAVE_cstoresi_neg 1
#define HAVE_cstoredi_neg 1
#define HAVE_csinc3si_insn 1
#define HAVE_csinc3di_insn 1
#define HAVE_andsi3 1
#define HAVE_iorsi3 1
#define HAVE_xorsi3 1
#define HAVE_anddi3 1
#define HAVE_iordi3 1
#define HAVE_xordi3 1
#define HAVE_one_cmplsi2 1
#define HAVE_one_cmpldi2 1
#define HAVE_clzsi2 1
#define HAVE_clzdi2 1
#define HAVE_clrsbsi2 1
#define HAVE_clrsbdi2 1
#define HAVE_rbitsi2 1
#define HAVE_rbitdi2 1
#define HAVE_bswapsi2 1
#define HAVE_bswapdi2 1
#define HAVE_bswaphi2 1
#define HAVE_btruncsf2 (TARGET_FLOAT)
#define HAVE_ceilsf2 (TARGET_FLOAT)
#define HAVE_floorsf2 (TARGET_FLOAT)
#define HAVE_nearbyintsf2 (TARGET_FLOAT)
#define HAVE_rintsf2 (TARGET_FLOAT)
#define HAVE_roundsf2 (TARGET_FLOAT)
#define HAVE_btruncdf2 (TARGET_FLOAT)
#define HAVE_ceildf2 (TARGET_FLOAT)
#define HAVE_floordf2 (TARGET_FLOAT)
#define HAVE_nearbyintdf2 (TARGET_FLOAT)
#define HAVE_rintdf2 (TARGET_FLOAT)
#define HAVE_rounddf2 (TARGET_FLOAT)
#define HAVE_lbtruncsfsi2 (TARGET_FLOAT)
#define HAVE_lceilsfsi2 (TARGET_FLOAT)
#define HAVE_lfloorsfsi2 (TARGET_FLOAT)
#define HAVE_lroundsfsi2 (TARGET_FLOAT)
#define HAVE_lbtruncusfsi2 (TARGET_FLOAT)
#define HAVE_lceilusfsi2 (TARGET_FLOAT)
#define HAVE_lfloorusfsi2 (TARGET_FLOAT)
#define HAVE_lroundusfsi2 (TARGET_FLOAT)
#define HAVE_lbtruncsfdi2 (TARGET_FLOAT)
#define HAVE_lceilsfdi2 (TARGET_FLOAT)
#define HAVE_lfloorsfdi2 (TARGET_FLOAT)
#define HAVE_lroundsfdi2 (TARGET_FLOAT)
#define HAVE_lbtruncusfdi2 (TARGET_FLOAT)
#define HAVE_lceilusfdi2 (TARGET_FLOAT)
#define HAVE_lfloorusfdi2 (TARGET_FLOAT)
#define HAVE_lroundusfdi2 (TARGET_FLOAT)
#define HAVE_lbtruncdfsi2 (TARGET_FLOAT)
#define HAVE_lceildfsi2 (TARGET_FLOAT)
#define HAVE_lfloordfsi2 (TARGET_FLOAT)
#define HAVE_lrounddfsi2 (TARGET_FLOAT)
#define HAVE_lbtruncudfsi2 (TARGET_FLOAT)
#define HAVE_lceiludfsi2 (TARGET_FLOAT)
#define HAVE_lfloorudfsi2 (TARGET_FLOAT)
#define HAVE_lroundudfsi2 (TARGET_FLOAT)
#define HAVE_lbtruncdfdi2 (TARGET_FLOAT)
#define HAVE_lceildfdi2 (TARGET_FLOAT)
#define HAVE_lfloordfdi2 (TARGET_FLOAT)
#define HAVE_lrounddfdi2 (TARGET_FLOAT)
#define HAVE_lbtruncudfdi2 (TARGET_FLOAT)
#define HAVE_lceiludfdi2 (TARGET_FLOAT)
#define HAVE_lfloorudfdi2 (TARGET_FLOAT)
#define HAVE_lroundudfdi2 (TARGET_FLOAT)
#define HAVE_fmasf4 (TARGET_FLOAT)
#define HAVE_fmadf4 (TARGET_FLOAT)
#define HAVE_fnmasf4 (TARGET_FLOAT)
#define HAVE_fnmadf4 (TARGET_FLOAT)
#define HAVE_fmssf4 (TARGET_FLOAT)
#define HAVE_fmsdf4 (TARGET_FLOAT)
#define HAVE_fnmssf4 (TARGET_FLOAT)
#define HAVE_fnmsdf4 (TARGET_FLOAT)
#define HAVE_extendsfdf2 (TARGET_FLOAT)
#define HAVE_truncdfsf2 (TARGET_FLOAT)
#define HAVE_fix_truncsfsi2 (TARGET_FLOAT)
#define HAVE_fix_truncsfdi2 (TARGET_FLOAT)
#define HAVE_fix_truncdfsi2 (TARGET_FLOAT)
#define HAVE_fix_truncdfdi2 (TARGET_FLOAT)
#define HAVE_fixuns_truncsfsi2 (TARGET_FLOAT)
#define HAVE_fixuns_truncsfdi2 (TARGET_FLOAT)
#define HAVE_fixuns_truncdfsi2 (TARGET_FLOAT)
#define HAVE_fixuns_truncdfdi2 (TARGET_FLOAT)
#define HAVE_floatsisf2 (TARGET_FLOAT)
#define HAVE_floatdisf2 (TARGET_FLOAT)
#define HAVE_floatsidf2 (TARGET_FLOAT)
#define HAVE_floatdidf2 (TARGET_FLOAT)
#define HAVE_floatunssisf2 (TARGET_FLOAT)
#define HAVE_floatunsdisf2 (TARGET_FLOAT)
#define HAVE_floatunssidf2 (TARGET_FLOAT)
#define HAVE_floatunsdidf2 (TARGET_FLOAT)
#define HAVE_addsf3 (TARGET_FLOAT)
#define HAVE_adddf3 (TARGET_FLOAT)
#define HAVE_subsf3 (TARGET_FLOAT)
#define HAVE_subdf3 (TARGET_FLOAT)
#define HAVE_mulsf3 (TARGET_FLOAT)
#define HAVE_muldf3 (TARGET_FLOAT)
#define HAVE_divsf3 (TARGET_FLOAT)
#define HAVE_divdf3 (TARGET_FLOAT)
#define HAVE_negsf2 (TARGET_FLOAT)
#define HAVE_negdf2 (TARGET_FLOAT)
#define HAVE_sqrtsf2 (TARGET_FLOAT)
#define HAVE_sqrtdf2 (TARGET_FLOAT)
#define HAVE_abssf2 (TARGET_FLOAT)
#define HAVE_absdf2 (TARGET_FLOAT)
#define HAVE_smaxsf3 (TARGET_FLOAT)
#define HAVE_smaxdf3 (TARGET_FLOAT)
#define HAVE_sminsf3 (TARGET_FLOAT)
#define HAVE_smindf3 (TARGET_FLOAT)
#define HAVE_aarch64_movdi_tilow (reload_completed || reload_in_progress)
#define HAVE_aarch64_movdi_tihigh (reload_completed || reload_in_progress)
#define HAVE_aarch64_movtihigh_di (reload_completed || reload_in_progress)
#define HAVE_aarch64_movtilow_di (reload_completed || reload_in_progress)
#define HAVE_aarch64_movtilow_tilow (reload_completed || reload_in_progress)
#define HAVE_add_losym 1
#define HAVE_ldr_got_small 1
#define HAVE_aarch64_load_tp_hard 1
#define HAVE_tlsie_small 1
#define HAVE_tlsle_small 1
#define HAVE_tlsdesc_small (TARGET_TLS_DESC)
#define HAVE_stack_tie 1
#define HAVE_aarch64_simd_dupv8qi (TARGET_SIMD)
#define HAVE_aarch64_simd_dupv16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_dupv4hi (TARGET_SIMD)
#define HAVE_aarch64_simd_dupv8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_dupv2si (TARGET_SIMD)
#define HAVE_aarch64_simd_dupv4si (TARGET_SIMD)
#define HAVE_aarch64_simd_dupv2di (TARGET_SIMD)
#define HAVE_aarch64_dup_lanev8qi (TARGET_SIMD)
#define HAVE_aarch64_dup_lanev16qi (TARGET_SIMD)
#define HAVE_aarch64_dup_lanev4hi (TARGET_SIMD)
#define HAVE_aarch64_dup_lanev8hi (TARGET_SIMD)
#define HAVE_aarch64_dup_lanev2si (TARGET_SIMD)
#define HAVE_aarch64_dup_lanev4si (TARGET_SIMD)
#define HAVE_aarch64_dup_lanev2di (TARGET_SIMD)
#define HAVE_aarch64_dup_laneqi (TARGET_SIMD)
#define HAVE_aarch64_dup_lanehi (TARGET_SIMD)
#define HAVE_aarch64_dup_lanesi (TARGET_SIMD)
#define HAVE_aarch64_dup_lanedi (TARGET_SIMD)
#define HAVE_aarch64_simd_dupv2sf (TARGET_SIMD)
#define HAVE_aarch64_simd_dupv4sf (TARGET_SIMD)
#define HAVE_aarch64_simd_dupv2df (TARGET_SIMD)
#define HAVE_ornv8qi3 (TARGET_SIMD)
#define HAVE_ornv16qi3 (TARGET_SIMD)
#define HAVE_ornv4hi3 (TARGET_SIMD)
#define HAVE_ornv8hi3 (TARGET_SIMD)
#define HAVE_ornv2si3 (TARGET_SIMD)
#define HAVE_ornv4si3 (TARGET_SIMD)
#define HAVE_ornv2di3 (TARGET_SIMD)
#define HAVE_bicv8qi3 (TARGET_SIMD)
#define HAVE_bicv16qi3 (TARGET_SIMD)
#define HAVE_bicv4hi3 (TARGET_SIMD)
#define HAVE_bicv8hi3 (TARGET_SIMD)
#define HAVE_bicv2si3 (TARGET_SIMD)
#define HAVE_bicv4si3 (TARGET_SIMD)
#define HAVE_bicv2di3 (TARGET_SIMD)
#define HAVE_addv8qi3 (TARGET_SIMD)
#define HAVE_addv16qi3 (TARGET_SIMD)
#define HAVE_addv4hi3 (TARGET_SIMD)
#define HAVE_addv8hi3 (TARGET_SIMD)
#define HAVE_addv2si3 (TARGET_SIMD)
#define HAVE_addv4si3 (TARGET_SIMD)
#define HAVE_addv2di3 (TARGET_SIMD)
#define HAVE_subv8qi3 (TARGET_SIMD)
#define HAVE_subv16qi3 (TARGET_SIMD)
#define HAVE_subv4hi3 (TARGET_SIMD)
#define HAVE_subv8hi3 (TARGET_SIMD)
#define HAVE_subv2si3 (TARGET_SIMD)
#define HAVE_subv4si3 (TARGET_SIMD)
#define HAVE_subv2di3 (TARGET_SIMD)
#define HAVE_mulv8qi3 (TARGET_SIMD)
#define HAVE_mulv16qi3 (TARGET_SIMD)
#define HAVE_mulv4hi3 (TARGET_SIMD)
#define HAVE_mulv8hi3 (TARGET_SIMD)
#define HAVE_mulv2si3 (TARGET_SIMD)
#define HAVE_mulv4si3 (TARGET_SIMD)
#define HAVE_negv8qi2 (TARGET_SIMD)
#define HAVE_negv16qi2 (TARGET_SIMD)
#define HAVE_negv4hi2 (TARGET_SIMD)
#define HAVE_negv8hi2 (TARGET_SIMD)
#define HAVE_negv2si2 (TARGET_SIMD)
#define HAVE_negv4si2 (TARGET_SIMD)
#define HAVE_absv8qi2 (TARGET_SIMD)
#define HAVE_absv16qi2 (TARGET_SIMD)
#define HAVE_absv4hi2 (TARGET_SIMD)
#define HAVE_absv8hi2 (TARGET_SIMD)
#define HAVE_absv2si2 (TARGET_SIMD)
#define HAVE_absv4si2 (TARGET_SIMD)
#define HAVE_absv2di2 (TARGET_SIMD)
#define HAVE_andv8qi3 (TARGET_SIMD)
#define HAVE_andv16qi3 (TARGET_SIMD)
#define HAVE_andv4hi3 (TARGET_SIMD)
#define HAVE_andv8hi3 (TARGET_SIMD)
#define HAVE_andv2si3 (TARGET_SIMD)
#define HAVE_andv4si3 (TARGET_SIMD)
#define HAVE_andv2di3 (TARGET_SIMD)
#define HAVE_iorv8qi3 (TARGET_SIMD)
#define HAVE_iorv16qi3 (TARGET_SIMD)
#define HAVE_iorv4hi3 (TARGET_SIMD)
#define HAVE_iorv8hi3 (TARGET_SIMD)
#define HAVE_iorv2si3 (TARGET_SIMD)
#define HAVE_iorv4si3 (TARGET_SIMD)
#define HAVE_iorv2di3 (TARGET_SIMD)
#define HAVE_xorv8qi3 (TARGET_SIMD)
#define HAVE_xorv16qi3 (TARGET_SIMD)
#define HAVE_xorv4hi3 (TARGET_SIMD)
#define HAVE_xorv8hi3 (TARGET_SIMD)
#define HAVE_xorv2si3 (TARGET_SIMD)
#define HAVE_xorv4si3 (TARGET_SIMD)
#define HAVE_xorv2di3 (TARGET_SIMD)
#define HAVE_one_cmplv8qi2 (TARGET_SIMD)
#define HAVE_one_cmplv16qi2 (TARGET_SIMD)
#define HAVE_one_cmplv4hi2 (TARGET_SIMD)
#define HAVE_one_cmplv8hi2 (TARGET_SIMD)
#define HAVE_one_cmplv2si2 (TARGET_SIMD)
#define HAVE_one_cmplv4si2 (TARGET_SIMD)
#define HAVE_one_cmplv2di2 (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_setv8qi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_setv16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_setv4hi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_setv8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_setv2si (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_setv4si (TARGET_SIMD)
#define HAVE_aarch64_simd_lshrv8qi (TARGET_SIMD)
#define HAVE_aarch64_simd_lshrv16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_lshrv4hi (TARGET_SIMD)
#define HAVE_aarch64_simd_lshrv8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_lshrv2si (TARGET_SIMD)
#define HAVE_aarch64_simd_lshrv4si (TARGET_SIMD)
#define HAVE_aarch64_simd_lshrv2di (TARGET_SIMD)
#define HAVE_aarch64_simd_ashrv8qi (TARGET_SIMD)
#define HAVE_aarch64_simd_ashrv16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_ashrv4hi (TARGET_SIMD)
#define HAVE_aarch64_simd_ashrv8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_ashrv2si (TARGET_SIMD)
#define HAVE_aarch64_simd_ashrv4si (TARGET_SIMD)
#define HAVE_aarch64_simd_ashrv2di (TARGET_SIMD)
#define HAVE_aarch64_simd_imm_shlv8qi (TARGET_SIMD)
#define HAVE_aarch64_simd_imm_shlv16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_imm_shlv4hi (TARGET_SIMD)
#define HAVE_aarch64_simd_imm_shlv8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_imm_shlv2si (TARGET_SIMD)
#define HAVE_aarch64_simd_imm_shlv4si (TARGET_SIMD)
#define HAVE_aarch64_simd_imm_shlv2di (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_sshlv8qi (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_sshlv16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_sshlv4hi (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_sshlv8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_sshlv2si (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_sshlv4si (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_sshlv2di (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv8qi_unsigned (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv16qi_unsigned (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv4hi_unsigned (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv8hi_unsigned (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv2si_unsigned (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv4si_unsigned (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv2di_unsigned (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv8qi_signed (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv16qi_signed (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv4hi_signed (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv8hi_signed (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv2si_signed (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv4si_signed (TARGET_SIMD)
#define HAVE_aarch64_simd_reg_shlv2di_signed (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_setv2di (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_setv2sf (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_setv4sf (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_setv2df (TARGET_SIMD)
#define HAVE_aarch64_mlav8qi (TARGET_SIMD)
#define HAVE_aarch64_mlav16qi (TARGET_SIMD)
#define HAVE_aarch64_mlav4hi (TARGET_SIMD)
#define HAVE_aarch64_mlav8hi (TARGET_SIMD)
#define HAVE_aarch64_mlav2si (TARGET_SIMD)
#define HAVE_aarch64_mlav4si (TARGET_SIMD)
#define HAVE_aarch64_mlsv8qi (TARGET_SIMD)
#define HAVE_aarch64_mlsv16qi (TARGET_SIMD)
#define HAVE_aarch64_mlsv4hi (TARGET_SIMD)
#define HAVE_aarch64_mlsv8hi (TARGET_SIMD)
#define HAVE_aarch64_mlsv2si (TARGET_SIMD)
#define HAVE_aarch64_mlsv4si (TARGET_SIMD)
#define HAVE_smaxv8qi3 (TARGET_SIMD)
#define HAVE_sminv8qi3 (TARGET_SIMD)
#define HAVE_umaxv8qi3 (TARGET_SIMD)
#define HAVE_uminv8qi3 (TARGET_SIMD)
#define HAVE_smaxv16qi3 (TARGET_SIMD)
#define HAVE_sminv16qi3 (TARGET_SIMD)
#define HAVE_umaxv16qi3 (TARGET_SIMD)
#define HAVE_uminv16qi3 (TARGET_SIMD)
#define HAVE_smaxv4hi3 (TARGET_SIMD)
#define HAVE_sminv4hi3 (TARGET_SIMD)
#define HAVE_umaxv4hi3 (TARGET_SIMD)
#define HAVE_uminv4hi3 (TARGET_SIMD)
#define HAVE_smaxv8hi3 (TARGET_SIMD)
#define HAVE_sminv8hi3 (TARGET_SIMD)
#define HAVE_umaxv8hi3 (TARGET_SIMD)
#define HAVE_uminv8hi3 (TARGET_SIMD)
#define HAVE_smaxv2si3 (TARGET_SIMD)
#define HAVE_sminv2si3 (TARGET_SIMD)
#define HAVE_umaxv2si3 (TARGET_SIMD)
#define HAVE_uminv2si3 (TARGET_SIMD)
#define HAVE_smaxv4si3 (TARGET_SIMD)
#define HAVE_sminv4si3 (TARGET_SIMD)
#define HAVE_umaxv4si3 (TARGET_SIMD)
#define HAVE_uminv4si3 (TARGET_SIMD)
#define HAVE_move_lo_quad_v16qi (TARGET_SIMD)
#define HAVE_move_lo_quad_v8hi (TARGET_SIMD)
#define HAVE_move_lo_quad_v4si (TARGET_SIMD)
#define HAVE_move_lo_quad_v2di (TARGET_SIMD)
#define HAVE_move_lo_quad_v4sf (TARGET_SIMD)
#define HAVE_move_lo_quad_v2df (TARGET_SIMD)
#define HAVE_aarch64_simd_move_hi_quad_v16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_move_hi_quad_v8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_move_hi_quad_v4si (TARGET_SIMD)
#define HAVE_aarch64_simd_move_hi_quad_v2di (TARGET_SIMD)
#define HAVE_aarch64_simd_move_hi_quad_v4sf (TARGET_SIMD)
#define HAVE_aarch64_simd_move_hi_quad_v2df (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_pack_trunc_v8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_pack_trunc_v4si (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_pack_trunc_v2di (TARGET_SIMD)
#define HAVE_vec_pack_trunc_v8hi (TARGET_SIMD)
#define HAVE_vec_pack_trunc_v4si (TARGET_SIMD)
#define HAVE_vec_pack_trunc_v2di (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_unpacks_lo_v16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_unpacku_lo_v16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_unpacks_lo_v8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_unpacku_lo_v8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_unpacks_lo_v4si (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_unpacku_lo_v4si (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_unpacks_hi_v16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_unpacku_hi_v16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_unpacks_hi_v8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_unpacku_hi_v8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_unpacks_hi_v4si (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_unpacku_hi_v4si (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_smult_lo_v16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_umult_lo_v16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_smult_lo_v8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_umult_lo_v8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_smult_lo_v4si (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_umult_lo_v4si (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_smult_hi_v16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_umult_hi_v16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_smult_hi_v8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_umult_hi_v8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_smult_hi_v4si (TARGET_SIMD)
#define HAVE_aarch64_simd_vec_umult_hi_v4si (TARGET_SIMD)
#define HAVE_addv2sf3 (TARGET_SIMD)
#define HAVE_addv4sf3 (TARGET_SIMD)
#define HAVE_addv2df3 (TARGET_SIMD)
#define HAVE_subv2sf3 (TARGET_SIMD)
#define HAVE_subv4sf3 (TARGET_SIMD)
#define HAVE_subv2df3 (TARGET_SIMD)
#define HAVE_mulv2sf3 (TARGET_SIMD)
#define HAVE_mulv4sf3 (TARGET_SIMD)
#define HAVE_mulv2df3 (TARGET_SIMD)
#define HAVE_divv2sf3 (TARGET_SIMD)
#define HAVE_divv4sf3 (TARGET_SIMD)
#define HAVE_divv2df3 (TARGET_SIMD)
#define HAVE_negv2sf2 (TARGET_SIMD)
#define HAVE_negv4sf2 (TARGET_SIMD)
#define HAVE_negv2df2 (TARGET_SIMD)
#define HAVE_absv2sf2 (TARGET_SIMD)
#define HAVE_absv4sf2 (TARGET_SIMD)
#define HAVE_absv2df2 (TARGET_SIMD)
#define HAVE_fmav2sf4 (TARGET_SIMD)
#define HAVE_fmav4sf4 (TARGET_SIMD)
#define HAVE_fmav2df4 (TARGET_SIMD)
#define HAVE_aarch64_frintzv2sf (TARGET_SIMD)
#define HAVE_aarch64_frintpv2sf (TARGET_SIMD)
#define HAVE_aarch64_frintmv2sf (TARGET_SIMD)
#define HAVE_aarch64_frintiv2sf (TARGET_SIMD)
#define HAVE_aarch64_frintxv2sf (TARGET_SIMD)
#define HAVE_aarch64_frintav2sf (TARGET_SIMD)
#define HAVE_aarch64_frintzv4sf (TARGET_SIMD)
#define HAVE_aarch64_frintpv4sf (TARGET_SIMD)
#define HAVE_aarch64_frintmv4sf (TARGET_SIMD)
#define HAVE_aarch64_frintiv4sf (TARGET_SIMD)
#define HAVE_aarch64_frintxv4sf (TARGET_SIMD)
#define HAVE_aarch64_frintav4sf (TARGET_SIMD)
#define HAVE_aarch64_frintzv2df (TARGET_SIMD)
#define HAVE_aarch64_frintpv2df (TARGET_SIMD)
#define HAVE_aarch64_frintmv2df (TARGET_SIMD)
#define HAVE_aarch64_frintiv2df (TARGET_SIMD)
#define HAVE_aarch64_frintxv2df (TARGET_SIMD)
#define HAVE_aarch64_frintav2df (TARGET_SIMD)
#define HAVE_aarch64_fcvtzsv2sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtpsv2sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtmsv2sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtasv2sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtzuv2sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtpuv2sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtmuv2sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtauv2sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtzsv4sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtpsv4sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtmsv4sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtasv4sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtzuv4sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtpuv4sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtmuv4sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtauv4sf (TARGET_SIMD)
#define HAVE_aarch64_fcvtzsv2df (TARGET_SIMD)
#define HAVE_aarch64_fcvtpsv2df (TARGET_SIMD)
#define HAVE_aarch64_fcvtmsv2df (TARGET_SIMD)
#define HAVE_aarch64_fcvtasv2df (TARGET_SIMD)
#define HAVE_aarch64_fcvtzuv2df (TARGET_SIMD)
#define HAVE_aarch64_fcvtpuv2df (TARGET_SIMD)
#define HAVE_aarch64_fcvtmuv2df (TARGET_SIMD)
#define HAVE_aarch64_fcvtauv2df (TARGET_SIMD)
#define HAVE_aarch64_vmlsv2sf (TARGET_SIMD)
#define HAVE_aarch64_vmlsv4sf (TARGET_SIMD)
#define HAVE_aarch64_vmlsv2df (TARGET_SIMD)
#define HAVE_smaxv2sf3 (TARGET_SIMD)
#define HAVE_smaxv4sf3 (TARGET_SIMD)
#define HAVE_smaxv2df3 (TARGET_SIMD)
#define HAVE_sminv2sf3 (TARGET_SIMD)
#define HAVE_sminv4sf3 (TARGET_SIMD)
#define HAVE_sminv2df3 (TARGET_SIMD)
#define HAVE_reduc_smax_v4sf (TARGET_SIMD)
#define HAVE_reduc_smin_v4sf (TARGET_SIMD)
#define HAVE_reduc_smax_v2sf (TARGET_SIMD)
#define HAVE_reduc_smin_v2sf (TARGET_SIMD)
#define HAVE_reduc_smax_v2df (TARGET_SIMD)
#define HAVE_reduc_smin_v2df (TARGET_SIMD)
#define HAVE_aarch64_addvv4sf (TARGET_SIMD)
#define HAVE_aarch64_addvv2sf (TARGET_SIMD)
#define HAVE_aarch64_addvv2df (TARGET_SIMD)
#define HAVE_aarch64_addvv8qi (TARGET_SIMD)
#define HAVE_aarch64_addvv16qi (TARGET_SIMD)
#define HAVE_aarch64_addvv4hi (TARGET_SIMD)
#define HAVE_aarch64_addvv8hi (TARGET_SIMD)
#define HAVE_aarch64_addvv4si (TARGET_SIMD)
#define HAVE_aarch64_addvv2di (TARGET_SIMD)
#define HAVE_aarch64_addvv2si (TARGET_SIMD)
#define HAVE_reduc_umax_v8qi (TARGET_SIMD)
#define HAVE_reduc_umin_v8qi (TARGET_SIMD)
#define HAVE_reduc_smax_v8qi (TARGET_SIMD)
#define HAVE_reduc_smin_v8qi (TARGET_SIMD)
#define HAVE_reduc_umax_v16qi (TARGET_SIMD)
#define HAVE_reduc_umin_v16qi (TARGET_SIMD)
#define HAVE_reduc_smax_v16qi (TARGET_SIMD)
#define HAVE_reduc_smin_v16qi (TARGET_SIMD)
#define HAVE_reduc_umax_v4hi (TARGET_SIMD)
#define HAVE_reduc_umin_v4hi (TARGET_SIMD)
#define HAVE_reduc_smax_v4hi (TARGET_SIMD)
#define HAVE_reduc_smin_v4hi (TARGET_SIMD)
#define HAVE_reduc_umax_v8hi (TARGET_SIMD)
#define HAVE_reduc_umin_v8hi (TARGET_SIMD)
#define HAVE_reduc_smax_v8hi (TARGET_SIMD)
#define HAVE_reduc_smin_v8hi (TARGET_SIMD)
#define HAVE_reduc_umax_v4si (TARGET_SIMD)
#define HAVE_reduc_umin_v4si (TARGET_SIMD)
#define HAVE_reduc_smax_v4si (TARGET_SIMD)
#define HAVE_reduc_smin_v4si (TARGET_SIMD)
#define HAVE_reduc_umax_v2si (TARGET_SIMD)
#define HAVE_reduc_umin_v2si (TARGET_SIMD)
#define HAVE_reduc_smax_v2si (TARGET_SIMD)
#define HAVE_reduc_smin_v2si (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv8qi_internal (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv16qi_internal (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv4hi_internal (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv2si_internal (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv4si_internal (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv2di_internal (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv2sf_internal (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv4sf_internal (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv2df_internal (TARGET_SIMD)
#define HAVE_aarch64_get_lane_signedv8qi (TARGET_SIMD)
#define HAVE_aarch64_get_lane_signedv16qi (TARGET_SIMD)
#define HAVE_aarch64_get_lane_signedv4hi (TARGET_SIMD)
#define HAVE_aarch64_get_lane_signedv8hi (TARGET_SIMD)
#define HAVE_aarch64_get_lane_signedv2si (TARGET_SIMD)
#define HAVE_aarch64_get_lane_signedv4si (TARGET_SIMD)
#define HAVE_aarch64_get_lane_unsignedv8qi (TARGET_SIMD)
#define HAVE_aarch64_get_lane_unsignedv16qi (TARGET_SIMD)
#define HAVE_aarch64_get_lane_unsignedv4hi (TARGET_SIMD)
#define HAVE_aarch64_get_lane_unsignedv8hi (TARGET_SIMD)
#define HAVE_aarch64_get_lane_unsignedv2si (TARGET_SIMD)
#define HAVE_aarch64_get_lane_unsignedv4si (TARGET_SIMD)
#define HAVE_aarch64_get_lane_unsignedv2di (TARGET_SIMD)
#define HAVE_aarch64_get_lanev2sf (TARGET_SIMD)
#define HAVE_aarch64_get_lanev4sf (TARGET_SIMD)
#define HAVE_aarch64_get_lanev2df (TARGET_SIMD)
#define HAVE_aarch64_combinev8qi (TARGET_SIMD)
#define HAVE_aarch64_combinev4hi (TARGET_SIMD)
#define HAVE_aarch64_combinev2si (TARGET_SIMD)
#define HAVE_aarch64_combinev2sf (TARGET_SIMD)
#define HAVE_aarch64_combinedi (TARGET_SIMD)
#define HAVE_aarch64_combinedf (TARGET_SIMD)
#define HAVE_aarch64_saddl2v16qi_internal (TARGET_SIMD)
#define HAVE_aarch64_ssubl2v16qi_internal (TARGET_SIMD)
#define HAVE_aarch64_uaddl2v16qi_internal (TARGET_SIMD)
#define HAVE_aarch64_usubl2v16qi_internal (TARGET_SIMD)
#define HAVE_aarch64_saddl2v8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_ssubl2v8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_uaddl2v8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_usubl2v8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_saddl2v4si_internal (TARGET_SIMD)
#define HAVE_aarch64_ssubl2v4si_internal (TARGET_SIMD)
#define HAVE_aarch64_uaddl2v4si_internal (TARGET_SIMD)
#define HAVE_aarch64_usubl2v4si_internal (TARGET_SIMD)
#define HAVE_aarch64_saddlv8qi (TARGET_SIMD)
#define HAVE_aarch64_ssublv8qi (TARGET_SIMD)
#define HAVE_aarch64_uaddlv8qi (TARGET_SIMD)
#define HAVE_aarch64_usublv8qi (TARGET_SIMD)
#define HAVE_aarch64_saddlv4hi (TARGET_SIMD)
#define HAVE_aarch64_ssublv4hi (TARGET_SIMD)
#define HAVE_aarch64_uaddlv4hi (TARGET_SIMD)
#define HAVE_aarch64_usublv4hi (TARGET_SIMD)
#define HAVE_aarch64_saddlv2si (TARGET_SIMD)
#define HAVE_aarch64_ssublv2si (TARGET_SIMD)
#define HAVE_aarch64_uaddlv2si (TARGET_SIMD)
#define HAVE_aarch64_usublv2si (TARGET_SIMD)
#define HAVE_aarch64_saddwv8qi (TARGET_SIMD)
#define HAVE_aarch64_ssubwv8qi (TARGET_SIMD)
#define HAVE_aarch64_uaddwv8qi (TARGET_SIMD)
#define HAVE_aarch64_usubwv8qi (TARGET_SIMD)
#define HAVE_aarch64_saddwv4hi (TARGET_SIMD)
#define HAVE_aarch64_ssubwv4hi (TARGET_SIMD)
#define HAVE_aarch64_uaddwv4hi (TARGET_SIMD)
#define HAVE_aarch64_usubwv4hi (TARGET_SIMD)
#define HAVE_aarch64_saddwv2si (TARGET_SIMD)
#define HAVE_aarch64_ssubwv2si (TARGET_SIMD)
#define HAVE_aarch64_uaddwv2si (TARGET_SIMD)
#define HAVE_aarch64_usubwv2si (TARGET_SIMD)
#define HAVE_aarch64_saddw2v16qi_internal (TARGET_SIMD)
#define HAVE_aarch64_ssubw2v16qi_internal (TARGET_SIMD)
#define HAVE_aarch64_uaddw2v16qi_internal (TARGET_SIMD)
#define HAVE_aarch64_usubw2v16qi_internal (TARGET_SIMD)
#define HAVE_aarch64_saddw2v8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_ssubw2v8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_uaddw2v8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_usubw2v8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_saddw2v4si_internal (TARGET_SIMD)
#define HAVE_aarch64_ssubw2v4si_internal (TARGET_SIMD)
#define HAVE_aarch64_uaddw2v4si_internal (TARGET_SIMD)
#define HAVE_aarch64_usubw2v4si_internal (TARGET_SIMD)
#define HAVE_aarch64_shaddv8qi (TARGET_SIMD)
#define HAVE_aarch64_uhaddv8qi (TARGET_SIMD)
#define HAVE_aarch64_srhaddv8qi (TARGET_SIMD)
#define HAVE_aarch64_urhaddv8qi (TARGET_SIMD)
#define HAVE_aarch64_shsubv8qi (TARGET_SIMD)
#define HAVE_aarch64_uhsubv8qi (TARGET_SIMD)
#define HAVE_aarch64_srhsubv8qi (TARGET_SIMD)
#define HAVE_aarch64_urhsubv8qi (TARGET_SIMD)
#define HAVE_aarch64_shaddv16qi (TARGET_SIMD)
#define HAVE_aarch64_uhaddv16qi (TARGET_SIMD)
#define HAVE_aarch64_srhaddv16qi (TARGET_SIMD)
#define HAVE_aarch64_urhaddv16qi (TARGET_SIMD)
#define HAVE_aarch64_shsubv16qi (TARGET_SIMD)
#define HAVE_aarch64_uhsubv16qi (TARGET_SIMD)
#define HAVE_aarch64_srhsubv16qi (TARGET_SIMD)
#define HAVE_aarch64_urhsubv16qi (TARGET_SIMD)
#define HAVE_aarch64_shaddv4hi (TARGET_SIMD)
#define HAVE_aarch64_uhaddv4hi (TARGET_SIMD)
#define HAVE_aarch64_srhaddv4hi (TARGET_SIMD)
#define HAVE_aarch64_urhaddv4hi (TARGET_SIMD)
#define HAVE_aarch64_shsubv4hi (TARGET_SIMD)
#define HAVE_aarch64_uhsubv4hi (TARGET_SIMD)
#define HAVE_aarch64_srhsubv4hi (TARGET_SIMD)
#define HAVE_aarch64_urhsubv4hi (TARGET_SIMD)
#define HAVE_aarch64_shaddv8hi (TARGET_SIMD)
#define HAVE_aarch64_uhaddv8hi (TARGET_SIMD)
#define HAVE_aarch64_srhaddv8hi (TARGET_SIMD)
#define HAVE_aarch64_urhaddv8hi (TARGET_SIMD)
#define HAVE_aarch64_shsubv8hi (TARGET_SIMD)
#define HAVE_aarch64_uhsubv8hi (TARGET_SIMD)
#define HAVE_aarch64_srhsubv8hi (TARGET_SIMD)
#define HAVE_aarch64_urhsubv8hi (TARGET_SIMD)
#define HAVE_aarch64_shaddv2si (TARGET_SIMD)
#define HAVE_aarch64_uhaddv2si (TARGET_SIMD)
#define HAVE_aarch64_srhaddv2si (TARGET_SIMD)
#define HAVE_aarch64_urhaddv2si (TARGET_SIMD)
#define HAVE_aarch64_shsubv2si (TARGET_SIMD)
#define HAVE_aarch64_uhsubv2si (TARGET_SIMD)
#define HAVE_aarch64_srhsubv2si (TARGET_SIMD)
#define HAVE_aarch64_urhsubv2si (TARGET_SIMD)
#define HAVE_aarch64_shaddv4si (TARGET_SIMD)
#define HAVE_aarch64_uhaddv4si (TARGET_SIMD)
#define HAVE_aarch64_srhaddv4si (TARGET_SIMD)
#define HAVE_aarch64_urhaddv4si (TARGET_SIMD)
#define HAVE_aarch64_shsubv4si (TARGET_SIMD)
#define HAVE_aarch64_uhsubv4si (TARGET_SIMD)
#define HAVE_aarch64_srhsubv4si (TARGET_SIMD)
#define HAVE_aarch64_urhsubv4si (TARGET_SIMD)
#define HAVE_aarch64_addhnv8hi (TARGET_SIMD)
#define HAVE_aarch64_raddhnv8hi (TARGET_SIMD)
#define HAVE_aarch64_subhnv8hi (TARGET_SIMD)
#define HAVE_aarch64_rsubhnv8hi (TARGET_SIMD)
#define HAVE_aarch64_addhnv4si (TARGET_SIMD)
#define HAVE_aarch64_raddhnv4si (TARGET_SIMD)
#define HAVE_aarch64_subhnv4si (TARGET_SIMD)
#define HAVE_aarch64_rsubhnv4si (TARGET_SIMD)
#define HAVE_aarch64_addhnv2di (TARGET_SIMD)
#define HAVE_aarch64_raddhnv2di (TARGET_SIMD)
#define HAVE_aarch64_subhnv2di (TARGET_SIMD)
#define HAVE_aarch64_rsubhnv2di (TARGET_SIMD)
#define HAVE_aarch64_addhn2v8hi (TARGET_SIMD)
#define HAVE_aarch64_raddhn2v8hi (TARGET_SIMD)
#define HAVE_aarch64_subhn2v8hi (TARGET_SIMD)
#define HAVE_aarch64_rsubhn2v8hi (TARGET_SIMD)
#define HAVE_aarch64_addhn2v4si (TARGET_SIMD)
#define HAVE_aarch64_raddhn2v4si (TARGET_SIMD)
#define HAVE_aarch64_subhn2v4si (TARGET_SIMD)
#define HAVE_aarch64_rsubhn2v4si (TARGET_SIMD)
#define HAVE_aarch64_addhn2v2di (TARGET_SIMD)
#define HAVE_aarch64_raddhn2v2di (TARGET_SIMD)
#define HAVE_aarch64_subhn2v2di (TARGET_SIMD)
#define HAVE_aarch64_rsubhn2v2di (TARGET_SIMD)
#define HAVE_aarch64_pmulv8qi (TARGET_SIMD)
#define HAVE_aarch64_pmulv16qi (TARGET_SIMD)
#define HAVE_aarch64_sqaddv8qi (TARGET_SIMD)
#define HAVE_aarch64_uqaddv8qi (TARGET_SIMD)
#define HAVE_aarch64_sqsubv8qi (TARGET_SIMD)
#define HAVE_aarch64_uqsubv8qi (TARGET_SIMD)
#define HAVE_aarch64_sqaddv16qi (TARGET_SIMD)
#define HAVE_aarch64_uqaddv16qi (TARGET_SIMD)
#define HAVE_aarch64_sqsubv16qi (TARGET_SIMD)
#define HAVE_aarch64_uqsubv16qi (TARGET_SIMD)
#define HAVE_aarch64_sqaddv4hi (TARGET_SIMD)
#define HAVE_aarch64_uqaddv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqsubv4hi (TARGET_SIMD)
#define HAVE_aarch64_uqsubv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqaddv8hi (TARGET_SIMD)
#define HAVE_aarch64_uqaddv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqsubv8hi (TARGET_SIMD)
#define HAVE_aarch64_uqsubv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqaddv2si (TARGET_SIMD)
#define HAVE_aarch64_uqaddv2si (TARGET_SIMD)
#define HAVE_aarch64_sqsubv2si (TARGET_SIMD)
#define HAVE_aarch64_uqsubv2si (TARGET_SIMD)
#define HAVE_aarch64_sqaddv4si (TARGET_SIMD)
#define HAVE_aarch64_uqaddv4si (TARGET_SIMD)
#define HAVE_aarch64_sqsubv4si (TARGET_SIMD)
#define HAVE_aarch64_uqsubv4si (TARGET_SIMD)
#define HAVE_aarch64_sqaddv2di (TARGET_SIMD)
#define HAVE_aarch64_uqaddv2di (TARGET_SIMD)
#define HAVE_aarch64_sqsubv2di (TARGET_SIMD)
#define HAVE_aarch64_uqsubv2di (TARGET_SIMD)
#define HAVE_aarch64_sqaddqi (TARGET_SIMD)
#define HAVE_aarch64_uqaddqi (TARGET_SIMD)
#define HAVE_aarch64_sqsubqi (TARGET_SIMD)
#define HAVE_aarch64_uqsubqi (TARGET_SIMD)
#define HAVE_aarch64_sqaddhi (TARGET_SIMD)
#define HAVE_aarch64_uqaddhi (TARGET_SIMD)
#define HAVE_aarch64_sqsubhi (TARGET_SIMD)
#define HAVE_aarch64_uqsubhi (TARGET_SIMD)
#define HAVE_aarch64_sqaddsi (TARGET_SIMD)
#define HAVE_aarch64_uqaddsi (TARGET_SIMD)
#define HAVE_aarch64_sqsubsi (TARGET_SIMD)
#define HAVE_aarch64_uqsubsi (TARGET_SIMD)
#define HAVE_aarch64_sqadddi (TARGET_SIMD)
#define HAVE_aarch64_uqadddi (TARGET_SIMD)
#define HAVE_aarch64_sqsubdi (TARGET_SIMD)
#define HAVE_aarch64_uqsubdi (TARGET_SIMD)
#define HAVE_aarch64_suqaddv8qi (TARGET_SIMD)
#define HAVE_aarch64_usqaddv8qi (TARGET_SIMD)
#define HAVE_aarch64_suqaddv16qi (TARGET_SIMD)
#define HAVE_aarch64_usqaddv16qi (TARGET_SIMD)
#define HAVE_aarch64_suqaddv4hi (TARGET_SIMD)
#define HAVE_aarch64_usqaddv4hi (TARGET_SIMD)
#define HAVE_aarch64_suqaddv8hi (TARGET_SIMD)
#define HAVE_aarch64_usqaddv8hi (TARGET_SIMD)
#define HAVE_aarch64_suqaddv2si (TARGET_SIMD)
#define HAVE_aarch64_usqaddv2si (TARGET_SIMD)
#define HAVE_aarch64_suqaddv4si (TARGET_SIMD)
#define HAVE_aarch64_usqaddv4si (TARGET_SIMD)
#define HAVE_aarch64_suqaddv2di (TARGET_SIMD)
#define HAVE_aarch64_usqaddv2di (TARGET_SIMD)
#define HAVE_aarch64_suqaddqi (TARGET_SIMD)
#define HAVE_aarch64_usqaddqi (TARGET_SIMD)
#define HAVE_aarch64_suqaddhi (TARGET_SIMD)
#define HAVE_aarch64_usqaddhi (TARGET_SIMD)
#define HAVE_aarch64_suqaddsi (TARGET_SIMD)
#define HAVE_aarch64_usqaddsi (TARGET_SIMD)
#define HAVE_aarch64_suqadddi (TARGET_SIMD)
#define HAVE_aarch64_usqadddi (TARGET_SIMD)
#define HAVE_aarch64_sqmovunv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqmovunv4si (TARGET_SIMD)
#define HAVE_aarch64_sqmovunv2di (TARGET_SIMD)
#define HAVE_aarch64_sqmovunhi (TARGET_SIMD)
#define HAVE_aarch64_sqmovunsi (TARGET_SIMD)
#define HAVE_aarch64_sqmovundi (TARGET_SIMD)
#define HAVE_aarch64_sqmovnv8hi (TARGET_SIMD)
#define HAVE_aarch64_uqmovnv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqmovnv4si (TARGET_SIMD)
#define HAVE_aarch64_uqmovnv4si (TARGET_SIMD)
#define HAVE_aarch64_sqmovnv2di (TARGET_SIMD)
#define HAVE_aarch64_uqmovnv2di (TARGET_SIMD)
#define HAVE_aarch64_sqmovnhi (TARGET_SIMD)
#define HAVE_aarch64_uqmovnhi (TARGET_SIMD)
#define HAVE_aarch64_sqmovnsi (TARGET_SIMD)
#define HAVE_aarch64_uqmovnsi (TARGET_SIMD)
#define HAVE_aarch64_sqmovndi (TARGET_SIMD)
#define HAVE_aarch64_uqmovndi (TARGET_SIMD)
#define HAVE_aarch64_sqnegv8qi (TARGET_SIMD)
#define HAVE_aarch64_sqabsv8qi (TARGET_SIMD)
#define HAVE_aarch64_sqnegv16qi (TARGET_SIMD)
#define HAVE_aarch64_sqabsv16qi (TARGET_SIMD)
#define HAVE_aarch64_sqnegv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqabsv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqnegv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqabsv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqnegv2si (TARGET_SIMD)
#define HAVE_aarch64_sqabsv2si (TARGET_SIMD)
#define HAVE_aarch64_sqnegv4si (TARGET_SIMD)
#define HAVE_aarch64_sqabsv4si (TARGET_SIMD)
#define HAVE_aarch64_sqnegv2di (TARGET_SIMD)
#define HAVE_aarch64_sqabsv2di (TARGET_SIMD)
#define HAVE_aarch64_sqnegqi (TARGET_SIMD)
#define HAVE_aarch64_sqabsqi (TARGET_SIMD)
#define HAVE_aarch64_sqneghi (TARGET_SIMD)
#define HAVE_aarch64_sqabshi (TARGET_SIMD)
#define HAVE_aarch64_sqnegsi (TARGET_SIMD)
#define HAVE_aarch64_sqabssi (TARGET_SIMD)
#define HAVE_aarch64_sqdmulhv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulhv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmulhv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulhv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmulhv2si (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulhv2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmulhv4si (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulhv4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmulhhi (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulhhi (TARGET_SIMD)
#define HAVE_aarch64_sqdmulhsi (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulhsi (TARGET_SIMD)
#define HAVE_aarch64_sqdmulh_lanev4hi (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulh_lanev4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmulh_lanev8hi (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulh_lanev8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmulh_lanev2si (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulh_lanev2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmulh_lanev4si (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulh_lanev4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmulh_laneqv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulh_laneqv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmulh_laneqv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulh_laneqv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmulh_laneqv2si (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulh_laneqv2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmulh_laneqv4si (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulh_laneqv4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmulh_lanehi (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulh_lanehi (TARGET_SIMD)
#define HAVE_aarch64_sqdmulh_lanesi (TARGET_SIMD)
#define HAVE_aarch64_sqrdmulh_lanesi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlalv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlslv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlalv2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlslv2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlalhi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlslhi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlalsi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlslsi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_lanev4hi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_lanev4hi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_lanev2si_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_lanev2si_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_lanehi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_lanehi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_lanesi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_lanesi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_nv2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_nv2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2v8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2v8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2v4si_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2v4si_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2_lanev8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2_lanev8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2_lanev4si_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2_lanev4si_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2_nv8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2_nv8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2_nv4si_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2_nv4si_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmullv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmullv2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmullhi (TARGET_SIMD)
#define HAVE_aarch64_sqdmullsi (TARGET_SIMD)
#define HAVE_aarch64_sqdmull_lanev4hi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmull_lanev2si_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmull_lanehi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmull_lanesi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmull_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmull_nv2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2v8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2v4si_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2_lanev8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2_lanev4si_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2_nv8hi_internal (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2_nv4si_internal (TARGET_SIMD)
#define HAVE_aarch64_sshlv8qi (TARGET_SIMD)
#define HAVE_aarch64_ushlv8qi (TARGET_SIMD)
#define HAVE_aarch64_srshlv8qi (TARGET_SIMD)
#define HAVE_aarch64_urshlv8qi (TARGET_SIMD)
#define HAVE_aarch64_sshlv16qi (TARGET_SIMD)
#define HAVE_aarch64_ushlv16qi (TARGET_SIMD)
#define HAVE_aarch64_srshlv16qi (TARGET_SIMD)
#define HAVE_aarch64_urshlv16qi (TARGET_SIMD)
#define HAVE_aarch64_sshlv4hi (TARGET_SIMD)
#define HAVE_aarch64_ushlv4hi (TARGET_SIMD)
#define HAVE_aarch64_srshlv4hi (TARGET_SIMD)
#define HAVE_aarch64_urshlv4hi (TARGET_SIMD)
#define HAVE_aarch64_sshlv8hi (TARGET_SIMD)
#define HAVE_aarch64_ushlv8hi (TARGET_SIMD)
#define HAVE_aarch64_srshlv8hi (TARGET_SIMD)
#define HAVE_aarch64_urshlv8hi (TARGET_SIMD)
#define HAVE_aarch64_sshlv2si (TARGET_SIMD)
#define HAVE_aarch64_ushlv2si (TARGET_SIMD)
#define HAVE_aarch64_srshlv2si (TARGET_SIMD)
#define HAVE_aarch64_urshlv2si (TARGET_SIMD)
#define HAVE_aarch64_sshlv4si (TARGET_SIMD)
#define HAVE_aarch64_ushlv4si (TARGET_SIMD)
#define HAVE_aarch64_srshlv4si (TARGET_SIMD)
#define HAVE_aarch64_urshlv4si (TARGET_SIMD)
#define HAVE_aarch64_sshlv2di (TARGET_SIMD)
#define HAVE_aarch64_ushlv2di (TARGET_SIMD)
#define HAVE_aarch64_srshlv2di (TARGET_SIMD)
#define HAVE_aarch64_urshlv2di (TARGET_SIMD)
#define HAVE_aarch64_sshldi (TARGET_SIMD)
#define HAVE_aarch64_ushldi (TARGET_SIMD)
#define HAVE_aarch64_srshldi (TARGET_SIMD)
#define HAVE_aarch64_urshldi (TARGET_SIMD)
#define HAVE_aarch64_sqshlv8qi (TARGET_SIMD)
#define HAVE_aarch64_uqshlv8qi (TARGET_SIMD)
#define HAVE_aarch64_sqrshlv8qi (TARGET_SIMD)
#define HAVE_aarch64_uqrshlv8qi (TARGET_SIMD)
#define HAVE_aarch64_sqshlv16qi (TARGET_SIMD)
#define HAVE_aarch64_uqshlv16qi (TARGET_SIMD)
#define HAVE_aarch64_sqrshlv16qi (TARGET_SIMD)
#define HAVE_aarch64_uqrshlv16qi (TARGET_SIMD)
#define HAVE_aarch64_sqshlv4hi (TARGET_SIMD)
#define HAVE_aarch64_uqshlv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqrshlv4hi (TARGET_SIMD)
#define HAVE_aarch64_uqrshlv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqshlv8hi (TARGET_SIMD)
#define HAVE_aarch64_uqshlv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqrshlv8hi (TARGET_SIMD)
#define HAVE_aarch64_uqrshlv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqshlv2si (TARGET_SIMD)
#define HAVE_aarch64_uqshlv2si (TARGET_SIMD)
#define HAVE_aarch64_sqrshlv2si (TARGET_SIMD)
#define HAVE_aarch64_uqrshlv2si (TARGET_SIMD)
#define HAVE_aarch64_sqshlv4si (TARGET_SIMD)
#define HAVE_aarch64_uqshlv4si (TARGET_SIMD)
#define HAVE_aarch64_sqrshlv4si (TARGET_SIMD)
#define HAVE_aarch64_uqrshlv4si (TARGET_SIMD)
#define HAVE_aarch64_sqshlv2di (TARGET_SIMD)
#define HAVE_aarch64_uqshlv2di (TARGET_SIMD)
#define HAVE_aarch64_sqrshlv2di (TARGET_SIMD)
#define HAVE_aarch64_uqrshlv2di (TARGET_SIMD)
#define HAVE_aarch64_sqshlqi (TARGET_SIMD)
#define HAVE_aarch64_uqshlqi (TARGET_SIMD)
#define HAVE_aarch64_sqrshlqi (TARGET_SIMD)
#define HAVE_aarch64_uqrshlqi (TARGET_SIMD)
#define HAVE_aarch64_sqshlhi (TARGET_SIMD)
#define HAVE_aarch64_uqshlhi (TARGET_SIMD)
#define HAVE_aarch64_sqrshlhi (TARGET_SIMD)
#define HAVE_aarch64_uqrshlhi (TARGET_SIMD)
#define HAVE_aarch64_sqshlsi (TARGET_SIMD)
#define HAVE_aarch64_uqshlsi (TARGET_SIMD)
#define HAVE_aarch64_sqrshlsi (TARGET_SIMD)
#define HAVE_aarch64_uqrshlsi (TARGET_SIMD)
#define HAVE_aarch64_sqshldi (TARGET_SIMD)
#define HAVE_aarch64_uqshldi (TARGET_SIMD)
#define HAVE_aarch64_sqrshldi (TARGET_SIMD)
#define HAVE_aarch64_uqrshldi (TARGET_SIMD)
#define HAVE_aarch64_sshll_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_ushll_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_sshll_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_ushll_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_sshll_nv2si (TARGET_SIMD)
#define HAVE_aarch64_ushll_nv2si (TARGET_SIMD)
#define HAVE_aarch64_sshll2_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_ushll2_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_sshll2_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_ushll2_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_sshll2_nv4si (TARGET_SIMD)
#define HAVE_aarch64_ushll2_nv4si (TARGET_SIMD)
#define HAVE_aarch64_srshr_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_urshr_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_srshr_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_urshr_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_srshr_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_urshr_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_srshr_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_urshr_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_srshr_nv2si (TARGET_SIMD)
#define HAVE_aarch64_urshr_nv2si (TARGET_SIMD)
#define HAVE_aarch64_srshr_nv4si (TARGET_SIMD)
#define HAVE_aarch64_urshr_nv4si (TARGET_SIMD)
#define HAVE_aarch64_srshr_nv2di (TARGET_SIMD)
#define HAVE_aarch64_urshr_nv2di (TARGET_SIMD)
#define HAVE_aarch64_srshr_ndi (TARGET_SIMD)
#define HAVE_aarch64_urshr_ndi (TARGET_SIMD)
#define HAVE_aarch64_ssra_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_usra_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_srsra_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_ursra_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_ssra_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_usra_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_srsra_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_ursra_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_ssra_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_usra_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_srsra_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_ursra_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_ssra_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_usra_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_srsra_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_ursra_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_ssra_nv2si (TARGET_SIMD)
#define HAVE_aarch64_usra_nv2si (TARGET_SIMD)
#define HAVE_aarch64_srsra_nv2si (TARGET_SIMD)
#define HAVE_aarch64_ursra_nv2si (TARGET_SIMD)
#define HAVE_aarch64_ssra_nv4si (TARGET_SIMD)
#define HAVE_aarch64_usra_nv4si (TARGET_SIMD)
#define HAVE_aarch64_srsra_nv4si (TARGET_SIMD)
#define HAVE_aarch64_ursra_nv4si (TARGET_SIMD)
#define HAVE_aarch64_ssra_nv2di (TARGET_SIMD)
#define HAVE_aarch64_usra_nv2di (TARGET_SIMD)
#define HAVE_aarch64_srsra_nv2di (TARGET_SIMD)
#define HAVE_aarch64_ursra_nv2di (TARGET_SIMD)
#define HAVE_aarch64_ssra_ndi (TARGET_SIMD)
#define HAVE_aarch64_usra_ndi (TARGET_SIMD)
#define HAVE_aarch64_srsra_ndi (TARGET_SIMD)
#define HAVE_aarch64_ursra_ndi (TARGET_SIMD)
#define HAVE_aarch64_ssli_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_usli_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_ssri_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_usri_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_ssli_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_usli_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_ssri_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_usri_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_ssli_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_usli_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_ssri_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_usri_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_ssli_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_usli_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_ssri_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_usri_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_ssli_nv2si (TARGET_SIMD)
#define HAVE_aarch64_usli_nv2si (TARGET_SIMD)
#define HAVE_aarch64_ssri_nv2si (TARGET_SIMD)
#define HAVE_aarch64_usri_nv2si (TARGET_SIMD)
#define HAVE_aarch64_ssli_nv4si (TARGET_SIMD)
#define HAVE_aarch64_usli_nv4si (TARGET_SIMD)
#define HAVE_aarch64_ssri_nv4si (TARGET_SIMD)
#define HAVE_aarch64_usri_nv4si (TARGET_SIMD)
#define HAVE_aarch64_ssli_nv2di (TARGET_SIMD)
#define HAVE_aarch64_usli_nv2di (TARGET_SIMD)
#define HAVE_aarch64_ssri_nv2di (TARGET_SIMD)
#define HAVE_aarch64_usri_nv2di (TARGET_SIMD)
#define HAVE_aarch64_ssli_ndi (TARGET_SIMD)
#define HAVE_aarch64_usli_ndi (TARGET_SIMD)
#define HAVE_aarch64_ssri_ndi (TARGET_SIMD)
#define HAVE_aarch64_usri_ndi (TARGET_SIMD)
#define HAVE_aarch64_sqshlu_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_sqshl_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_uqshl_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_sqshlu_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_sqshl_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_uqshl_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_sqshlu_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqshl_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_uqshl_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqshlu_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqshl_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_uqshl_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqshlu_nv2si (TARGET_SIMD)
#define HAVE_aarch64_sqshl_nv2si (TARGET_SIMD)
#define HAVE_aarch64_uqshl_nv2si (TARGET_SIMD)
#define HAVE_aarch64_sqshlu_nv4si (TARGET_SIMD)
#define HAVE_aarch64_sqshl_nv4si (TARGET_SIMD)
#define HAVE_aarch64_uqshl_nv4si (TARGET_SIMD)
#define HAVE_aarch64_sqshlu_nv2di (TARGET_SIMD)
#define HAVE_aarch64_sqshl_nv2di (TARGET_SIMD)
#define HAVE_aarch64_uqshl_nv2di (TARGET_SIMD)
#define HAVE_aarch64_sqshlu_nqi (TARGET_SIMD)
#define HAVE_aarch64_sqshl_nqi (TARGET_SIMD)
#define HAVE_aarch64_uqshl_nqi (TARGET_SIMD)
#define HAVE_aarch64_sqshlu_nhi (TARGET_SIMD)
#define HAVE_aarch64_sqshl_nhi (TARGET_SIMD)
#define HAVE_aarch64_uqshl_nhi (TARGET_SIMD)
#define HAVE_aarch64_sqshlu_nsi (TARGET_SIMD)
#define HAVE_aarch64_sqshl_nsi (TARGET_SIMD)
#define HAVE_aarch64_uqshl_nsi (TARGET_SIMD)
#define HAVE_aarch64_sqshlu_ndi (TARGET_SIMD)
#define HAVE_aarch64_sqshl_ndi (TARGET_SIMD)
#define HAVE_aarch64_uqshl_ndi (TARGET_SIMD)
#define HAVE_aarch64_sqshrun_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqrshrun_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqshrn_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_uqshrn_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqrshrn_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_uqrshrn_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqshrun_nv4si (TARGET_SIMD)
#define HAVE_aarch64_sqrshrun_nv4si (TARGET_SIMD)
#define HAVE_aarch64_sqshrn_nv4si (TARGET_SIMD)
#define HAVE_aarch64_uqshrn_nv4si (TARGET_SIMD)
#define HAVE_aarch64_sqrshrn_nv4si (TARGET_SIMD)
#define HAVE_aarch64_uqrshrn_nv4si (TARGET_SIMD)
#define HAVE_aarch64_sqshrun_nv2di (TARGET_SIMD)
#define HAVE_aarch64_sqrshrun_nv2di (TARGET_SIMD)
#define HAVE_aarch64_sqshrn_nv2di (TARGET_SIMD)
#define HAVE_aarch64_uqshrn_nv2di (TARGET_SIMD)
#define HAVE_aarch64_sqrshrn_nv2di (TARGET_SIMD)
#define HAVE_aarch64_uqrshrn_nv2di (TARGET_SIMD)
#define HAVE_aarch64_sqshrun_nhi (TARGET_SIMD)
#define HAVE_aarch64_sqrshrun_nhi (TARGET_SIMD)
#define HAVE_aarch64_sqshrn_nhi (TARGET_SIMD)
#define HAVE_aarch64_uqshrn_nhi (TARGET_SIMD)
#define HAVE_aarch64_sqrshrn_nhi (TARGET_SIMD)
#define HAVE_aarch64_uqrshrn_nhi (TARGET_SIMD)
#define HAVE_aarch64_sqshrun_nsi (TARGET_SIMD)
#define HAVE_aarch64_sqrshrun_nsi (TARGET_SIMD)
#define HAVE_aarch64_sqshrn_nsi (TARGET_SIMD)
#define HAVE_aarch64_uqshrn_nsi (TARGET_SIMD)
#define HAVE_aarch64_sqrshrn_nsi (TARGET_SIMD)
#define HAVE_aarch64_uqrshrn_nsi (TARGET_SIMD)
#define HAVE_aarch64_sqshrun_ndi (TARGET_SIMD)
#define HAVE_aarch64_sqrshrun_ndi (TARGET_SIMD)
#define HAVE_aarch64_sqshrn_ndi (TARGET_SIMD)
#define HAVE_aarch64_uqshrn_ndi (TARGET_SIMD)
#define HAVE_aarch64_sqrshrn_ndi (TARGET_SIMD)
#define HAVE_aarch64_uqrshrn_ndi (TARGET_SIMD)
#define HAVE_aarch64_cmltv8qi (TARGET_SIMD)
#define HAVE_aarch64_cmlev8qi (TARGET_SIMD)
#define HAVE_aarch64_cmeqv8qi (TARGET_SIMD)
#define HAVE_aarch64_cmgev8qi (TARGET_SIMD)
#define HAVE_aarch64_cmgtv8qi (TARGET_SIMD)
#define HAVE_aarch64_cmltv16qi (TARGET_SIMD)
#define HAVE_aarch64_cmlev16qi (TARGET_SIMD)
#define HAVE_aarch64_cmeqv16qi (TARGET_SIMD)
#define HAVE_aarch64_cmgev16qi (TARGET_SIMD)
#define HAVE_aarch64_cmgtv16qi (TARGET_SIMD)
#define HAVE_aarch64_cmltv4hi (TARGET_SIMD)
#define HAVE_aarch64_cmlev4hi (TARGET_SIMD)
#define HAVE_aarch64_cmeqv4hi (TARGET_SIMD)
#define HAVE_aarch64_cmgev4hi (TARGET_SIMD)
#define HAVE_aarch64_cmgtv4hi (TARGET_SIMD)
#define HAVE_aarch64_cmltv8hi (TARGET_SIMD)
#define HAVE_aarch64_cmlev8hi (TARGET_SIMD)
#define HAVE_aarch64_cmeqv8hi (TARGET_SIMD)
#define HAVE_aarch64_cmgev8hi (TARGET_SIMD)
#define HAVE_aarch64_cmgtv8hi (TARGET_SIMD)
#define HAVE_aarch64_cmltv2si (TARGET_SIMD)
#define HAVE_aarch64_cmlev2si (TARGET_SIMD)
#define HAVE_aarch64_cmeqv2si (TARGET_SIMD)
#define HAVE_aarch64_cmgev2si (TARGET_SIMD)
#define HAVE_aarch64_cmgtv2si (TARGET_SIMD)
#define HAVE_aarch64_cmltv4si (TARGET_SIMD)
#define HAVE_aarch64_cmlev4si (TARGET_SIMD)
#define HAVE_aarch64_cmeqv4si (TARGET_SIMD)
#define HAVE_aarch64_cmgev4si (TARGET_SIMD)
#define HAVE_aarch64_cmgtv4si (TARGET_SIMD)
#define HAVE_aarch64_cmltv2di (TARGET_SIMD)
#define HAVE_aarch64_cmlev2di (TARGET_SIMD)
#define HAVE_aarch64_cmeqv2di (TARGET_SIMD)
#define HAVE_aarch64_cmgev2di (TARGET_SIMD)
#define HAVE_aarch64_cmgtv2di (TARGET_SIMD)
#define HAVE_aarch64_cmltdi (TARGET_SIMD)
#define HAVE_aarch64_cmledi (TARGET_SIMD)
#define HAVE_aarch64_cmeqdi (TARGET_SIMD)
#define HAVE_aarch64_cmgedi (TARGET_SIMD)
#define HAVE_aarch64_cmgtdi (TARGET_SIMD)
#define HAVE_aarch64_cmltuv8qi (TARGET_SIMD)
#define HAVE_aarch64_cmleuv8qi (TARGET_SIMD)
#define HAVE_aarch64_cmgeuv8qi (TARGET_SIMD)
#define HAVE_aarch64_cmgtuv8qi (TARGET_SIMD)
#define HAVE_aarch64_cmltuv16qi (TARGET_SIMD)
#define HAVE_aarch64_cmleuv16qi (TARGET_SIMD)
#define HAVE_aarch64_cmgeuv16qi (TARGET_SIMD)
#define HAVE_aarch64_cmgtuv16qi (TARGET_SIMD)
#define HAVE_aarch64_cmltuv4hi (TARGET_SIMD)
#define HAVE_aarch64_cmleuv4hi (TARGET_SIMD)
#define HAVE_aarch64_cmgeuv4hi (TARGET_SIMD)
#define HAVE_aarch64_cmgtuv4hi (TARGET_SIMD)
#define HAVE_aarch64_cmltuv8hi (TARGET_SIMD)
#define HAVE_aarch64_cmleuv8hi (TARGET_SIMD)
#define HAVE_aarch64_cmgeuv8hi (TARGET_SIMD)
#define HAVE_aarch64_cmgtuv8hi (TARGET_SIMD)
#define HAVE_aarch64_cmltuv2si (TARGET_SIMD)
#define HAVE_aarch64_cmleuv2si (TARGET_SIMD)
#define HAVE_aarch64_cmgeuv2si (TARGET_SIMD)
#define HAVE_aarch64_cmgtuv2si (TARGET_SIMD)
#define HAVE_aarch64_cmltuv4si (TARGET_SIMD)
#define HAVE_aarch64_cmleuv4si (TARGET_SIMD)
#define HAVE_aarch64_cmgeuv4si (TARGET_SIMD)
#define HAVE_aarch64_cmgtuv4si (TARGET_SIMD)
#define HAVE_aarch64_cmltuv2di (TARGET_SIMD)
#define HAVE_aarch64_cmleuv2di (TARGET_SIMD)
#define HAVE_aarch64_cmgeuv2di (TARGET_SIMD)
#define HAVE_aarch64_cmgtuv2di (TARGET_SIMD)
#define HAVE_aarch64_cmltudi (TARGET_SIMD)
#define HAVE_aarch64_cmleudi (TARGET_SIMD)
#define HAVE_aarch64_cmgeudi (TARGET_SIMD)
#define HAVE_aarch64_cmgtudi (TARGET_SIMD)
#define HAVE_aarch64_cmtstv8qi (TARGET_SIMD)
#define HAVE_aarch64_cmtstv16qi (TARGET_SIMD)
#define HAVE_aarch64_cmtstv4hi (TARGET_SIMD)
#define HAVE_aarch64_cmtstv8hi (TARGET_SIMD)
#define HAVE_aarch64_cmtstv2si (TARGET_SIMD)
#define HAVE_aarch64_cmtstv4si (TARGET_SIMD)
#define HAVE_aarch64_cmtstv2di (TARGET_SIMD)
#define HAVE_aarch64_cmtstdi (TARGET_SIMD)
#define HAVE_aarch64_cmltv2sf (TARGET_SIMD)
#define HAVE_aarch64_cmlev2sf (TARGET_SIMD)
#define HAVE_aarch64_cmeqv2sf (TARGET_SIMD)
#define HAVE_aarch64_cmgev2sf (TARGET_SIMD)
#define HAVE_aarch64_cmgtv2sf (TARGET_SIMD)
#define HAVE_aarch64_cmltv4sf (TARGET_SIMD)
#define HAVE_aarch64_cmlev4sf (TARGET_SIMD)
#define HAVE_aarch64_cmeqv4sf (TARGET_SIMD)
#define HAVE_aarch64_cmgev4sf (TARGET_SIMD)
#define HAVE_aarch64_cmgtv4sf (TARGET_SIMD)
#define HAVE_aarch64_cmltv2df (TARGET_SIMD)
#define HAVE_aarch64_cmlev2df (TARGET_SIMD)
#define HAVE_aarch64_cmeqv2df (TARGET_SIMD)
#define HAVE_aarch64_cmgev2df (TARGET_SIMD)
#define HAVE_aarch64_cmgtv2df (TARGET_SIMD)
#define HAVE_aarch64_cmltsf (TARGET_SIMD)
#define HAVE_aarch64_cmlesf (TARGET_SIMD)
#define HAVE_aarch64_cmeqsf (TARGET_SIMD)
#define HAVE_aarch64_cmgesf (TARGET_SIMD)
#define HAVE_aarch64_cmgtsf (TARGET_SIMD)
#define HAVE_aarch64_cmltdf (TARGET_SIMD)
#define HAVE_aarch64_cmledf (TARGET_SIMD)
#define HAVE_aarch64_cmeqdf (TARGET_SIMD)
#define HAVE_aarch64_cmgedf (TARGET_SIMD)
#define HAVE_aarch64_cmgtdf (TARGET_SIMD)
#define HAVE_aarch64_addpv8qi (TARGET_SIMD)
#define HAVE_aarch64_addpv4hi (TARGET_SIMD)
#define HAVE_aarch64_addpv2si (TARGET_SIMD)
#define HAVE_aarch64_addpdi (TARGET_SIMD)
#define HAVE_aarch64_fmaxv2sf (TARGET_SIMD)
#define HAVE_aarch64_fminv2sf (TARGET_SIMD)
#define HAVE_aarch64_fmaxv4sf (TARGET_SIMD)
#define HAVE_aarch64_fminv4sf (TARGET_SIMD)
#define HAVE_aarch64_fmaxv2df (TARGET_SIMD)
#define HAVE_aarch64_fminv2df (TARGET_SIMD)
#define HAVE_sqrtv2sf2 (TARGET_SIMD)
#define HAVE_sqrtv4sf2 (TARGET_SIMD)
#define HAVE_sqrtv2df2 (TARGET_SIMD)
#define HAVE_vec_load_lanesoiv16qi (TARGET_SIMD)
#define HAVE_vec_load_lanesoiv8hi (TARGET_SIMD)
#define HAVE_vec_load_lanesoiv4si (TARGET_SIMD)
#define HAVE_vec_load_lanesoiv2di (TARGET_SIMD)
#define HAVE_vec_load_lanesoiv4sf (TARGET_SIMD)
#define HAVE_vec_load_lanesoiv2df (TARGET_SIMD)
#define HAVE_vec_store_lanesoiv16qi (TARGET_SIMD)
#define HAVE_vec_store_lanesoiv8hi (TARGET_SIMD)
#define HAVE_vec_store_lanesoiv4si (TARGET_SIMD)
#define HAVE_vec_store_lanesoiv2di (TARGET_SIMD)
#define HAVE_vec_store_lanesoiv4sf (TARGET_SIMD)
#define HAVE_vec_store_lanesoiv2df (TARGET_SIMD)
#define HAVE_vec_load_lanesciv16qi (TARGET_SIMD)
#define HAVE_vec_load_lanesciv8hi (TARGET_SIMD)
#define HAVE_vec_load_lanesciv4si (TARGET_SIMD)
#define HAVE_vec_load_lanesciv2di (TARGET_SIMD)
#define HAVE_vec_load_lanesciv4sf (TARGET_SIMD)
#define HAVE_vec_load_lanesciv2df (TARGET_SIMD)
#define HAVE_vec_store_lanesciv16qi (TARGET_SIMD)
#define HAVE_vec_store_lanesciv8hi (TARGET_SIMD)
#define HAVE_vec_store_lanesciv4si (TARGET_SIMD)
#define HAVE_vec_store_lanesciv2di (TARGET_SIMD)
#define HAVE_vec_store_lanesciv4sf (TARGET_SIMD)
#define HAVE_vec_store_lanesciv2df (TARGET_SIMD)
#define HAVE_vec_load_lanesxiv16qi (TARGET_SIMD)
#define HAVE_vec_load_lanesxiv8hi (TARGET_SIMD)
#define HAVE_vec_load_lanesxiv4si (TARGET_SIMD)
#define HAVE_vec_load_lanesxiv2di (TARGET_SIMD)
#define HAVE_vec_load_lanesxiv4sf (TARGET_SIMD)
#define HAVE_vec_load_lanesxiv2df (TARGET_SIMD)
#define HAVE_vec_store_lanesxiv16qi (TARGET_SIMD)
#define HAVE_vec_store_lanesxiv8hi (TARGET_SIMD)
#define HAVE_vec_store_lanesxiv4si (TARGET_SIMD)
#define HAVE_vec_store_lanesxiv2di (TARGET_SIMD)
#define HAVE_vec_store_lanesxiv4sf (TARGET_SIMD)
#define HAVE_vec_store_lanesxiv2df (TARGET_SIMD)
#define HAVE_aarch64_ld2v8qi_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld2v4hi_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld2v2si_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld2v2sf_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld2di_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld2df_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld3v8qi_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld3v4hi_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld3v2si_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld3v2sf_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld3di_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld3df_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld4v8qi_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld4v4hi_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld4v2si_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld4v2sf_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld4di_dreg (TARGET_SIMD)
#define HAVE_aarch64_ld4df_dreg (TARGET_SIMD)
#define HAVE_aarch64_tbl1v8qi (TARGET_SIMD)
#define HAVE_aarch64_tbl1v16qi (TARGET_SIMD)
#define HAVE_aarch64_tbl2v16qi (TARGET_SIMD)
#define HAVE_aarch64_combinev16qi (TARGET_SIMD)
#define HAVE_aarch64_zip1v8qi (TARGET_SIMD)
#define HAVE_aarch64_zip2v8qi (TARGET_SIMD)
#define HAVE_aarch64_trn1v8qi (TARGET_SIMD)
#define HAVE_aarch64_trn2v8qi (TARGET_SIMD)
#define HAVE_aarch64_uzp1v8qi (TARGET_SIMD)
#define HAVE_aarch64_uzp2v8qi (TARGET_SIMD)
#define HAVE_aarch64_zip1v16qi (TARGET_SIMD)
#define HAVE_aarch64_zip2v16qi (TARGET_SIMD)
#define HAVE_aarch64_trn1v16qi (TARGET_SIMD)
#define HAVE_aarch64_trn2v16qi (TARGET_SIMD)
#define HAVE_aarch64_uzp1v16qi (TARGET_SIMD)
#define HAVE_aarch64_uzp2v16qi (TARGET_SIMD)
#define HAVE_aarch64_zip1v4hi (TARGET_SIMD)
#define HAVE_aarch64_zip2v4hi (TARGET_SIMD)
#define HAVE_aarch64_trn1v4hi (TARGET_SIMD)
#define HAVE_aarch64_trn2v4hi (TARGET_SIMD)
#define HAVE_aarch64_uzp1v4hi (TARGET_SIMD)
#define HAVE_aarch64_uzp2v4hi (TARGET_SIMD)
#define HAVE_aarch64_zip1v8hi (TARGET_SIMD)
#define HAVE_aarch64_zip2v8hi (TARGET_SIMD)
#define HAVE_aarch64_trn1v8hi (TARGET_SIMD)
#define HAVE_aarch64_trn2v8hi (TARGET_SIMD)
#define HAVE_aarch64_uzp1v8hi (TARGET_SIMD)
#define HAVE_aarch64_uzp2v8hi (TARGET_SIMD)
#define HAVE_aarch64_zip1v2si (TARGET_SIMD)
#define HAVE_aarch64_zip2v2si (TARGET_SIMD)
#define HAVE_aarch64_trn1v2si (TARGET_SIMD)
#define HAVE_aarch64_trn2v2si (TARGET_SIMD)
#define HAVE_aarch64_uzp1v2si (TARGET_SIMD)
#define HAVE_aarch64_uzp2v2si (TARGET_SIMD)
#define HAVE_aarch64_zip1v4si (TARGET_SIMD)
#define HAVE_aarch64_zip2v4si (TARGET_SIMD)
#define HAVE_aarch64_trn1v4si (TARGET_SIMD)
#define HAVE_aarch64_trn2v4si (TARGET_SIMD)
#define HAVE_aarch64_uzp1v4si (TARGET_SIMD)
#define HAVE_aarch64_uzp2v4si (TARGET_SIMD)
#define HAVE_aarch64_zip1v2di (TARGET_SIMD)
#define HAVE_aarch64_zip2v2di (TARGET_SIMD)
#define HAVE_aarch64_trn1v2di (TARGET_SIMD)
#define HAVE_aarch64_trn2v2di (TARGET_SIMD)
#define HAVE_aarch64_uzp1v2di (TARGET_SIMD)
#define HAVE_aarch64_uzp2v2di (TARGET_SIMD)
#define HAVE_aarch64_zip1v2sf (TARGET_SIMD)
#define HAVE_aarch64_zip2v2sf (TARGET_SIMD)
#define HAVE_aarch64_trn1v2sf (TARGET_SIMD)
#define HAVE_aarch64_trn2v2sf (TARGET_SIMD)
#define HAVE_aarch64_uzp1v2sf (TARGET_SIMD)
#define HAVE_aarch64_uzp2v2sf (TARGET_SIMD)
#define HAVE_aarch64_zip1v4sf (TARGET_SIMD)
#define HAVE_aarch64_zip2v4sf (TARGET_SIMD)
#define HAVE_aarch64_trn1v4sf (TARGET_SIMD)
#define HAVE_aarch64_trn2v4sf (TARGET_SIMD)
#define HAVE_aarch64_uzp1v4sf (TARGET_SIMD)
#define HAVE_aarch64_uzp2v4sf (TARGET_SIMD)
#define HAVE_aarch64_zip1v2df (TARGET_SIMD)
#define HAVE_aarch64_zip2v2df (TARGET_SIMD)
#define HAVE_aarch64_trn1v2df (TARGET_SIMD)
#define HAVE_aarch64_trn2v2df (TARGET_SIMD)
#define HAVE_aarch64_uzp1v2df (TARGET_SIMD)
#define HAVE_aarch64_uzp2v2df (TARGET_SIMD)
#define HAVE_aarch64_st2v8qi_dreg (TARGET_SIMD)
#define HAVE_aarch64_st2v4hi_dreg (TARGET_SIMD)
#define HAVE_aarch64_st2v2si_dreg (TARGET_SIMD)
#define HAVE_aarch64_st2v2sf_dreg (TARGET_SIMD)
#define HAVE_aarch64_st2di_dreg (TARGET_SIMD)
#define HAVE_aarch64_st2df_dreg (TARGET_SIMD)
#define HAVE_aarch64_st3v8qi_dreg (TARGET_SIMD)
#define HAVE_aarch64_st3v4hi_dreg (TARGET_SIMD)
#define HAVE_aarch64_st3v2si_dreg (TARGET_SIMD)
#define HAVE_aarch64_st3v2sf_dreg (TARGET_SIMD)
#define HAVE_aarch64_st3di_dreg (TARGET_SIMD)
#define HAVE_aarch64_st3df_dreg (TARGET_SIMD)
#define HAVE_aarch64_st4v8qi_dreg (TARGET_SIMD)
#define HAVE_aarch64_st4v4hi_dreg (TARGET_SIMD)
#define HAVE_aarch64_st4v2si_dreg (TARGET_SIMD)
#define HAVE_aarch64_st4v2sf_dreg (TARGET_SIMD)
#define HAVE_aarch64_st4di_dreg (TARGET_SIMD)
#define HAVE_aarch64_st4df_dreg (TARGET_SIMD)
#define HAVE_atomic_compare_and_swapqi_1 1
#define HAVE_atomic_compare_and_swaphi_1 1
#define HAVE_atomic_compare_and_swapsi_1 1
#define HAVE_atomic_compare_and_swapdi_1 1
#define HAVE_atomic_exchangeqi 1
#define HAVE_atomic_exchangehi 1
#define HAVE_atomic_exchangesi 1
#define HAVE_atomic_exchangedi 1
#define HAVE_atomic_addqi 1
#define HAVE_atomic_subqi 1
#define HAVE_atomic_orqi 1
#define HAVE_atomic_xorqi 1
#define HAVE_atomic_andqi 1
#define HAVE_atomic_addhi 1
#define HAVE_atomic_subhi 1
#define HAVE_atomic_orhi 1
#define HAVE_atomic_xorhi 1
#define HAVE_atomic_andhi 1
#define HAVE_atomic_addsi 1
#define HAVE_atomic_subsi 1
#define HAVE_atomic_orsi 1
#define HAVE_atomic_xorsi 1
#define HAVE_atomic_andsi 1
#define HAVE_atomic_adddi 1
#define HAVE_atomic_subdi 1
#define HAVE_atomic_ordi 1
#define HAVE_atomic_xordi 1
#define HAVE_atomic_anddi 1
#define HAVE_atomic_nandqi 1
#define HAVE_atomic_nandhi 1
#define HAVE_atomic_nandsi 1
#define HAVE_atomic_nanddi 1
#define HAVE_atomic_fetch_addqi 1
#define HAVE_atomic_fetch_subqi 1
#define HAVE_atomic_fetch_orqi 1
#define HAVE_atomic_fetch_xorqi 1
#define HAVE_atomic_fetch_andqi 1
#define HAVE_atomic_fetch_addhi 1
#define HAVE_atomic_fetch_subhi 1
#define HAVE_atomic_fetch_orhi 1
#define HAVE_atomic_fetch_xorhi 1
#define HAVE_atomic_fetch_andhi 1
#define HAVE_atomic_fetch_addsi 1
#define HAVE_atomic_fetch_subsi 1
#define HAVE_atomic_fetch_orsi 1
#define HAVE_atomic_fetch_xorsi 1
#define HAVE_atomic_fetch_andsi 1
#define HAVE_atomic_fetch_adddi 1
#define HAVE_atomic_fetch_subdi 1
#define HAVE_atomic_fetch_ordi 1
#define HAVE_atomic_fetch_xordi 1
#define HAVE_atomic_fetch_anddi 1
#define HAVE_atomic_fetch_nandqi 1
#define HAVE_atomic_fetch_nandhi 1
#define HAVE_atomic_fetch_nandsi 1
#define HAVE_atomic_fetch_nanddi 1
#define HAVE_atomic_add_fetchqi 1
#define HAVE_atomic_sub_fetchqi 1
#define HAVE_atomic_or_fetchqi 1
#define HAVE_atomic_xor_fetchqi 1
#define HAVE_atomic_and_fetchqi 1
#define HAVE_atomic_add_fetchhi 1
#define HAVE_atomic_sub_fetchhi 1
#define HAVE_atomic_or_fetchhi 1
#define HAVE_atomic_xor_fetchhi 1
#define HAVE_atomic_and_fetchhi 1
#define HAVE_atomic_add_fetchsi 1
#define HAVE_atomic_sub_fetchsi 1
#define HAVE_atomic_or_fetchsi 1
#define HAVE_atomic_xor_fetchsi 1
#define HAVE_atomic_and_fetchsi 1
#define HAVE_atomic_add_fetchdi 1
#define HAVE_atomic_sub_fetchdi 1
#define HAVE_atomic_or_fetchdi 1
#define HAVE_atomic_xor_fetchdi 1
#define HAVE_atomic_and_fetchdi 1
#define HAVE_atomic_nand_fetchqi 1
#define HAVE_atomic_nand_fetchhi 1
#define HAVE_atomic_nand_fetchsi 1
#define HAVE_atomic_nand_fetchdi 1
#define HAVE_atomic_loadqi 1
#define HAVE_atomic_loadhi 1
#define HAVE_atomic_loadsi 1
#define HAVE_atomic_loaddi 1
#define HAVE_atomic_storeqi 1
#define HAVE_atomic_storehi 1
#define HAVE_atomic_storesi 1
#define HAVE_atomic_storedi 1
#define HAVE_aarch64_load_exclusiveqi 1
#define HAVE_aarch64_load_exclusivehi 1
#define HAVE_aarch64_load_exclusivesi 1
#define HAVE_aarch64_load_exclusivedi 1
#define HAVE_aarch64_store_exclusiveqi 1
#define HAVE_aarch64_store_exclusivehi 1
#define HAVE_aarch64_store_exclusivesi 1
#define HAVE_aarch64_store_exclusivedi 1
#define HAVE_cbranchsi4 1
#define HAVE_cbranchdi4 1
#define HAVE_cbranchsf4 1
#define HAVE_cbranchdf4 1
#define HAVE_casesi 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_sibcall 1
#define HAVE_sibcall_value 1
#define HAVE_untyped_call 1
#define HAVE_movqi 1
#define HAVE_movhi 1
#define HAVE_movsi 1
#define HAVE_movdi 1
#define HAVE_movti 1
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_movtf 1
#define HAVE_extendsidi2 1
#define HAVE_zero_extendsidi2 1
#define HAVE_extendqisi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_extendhisi2 1
#define HAVE_zero_extendhisi2 1
#define HAVE_extendqidi2 1
#define HAVE_zero_extendqidi2 1
#define HAVE_extendhidi2 1
#define HAVE_zero_extendhidi2 1
#define HAVE_extendqihi2 1
#define HAVE_zero_extendqihi2 1
#define HAVE_addsi3 1
#define HAVE_adddi3 1
#define HAVE_cstoresi4 1
#define HAVE_cstoredi4 1
#define HAVE_cstoresf4 1
#define HAVE_cstoredf4 1
#define HAVE_cmovsi6 1
#define HAVE_cmovdi6 1
#define HAVE_cmovsf6 1
#define HAVE_cmovdf6 1
#define HAVE_movqicc 1
#define HAVE_movhicc 1
#define HAVE_movsicc 1
#define HAVE_movdicc 1
#define HAVE_movsfsicc 1
#define HAVE_movsfdicc 1
#define HAVE_movdfsicc 1
#define HAVE_movdfdicc 1
#define HAVE_ffssi2 1
#define HAVE_ffsdi2 1
#define HAVE_ctzsi2 1
#define HAVE_ctzdi2 1
#define HAVE_ashlsi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashldi3 1
#define HAVE_ashrdi3 1
#define HAVE_lshrdi3 1
#define HAVE_ashlqi3 1
#define HAVE_ashlhi3 1
#define HAVE_rotrsi3 1
#define HAVE_rotrdi3 1
#define HAVE_rotlsi3 1
#define HAVE_rotldi3 1
#define HAVE_extv 1
#define HAVE_extzv 1
#define HAVE_reload_sp_immediate 1
#define HAVE_aarch64_reload_movti 1
#define HAVE_aarch64_reload_movtf 1
#define HAVE_tlsgd_small 1
#define HAVE_get_thread_pointerdi 1
#define HAVE_movv8qi (TARGET_SIMD)
#define HAVE_movv16qi (TARGET_SIMD)
#define HAVE_movv4hi (TARGET_SIMD)
#define HAVE_movv8hi (TARGET_SIMD)
#define HAVE_movv2si (TARGET_SIMD)
#define HAVE_movv4si (TARGET_SIMD)
#define HAVE_movv2di (TARGET_SIMD)
#define HAVE_movv2sf (TARGET_SIMD)
#define HAVE_movv4sf (TARGET_SIMD)
#define HAVE_movv2df (TARGET_SIMD)
#define HAVE_movmisalignv8qi (TARGET_SIMD)
#define HAVE_movmisalignv16qi (TARGET_SIMD)
#define HAVE_movmisalignv4hi (TARGET_SIMD)
#define HAVE_movmisalignv8hi (TARGET_SIMD)
#define HAVE_movmisalignv2si (TARGET_SIMD)
#define HAVE_movmisalignv4si (TARGET_SIMD)
#define HAVE_movmisalignv2di (TARGET_SIMD)
#define HAVE_movmisalignv2sf (TARGET_SIMD)
#define HAVE_movmisalignv4sf (TARGET_SIMD)
#define HAVE_movmisalignv2df (TARGET_SIMD)
#define HAVE_ashlv8qi3 (TARGET_SIMD)
#define HAVE_ashlv16qi3 (TARGET_SIMD)
#define HAVE_ashlv4hi3 (TARGET_SIMD)
#define HAVE_ashlv8hi3 (TARGET_SIMD)
#define HAVE_ashlv2si3 (TARGET_SIMD)
#define HAVE_ashlv4si3 (TARGET_SIMD)
#define HAVE_ashlv2di3 (TARGET_SIMD)
#define HAVE_lshrv8qi3 (TARGET_SIMD)
#define HAVE_lshrv16qi3 (TARGET_SIMD)
#define HAVE_lshrv4hi3 (TARGET_SIMD)
#define HAVE_lshrv8hi3 (TARGET_SIMD)
#define HAVE_lshrv2si3 (TARGET_SIMD)
#define HAVE_lshrv4si3 (TARGET_SIMD)
#define HAVE_lshrv2di3 (TARGET_SIMD)
#define HAVE_ashrv8qi3 (TARGET_SIMD)
#define HAVE_ashrv16qi3 (TARGET_SIMD)
#define HAVE_ashrv4hi3 (TARGET_SIMD)
#define HAVE_ashrv8hi3 (TARGET_SIMD)
#define HAVE_ashrv2si3 (TARGET_SIMD)
#define HAVE_ashrv4si3 (TARGET_SIMD)
#define HAVE_ashrv2di3 (TARGET_SIMD)
#define HAVE_vashlv8qi3 (TARGET_SIMD)
#define HAVE_vashlv16qi3 (TARGET_SIMD)
#define HAVE_vashlv4hi3 (TARGET_SIMD)
#define HAVE_vashlv8hi3 (TARGET_SIMD)
#define HAVE_vashlv2si3 (TARGET_SIMD)
#define HAVE_vashlv4si3 (TARGET_SIMD)
#define HAVE_vashlv2di3 (TARGET_SIMD)
#define HAVE_vashrv8qi3 (TARGET_SIMD)
#define HAVE_vashrv16qi3 (TARGET_SIMD)
#define HAVE_vashrv4hi3 (TARGET_SIMD)
#define HAVE_vashrv8hi3 (TARGET_SIMD)
#define HAVE_vashrv2si3 (TARGET_SIMD)
#define HAVE_vashrv4si3 (TARGET_SIMD)
#define HAVE_vlshrv8qi3 (TARGET_SIMD)
#define HAVE_vlshrv16qi3 (TARGET_SIMD)
#define HAVE_vlshrv4hi3 (TARGET_SIMD)
#define HAVE_vlshrv8hi3 (TARGET_SIMD)
#define HAVE_vlshrv2si3 (TARGET_SIMD)
#define HAVE_vlshrv4si3 (TARGET_SIMD)
#define HAVE_vec_setv8qi (TARGET_SIMD)
#define HAVE_vec_setv16qi (TARGET_SIMD)
#define HAVE_vec_setv4hi (TARGET_SIMD)
#define HAVE_vec_setv8hi (TARGET_SIMD)
#define HAVE_vec_setv2si (TARGET_SIMD)
#define HAVE_vec_setv4si (TARGET_SIMD)
#define HAVE_vec_setv2di (TARGET_SIMD)
#define HAVE_vec_setv2sf (TARGET_SIMD)
#define HAVE_vec_setv4sf (TARGET_SIMD)
#define HAVE_vec_setv2df (TARGET_SIMD)
#define HAVE_move_hi_quad_v16qi (TARGET_SIMD)
#define HAVE_move_hi_quad_v8hi (TARGET_SIMD)
#define HAVE_move_hi_quad_v4si (TARGET_SIMD)
#define HAVE_move_hi_quad_v2di (TARGET_SIMD)
#define HAVE_move_hi_quad_v4sf (TARGET_SIMD)
#define HAVE_move_hi_quad_v2df (TARGET_SIMD)
#define HAVE_vec_pack_trunc_v4hi (TARGET_SIMD)
#define HAVE_vec_pack_trunc_v2si (TARGET_SIMD)
#define HAVE_vec_pack_trunc_di (TARGET_SIMD)
#define HAVE_vec_unpacks_hi_v16qi (TARGET_SIMD)
#define HAVE_vec_unpacku_hi_v16qi (TARGET_SIMD)
#define HAVE_vec_unpacks_hi_v8hi (TARGET_SIMD)
#define HAVE_vec_unpacku_hi_v8hi (TARGET_SIMD)
#define HAVE_vec_unpacks_hi_v4si (TARGET_SIMD)
#define HAVE_vec_unpacku_hi_v4si (TARGET_SIMD)
#define HAVE_vec_unpacks_lo_v16qi (TARGET_SIMD)
#define HAVE_vec_unpacku_lo_v16qi (TARGET_SIMD)
#define HAVE_vec_unpacks_lo_v8hi (TARGET_SIMD)
#define HAVE_vec_unpacku_lo_v8hi (TARGET_SIMD)
#define HAVE_vec_unpacks_lo_v4si (TARGET_SIMD)
#define HAVE_vec_unpacku_lo_v4si (TARGET_SIMD)
#define HAVE_vec_widen_smult_lo_v16qi (TARGET_SIMD)
#define HAVE_vec_widen_umult_lo_v16qi (TARGET_SIMD)
#define HAVE_vec_widen_smult_lo_v8hi (TARGET_SIMD)
#define HAVE_vec_widen_umult_lo_v8hi (TARGET_SIMD)
#define HAVE_vec_widen_smult_lo_v4si (TARGET_SIMD)
#define HAVE_vec_widen_umult_lo_v4si (TARGET_SIMD)
#define HAVE_vec_widen_smult_hi_v16qi (TARGET_SIMD)
#define HAVE_vec_widen_umult_hi_v16qi (TARGET_SIMD)
#define HAVE_vec_widen_smult_hi_v8hi (TARGET_SIMD)
#define HAVE_vec_widen_umult_hi_v8hi (TARGET_SIMD)
#define HAVE_vec_widen_smult_hi_v4si (TARGET_SIMD)
#define HAVE_vec_widen_umult_hi_v4si (TARGET_SIMD)
#define HAVE_btruncv2sf2 (TARGET_SIMD)
#define HAVE_ceilv2sf2 (TARGET_SIMD)
#define HAVE_floorv2sf2 (TARGET_SIMD)
#define HAVE_nearbyintv2sf2 (TARGET_SIMD)
#define HAVE_rintv2sf2 (TARGET_SIMD)
#define HAVE_roundv2sf2 (TARGET_SIMD)
#define HAVE_btruncv4sf2 (TARGET_SIMD)
#define HAVE_ceilv4sf2 (TARGET_SIMD)
#define HAVE_floorv4sf2 (TARGET_SIMD)
#define HAVE_nearbyintv4sf2 (TARGET_SIMD)
#define HAVE_rintv4sf2 (TARGET_SIMD)
#define HAVE_roundv4sf2 (TARGET_SIMD)
#define HAVE_btruncv2df2 (TARGET_SIMD)
#define HAVE_ceilv2df2 (TARGET_SIMD)
#define HAVE_floorv2df2 (TARGET_SIMD)
#define HAVE_nearbyintv2df2 (TARGET_SIMD)
#define HAVE_rintv2df2 (TARGET_SIMD)
#define HAVE_roundv2df2 (TARGET_SIMD)
#define HAVE_lbtruncv2siv2sf2 (TARGET_SIMD)
#define HAVE_lceilv2siv2sf2 (TARGET_SIMD)
#define HAVE_lfloorv2siv2sf2 (TARGET_SIMD)
#define HAVE_lroundv2siv2sf2 (TARGET_SIMD)
#define HAVE_lbtruncuv2siv2sf2 (TARGET_SIMD)
#define HAVE_lceiluv2siv2sf2 (TARGET_SIMD)
#define HAVE_lflooruv2siv2sf2 (TARGET_SIMD)
#define HAVE_lrounduv2siv2sf2 (TARGET_SIMD)
#define HAVE_lbtruncv4siv4sf2 (TARGET_SIMD)
#define HAVE_lceilv4siv4sf2 (TARGET_SIMD)
#define HAVE_lfloorv4siv4sf2 (TARGET_SIMD)
#define HAVE_lroundv4siv4sf2 (TARGET_SIMD)
#define HAVE_lbtruncuv4siv4sf2 (TARGET_SIMD)
#define HAVE_lceiluv4siv4sf2 (TARGET_SIMD)
#define HAVE_lflooruv4siv4sf2 (TARGET_SIMD)
#define HAVE_lrounduv4siv4sf2 (TARGET_SIMD)
#define HAVE_lbtruncv2div2df2 (TARGET_SIMD)
#define HAVE_lceilv2div2df2 (TARGET_SIMD)
#define HAVE_lfloorv2div2df2 (TARGET_SIMD)
#define HAVE_lroundv2div2df2 (TARGET_SIMD)
#define HAVE_lbtruncuv2div2df2 (TARGET_SIMD)
#define HAVE_lceiluv2div2df2 (TARGET_SIMD)
#define HAVE_lflooruv2div2df2 (TARGET_SIMD)
#define HAVE_lrounduv2div2df2 (TARGET_SIMD)
#define HAVE_reduc_uplus_v4sf (TARGET_SIMD)
#define HAVE_reduc_splus_v4sf (TARGET_SIMD)
#define HAVE_reduc_uplus_v2sf (TARGET_SIMD)
#define HAVE_reduc_uplus_v2df (TARGET_SIMD)
#define HAVE_reduc_splus_v2sf (TARGET_SIMD)
#define HAVE_reduc_splus_v2df (TARGET_SIMD)
#define HAVE_reduc_splus_v8qi (TARGET_SIMD)
#define HAVE_reduc_splus_v16qi (TARGET_SIMD)
#define HAVE_reduc_splus_v4hi (TARGET_SIMD)
#define HAVE_reduc_splus_v8hi (TARGET_SIMD)
#define HAVE_reduc_splus_v4si (TARGET_SIMD)
#define HAVE_reduc_uplus_v8qi (TARGET_SIMD)
#define HAVE_reduc_uplus_v16qi (TARGET_SIMD)
#define HAVE_reduc_uplus_v4hi (TARGET_SIMD)
#define HAVE_reduc_uplus_v8hi (TARGET_SIMD)
#define HAVE_reduc_uplus_v4si (TARGET_SIMD)
#define HAVE_reduc_uplus_v2di (TARGET_SIMD)
#define HAVE_reduc_splus_v2di (TARGET_SIMD)
#define HAVE_reduc_uplus_v2si (TARGET_SIMD)
#define HAVE_reduc_splus_v2si (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv8qi (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv16qi (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv4hi (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv8hi (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv2si (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv4si (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv2di (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv2sf (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv4sf (TARGET_SIMD)
#define HAVE_aarch64_simd_bslv2df (TARGET_SIMD)
#define HAVE_aarch64_vcond_internalv8qi (TARGET_SIMD)
#define HAVE_aarch64_vcond_internalv16qi (TARGET_SIMD)
#define HAVE_aarch64_vcond_internalv4hi (TARGET_SIMD)
#define HAVE_aarch64_vcond_internalv8hi (TARGET_SIMD)
#define HAVE_aarch64_vcond_internalv2si (TARGET_SIMD)
#define HAVE_aarch64_vcond_internalv4si (TARGET_SIMD)
#define HAVE_aarch64_vcond_internalv2di (TARGET_SIMD)
#define HAVE_aarch64_vcond_internalv2sf (TARGET_SIMD)
#define HAVE_aarch64_vcond_internalv4sf (TARGET_SIMD)
#define HAVE_aarch64_vcond_internalv2df (TARGET_SIMD)
#define HAVE_vcondv8qiv8qi (TARGET_SIMD)
#define HAVE_vcondv16qiv16qi (TARGET_SIMD)
#define HAVE_vcondv4hiv4hi (TARGET_SIMD)
#define HAVE_vcondv8hiv8hi (TARGET_SIMD)
#define HAVE_vcondv2siv2si (TARGET_SIMD)
#define HAVE_vcondv4siv4si (TARGET_SIMD)
#define HAVE_vcondv2div2di (TARGET_SIMD)
#define HAVE_vcondv2sfv2sf (TARGET_SIMD)
#define HAVE_vcondv4sfv4sf (TARGET_SIMD)
#define HAVE_vcondv2dfv2df (TARGET_SIMD)
#define HAVE_vconduv8qiv8qi (TARGET_SIMD)
#define HAVE_vconduv16qiv16qi (TARGET_SIMD)
#define HAVE_vconduv4hiv4hi (TARGET_SIMD)
#define HAVE_vconduv8hiv8hi (TARGET_SIMD)
#define HAVE_vconduv2siv2si (TARGET_SIMD)
#define HAVE_vconduv4siv4si (TARGET_SIMD)
#define HAVE_vconduv2div2di (TARGET_SIMD)
#define HAVE_aarch64_createv8qi (TARGET_SIMD)
#define HAVE_aarch64_createv4hi (TARGET_SIMD)
#define HAVE_aarch64_createv2si (TARGET_SIMD)
#define HAVE_aarch64_createdi (TARGET_SIMD)
#define HAVE_aarch64_createdf (TARGET_SIMD)
#define HAVE_aarch64_createv2sf (TARGET_SIMD)
#define HAVE_aarch64_get_lanedi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv8qiv8qi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv8qiv4hi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv8qiv2si (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv8qiv2sf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv8qidi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv8qidf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4hiv8qi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4hiv4hi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4hiv2si (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4hiv2sf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4hidi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4hidf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2siv8qi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2siv4hi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2siv2si (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2siv2sf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2sidi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2sidf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2sfv8qi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2sfv4hi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2sfv2si (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2sfv2sf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2sfdi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2sfdf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretdiv8qi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretdiv4hi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretdiv2si (TARGET_SIMD)
#define HAVE_aarch64_reinterpretdidi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretdidf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretdiv2sf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv16qiv16qi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv16qiv8hi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv16qiv4si (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv16qiv2di (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv16qiv4sf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv16qiv2df (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv8hiv16qi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv8hiv8hi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv8hiv4si (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv8hiv2di (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv8hiv4sf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv8hiv2df (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4siv16qi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4siv8hi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4siv4si (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4siv2di (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4siv4sf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4siv2df (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4sfv16qi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4sfv8hi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4sfv4si (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4sfv2di (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4sfv4sf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv4sfv2df (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2div16qi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2div8hi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2div4si (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2div2di (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2div4sf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2div2df (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2dfv16qi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2dfv8hi (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2dfv4si (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2dfv2di (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2dfv4sf (TARGET_SIMD)
#define HAVE_aarch64_reinterpretv2dfv2df (TARGET_SIMD)
#define HAVE_aarch64_saddl2v16qi (TARGET_SIMD)
#define HAVE_aarch64_saddl2v8hi (TARGET_SIMD)
#define HAVE_aarch64_saddl2v4si (TARGET_SIMD)
#define HAVE_aarch64_uaddl2v16qi (TARGET_SIMD)
#define HAVE_aarch64_uaddl2v8hi (TARGET_SIMD)
#define HAVE_aarch64_uaddl2v4si (TARGET_SIMD)
#define HAVE_aarch64_ssubl2v16qi (TARGET_SIMD)
#define HAVE_aarch64_ssubl2v8hi (TARGET_SIMD)
#define HAVE_aarch64_ssubl2v4si (TARGET_SIMD)
#define HAVE_aarch64_usubl2v16qi (TARGET_SIMD)
#define HAVE_aarch64_usubl2v8hi (TARGET_SIMD)
#define HAVE_aarch64_usubl2v4si (TARGET_SIMD)
#define HAVE_aarch64_saddw2v16qi (TARGET_SIMD)
#define HAVE_aarch64_saddw2v8hi (TARGET_SIMD)
#define HAVE_aarch64_saddw2v4si (TARGET_SIMD)
#define HAVE_aarch64_uaddw2v16qi (TARGET_SIMD)
#define HAVE_aarch64_uaddw2v8hi (TARGET_SIMD)
#define HAVE_aarch64_uaddw2v4si (TARGET_SIMD)
#define HAVE_aarch64_ssubw2v16qi (TARGET_SIMD)
#define HAVE_aarch64_ssubw2v8hi (TARGET_SIMD)
#define HAVE_aarch64_ssubw2v4si (TARGET_SIMD)
#define HAVE_aarch64_usubw2v16qi (TARGET_SIMD)
#define HAVE_aarch64_usubw2v8hi (TARGET_SIMD)
#define HAVE_aarch64_usubw2v4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_lanev4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_lanev2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_lanehi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_lanesi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_laneqv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_laneqv2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_laneqhi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal_laneqsi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_lanev4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_lanev2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_lanehi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_lanesi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_laneqv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_laneqv2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_laneqhi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl_laneqsi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2v8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2v4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2v8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2v4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2_lanev8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2_lanev4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2_laneqv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2_laneqv4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2_lanev8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2_lanev4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2_laneqv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2_laneqv4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlal2_nv4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmlsl2_nv4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmull_lanev4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmull_lanev2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmull_lanehi (TARGET_SIMD)
#define HAVE_aarch64_sqdmull_lanesi (TARGET_SIMD)
#define HAVE_aarch64_sqdmull_laneqv4hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmull_laneqv2si (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2v8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2v4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2_lanev8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2_lanev4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2_laneqv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2_laneqv4si (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_sqdmull2_nv4si (TARGET_SIMD)
#define HAVE_aarch64_sshl_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_sshl_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_sshl_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_sshl_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_sshl_nv2si (TARGET_SIMD)
#define HAVE_aarch64_sshl_nv4si (TARGET_SIMD)
#define HAVE_aarch64_sshl_nv2di (TARGET_SIMD)
#define HAVE_aarch64_sshl_ndi (TARGET_SIMD)
#define HAVE_aarch64_ushl_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_ushl_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_ushl_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_ushl_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_ushl_nv2si (TARGET_SIMD)
#define HAVE_aarch64_ushl_nv4si (TARGET_SIMD)
#define HAVE_aarch64_ushl_nv2di (TARGET_SIMD)
#define HAVE_aarch64_ushl_ndi (TARGET_SIMD)
#define HAVE_aarch64_sshr_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_sshr_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_sshr_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_sshr_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_sshr_nv2si (TARGET_SIMD)
#define HAVE_aarch64_sshr_nv4si (TARGET_SIMD)
#define HAVE_aarch64_sshr_nv2di (TARGET_SIMD)
#define HAVE_aarch64_sshr_ndi (TARGET_SIMD)
#define HAVE_aarch64_ushr_nv8qi (TARGET_SIMD)
#define HAVE_aarch64_ushr_nv16qi (TARGET_SIMD)
#define HAVE_aarch64_ushr_nv4hi (TARGET_SIMD)
#define HAVE_aarch64_ushr_nv8hi (TARGET_SIMD)
#define HAVE_aarch64_ushr_nv2si (TARGET_SIMD)
#define HAVE_aarch64_ushr_nv4si (TARGET_SIMD)
#define HAVE_aarch64_ushr_nv2di (TARGET_SIMD)
#define HAVE_aarch64_ushr_ndi (TARGET_SIMD)
#define HAVE_aarch64_smaxv8qi (TARGET_SIMD)
#define HAVE_aarch64_sminv8qi (TARGET_SIMD)
#define HAVE_aarch64_umaxv8qi (TARGET_SIMD)
#define HAVE_aarch64_uminv8qi (TARGET_SIMD)
#define HAVE_aarch64_smaxv16qi (TARGET_SIMD)
#define HAVE_aarch64_sminv16qi (TARGET_SIMD)
#define HAVE_aarch64_umaxv16qi (TARGET_SIMD)
#define HAVE_aarch64_uminv16qi (TARGET_SIMD)
#define HAVE_aarch64_smaxv4hi (TARGET_SIMD)
#define HAVE_aarch64_sminv4hi (TARGET_SIMD)
#define HAVE_aarch64_umaxv4hi (TARGET_SIMD)
#define HAVE_aarch64_uminv4hi (TARGET_SIMD)
#define HAVE_aarch64_smaxv8hi (TARGET_SIMD)
#define HAVE_aarch64_sminv8hi (TARGET_SIMD)
#define HAVE_aarch64_umaxv8hi (TARGET_SIMD)
#define HAVE_aarch64_uminv8hi (TARGET_SIMD)
#define HAVE_aarch64_smaxv2si (TARGET_SIMD)
#define HAVE_aarch64_sminv2si (TARGET_SIMD)
#define HAVE_aarch64_umaxv2si (TARGET_SIMD)
#define HAVE_aarch64_uminv2si (TARGET_SIMD)
#define HAVE_aarch64_smaxv4si (TARGET_SIMD)
#define HAVE_aarch64_sminv4si (TARGET_SIMD)
#define HAVE_aarch64_umaxv4si (TARGET_SIMD)
#define HAVE_aarch64_uminv4si (TARGET_SIMD)
#define HAVE_aarch64_sqrtv2sf (TARGET_SIMD)
#define HAVE_aarch64_sqrtv4sf (TARGET_SIMD)
#define HAVE_aarch64_sqrtv2df (TARGET_SIMD)
#define HAVE_movoi (TARGET_SIMD)
#define HAVE_movci (TARGET_SIMD)
#define HAVE_movxi (TARGET_SIMD)
#define HAVE_aarch64_ld2v8qi (TARGET_SIMD)
#define HAVE_aarch64_ld3v8qi (TARGET_SIMD)
#define HAVE_aarch64_ld4v8qi (TARGET_SIMD)
#define HAVE_aarch64_ld2v4hi (TARGET_SIMD)
#define HAVE_aarch64_ld3v4hi (TARGET_SIMD)
#define HAVE_aarch64_ld4v4hi (TARGET_SIMD)
#define HAVE_aarch64_ld2v2si (TARGET_SIMD)
#define HAVE_aarch64_ld3v2si (TARGET_SIMD)
#define HAVE_aarch64_ld4v2si (TARGET_SIMD)
#define HAVE_aarch64_ld2v2sf (TARGET_SIMD)
#define HAVE_aarch64_ld3v2sf (TARGET_SIMD)
#define HAVE_aarch64_ld4v2sf (TARGET_SIMD)
#define HAVE_aarch64_ld2di (TARGET_SIMD)
#define HAVE_aarch64_ld3di (TARGET_SIMD)
#define HAVE_aarch64_ld4di (TARGET_SIMD)
#define HAVE_aarch64_ld2df (TARGET_SIMD)
#define HAVE_aarch64_ld3df (TARGET_SIMD)
#define HAVE_aarch64_ld4df (TARGET_SIMD)
#define HAVE_aarch64_ld1v8qi (TARGET_SIMD)
#define HAVE_aarch64_ld1v16qi (TARGET_SIMD)
#define HAVE_aarch64_ld1v4hi (TARGET_SIMD)
#define HAVE_aarch64_ld1v8hi (TARGET_SIMD)
#define HAVE_aarch64_ld1v2si (TARGET_SIMD)
#define HAVE_aarch64_ld1v4si (TARGET_SIMD)
#define HAVE_aarch64_ld1v2di (TARGET_SIMD)
#define HAVE_aarch64_ld1v2sf (TARGET_SIMD)
#define HAVE_aarch64_ld1v4sf (TARGET_SIMD)
#define HAVE_aarch64_ld1v2df (TARGET_SIMD)
#define HAVE_aarch64_ld2v16qi (TARGET_SIMD)
#define HAVE_aarch64_ld3v16qi (TARGET_SIMD)
#define HAVE_aarch64_ld4v16qi (TARGET_SIMD)
#define HAVE_aarch64_ld2v8hi (TARGET_SIMD)
#define HAVE_aarch64_ld3v8hi (TARGET_SIMD)
#define HAVE_aarch64_ld4v8hi (TARGET_SIMD)
#define HAVE_aarch64_ld2v4si (TARGET_SIMD)
#define HAVE_aarch64_ld3v4si (TARGET_SIMD)
#define HAVE_aarch64_ld4v4si (TARGET_SIMD)
#define HAVE_aarch64_ld2v2di (TARGET_SIMD)
#define HAVE_aarch64_ld3v2di (TARGET_SIMD)
#define HAVE_aarch64_ld4v2di (TARGET_SIMD)
#define HAVE_aarch64_ld2v4sf (TARGET_SIMD)
#define HAVE_aarch64_ld3v4sf (TARGET_SIMD)
#define HAVE_aarch64_ld4v4sf (TARGET_SIMD)
#define HAVE_aarch64_ld2v2df (TARGET_SIMD)
#define HAVE_aarch64_ld3v2df (TARGET_SIMD)
#define HAVE_aarch64_ld4v2df (TARGET_SIMD)
#define HAVE_aarch64_get_dregoiv8qi (TARGET_SIMD)
#define HAVE_aarch64_get_dregciv8qi (TARGET_SIMD)
#define HAVE_aarch64_get_dregxiv8qi (TARGET_SIMD)
#define HAVE_aarch64_get_dregoiv4hi (TARGET_SIMD)
#define HAVE_aarch64_get_dregciv4hi (TARGET_SIMD)
#define HAVE_aarch64_get_dregxiv4hi (TARGET_SIMD)
#define HAVE_aarch64_get_dregoiv2si (TARGET_SIMD)
#define HAVE_aarch64_get_dregciv2si (TARGET_SIMD)
#define HAVE_aarch64_get_dregxiv2si (TARGET_SIMD)
#define HAVE_aarch64_get_dregoiv2sf (TARGET_SIMD)
#define HAVE_aarch64_get_dregciv2sf (TARGET_SIMD)
#define HAVE_aarch64_get_dregxiv2sf (TARGET_SIMD)
#define HAVE_aarch64_get_dregoidi (TARGET_SIMD)
#define HAVE_aarch64_get_dregcidi (TARGET_SIMD)
#define HAVE_aarch64_get_dregxidi (TARGET_SIMD)
#define HAVE_aarch64_get_dregoidf (TARGET_SIMD)
#define HAVE_aarch64_get_dregcidf (TARGET_SIMD)
#define HAVE_aarch64_get_dregxidf (TARGET_SIMD)
#define HAVE_aarch64_get_qregoiv16qi (TARGET_SIMD)
#define HAVE_aarch64_get_qregciv16qi (TARGET_SIMD)
#define HAVE_aarch64_get_qregxiv16qi (TARGET_SIMD)
#define HAVE_aarch64_get_qregoiv8hi (TARGET_SIMD)
#define HAVE_aarch64_get_qregciv8hi (TARGET_SIMD)
#define HAVE_aarch64_get_qregxiv8hi (TARGET_SIMD)
#define HAVE_aarch64_get_qregoiv4si (TARGET_SIMD)
#define HAVE_aarch64_get_qregciv4si (TARGET_SIMD)
#define HAVE_aarch64_get_qregxiv4si (TARGET_SIMD)
#define HAVE_aarch64_get_qregoiv2di (TARGET_SIMD)
#define HAVE_aarch64_get_qregciv2di (TARGET_SIMD)
#define HAVE_aarch64_get_qregxiv2di (TARGET_SIMD)
#define HAVE_aarch64_get_qregoiv4sf (TARGET_SIMD)
#define HAVE_aarch64_get_qregciv4sf (TARGET_SIMD)
#define HAVE_aarch64_get_qregxiv4sf (TARGET_SIMD)
#define HAVE_aarch64_get_qregoiv2df (TARGET_SIMD)
#define HAVE_aarch64_get_qregciv2df (TARGET_SIMD)
#define HAVE_aarch64_get_qregxiv2df (TARGET_SIMD)
#define HAVE_vec_perm_constv8qi (TARGET_SIMD)
#define HAVE_vec_perm_constv16qi (TARGET_SIMD)
#define HAVE_vec_perm_constv4hi (TARGET_SIMD)
#define HAVE_vec_perm_constv8hi (TARGET_SIMD)
#define HAVE_vec_perm_constv2si (TARGET_SIMD)
#define HAVE_vec_perm_constv4si (TARGET_SIMD)
#define HAVE_vec_perm_constv2di (TARGET_SIMD)
#define HAVE_vec_perm_constv2sf (TARGET_SIMD)
#define HAVE_vec_perm_constv4sf (TARGET_SIMD)
#define HAVE_vec_perm_constv2df (TARGET_SIMD)
#define HAVE_vec_permv8qi (TARGET_SIMD)
#define HAVE_vec_permv16qi (TARGET_SIMD)
#define HAVE_aarch64_st2v8qi (TARGET_SIMD)
#define HAVE_aarch64_st3v8qi (TARGET_SIMD)
#define HAVE_aarch64_st4v8qi (TARGET_SIMD)
#define HAVE_aarch64_st2v4hi (TARGET_SIMD)
#define HAVE_aarch64_st3v4hi (TARGET_SIMD)
#define HAVE_aarch64_st4v4hi (TARGET_SIMD)
#define HAVE_aarch64_st2v2si (TARGET_SIMD)
#define HAVE_aarch64_st3v2si (TARGET_SIMD)
#define HAVE_aarch64_st4v2si (TARGET_SIMD)
#define HAVE_aarch64_st2v2sf (TARGET_SIMD)
#define HAVE_aarch64_st3v2sf (TARGET_SIMD)
#define HAVE_aarch64_st4v2sf (TARGET_SIMD)
#define HAVE_aarch64_st2di (TARGET_SIMD)
#define HAVE_aarch64_st3di (TARGET_SIMD)
#define HAVE_aarch64_st4di (TARGET_SIMD)
#define HAVE_aarch64_st2df (TARGET_SIMD)
#define HAVE_aarch64_st3df (TARGET_SIMD)
#define HAVE_aarch64_st4df (TARGET_SIMD)
#define HAVE_aarch64_st2v16qi (TARGET_SIMD)
#define HAVE_aarch64_st3v16qi (TARGET_SIMD)
#define HAVE_aarch64_st4v16qi (TARGET_SIMD)
#define HAVE_aarch64_st2v8hi (TARGET_SIMD)
#define HAVE_aarch64_st3v8hi (TARGET_SIMD)
#define HAVE_aarch64_st4v8hi (TARGET_SIMD)
#define HAVE_aarch64_st2v4si (TARGET_SIMD)
#define HAVE_aarch64_st3v4si (TARGET_SIMD)
#define HAVE_aarch64_st4v4si (TARGET_SIMD)
#define HAVE_aarch64_st2v2di (TARGET_SIMD)
#define HAVE_aarch64_st3v2di (TARGET_SIMD)
#define HAVE_aarch64_st4v2di (TARGET_SIMD)
#define HAVE_aarch64_st2v4sf (TARGET_SIMD)
#define HAVE_aarch64_st3v4sf (TARGET_SIMD)
#define HAVE_aarch64_st4v4sf (TARGET_SIMD)
#define HAVE_aarch64_st2v2df (TARGET_SIMD)
#define HAVE_aarch64_st3v2df (TARGET_SIMD)
#define HAVE_aarch64_st4v2df (TARGET_SIMD)
#define HAVE_aarch64_st1v8qi (TARGET_SIMD)
#define HAVE_aarch64_st1v16qi (TARGET_SIMD)
#define HAVE_aarch64_st1v4hi (TARGET_SIMD)
#define HAVE_aarch64_st1v8hi (TARGET_SIMD)
#define HAVE_aarch64_st1v2si (TARGET_SIMD)
#define HAVE_aarch64_st1v4si (TARGET_SIMD)
#define HAVE_aarch64_st1v2di (TARGET_SIMD)
#define HAVE_aarch64_st1v2sf (TARGET_SIMD)
#define HAVE_aarch64_st1v4sf (TARGET_SIMD)
#define HAVE_aarch64_st1v2df (TARGET_SIMD)
#define HAVE_aarch64_set_qregoiv16qi (TARGET_SIMD)
#define HAVE_aarch64_set_qregciv16qi (TARGET_SIMD)
#define HAVE_aarch64_set_qregxiv16qi (TARGET_SIMD)
#define HAVE_aarch64_set_qregoiv8hi (TARGET_SIMD)
#define HAVE_aarch64_set_qregciv8hi (TARGET_SIMD)
#define HAVE_aarch64_set_qregxiv8hi (TARGET_SIMD)
#define HAVE_aarch64_set_qregoiv4si (TARGET_SIMD)
#define HAVE_aarch64_set_qregciv4si (TARGET_SIMD)
#define HAVE_aarch64_set_qregxiv4si (TARGET_SIMD)
#define HAVE_aarch64_set_qregoiv2di (TARGET_SIMD)
#define HAVE_aarch64_set_qregciv2di (TARGET_SIMD)
#define HAVE_aarch64_set_qregxiv2di (TARGET_SIMD)
#define HAVE_aarch64_set_qregoiv4sf (TARGET_SIMD)
#define HAVE_aarch64_set_qregciv4sf (TARGET_SIMD)
#define HAVE_aarch64_set_qregxiv4sf (TARGET_SIMD)
#define HAVE_aarch64_set_qregoiv2df (TARGET_SIMD)
#define HAVE_aarch64_set_qregciv2df (TARGET_SIMD)
#define HAVE_aarch64_set_qregxiv2df (TARGET_SIMD)
#define HAVE_vec_initv8qi (TARGET_SIMD)
#define HAVE_vec_initv16qi (TARGET_SIMD)
#define HAVE_vec_initv4hi (TARGET_SIMD)
#define HAVE_vec_initv8hi (TARGET_SIMD)
#define HAVE_vec_initv2si (TARGET_SIMD)
#define HAVE_vec_initv4si (TARGET_SIMD)
#define HAVE_vec_initv2di (TARGET_SIMD)
#define HAVE_vec_initv2sf (TARGET_SIMD)
#define HAVE_vec_initv4sf (TARGET_SIMD)
#define HAVE_vec_initv2df (TARGET_SIMD)
#define HAVE_atomic_compare_and_swapqi 1
#define HAVE_atomic_compare_and_swaphi 1
#define HAVE_atomic_compare_and_swapsi 1
#define HAVE_atomic_compare_and_swapdi 1
#define HAVE_mem_thread_fence 1
#define HAVE_dmb 1
extern rtx        gen_indirect_jump                      (rtx);
extern rtx        gen_jump                               (rtx);
extern rtx        gen_casesi_dispatch                    (rtx, rtx, rtx);
extern rtx        gen_nop                                (void);
extern rtx        gen_eh_return                          (rtx);
extern rtx        gen_insv_immsi                         (rtx, rtx, rtx);
extern rtx        gen_insv_immdi                         (rtx, rtx, rtx);
extern rtx        gen_load_pairsi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_load_pairdi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_store_pairsi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_store_pairdi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_load_pairsf                        (rtx, rtx, rtx, rtx);
extern rtx        gen_load_pairdf                        (rtx, rtx, rtx, rtx);
extern rtx        gen_store_pairsf                       (rtx, rtx, rtx, rtx);
extern rtx        gen_store_pairdf                       (rtx, rtx, rtx, rtx);
static inline rtx gen_loadwb_pairsi_si                   (rtx, rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_loadwb_pairsi_si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e), rtx ARG_UNUSED (f))
{
  return 0;
}
extern rtx        gen_loadwb_pairsi_di                   (rtx, rtx, rtx, rtx, rtx, rtx);
static inline rtx gen_loadwb_pairdi_si                   (rtx, rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_loadwb_pairdi_si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e), rtx ARG_UNUSED (f))
{
  return 0;
}
extern rtx        gen_loadwb_pairdi_di                   (rtx, rtx, rtx, rtx, rtx, rtx);
static inline rtx gen_storewb_pairsi_si                  (rtx, rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_storewb_pairsi_si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e), rtx ARG_UNUSED (f))
{
  return 0;
}
extern rtx        gen_storewb_pairsi_di                  (rtx, rtx, rtx, rtx, rtx, rtx);
static inline rtx gen_storewb_pairdi_si                  (rtx, rtx, rtx, rtx, rtx, rtx);
static inline rtx
gen_storewb_pairdi_si(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b), rtx ARG_UNUSED (c), rtx ARG_UNUSED (d), rtx ARG_UNUSED (e), rtx ARG_UNUSED (f))
{
  return 0;
}
extern rtx        gen_storewb_pairdi_di                  (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_subsi3                             (rtx, rtx, rtx);
extern rtx        gen_subdi3                             (rtx, rtx, rtx);
extern rtx        gen_negsi2                             (rtx, rtx);
extern rtx        gen_negdi2                             (rtx, rtx);
extern rtx        gen_mulsi3                             (rtx, rtx, rtx);
extern rtx        gen_muldi3                             (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                           (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                          (rtx, rtx, rtx);
extern rtx        gen_maddsidi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_umaddsidi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_msubsidi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_umsubsidi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_smuldi3_highpart                   (rtx, rtx, rtx);
extern rtx        gen_umuldi3_highpart                   (rtx, rtx, rtx);
extern rtx        gen_divsi3                             (rtx, rtx, rtx);
extern rtx        gen_udivsi3                            (rtx, rtx, rtx);
extern rtx        gen_divdi3                             (rtx, rtx, rtx);
extern rtx        gen_udivdi3                            (rtx, rtx, rtx);
extern rtx        gen_cstoreqi_neg                       (rtx, rtx, rtx);
extern rtx        gen_cstorehi_neg                       (rtx, rtx, rtx);
extern rtx        gen_cstoresi_neg                       (rtx, rtx, rtx);
extern rtx        gen_cstoredi_neg                       (rtx, rtx, rtx);
extern rtx        gen_csinc3si_insn                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_csinc3di_insn                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_andsi3                             (rtx, rtx, rtx);
extern rtx        gen_iorsi3                             (rtx, rtx, rtx);
extern rtx        gen_xorsi3                             (rtx, rtx, rtx);
extern rtx        gen_anddi3                             (rtx, rtx, rtx);
extern rtx        gen_iordi3                             (rtx, rtx, rtx);
extern rtx        gen_xordi3                             (rtx, rtx, rtx);
extern rtx        gen_one_cmplsi2                        (rtx, rtx);
extern rtx        gen_one_cmpldi2                        (rtx, rtx);
extern rtx        gen_clzsi2                             (rtx, rtx);
extern rtx        gen_clzdi2                             (rtx, rtx);
extern rtx        gen_clrsbsi2                           (rtx, rtx);
extern rtx        gen_clrsbdi2                           (rtx, rtx);
extern rtx        gen_rbitsi2                            (rtx, rtx);
extern rtx        gen_rbitdi2                            (rtx, rtx);
extern rtx        gen_bswapsi2                           (rtx, rtx);
extern rtx        gen_bswapdi2                           (rtx, rtx);
extern rtx        gen_bswaphi2                           (rtx, rtx);
extern rtx        gen_btruncsf2                          (rtx, rtx);
extern rtx        gen_ceilsf2                            (rtx, rtx);
extern rtx        gen_floorsf2                           (rtx, rtx);
extern rtx        gen_nearbyintsf2                       (rtx, rtx);
extern rtx        gen_rintsf2                            (rtx, rtx);
extern rtx        gen_roundsf2                           (rtx, rtx);
extern rtx        gen_btruncdf2                          (rtx, rtx);
extern rtx        gen_ceildf2                            (rtx, rtx);
extern rtx        gen_floordf2                           (rtx, rtx);
extern rtx        gen_nearbyintdf2                       (rtx, rtx);
extern rtx        gen_rintdf2                            (rtx, rtx);
extern rtx        gen_rounddf2                           (rtx, rtx);
extern rtx        gen_lbtruncsfsi2                       (rtx, rtx);
extern rtx        gen_lceilsfsi2                         (rtx, rtx);
extern rtx        gen_lfloorsfsi2                        (rtx, rtx);
extern rtx        gen_lroundsfsi2                        (rtx, rtx);
extern rtx        gen_lbtruncusfsi2                      (rtx, rtx);
extern rtx        gen_lceilusfsi2                        (rtx, rtx);
extern rtx        gen_lfloorusfsi2                       (rtx, rtx);
extern rtx        gen_lroundusfsi2                       (rtx, rtx);
extern rtx        gen_lbtruncsfdi2                       (rtx, rtx);
extern rtx        gen_lceilsfdi2                         (rtx, rtx);
extern rtx        gen_lfloorsfdi2                        (rtx, rtx);
extern rtx        gen_lroundsfdi2                        (rtx, rtx);
extern rtx        gen_lbtruncusfdi2                      (rtx, rtx);
extern rtx        gen_lceilusfdi2                        (rtx, rtx);
extern rtx        gen_lfloorusfdi2                       (rtx, rtx);
extern rtx        gen_lroundusfdi2                       (rtx, rtx);
extern rtx        gen_lbtruncdfsi2                       (rtx, rtx);
extern rtx        gen_lceildfsi2                         (rtx, rtx);
extern rtx        gen_lfloordfsi2                        (rtx, rtx);
extern rtx        gen_lrounddfsi2                        (rtx, rtx);
extern rtx        gen_lbtruncudfsi2                      (rtx, rtx);
extern rtx        gen_lceiludfsi2                        (rtx, rtx);
extern rtx        gen_lfloorudfsi2                       (rtx, rtx);
extern rtx        gen_lroundudfsi2                       (rtx, rtx);
extern rtx        gen_lbtruncdfdi2                       (rtx, rtx);
extern rtx        gen_lceildfdi2                         (rtx, rtx);
extern rtx        gen_lfloordfdi2                        (rtx, rtx);
extern rtx        gen_lrounddfdi2                        (rtx, rtx);
extern rtx        gen_lbtruncudfdi2                      (rtx, rtx);
extern rtx        gen_lceiludfdi2                        (rtx, rtx);
extern rtx        gen_lfloorudfdi2                       (rtx, rtx);
extern rtx        gen_lroundudfdi2                       (rtx, rtx);
extern rtx        gen_fmasf4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_fmadf4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmasf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmadf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_fmssf4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsdf4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmssf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_fnmsdf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_extendsfdf2                        (rtx, rtx);
extern rtx        gen_truncdfsf2                         (rtx, rtx);
extern rtx        gen_fix_truncsfsi2                     (rtx, rtx);
extern rtx        gen_fix_truncsfdi2                     (rtx, rtx);
extern rtx        gen_fix_truncdfsi2                     (rtx, rtx);
extern rtx        gen_fix_truncdfdi2                     (rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2                  (rtx, rtx);
extern rtx        gen_fixuns_truncsfdi2                  (rtx, rtx);
extern rtx        gen_fixuns_truncdfsi2                  (rtx, rtx);
extern rtx        gen_fixuns_truncdfdi2                  (rtx, rtx);
extern rtx        gen_floatsisf2                         (rtx, rtx);
extern rtx        gen_floatdisf2                         (rtx, rtx);
extern rtx        gen_floatsidf2                         (rtx, rtx);
extern rtx        gen_floatdidf2                         (rtx, rtx);
extern rtx        gen_floatunssisf2                      (rtx, rtx);
extern rtx        gen_floatunsdisf2                      (rtx, rtx);
extern rtx        gen_floatunssidf2                      (rtx, rtx);
extern rtx        gen_floatunsdidf2                      (rtx, rtx);
extern rtx        gen_addsf3                             (rtx, rtx, rtx);
extern rtx        gen_adddf3                             (rtx, rtx, rtx);
extern rtx        gen_subsf3                             (rtx, rtx, rtx);
extern rtx        gen_subdf3                             (rtx, rtx, rtx);
extern rtx        gen_mulsf3                             (rtx, rtx, rtx);
extern rtx        gen_muldf3                             (rtx, rtx, rtx);
extern rtx        gen_divsf3                             (rtx, rtx, rtx);
extern rtx        gen_divdf3                             (rtx, rtx, rtx);
extern rtx        gen_negsf2                             (rtx, rtx);
extern rtx        gen_negdf2                             (rtx, rtx);
extern rtx        gen_sqrtsf2                            (rtx, rtx);
extern rtx        gen_sqrtdf2                            (rtx, rtx);
extern rtx        gen_abssf2                             (rtx, rtx);
extern rtx        gen_absdf2                             (rtx, rtx);
extern rtx        gen_smaxsf3                            (rtx, rtx, rtx);
extern rtx        gen_smaxdf3                            (rtx, rtx, rtx);
extern rtx        gen_sminsf3                            (rtx, rtx, rtx);
extern rtx        gen_smindf3                            (rtx, rtx, rtx);
extern rtx        gen_aarch64_movdi_tilow                (rtx, rtx);
extern rtx        gen_aarch64_movdi_tihigh               (rtx, rtx);
extern rtx        gen_aarch64_movtihigh_di               (rtx, rtx);
extern rtx        gen_aarch64_movtilow_di                (rtx, rtx);
extern rtx        gen_aarch64_movtilow_tilow             (rtx, rtx);
extern rtx        gen_add_losym                          (rtx, rtx, rtx);
extern rtx        gen_ldr_got_small                      (rtx, rtx, rtx);
extern rtx        gen_aarch64_load_tp_hard               (rtx);
extern rtx        gen_tlsie_small                        (rtx, rtx);
extern rtx        gen_tlsle_small                        (rtx, rtx, rtx);
extern rtx        gen_tlsdesc_small                      (rtx);
extern rtx        gen_stack_tie                          (rtx, rtx);
extern rtx        gen_aarch64_simd_dupv8qi               (rtx, rtx);
extern rtx        gen_aarch64_simd_dupv16qi              (rtx, rtx);
extern rtx        gen_aarch64_simd_dupv4hi               (rtx, rtx);
extern rtx        gen_aarch64_simd_dupv8hi               (rtx, rtx);
extern rtx        gen_aarch64_simd_dupv2si               (rtx, rtx);
extern rtx        gen_aarch64_simd_dupv4si               (rtx, rtx);
extern rtx        gen_aarch64_simd_dupv2di               (rtx, rtx);
extern rtx        gen_aarch64_dup_lanev8qi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_dup_lanev16qi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_dup_lanev4hi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_dup_lanev8hi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_dup_lanev2si               (rtx, rtx, rtx);
extern rtx        gen_aarch64_dup_lanev4si               (rtx, rtx, rtx);
extern rtx        gen_aarch64_dup_lanev2di               (rtx, rtx, rtx);
extern rtx        gen_aarch64_dup_laneqi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_dup_lanehi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_dup_lanesi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_dup_lanedi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_dupv2sf               (rtx, rtx);
extern rtx        gen_aarch64_simd_dupv4sf               (rtx, rtx);
extern rtx        gen_aarch64_simd_dupv2df               (rtx, rtx);
extern rtx        gen_ornv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_ornv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_ornv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_ornv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_ornv2si3                           (rtx, rtx, rtx);
extern rtx        gen_ornv4si3                           (rtx, rtx, rtx);
extern rtx        gen_ornv2di3                           (rtx, rtx, rtx);
extern rtx        gen_bicv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_bicv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_bicv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_bicv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_bicv2si3                           (rtx, rtx, rtx);
extern rtx        gen_bicv4si3                           (rtx, rtx, rtx);
extern rtx        gen_bicv2di3                           (rtx, rtx, rtx);
extern rtx        gen_addv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_addv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_addv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_addv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_addv2si3                           (rtx, rtx, rtx);
extern rtx        gen_addv4si3                           (rtx, rtx, rtx);
extern rtx        gen_addv2di3                           (rtx, rtx, rtx);
extern rtx        gen_subv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_subv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_subv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_subv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_subv2si3                           (rtx, rtx, rtx);
extern rtx        gen_subv4si3                           (rtx, rtx, rtx);
extern rtx        gen_subv2di3                           (rtx, rtx, rtx);
extern rtx        gen_mulv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_mulv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_mulv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_mulv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_mulv2si3                           (rtx, rtx, rtx);
extern rtx        gen_mulv4si3                           (rtx, rtx, rtx);
extern rtx        gen_negv8qi2                           (rtx, rtx);
extern rtx        gen_negv16qi2                          (rtx, rtx);
extern rtx        gen_negv4hi2                           (rtx, rtx);
extern rtx        gen_negv8hi2                           (rtx, rtx);
extern rtx        gen_negv2si2                           (rtx, rtx);
extern rtx        gen_negv4si2                           (rtx, rtx);
extern rtx        gen_absv8qi2                           (rtx, rtx);
extern rtx        gen_absv16qi2                          (rtx, rtx);
extern rtx        gen_absv4hi2                           (rtx, rtx);
extern rtx        gen_absv8hi2                           (rtx, rtx);
extern rtx        gen_absv2si2                           (rtx, rtx);
extern rtx        gen_absv4si2                           (rtx, rtx);
extern rtx        gen_absv2di2                           (rtx, rtx);
extern rtx        gen_andv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_andv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_andv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_andv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_andv2si3                           (rtx, rtx, rtx);
extern rtx        gen_andv4si3                           (rtx, rtx, rtx);
extern rtx        gen_andv2di3                           (rtx, rtx, rtx);
extern rtx        gen_iorv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_iorv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_iorv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_iorv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_iorv2si3                           (rtx, rtx, rtx);
extern rtx        gen_iorv4si3                           (rtx, rtx, rtx);
extern rtx        gen_iorv2di3                           (rtx, rtx, rtx);
extern rtx        gen_xorv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_xorv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_xorv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_xorv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_xorv2si3                           (rtx, rtx, rtx);
extern rtx        gen_xorv4si3                           (rtx, rtx, rtx);
extern rtx        gen_xorv2di3                           (rtx, rtx, rtx);
extern rtx        gen_one_cmplv8qi2                      (rtx, rtx);
extern rtx        gen_one_cmplv16qi2                     (rtx, rtx);
extern rtx        gen_one_cmplv4hi2                      (rtx, rtx);
extern rtx        gen_one_cmplv8hi2                      (rtx, rtx);
extern rtx        gen_one_cmplv2si2                      (rtx, rtx);
extern rtx        gen_one_cmplv4si2                      (rtx, rtx);
extern rtx        gen_one_cmplv2di2                      (rtx, rtx);
extern rtx        gen_aarch64_simd_vec_setv8qi           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_setv16qi          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_setv4hi           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_setv8hi           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_setv2si           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_setv4si           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_lshrv8qi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_lshrv16qi             (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_lshrv4hi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_lshrv8hi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_lshrv2si              (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_lshrv4si              (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_lshrv2di              (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_ashrv8qi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_ashrv16qi             (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_ashrv4hi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_ashrv8hi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_ashrv2si              (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_ashrv4si              (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_ashrv2di              (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_imm_shlv8qi           (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_imm_shlv16qi          (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_imm_shlv4hi           (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_imm_shlv8hi           (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_imm_shlv2si           (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_imm_shlv4si           (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_imm_shlv2di           (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_sshlv8qi          (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_sshlv16qi         (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_sshlv4hi          (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_sshlv8hi          (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_sshlv2si          (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_sshlv4si          (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_sshlv2di          (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv8qi_unsigned  (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv16qi_unsigned (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv4hi_unsigned  (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv8hi_unsigned  (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv2si_unsigned  (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv4si_unsigned  (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv2di_unsigned  (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv8qi_signed    (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv16qi_signed   (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv4hi_signed    (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv8hi_signed    (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv2si_signed    (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv4si_signed    (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_reg_shlv2di_signed    (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_setv2di           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_setv2sf           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_setv4sf           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_setv2df           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_mlav8qi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_mlav16qi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_mlav4hi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_mlav8hi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_mlav2si                    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_mlav4si                    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_mlsv8qi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_mlsv16qi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_mlsv4hi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_mlsv8hi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_mlsv2si                    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_mlsv4si                    (rtx, rtx, rtx, rtx);
extern rtx        gen_smaxv8qi3                          (rtx, rtx, rtx);
extern rtx        gen_sminv8qi3                          (rtx, rtx, rtx);
extern rtx        gen_umaxv8qi3                          (rtx, rtx, rtx);
extern rtx        gen_uminv8qi3                          (rtx, rtx, rtx);
extern rtx        gen_smaxv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_sminv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_umaxv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_uminv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_smaxv4hi3                          (rtx, rtx, rtx);
extern rtx        gen_sminv4hi3                          (rtx, rtx, rtx);
extern rtx        gen_umaxv4hi3                          (rtx, rtx, rtx);
extern rtx        gen_uminv4hi3                          (rtx, rtx, rtx);
extern rtx        gen_smaxv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_sminv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_umaxv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_uminv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_smaxv2si3                          (rtx, rtx, rtx);
extern rtx        gen_sminv2si3                          (rtx, rtx, rtx);
extern rtx        gen_umaxv2si3                          (rtx, rtx, rtx);
extern rtx        gen_uminv2si3                          (rtx, rtx, rtx);
extern rtx        gen_smaxv4si3                          (rtx, rtx, rtx);
extern rtx        gen_sminv4si3                          (rtx, rtx, rtx);
extern rtx        gen_umaxv4si3                          (rtx, rtx, rtx);
extern rtx        gen_uminv4si3                          (rtx, rtx, rtx);
extern rtx        gen_move_lo_quad_v16qi                 (rtx, rtx);
extern rtx        gen_move_lo_quad_v8hi                  (rtx, rtx);
extern rtx        gen_move_lo_quad_v4si                  (rtx, rtx);
extern rtx        gen_move_lo_quad_v2di                  (rtx, rtx);
extern rtx        gen_move_lo_quad_v4sf                  (rtx, rtx);
extern rtx        gen_move_lo_quad_v2df                  (rtx, rtx);
extern rtx        gen_aarch64_simd_move_hi_quad_v16qi    (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_move_hi_quad_v8hi     (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_move_hi_quad_v4si     (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_move_hi_quad_v2di     (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_move_hi_quad_v4sf     (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_move_hi_quad_v2df     (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_pack_trunc_v8hi   (rtx, rtx);
extern rtx        gen_aarch64_simd_vec_pack_trunc_v4si   (rtx, rtx);
extern rtx        gen_aarch64_simd_vec_pack_trunc_v2di   (rtx, rtx);
extern rtx        gen_vec_pack_trunc_v8hi                (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v4si                (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v2di                (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_unpacks_lo_v16qi  (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_unpacku_lo_v16qi  (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_unpacks_lo_v8hi   (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_unpacku_lo_v8hi   (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_unpacks_lo_v4si   (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_unpacku_lo_v4si   (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_unpacks_hi_v16qi  (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_unpacku_hi_v16qi  (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_unpacks_hi_v8hi   (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_unpacku_hi_v8hi   (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_unpacks_hi_v4si   (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_unpacku_hi_v4si   (rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_smult_lo_v16qi    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_umult_lo_v16qi    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_smult_lo_v8hi     (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_umult_lo_v8hi     (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_smult_lo_v4si     (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_umult_lo_v4si     (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_smult_hi_v16qi    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_umult_hi_v16qi    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_smult_hi_v8hi     (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_umult_hi_v8hi     (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_smult_hi_v4si     (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_vec_umult_hi_v4si     (rtx, rtx, rtx, rtx);
extern rtx        gen_addv2sf3                           (rtx, rtx, rtx);
extern rtx        gen_addv4sf3                           (rtx, rtx, rtx);
extern rtx        gen_addv2df3                           (rtx, rtx, rtx);
extern rtx        gen_subv2sf3                           (rtx, rtx, rtx);
extern rtx        gen_subv4sf3                           (rtx, rtx, rtx);
extern rtx        gen_subv2df3                           (rtx, rtx, rtx);
extern rtx        gen_mulv2sf3                           (rtx, rtx, rtx);
extern rtx        gen_mulv4sf3                           (rtx, rtx, rtx);
extern rtx        gen_mulv2df3                           (rtx, rtx, rtx);
extern rtx        gen_divv2sf3                           (rtx, rtx, rtx);
extern rtx        gen_divv4sf3                           (rtx, rtx, rtx);
extern rtx        gen_divv2df3                           (rtx, rtx, rtx);
extern rtx        gen_negv2sf2                           (rtx, rtx);
extern rtx        gen_negv4sf2                           (rtx, rtx);
extern rtx        gen_negv2df2                           (rtx, rtx);
extern rtx        gen_absv2sf2                           (rtx, rtx);
extern rtx        gen_absv4sf2                           (rtx, rtx);
extern rtx        gen_absv2df2                           (rtx, rtx);
extern rtx        gen_fmav2sf4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav4sf4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav2df4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_frintzv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_frintpv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_frintmv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_frintiv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_frintxv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_frintav2sf                 (rtx, rtx);
extern rtx        gen_aarch64_frintzv4sf                 (rtx, rtx);
extern rtx        gen_aarch64_frintpv4sf                 (rtx, rtx);
extern rtx        gen_aarch64_frintmv4sf                 (rtx, rtx);
extern rtx        gen_aarch64_frintiv4sf                 (rtx, rtx);
extern rtx        gen_aarch64_frintxv4sf                 (rtx, rtx);
extern rtx        gen_aarch64_frintav4sf                 (rtx, rtx);
extern rtx        gen_aarch64_frintzv2df                 (rtx, rtx);
extern rtx        gen_aarch64_frintpv2df                 (rtx, rtx);
extern rtx        gen_aarch64_frintmv2df                 (rtx, rtx);
extern rtx        gen_aarch64_frintiv2df                 (rtx, rtx);
extern rtx        gen_aarch64_frintxv2df                 (rtx, rtx);
extern rtx        gen_aarch64_frintav2df                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtzsv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtpsv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtmsv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtasv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtzuv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtpuv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtmuv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtauv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtzsv4sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtpsv4sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtmsv4sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtasv4sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtzuv4sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtpuv4sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtmuv4sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtauv4sf                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtzsv2df                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtpsv2df                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtmsv2df                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtasv2df                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtzuv2df                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtpuv2df                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtmuv2df                 (rtx, rtx);
extern rtx        gen_aarch64_fcvtauv2df                 (rtx, rtx);
extern rtx        gen_aarch64_vmlsv2sf                   (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_vmlsv4sf                   (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_vmlsv2df                   (rtx, rtx, rtx, rtx);
extern rtx        gen_smaxv2sf3                          (rtx, rtx, rtx);
extern rtx        gen_smaxv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_smaxv2df3                          (rtx, rtx, rtx);
extern rtx        gen_sminv2sf3                          (rtx, rtx, rtx);
extern rtx        gen_sminv4sf3                          (rtx, rtx, rtx);
extern rtx        gen_sminv2df3                          (rtx, rtx, rtx);
extern rtx        gen_reduc_smax_v4sf                    (rtx, rtx);
extern rtx        gen_reduc_smin_v4sf                    (rtx, rtx);
extern rtx        gen_reduc_smax_v2sf                    (rtx, rtx);
extern rtx        gen_reduc_smin_v2sf                    (rtx, rtx);
extern rtx        gen_reduc_smax_v2df                    (rtx, rtx);
extern rtx        gen_reduc_smin_v2df                    (rtx, rtx);
extern rtx        gen_aarch64_addvv4sf                   (rtx, rtx);
extern rtx        gen_aarch64_addvv2sf                   (rtx, rtx);
extern rtx        gen_aarch64_addvv2df                   (rtx, rtx);
extern rtx        gen_aarch64_addvv8qi                   (rtx, rtx);
extern rtx        gen_aarch64_addvv16qi                  (rtx, rtx);
extern rtx        gen_aarch64_addvv4hi                   (rtx, rtx);
extern rtx        gen_aarch64_addvv8hi                   (rtx, rtx);
extern rtx        gen_aarch64_addvv4si                   (rtx, rtx);
extern rtx        gen_aarch64_addvv2di                   (rtx, rtx);
extern rtx        gen_aarch64_addvv2si                   (rtx, rtx);
extern rtx        gen_reduc_umax_v8qi                    (rtx, rtx);
extern rtx        gen_reduc_umin_v8qi                    (rtx, rtx);
extern rtx        gen_reduc_smax_v8qi                    (rtx, rtx);
extern rtx        gen_reduc_smin_v8qi                    (rtx, rtx);
extern rtx        gen_reduc_umax_v16qi                   (rtx, rtx);
extern rtx        gen_reduc_umin_v16qi                   (rtx, rtx);
extern rtx        gen_reduc_smax_v16qi                   (rtx, rtx);
extern rtx        gen_reduc_smin_v16qi                   (rtx, rtx);
extern rtx        gen_reduc_umax_v4hi                    (rtx, rtx);
extern rtx        gen_reduc_umin_v4hi                    (rtx, rtx);
extern rtx        gen_reduc_smax_v4hi                    (rtx, rtx);
extern rtx        gen_reduc_smin_v4hi                    (rtx, rtx);
extern rtx        gen_reduc_umax_v8hi                    (rtx, rtx);
extern rtx        gen_reduc_umin_v8hi                    (rtx, rtx);
extern rtx        gen_reduc_smax_v8hi                    (rtx, rtx);
extern rtx        gen_reduc_smin_v8hi                    (rtx, rtx);
extern rtx        gen_reduc_umax_v4si                    (rtx, rtx);
extern rtx        gen_reduc_umin_v4si                    (rtx, rtx);
extern rtx        gen_reduc_smax_v4si                    (rtx, rtx);
extern rtx        gen_reduc_smin_v4si                    (rtx, rtx);
extern rtx        gen_reduc_umax_v2si                    (rtx, rtx);
extern rtx        gen_reduc_umin_v2si                    (rtx, rtx);
extern rtx        gen_reduc_smax_v2si                    (rtx, rtx);
extern rtx        gen_reduc_smin_v2si                    (rtx, rtx);
extern rtx        gen_aarch64_simd_bslv8qi_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv16qi_internal     (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv4hi_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv8hi_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv2si_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv4si_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv2di_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv2sf_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv4sf_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv2df_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lane_signedv8qi        (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lane_signedv16qi       (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lane_signedv4hi        (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lane_signedv8hi        (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lane_signedv2si        (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lane_signedv4si        (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lane_unsignedv8qi      (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lane_unsignedv16qi     (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lane_unsignedv4hi      (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lane_unsignedv8hi      (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lane_unsignedv2si      (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lane_unsignedv4si      (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lane_unsignedv2di      (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lanev2sf               (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lanev4sf               (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_lanev2df               (rtx, rtx, rtx);
extern rtx        gen_aarch64_combinev8qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_combinev4hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_combinev2si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_combinev2sf                (rtx, rtx, rtx);
extern rtx        gen_aarch64_combinedi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_combinedf                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_saddl2v16qi_internal       (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubl2v16qi_internal       (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddl2v16qi_internal       (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usubl2v16qi_internal       (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_saddl2v8hi_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubl2v8hi_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddl2v8hi_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usubl2v8hi_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_saddl2v4si_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubl2v4si_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddl2v4si_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usubl2v4si_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_saddlv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_ssublv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddlv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_usublv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_saddlv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_ssublv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddlv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_usublv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_saddlv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_ssublv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddlv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_usublv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_saddwv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubwv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddwv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_usubwv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_saddwv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubwv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddwv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_usubwv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_saddwv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubwv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddwv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_usubwv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_saddw2v16qi_internal       (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubw2v16qi_internal       (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddw2v16qi_internal       (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usubw2v16qi_internal       (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_saddw2v8hi_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubw2v8hi_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddw2v8hi_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usubw2v8hi_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_saddw2v4si_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubw2v4si_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddw2v4si_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usubw2v4si_internal        (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_shaddv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uhaddv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_srhaddv8qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_urhaddv8qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_shsubv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uhsubv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_srhsubv8qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_urhsubv8qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_shaddv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uhaddv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_srhaddv16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_urhaddv16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_shsubv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uhsubv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_srhsubv16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_urhsubv16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_shaddv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uhaddv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_srhaddv4hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_urhaddv4hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_shsubv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uhsubv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_srhsubv4hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_urhsubv4hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_shaddv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uhaddv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_srhaddv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_urhaddv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_shsubv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uhsubv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_srhsubv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_urhsubv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_shaddv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uhaddv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_srhaddv2si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_urhaddv2si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_shsubv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uhsubv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_srhsubv2si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_urhsubv2si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_shaddv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uhaddv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_srhaddv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_urhaddv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_shsubv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uhsubv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_srhsubv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_urhsubv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_addhnv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_raddhnv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_subhnv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_rsubhnv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_addhnv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_raddhnv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_subhnv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_rsubhnv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_addhnv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_raddhnv2di                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_subhnv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_rsubhnv2di                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_addhn2v8hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_raddhn2v8hi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_subhn2v8hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_rsubhn2v8hi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_addhn2v4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_raddhn2v4si                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_subhn2v4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_rsubhn2v4si                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_addhn2v2di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_raddhn2v2di                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_subhn2v2di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_rsubhn2v2di                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_pmulv8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_pmulv16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqaddv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqaddv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqsubv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqsubv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqaddv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqaddv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqsubv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqsubv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqaddv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqaddv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqsubv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqsubv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqaddv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqaddv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqsubv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqsubv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqaddv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqaddv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqsubv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqsubv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqaddv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqaddv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqsubv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqsubv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqaddv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqaddv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqsubv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqsubv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqaddqi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqaddqi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqsubqi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqsubqi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqaddhi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqaddhi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqsubhi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqsubhi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqaddsi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqaddsi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqsubsi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqsubsi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqadddi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqadddi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqsubdi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqsubdi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_suqaddv8qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_usqaddv8qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_suqaddv16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_usqaddv16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_suqaddv4hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_usqaddv4hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_suqaddv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_usqaddv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_suqaddv2si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_usqaddv2si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_suqaddv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_usqaddv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_suqaddv2di                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_usqaddv2di                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_suqaddqi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_usqaddqi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_suqaddhi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_usqaddhi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_suqaddsi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_usqaddsi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_suqadddi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_usqadddi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqmovunv8hi                (rtx, rtx);
extern rtx        gen_aarch64_sqmovunv4si                (rtx, rtx);
extern rtx        gen_aarch64_sqmovunv2di                (rtx, rtx);
extern rtx        gen_aarch64_sqmovunhi                  (rtx, rtx);
extern rtx        gen_aarch64_sqmovunsi                  (rtx, rtx);
extern rtx        gen_aarch64_sqmovundi                  (rtx, rtx);
extern rtx        gen_aarch64_sqmovnv8hi                 (rtx, rtx);
extern rtx        gen_aarch64_uqmovnv8hi                 (rtx, rtx);
extern rtx        gen_aarch64_sqmovnv4si                 (rtx, rtx);
extern rtx        gen_aarch64_uqmovnv4si                 (rtx, rtx);
extern rtx        gen_aarch64_sqmovnv2di                 (rtx, rtx);
extern rtx        gen_aarch64_uqmovnv2di                 (rtx, rtx);
extern rtx        gen_aarch64_sqmovnhi                   (rtx, rtx);
extern rtx        gen_aarch64_uqmovnhi                   (rtx, rtx);
extern rtx        gen_aarch64_sqmovnsi                   (rtx, rtx);
extern rtx        gen_aarch64_uqmovnsi                   (rtx, rtx);
extern rtx        gen_aarch64_sqmovndi                   (rtx, rtx);
extern rtx        gen_aarch64_uqmovndi                   (rtx, rtx);
extern rtx        gen_aarch64_sqnegv8qi                  (rtx, rtx);
extern rtx        gen_aarch64_sqabsv8qi                  (rtx, rtx);
extern rtx        gen_aarch64_sqnegv16qi                 (rtx, rtx);
extern rtx        gen_aarch64_sqabsv16qi                 (rtx, rtx);
extern rtx        gen_aarch64_sqnegv4hi                  (rtx, rtx);
extern rtx        gen_aarch64_sqabsv4hi                  (rtx, rtx);
extern rtx        gen_aarch64_sqnegv8hi                  (rtx, rtx);
extern rtx        gen_aarch64_sqabsv8hi                  (rtx, rtx);
extern rtx        gen_aarch64_sqnegv2si                  (rtx, rtx);
extern rtx        gen_aarch64_sqabsv2si                  (rtx, rtx);
extern rtx        gen_aarch64_sqnegv4si                  (rtx, rtx);
extern rtx        gen_aarch64_sqabsv4si                  (rtx, rtx);
extern rtx        gen_aarch64_sqnegv2di                  (rtx, rtx);
extern rtx        gen_aarch64_sqabsv2di                  (rtx, rtx);
extern rtx        gen_aarch64_sqnegqi                    (rtx, rtx);
extern rtx        gen_aarch64_sqabsqi                    (rtx, rtx);
extern rtx        gen_aarch64_sqneghi                    (rtx, rtx);
extern rtx        gen_aarch64_sqabshi                    (rtx, rtx);
extern rtx        gen_aarch64_sqnegsi                    (rtx, rtx);
extern rtx        gen_aarch64_sqabssi                    (rtx, rtx);
extern rtx        gen_aarch64_sqdmulhv4hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulhv4hi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulhv8hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulhv8hi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulhv2si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulhv2si               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulhv4si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulhv4si               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulhhi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulhhi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulhsi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulhsi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulh_lanev4hi           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulh_lanev4hi          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulh_lanev8hi           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulh_lanev8hi          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulh_lanev2si           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulh_lanev2si          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulh_lanev4si           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulh_lanev4si          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulh_laneqv4hi          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulh_laneqv4hi         (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulh_laneqv8hi          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulh_laneqv8hi         (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulh_laneqv2si          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulh_laneqv2si         (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulh_laneqv4si          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulh_laneqv4si         (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulh_lanehi             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulh_lanehi            (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmulh_lanesi             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrdmulh_lanesi            (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlalv4hi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlslv4hi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlalv2si                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlslv2si                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlalhi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlslhi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlalsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlslsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_lanev4hi_internal  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_lanev4hi_internal  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_lanev2si_internal  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_lanev2si_internal  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_lanehi_internal    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_lanehi_internal    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_lanesi_internal    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_lanesi_internal    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_nv4hi              (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_nv4hi              (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_nv2si              (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_nv2si              (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2v8hi_internal      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2v8hi_internal      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2v4si_internal      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2v4si_internal      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2_lanev8hi_internal (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2_lanev8hi_internal (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2_lanev4si_internal (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2_lanev4si_internal (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2_nv8hi_internal    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2_nv8hi_internal    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2_nv4si_internal    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2_nv4si_internal    (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmullv4hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmullv2si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmullhi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmullsi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull_lanev4hi_internal  (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull_lanev2si_internal  (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull_lanehi_internal    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull_lanesi_internal    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull_nv4hi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull_nv2si              (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2v8hi_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2v4si_internal      (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2_lanev8hi_internal (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2_lanev4si_internal (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2_nv8hi_internal    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2_nv4si_internal    (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sshlv8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushlv8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshlv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshlv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshlv16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushlv16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshlv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshlv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshlv4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushlv4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshlv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshlv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshlv8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushlv8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshlv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshlv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshlv2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushlv2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshlv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshlv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshlv4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushlv4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshlv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshlv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshlv2di                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushlv2di                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshlv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshlv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshldi                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushldi                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshldi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshldi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshlv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshlv8qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshlv8qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshlv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshlv16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshlv16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshlv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshlv4hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshlv4hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshlv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshlv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshlv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshlv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshlv2si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshlv2si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshlv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshlv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshlv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshlv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshlv2di                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshlv2di                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlqi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshlqi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshlqi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshlqi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlhi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshlhi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshlhi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshlhi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlsi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshlsi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshlsi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshlsi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshldi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshldi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshldi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshldi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshll_nv8qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushll_nv8qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshll_nv4hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushll_nv4hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshll_nv2si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushll_nv2si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshll2_nv16qi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushll2_nv16qi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshll2_nv8hi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushll2_nv8hi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshll2_nv4si               (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushll2_nv4si               (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshr_nv8qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshr_nv8qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshr_nv16qi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshr_nv16qi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshr_nv4hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshr_nv4hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshr_nv8hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshr_nv8hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshr_nv2si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshr_nv2si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshr_nv4si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshr_nv4si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshr_nv2di                (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshr_nv2di                (rtx, rtx, rtx);
extern rtx        gen_aarch64_srshr_ndi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_urshr_ndi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_ssra_nv8qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usra_nv8qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_srsra_nv8qi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ursra_nv8qi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssra_nv16qi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usra_nv16qi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_srsra_nv16qi               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ursra_nv16qi               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssra_nv4hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usra_nv4hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_srsra_nv4hi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ursra_nv4hi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssra_nv8hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usra_nv8hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_srsra_nv8hi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ursra_nv8hi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssra_nv2si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usra_nv2si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_srsra_nv2si                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ursra_nv2si                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssra_nv4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usra_nv4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_srsra_nv4si                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ursra_nv4si                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssra_nv2di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usra_nv2di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_srsra_nv2di                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ursra_nv2di                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssra_ndi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usra_ndi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_srsra_ndi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ursra_ndi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssli_nv8qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usli_nv8qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssri_nv8qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usri_nv8qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssli_nv16qi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usli_nv16qi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssri_nv16qi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usri_nv16qi                (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssli_nv4hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usli_nv4hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssri_nv4hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usri_nv4hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssli_nv8hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usli_nv8hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssri_nv8hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usri_nv8hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssli_nv2si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usli_nv2si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssri_nv2si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usri_nv2si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssli_nv4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usli_nv4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssri_nv4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usri_nv4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssli_nv2di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usli_nv2di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssri_nv2di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usri_nv2di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssli_ndi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usli_ndi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_ssri_ndi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_usri_ndi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlu_nv8qi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshl_nv8qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshl_nv8qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlu_nv16qi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshl_nv16qi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshl_nv16qi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlu_nv4hi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshl_nv4hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshl_nv4hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlu_nv8hi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshl_nv8hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshl_nv8hi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlu_nv2si               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshl_nv2si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshl_nv2si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlu_nv4si               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshl_nv4si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshl_nv4si                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlu_nv2di               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshl_nv2di                (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshl_nv2di                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlu_nqi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshl_nqi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshl_nqi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlu_nhi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshl_nhi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshl_nhi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlu_nsi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshl_nsi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshl_nsi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshlu_ndi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshl_ndi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshl_ndi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshrun_nv8hi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshrun_nv8hi             (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshrn_nv8hi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshrn_nv8hi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshrn_nv8hi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshrn_nv8hi              (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshrun_nv4si              (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshrun_nv4si             (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshrn_nv4si               (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshrn_nv4si               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshrn_nv4si              (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshrn_nv4si              (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshrun_nv2di              (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshrun_nv2di             (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshrn_nv2di               (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshrn_nv2di               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshrn_nv2di              (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshrn_nv2di              (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshrun_nhi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshrun_nhi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshrn_nhi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshrn_nhi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshrn_nhi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshrn_nhi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshrun_nsi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshrun_nsi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshrn_nsi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshrn_nsi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshrn_nsi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshrn_nsi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshrun_ndi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshrun_ndi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqshrn_ndi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqshrn_ndi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrshrn_ndi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_uqrshrn_ndi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltv8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmlev8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmeqv8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgev8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtv8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltv16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmlev16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmeqv16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgev16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtv16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltv4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmlev4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmeqv4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgev4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtv4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltv8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmlev8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmeqv8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgev8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtv8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltv2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmlev2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmeqv2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgev2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtv2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltv4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmlev4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmeqv4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgev4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtv4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltv2di                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmlev2di                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmeqv2di                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgev2di                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtv2di                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltdi                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmledi                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmeqdi                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgedi                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtdi                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltuv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmleuv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgeuv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtuv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltuv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmleuv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgeuv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtuv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltuv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmleuv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgeuv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtuv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltuv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmleuv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgeuv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtuv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltuv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmleuv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgeuv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtuv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltuv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmleuv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgeuv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtuv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltuv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmleuv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgeuv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtuv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltudi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmleudi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgeudi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtudi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmtstv8qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmtstv16qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmtstv4hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmtstv8hi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmtstv2si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmtstv4si                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmtstv2di                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmtstdi                    (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltv2sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmlev2sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmeqv2sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgev2sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtv2sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltv4sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmlev4sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmeqv4sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgev4sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtv4sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltv2df                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmlev2df                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmeqv2df                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgev2df                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtv2df                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltsf                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmlesf                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmeqsf                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgesf                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtsf                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmltdf                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmledf                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmeqdf                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgedf                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_cmgtdf                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_addpv8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_addpv4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_addpv2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_addpdi                     (rtx, rtx);
extern rtx        gen_aarch64_fmaxv2sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_fminv2sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_fmaxv4sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_fminv4sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_fmaxv2df                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_fminv2df                   (rtx, rtx, rtx);
extern rtx        gen_sqrtv2sf2                          (rtx, rtx);
extern rtx        gen_sqrtv4sf2                          (rtx, rtx);
extern rtx        gen_sqrtv2df2                          (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv16qi              (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv8hi               (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv4si               (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv2di               (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv4sf               (rtx, rtx);
extern rtx        gen_vec_load_lanesoiv2df               (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv16qi             (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv8hi              (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv4si              (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv2di              (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv4sf              (rtx, rtx);
extern rtx        gen_vec_store_lanesoiv2df              (rtx, rtx);
extern rtx        gen_vec_load_lanesciv16qi              (rtx, rtx);
extern rtx        gen_vec_load_lanesciv8hi               (rtx, rtx);
extern rtx        gen_vec_load_lanesciv4si               (rtx, rtx);
extern rtx        gen_vec_load_lanesciv2di               (rtx, rtx);
extern rtx        gen_vec_load_lanesciv4sf               (rtx, rtx);
extern rtx        gen_vec_load_lanesciv2df               (rtx, rtx);
extern rtx        gen_vec_store_lanesciv16qi             (rtx, rtx);
extern rtx        gen_vec_store_lanesciv8hi              (rtx, rtx);
extern rtx        gen_vec_store_lanesciv4si              (rtx, rtx);
extern rtx        gen_vec_store_lanesciv2di              (rtx, rtx);
extern rtx        gen_vec_store_lanesciv4sf              (rtx, rtx);
extern rtx        gen_vec_store_lanesciv2df              (rtx, rtx);
extern rtx        gen_vec_load_lanesxiv16qi              (rtx, rtx);
extern rtx        gen_vec_load_lanesxiv8hi               (rtx, rtx);
extern rtx        gen_vec_load_lanesxiv4si               (rtx, rtx);
extern rtx        gen_vec_load_lanesxiv2di               (rtx, rtx);
extern rtx        gen_vec_load_lanesxiv4sf               (rtx, rtx);
extern rtx        gen_vec_load_lanesxiv2df               (rtx, rtx);
extern rtx        gen_vec_store_lanesxiv16qi             (rtx, rtx);
extern rtx        gen_vec_store_lanesxiv8hi              (rtx, rtx);
extern rtx        gen_vec_store_lanesxiv4si              (rtx, rtx);
extern rtx        gen_vec_store_lanesxiv2di              (rtx, rtx);
extern rtx        gen_vec_store_lanesxiv4sf              (rtx, rtx);
extern rtx        gen_vec_store_lanesxiv2df              (rtx, rtx);
extern rtx        gen_aarch64_ld2v8qi_dreg               (rtx, rtx);
extern rtx        gen_aarch64_ld2v4hi_dreg               (rtx, rtx);
extern rtx        gen_aarch64_ld2v2si_dreg               (rtx, rtx);
extern rtx        gen_aarch64_ld2v2sf_dreg               (rtx, rtx);
extern rtx        gen_aarch64_ld2di_dreg                 (rtx, rtx);
extern rtx        gen_aarch64_ld2df_dreg                 (rtx, rtx);
extern rtx        gen_aarch64_ld3v8qi_dreg               (rtx, rtx);
extern rtx        gen_aarch64_ld3v4hi_dreg               (rtx, rtx);
extern rtx        gen_aarch64_ld3v2si_dreg               (rtx, rtx);
extern rtx        gen_aarch64_ld3v2sf_dreg               (rtx, rtx);
extern rtx        gen_aarch64_ld3di_dreg                 (rtx, rtx);
extern rtx        gen_aarch64_ld3df_dreg                 (rtx, rtx);
extern rtx        gen_aarch64_ld4v8qi_dreg               (rtx, rtx);
extern rtx        gen_aarch64_ld4v4hi_dreg               (rtx, rtx);
extern rtx        gen_aarch64_ld4v2si_dreg               (rtx, rtx);
extern rtx        gen_aarch64_ld4v2sf_dreg               (rtx, rtx);
extern rtx        gen_aarch64_ld4di_dreg                 (rtx, rtx);
extern rtx        gen_aarch64_ld4df_dreg                 (rtx, rtx);
extern rtx        gen_aarch64_tbl1v8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_tbl1v16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_tbl2v16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_combinev16qi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip1v8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip2v8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn1v8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn2v8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp1v8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp2v8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip1v16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip2v16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn1v16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn2v16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp1v16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp2v16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip1v4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip2v4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn1v4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn2v4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp1v4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp2v4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip1v8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip2v8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn1v8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn2v8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp1v8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp2v8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip1v2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip2v2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn1v2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn2v2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp1v2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp2v2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip1v4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip2v4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn1v4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn2v4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp1v4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp2v4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip1v2di                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip2v2di                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn1v2di                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn2v2di                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp1v2di                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp2v2di                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip1v2sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip2v2sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn1v2sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn2v2sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp1v2sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp2v2sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip1v4sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip2v4sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn1v4sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn2v4sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp1v4sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp2v4sf                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip1v2df                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_zip2v2df                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn1v2df                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_trn2v2df                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp1v2df                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uzp2v2df                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_st2v8qi_dreg               (rtx, rtx);
extern rtx        gen_aarch64_st2v4hi_dreg               (rtx, rtx);
extern rtx        gen_aarch64_st2v2si_dreg               (rtx, rtx);
extern rtx        gen_aarch64_st2v2sf_dreg               (rtx, rtx);
extern rtx        gen_aarch64_st2di_dreg                 (rtx, rtx);
extern rtx        gen_aarch64_st2df_dreg                 (rtx, rtx);
extern rtx        gen_aarch64_st3v8qi_dreg               (rtx, rtx);
extern rtx        gen_aarch64_st3v4hi_dreg               (rtx, rtx);
extern rtx        gen_aarch64_st3v2si_dreg               (rtx, rtx);
extern rtx        gen_aarch64_st3v2sf_dreg               (rtx, rtx);
extern rtx        gen_aarch64_st3di_dreg                 (rtx, rtx);
extern rtx        gen_aarch64_st3df_dreg                 (rtx, rtx);
extern rtx        gen_aarch64_st4v8qi_dreg               (rtx, rtx);
extern rtx        gen_aarch64_st4v4hi_dreg               (rtx, rtx);
extern rtx        gen_aarch64_st4v2si_dreg               (rtx, rtx);
extern rtx        gen_aarch64_st4v2sf_dreg               (rtx, rtx);
extern rtx        gen_aarch64_st4di_dreg                 (rtx, rtx);
extern rtx        gen_aarch64_st4df_dreg                 (rtx, rtx);
extern rtx        gen_atomic_compare_and_swapqi_1        (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swaphi_1        (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapsi_1        (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapdi_1        (rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangeqi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangehi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangesi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangedi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_addqi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_subqi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_orqi                        (rtx, rtx, rtx);
extern rtx        gen_atomic_xorqi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_andqi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_addhi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_subhi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_orhi                        (rtx, rtx, rtx);
extern rtx        gen_atomic_xorhi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_andhi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_addsi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_subsi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_orsi                        (rtx, rtx, rtx);
extern rtx        gen_atomic_xorsi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_andsi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_adddi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_subdi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_ordi                        (rtx, rtx, rtx);
extern rtx        gen_atomic_xordi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_anddi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_nandqi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_nandhi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_nandsi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_nanddi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_orqi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_orhi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_orsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_adddi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subdi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_ordi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xordi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_anddi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nandqi                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nandhi                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nandsi                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nanddi                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_or_fetchqi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_or_fetchhi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_or_fetchsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchdi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchdi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_or_fetchdi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchdi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchdi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchqi                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchhi                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchsi                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchdi                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_loadqi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_loadhi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_loadsi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_loaddi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_storeqi                     (rtx, rtx, rtx);
extern rtx        gen_atomic_storehi                     (rtx, rtx, rtx);
extern rtx        gen_atomic_storesi                     (rtx, rtx, rtx);
extern rtx        gen_atomic_storedi                     (rtx, rtx, rtx);
extern rtx        gen_aarch64_load_exclusiveqi           (rtx, rtx, rtx);
extern rtx        gen_aarch64_load_exclusivehi           (rtx, rtx, rtx);
extern rtx        gen_aarch64_load_exclusivesi           (rtx, rtx, rtx);
extern rtx        gen_aarch64_load_exclusivedi           (rtx, rtx, rtx);
extern rtx        gen_aarch64_store_exclusiveqi          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_store_exclusivehi          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_store_exclusivesi          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_store_exclusivedi          (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_casesi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_prologue                           (void);
extern rtx        gen_epilogue                           (void);
extern rtx        gen_sibcall_epilogue                   (void);
#define GEN_CALL(A, B, C, D) gen_call ((A), (B), (C))
extern rtx        gen_call                               (rtx, rtx, rtx);
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C), (D))
extern rtx        gen_call_value                         (rtx, rtx, rtx, rtx);
#define GEN_SIBCALL(A, B, C, D) gen_sibcall ((A), (B), (C))
extern rtx        gen_sibcall                            (rtx, rtx, rtx);
#define GEN_SIBCALL_VALUE(A, B, C, D, E) gen_sibcall_value ((A), (B), (C), (D))
extern rtx        gen_sibcall_value                      (rtx, rtx, rtx, rtx);
extern rtx        gen_untyped_call                       (rtx, rtx, rtx);
extern rtx        gen_movqi                              (rtx, rtx);
extern rtx        gen_movhi                              (rtx, rtx);
extern rtx        gen_movsi                              (rtx, rtx);
extern rtx        gen_movdi                              (rtx, rtx);
extern rtx        gen_movti                              (rtx, rtx);
extern rtx        gen_movsf                              (rtx, rtx);
extern rtx        gen_movdf                              (rtx, rtx);
extern rtx        gen_movtf                              (rtx, rtx);
extern rtx        gen_extendsidi2                        (rtx, rtx);
extern rtx        gen_zero_extendsidi2                   (rtx, rtx);
extern rtx        gen_extendqisi2                        (rtx, rtx);
extern rtx        gen_zero_extendqisi2                   (rtx, rtx);
extern rtx        gen_extendhisi2                        (rtx, rtx);
extern rtx        gen_zero_extendhisi2                   (rtx, rtx);
extern rtx        gen_extendqidi2                        (rtx, rtx);
extern rtx        gen_zero_extendqidi2                   (rtx, rtx);
extern rtx        gen_extendhidi2                        (rtx, rtx);
extern rtx        gen_zero_extendhidi2                   (rtx, rtx);
extern rtx        gen_extendqihi2                        (rtx, rtx);
extern rtx        gen_zero_extendqihi2                   (rtx, rtx);
extern rtx        gen_addsi3                             (rtx, rtx, rtx);
extern rtx        gen_adddi3                             (rtx, rtx, rtx);
extern rtx        gen_cstoresi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresf4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredf4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cmovsi6                            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cmovdi6                            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cmovsf6                            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cmovdf6                            (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_movqicc                            (rtx, rtx, rtx, rtx);
extern rtx        gen_movhicc                            (rtx, rtx, rtx, rtx);
extern rtx        gen_movsicc                            (rtx, rtx, rtx, rtx);
extern rtx        gen_movdicc                            (rtx, rtx, rtx, rtx);
extern rtx        gen_movsfsicc                          (rtx, rtx, rtx, rtx);
extern rtx        gen_movsfdicc                          (rtx, rtx, rtx, rtx);
extern rtx        gen_movdfsicc                          (rtx, rtx, rtx, rtx);
extern rtx        gen_movdfdicc                          (rtx, rtx, rtx, rtx);
extern rtx        gen_ffssi2                             (rtx, rtx);
extern rtx        gen_ffsdi2                             (rtx, rtx);
extern rtx        gen_ctzsi2                             (rtx, rtx);
extern rtx        gen_ctzdi2                             (rtx, rtx);
extern rtx        gen_ashlsi3                            (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                            (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                            (rtx, rtx, rtx);
extern rtx        gen_ashldi3                            (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                            (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                            (rtx, rtx, rtx);
extern rtx        gen_ashlqi3                            (rtx, rtx, rtx);
extern rtx        gen_ashlhi3                            (rtx, rtx, rtx);
extern rtx        gen_rotrsi3                            (rtx, rtx, rtx);
extern rtx        gen_rotrdi3                            (rtx, rtx, rtx);
extern rtx        gen_rotlsi3                            (rtx, rtx, rtx);
extern rtx        gen_rotldi3                            (rtx, rtx, rtx);
extern rtx        gen_extv                               (rtx, rtx, rtx, rtx);
extern rtx        gen_extzv                              (rtx, rtx, rtx, rtx);
extern rtx        gen_reload_sp_immediate                (rtx, rtx, rtx);
extern rtx        gen_aarch64_reload_movti               (rtx, rtx, rtx);
extern rtx        gen_aarch64_reload_movtf               (rtx, rtx, rtx);
extern rtx        gen_tlsgd_small                        (rtx, rtx);
extern rtx        gen_get_thread_pointerdi               (rtx);
extern rtx        gen_movv8qi                            (rtx, rtx);
extern rtx        gen_movv16qi                           (rtx, rtx);
extern rtx        gen_movv4hi                            (rtx, rtx);
extern rtx        gen_movv8hi                            (rtx, rtx);
extern rtx        gen_movv2si                            (rtx, rtx);
extern rtx        gen_movv4si                            (rtx, rtx);
extern rtx        gen_movv2di                            (rtx, rtx);
extern rtx        gen_movv2sf                            (rtx, rtx);
extern rtx        gen_movv4sf                            (rtx, rtx);
extern rtx        gen_movv2df                            (rtx, rtx);
extern rtx        gen_movmisalignv8qi                    (rtx, rtx);
extern rtx        gen_movmisalignv16qi                   (rtx, rtx);
extern rtx        gen_movmisalignv4hi                    (rtx, rtx);
extern rtx        gen_movmisalignv8hi                    (rtx, rtx);
extern rtx        gen_movmisalignv2si                    (rtx, rtx);
extern rtx        gen_movmisalignv4si                    (rtx, rtx);
extern rtx        gen_movmisalignv2di                    (rtx, rtx);
extern rtx        gen_movmisalignv2sf                    (rtx, rtx);
extern rtx        gen_movmisalignv4sf                    (rtx, rtx);
extern rtx        gen_movmisalignv2df                    (rtx, rtx);
extern rtx        gen_ashlv8qi3                          (rtx, rtx, rtx);
extern rtx        gen_ashlv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_ashlv4hi3                          (rtx, rtx, rtx);
extern rtx        gen_ashlv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_ashlv2si3                          (rtx, rtx, rtx);
extern rtx        gen_ashlv4si3                          (rtx, rtx, rtx);
extern rtx        gen_ashlv2di3                          (rtx, rtx, rtx);
extern rtx        gen_lshrv8qi3                          (rtx, rtx, rtx);
extern rtx        gen_lshrv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_lshrv4hi3                          (rtx, rtx, rtx);
extern rtx        gen_lshrv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_lshrv2si3                          (rtx, rtx, rtx);
extern rtx        gen_lshrv4si3                          (rtx, rtx, rtx);
extern rtx        gen_lshrv2di3                          (rtx, rtx, rtx);
extern rtx        gen_ashrv8qi3                          (rtx, rtx, rtx);
extern rtx        gen_ashrv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_ashrv4hi3                          (rtx, rtx, rtx);
extern rtx        gen_ashrv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_ashrv2si3                          (rtx, rtx, rtx);
extern rtx        gen_ashrv4si3                          (rtx, rtx, rtx);
extern rtx        gen_ashrv2di3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv8qi3                         (rtx, rtx, rtx);
extern rtx        gen_vashlv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_vashlv4hi3                         (rtx, rtx, rtx);
extern rtx        gen_vashlv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_vashlv2si3                         (rtx, rtx, rtx);
extern rtx        gen_vashlv4si3                         (rtx, rtx, rtx);
extern rtx        gen_vashlv2di3                         (rtx, rtx, rtx);
extern rtx        gen_vashrv8qi3                         (rtx, rtx, rtx);
extern rtx        gen_vashrv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_vashrv4hi3                         (rtx, rtx, rtx);
extern rtx        gen_vashrv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_vashrv2si3                         (rtx, rtx, rtx);
extern rtx        gen_vashrv4si3                         (rtx, rtx, rtx);
extern rtx        gen_vlshrv8qi3                         (rtx, rtx, rtx);
extern rtx        gen_vlshrv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_vlshrv4hi3                         (rtx, rtx, rtx);
extern rtx        gen_vlshrv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_vlshrv2si3                         (rtx, rtx, rtx);
extern rtx        gen_vlshrv4si3                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv8qi                        (rtx, rtx, rtx);
extern rtx        gen_vec_setv16qi                       (rtx, rtx, rtx);
extern rtx        gen_vec_setv4hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_setv8hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_setv2si                        (rtx, rtx, rtx);
extern rtx        gen_vec_setv4si                        (rtx, rtx, rtx);
extern rtx        gen_vec_setv2di                        (rtx, rtx, rtx);
extern rtx        gen_vec_setv2sf                        (rtx, rtx, rtx);
extern rtx        gen_vec_setv4sf                        (rtx, rtx, rtx);
extern rtx        gen_vec_setv2df                        (rtx, rtx, rtx);
extern rtx        gen_move_hi_quad_v16qi                 (rtx, rtx);
extern rtx        gen_move_hi_quad_v8hi                  (rtx, rtx);
extern rtx        gen_move_hi_quad_v4si                  (rtx, rtx);
extern rtx        gen_move_hi_quad_v2di                  (rtx, rtx);
extern rtx        gen_move_hi_quad_v4sf                  (rtx, rtx);
extern rtx        gen_move_hi_quad_v2df                  (rtx, rtx);
extern rtx        gen_vec_pack_trunc_v4hi                (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v2si                (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_di                  (rtx, rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v16qi               (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v16qi               (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v8hi                (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v8hi                (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v4si                (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v4si                (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v16qi               (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v16qi               (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v8hi                (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v8hi                (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v4si                (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v4si                (rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v16qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v16qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v8hi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v8hi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v4si            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v4si            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v16qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v16qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v8hi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v8hi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v4si            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v4si            (rtx, rtx, rtx);
extern rtx        gen_btruncv2sf2                        (rtx, rtx);
extern rtx        gen_ceilv2sf2                          (rtx, rtx);
extern rtx        gen_floorv2sf2                         (rtx, rtx);
extern rtx        gen_nearbyintv2sf2                     (rtx, rtx);
extern rtx        gen_rintv2sf2                          (rtx, rtx);
extern rtx        gen_roundv2sf2                         (rtx, rtx);
extern rtx        gen_btruncv4sf2                        (rtx, rtx);
extern rtx        gen_ceilv4sf2                          (rtx, rtx);
extern rtx        gen_floorv4sf2                         (rtx, rtx);
extern rtx        gen_nearbyintv4sf2                     (rtx, rtx);
extern rtx        gen_rintv4sf2                          (rtx, rtx);
extern rtx        gen_roundv4sf2                         (rtx, rtx);
extern rtx        gen_btruncv2df2                        (rtx, rtx);
extern rtx        gen_ceilv2df2                          (rtx, rtx);
extern rtx        gen_floorv2df2                         (rtx, rtx);
extern rtx        gen_nearbyintv2df2                     (rtx, rtx);
extern rtx        gen_rintv2df2                          (rtx, rtx);
extern rtx        gen_roundv2df2                         (rtx, rtx);
extern rtx        gen_lbtruncv2siv2sf2                   (rtx, rtx);
extern rtx        gen_lceilv2siv2sf2                     (rtx, rtx);
extern rtx        gen_lfloorv2siv2sf2                    (rtx, rtx);
extern rtx        gen_lroundv2siv2sf2                    (rtx, rtx);
extern rtx        gen_lbtruncuv2siv2sf2                  (rtx, rtx);
extern rtx        gen_lceiluv2siv2sf2                    (rtx, rtx);
extern rtx        gen_lflooruv2siv2sf2                   (rtx, rtx);
extern rtx        gen_lrounduv2siv2sf2                   (rtx, rtx);
extern rtx        gen_lbtruncv4siv4sf2                   (rtx, rtx);
extern rtx        gen_lceilv4siv4sf2                     (rtx, rtx);
extern rtx        gen_lfloorv4siv4sf2                    (rtx, rtx);
extern rtx        gen_lroundv4siv4sf2                    (rtx, rtx);
extern rtx        gen_lbtruncuv4siv4sf2                  (rtx, rtx);
extern rtx        gen_lceiluv4siv4sf2                    (rtx, rtx);
extern rtx        gen_lflooruv4siv4sf2                   (rtx, rtx);
extern rtx        gen_lrounduv4siv4sf2                   (rtx, rtx);
extern rtx        gen_lbtruncv2div2df2                   (rtx, rtx);
extern rtx        gen_lceilv2div2df2                     (rtx, rtx);
extern rtx        gen_lfloorv2div2df2                    (rtx, rtx);
extern rtx        gen_lroundv2div2df2                    (rtx, rtx);
extern rtx        gen_lbtruncuv2div2df2                  (rtx, rtx);
extern rtx        gen_lceiluv2div2df2                    (rtx, rtx);
extern rtx        gen_lflooruv2div2df2                   (rtx, rtx);
extern rtx        gen_lrounduv2div2df2                   (rtx, rtx);
extern rtx        gen_reduc_uplus_v4sf                   (rtx, rtx);
extern rtx        gen_reduc_splus_v4sf                   (rtx, rtx);
extern rtx        gen_reduc_uplus_v2sf                   (rtx, rtx);
extern rtx        gen_reduc_uplus_v2df                   (rtx, rtx);
extern rtx        gen_reduc_splus_v2sf                   (rtx, rtx);
extern rtx        gen_reduc_splus_v2df                   (rtx, rtx);
extern rtx        gen_reduc_splus_v8qi                   (rtx, rtx);
extern rtx        gen_reduc_splus_v16qi                  (rtx, rtx);
extern rtx        gen_reduc_splus_v4hi                   (rtx, rtx);
extern rtx        gen_reduc_splus_v8hi                   (rtx, rtx);
extern rtx        gen_reduc_splus_v4si                   (rtx, rtx);
extern rtx        gen_reduc_uplus_v8qi                   (rtx, rtx);
extern rtx        gen_reduc_uplus_v16qi                  (rtx, rtx);
extern rtx        gen_reduc_uplus_v4hi                   (rtx, rtx);
extern rtx        gen_reduc_uplus_v8hi                   (rtx, rtx);
extern rtx        gen_reduc_uplus_v4si                   (rtx, rtx);
extern rtx        gen_reduc_uplus_v2di                   (rtx, rtx);
extern rtx        gen_reduc_splus_v2di                   (rtx, rtx);
extern rtx        gen_reduc_uplus_v2si                   (rtx, rtx);
extern rtx        gen_reduc_splus_v2si                   (rtx, rtx);
extern rtx        gen_aarch64_simd_bslv8qi               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv16qi              (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv4hi               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv8hi               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv2si               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv4si               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv2di               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv2sf               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv4sf               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_simd_bslv2df               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_vcond_internalv8qi         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_vcond_internalv16qi        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_vcond_internalv4hi         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_vcond_internalv8hi         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_vcond_internalv2si         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_vcond_internalv4si         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_vcond_internalv2di         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_vcond_internalv2sf         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_vcond_internalv4sf         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_vcond_internalv2df         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv8qiv8qi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv16qiv16qi                    (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4hiv4hi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv8hiv8hi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2siv2si                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4siv4si                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2div2di                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2sfv2sf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4sfv4sf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2dfv2df                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv8qiv8qi                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv16qiv16qi                   (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4hiv4hi                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv8hiv8hi                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2siv2si                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4siv4si                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2div2di                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_createv8qi                 (rtx, rtx);
extern rtx        gen_aarch64_createv4hi                 (rtx, rtx);
extern rtx        gen_aarch64_createv2si                 (rtx, rtx);
extern rtx        gen_aarch64_createdi                   (rtx, rtx);
extern rtx        gen_aarch64_createdf                   (rtx, rtx);
extern rtx        gen_aarch64_createv2sf                 (rtx, rtx);
extern rtx        gen_aarch64_get_lanedi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_reinterpretv8qiv8qi        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv8qiv4hi        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv8qiv2si        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv8qiv2sf        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv8qidi          (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv8qidf          (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4hiv8qi        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4hiv4hi        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4hiv2si        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4hiv2sf        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4hidi          (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4hidf          (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2siv8qi        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2siv4hi        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2siv2si        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2siv2sf        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2sidi          (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2sidf          (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2sfv8qi        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2sfv4hi        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2sfv2si        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2sfv2sf        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2sfdi          (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2sfdf          (rtx, rtx);
extern rtx        gen_aarch64_reinterpretdiv8qi          (rtx, rtx);
extern rtx        gen_aarch64_reinterpretdiv4hi          (rtx, rtx);
extern rtx        gen_aarch64_reinterpretdiv2si          (rtx, rtx);
extern rtx        gen_aarch64_reinterpretdidi            (rtx, rtx);
extern rtx        gen_aarch64_reinterpretdidf            (rtx, rtx);
extern rtx        gen_aarch64_reinterpretdiv2sf          (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv16qiv16qi      (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv16qiv8hi       (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv16qiv4si       (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv16qiv2di       (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv16qiv4sf       (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv16qiv2df       (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv8hiv16qi       (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv8hiv8hi        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv8hiv4si        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv8hiv2di        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv8hiv4sf        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv8hiv2df        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4siv16qi       (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4siv8hi        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4siv4si        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4siv2di        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4siv4sf        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4siv2df        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4sfv16qi       (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4sfv8hi        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4sfv4si        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4sfv2di        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4sfv4sf        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv4sfv2df        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2div16qi       (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2div8hi        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2div4si        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2div2di        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2div4sf        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2div2df        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2dfv16qi       (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2dfv8hi        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2dfv4si        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2dfv2di        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2dfv4sf        (rtx, rtx);
extern rtx        gen_aarch64_reinterpretv2dfv2df        (rtx, rtx);
extern rtx        gen_aarch64_saddl2v16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_saddl2v8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_saddl2v4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddl2v16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddl2v8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddl2v4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubl2v16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubl2v8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubl2v4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_usubl2v16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_usubl2v8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_usubl2v4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_saddw2v16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_saddw2v8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_saddw2v4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddw2v16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddw2v8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_uaddw2v4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubw2v16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubw2v8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ssubw2v4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_usubw2v16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_usubw2v8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_usubw2v4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_lanev4hi           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_lanev2si           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_lanehi             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_lanesi             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_laneqv4hi          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_laneqv2si          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_laneqhi            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal_laneqsi            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_lanev4hi           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_lanev2si           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_lanehi             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_lanesi             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_laneqv4hi          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_laneqv2si          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_laneqhi            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl_laneqsi            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2v8hi               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2v4si               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2v8hi               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2v4si               (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2_lanev8hi          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2_lanev4si          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2_laneqv8hi         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2_laneqv4si         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2_lanev8hi          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2_lanev4si          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2_laneqv8hi         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2_laneqv4si         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2_nv8hi             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlal2_nv4si             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2_nv8hi             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmlsl2_nv4si             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull_lanev4hi           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull_lanev2si           (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull_lanehi             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull_lanesi             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull_laneqv4hi          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull_laneqv2si          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2v8hi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2v4si               (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2_lanev8hi          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2_lanev4si          (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2_laneqv8hi         (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2_laneqv4si         (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2_nv8hi             (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqdmull2_nv4si             (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshl_nv8qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshl_nv16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshl_nv4hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshl_nv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshl_nv2si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshl_nv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshl_nv2di                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshl_ndi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushl_nv8qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushl_nv16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushl_nv4hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushl_nv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushl_nv2si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushl_nv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushl_nv2di                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushl_ndi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshr_nv8qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshr_nv16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshr_nv4hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshr_nv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshr_nv2si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshr_nv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshr_nv2di                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_sshr_ndi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushr_nv8qi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushr_nv16qi                (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushr_nv4hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushr_nv8hi                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushr_nv2si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushr_nv4si                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushr_nv2di                 (rtx, rtx, rtx);
extern rtx        gen_aarch64_ushr_ndi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_smaxv8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_sminv8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_umaxv8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uminv8qi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_smaxv16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_sminv16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_umaxv16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_uminv16qi                  (rtx, rtx, rtx);
extern rtx        gen_aarch64_smaxv4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_sminv4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_umaxv4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uminv4hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_smaxv8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_sminv8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_umaxv8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uminv8hi                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_smaxv2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_sminv2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_umaxv2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uminv2si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_smaxv4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_sminv4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_umaxv4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_uminv4si                   (rtx, rtx, rtx);
extern rtx        gen_aarch64_sqrtv2sf                   (rtx, rtx);
extern rtx        gen_aarch64_sqrtv4sf                   (rtx, rtx);
extern rtx        gen_aarch64_sqrtv2df                   (rtx, rtx);
extern rtx        gen_movoi                              (rtx, rtx);
extern rtx        gen_movci                              (rtx, rtx);
extern rtx        gen_movxi                              (rtx, rtx);
extern rtx        gen_aarch64_ld2v8qi                    (rtx, rtx);
extern rtx        gen_aarch64_ld3v8qi                    (rtx, rtx);
extern rtx        gen_aarch64_ld4v8qi                    (rtx, rtx);
extern rtx        gen_aarch64_ld2v4hi                    (rtx, rtx);
extern rtx        gen_aarch64_ld3v4hi                    (rtx, rtx);
extern rtx        gen_aarch64_ld4v4hi                    (rtx, rtx);
extern rtx        gen_aarch64_ld2v2si                    (rtx, rtx);
extern rtx        gen_aarch64_ld3v2si                    (rtx, rtx);
extern rtx        gen_aarch64_ld4v2si                    (rtx, rtx);
extern rtx        gen_aarch64_ld2v2sf                    (rtx, rtx);
extern rtx        gen_aarch64_ld3v2sf                    (rtx, rtx);
extern rtx        gen_aarch64_ld4v2sf                    (rtx, rtx);
extern rtx        gen_aarch64_ld2di                      (rtx, rtx);
extern rtx        gen_aarch64_ld3di                      (rtx, rtx);
extern rtx        gen_aarch64_ld4di                      (rtx, rtx);
extern rtx        gen_aarch64_ld2df                      (rtx, rtx);
extern rtx        gen_aarch64_ld3df                      (rtx, rtx);
extern rtx        gen_aarch64_ld4df                      (rtx, rtx);
extern rtx        gen_aarch64_ld1v8qi                    (rtx, rtx);
extern rtx        gen_aarch64_ld1v16qi                   (rtx, rtx);
extern rtx        gen_aarch64_ld1v4hi                    (rtx, rtx);
extern rtx        gen_aarch64_ld1v8hi                    (rtx, rtx);
extern rtx        gen_aarch64_ld1v2si                    (rtx, rtx);
extern rtx        gen_aarch64_ld1v4si                    (rtx, rtx);
extern rtx        gen_aarch64_ld1v2di                    (rtx, rtx);
extern rtx        gen_aarch64_ld1v2sf                    (rtx, rtx);
extern rtx        gen_aarch64_ld1v4sf                    (rtx, rtx);
extern rtx        gen_aarch64_ld1v2df                    (rtx, rtx);
extern rtx        gen_aarch64_ld2v16qi                   (rtx, rtx);
extern rtx        gen_aarch64_ld3v16qi                   (rtx, rtx);
extern rtx        gen_aarch64_ld4v16qi                   (rtx, rtx);
extern rtx        gen_aarch64_ld2v8hi                    (rtx, rtx);
extern rtx        gen_aarch64_ld3v8hi                    (rtx, rtx);
extern rtx        gen_aarch64_ld4v8hi                    (rtx, rtx);
extern rtx        gen_aarch64_ld2v4si                    (rtx, rtx);
extern rtx        gen_aarch64_ld3v4si                    (rtx, rtx);
extern rtx        gen_aarch64_ld4v4si                    (rtx, rtx);
extern rtx        gen_aarch64_ld2v2di                    (rtx, rtx);
extern rtx        gen_aarch64_ld3v2di                    (rtx, rtx);
extern rtx        gen_aarch64_ld4v2di                    (rtx, rtx);
extern rtx        gen_aarch64_ld2v4sf                    (rtx, rtx);
extern rtx        gen_aarch64_ld3v4sf                    (rtx, rtx);
extern rtx        gen_aarch64_ld4v4sf                    (rtx, rtx);
extern rtx        gen_aarch64_ld2v2df                    (rtx, rtx);
extern rtx        gen_aarch64_ld3v2df                    (rtx, rtx);
extern rtx        gen_aarch64_ld4v2df                    (rtx, rtx);
extern rtx        gen_aarch64_get_dregoiv8qi             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregciv8qi             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregxiv8qi             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregoiv4hi             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregciv4hi             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregxiv4hi             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregoiv2si             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregciv2si             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregxiv2si             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregoiv2sf             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregciv2sf             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregxiv2sf             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregoidi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregcidi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregxidi               (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregoidf               (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregcidf               (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_dregxidf               (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregoiv16qi            (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregciv16qi            (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregxiv16qi            (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregoiv8hi             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregciv8hi             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregxiv8hi             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregoiv4si             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregciv4si             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregxiv4si             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregoiv2di             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregciv2di             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregxiv2di             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregoiv4sf             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregciv4sf             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregxiv4sf             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregoiv2df             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregciv2df             (rtx, rtx, rtx);
extern rtx        gen_aarch64_get_qregxiv2df             (rtx, rtx, rtx);
extern rtx        gen_vec_perm_constv8qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_perm_constv16qi                (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_perm_constv4hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_perm_constv8hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_perm_constv2si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_perm_constv4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_perm_constv2di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_perm_constv2sf                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_perm_constv4sf                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_perm_constv2df                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv8qi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permv16qi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_st2v8qi                    (rtx, rtx);
extern rtx        gen_aarch64_st3v8qi                    (rtx, rtx);
extern rtx        gen_aarch64_st4v8qi                    (rtx, rtx);
extern rtx        gen_aarch64_st2v4hi                    (rtx, rtx);
extern rtx        gen_aarch64_st3v4hi                    (rtx, rtx);
extern rtx        gen_aarch64_st4v4hi                    (rtx, rtx);
extern rtx        gen_aarch64_st2v2si                    (rtx, rtx);
extern rtx        gen_aarch64_st3v2si                    (rtx, rtx);
extern rtx        gen_aarch64_st4v2si                    (rtx, rtx);
extern rtx        gen_aarch64_st2v2sf                    (rtx, rtx);
extern rtx        gen_aarch64_st3v2sf                    (rtx, rtx);
extern rtx        gen_aarch64_st4v2sf                    (rtx, rtx);
extern rtx        gen_aarch64_st2di                      (rtx, rtx);
extern rtx        gen_aarch64_st3di                      (rtx, rtx);
extern rtx        gen_aarch64_st4di                      (rtx, rtx);
extern rtx        gen_aarch64_st2df                      (rtx, rtx);
extern rtx        gen_aarch64_st3df                      (rtx, rtx);
extern rtx        gen_aarch64_st4df                      (rtx, rtx);
extern rtx        gen_aarch64_st2v16qi                   (rtx, rtx);
extern rtx        gen_aarch64_st3v16qi                   (rtx, rtx);
extern rtx        gen_aarch64_st4v16qi                   (rtx, rtx);
extern rtx        gen_aarch64_st2v8hi                    (rtx, rtx);
extern rtx        gen_aarch64_st3v8hi                    (rtx, rtx);
extern rtx        gen_aarch64_st4v8hi                    (rtx, rtx);
extern rtx        gen_aarch64_st2v4si                    (rtx, rtx);
extern rtx        gen_aarch64_st3v4si                    (rtx, rtx);
extern rtx        gen_aarch64_st4v4si                    (rtx, rtx);
extern rtx        gen_aarch64_st2v2di                    (rtx, rtx);
extern rtx        gen_aarch64_st3v2di                    (rtx, rtx);
extern rtx        gen_aarch64_st4v2di                    (rtx, rtx);
extern rtx        gen_aarch64_st2v4sf                    (rtx, rtx);
extern rtx        gen_aarch64_st3v4sf                    (rtx, rtx);
extern rtx        gen_aarch64_st4v4sf                    (rtx, rtx);
extern rtx        gen_aarch64_st2v2df                    (rtx, rtx);
extern rtx        gen_aarch64_st3v2df                    (rtx, rtx);
extern rtx        gen_aarch64_st4v2df                    (rtx, rtx);
extern rtx        gen_aarch64_st1v8qi                    (rtx, rtx);
extern rtx        gen_aarch64_st1v16qi                   (rtx, rtx);
extern rtx        gen_aarch64_st1v4hi                    (rtx, rtx);
extern rtx        gen_aarch64_st1v8hi                    (rtx, rtx);
extern rtx        gen_aarch64_st1v2si                    (rtx, rtx);
extern rtx        gen_aarch64_st1v4si                    (rtx, rtx);
extern rtx        gen_aarch64_st1v2di                    (rtx, rtx);
extern rtx        gen_aarch64_st1v2sf                    (rtx, rtx);
extern rtx        gen_aarch64_st1v4sf                    (rtx, rtx);
extern rtx        gen_aarch64_st1v2df                    (rtx, rtx);
extern rtx        gen_aarch64_set_qregoiv16qi            (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregciv16qi            (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregxiv16qi            (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregoiv8hi             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregciv8hi             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregxiv8hi             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregoiv4si             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregciv4si             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregxiv4si             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregoiv2di             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregciv2di             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregxiv2di             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregoiv4sf             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregciv4sf             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregxiv4sf             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregoiv2df             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregciv2df             (rtx, rtx, rtx, rtx);
extern rtx        gen_aarch64_set_qregxiv2df             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_initv8qi                       (rtx, rtx);
extern rtx        gen_vec_initv16qi                      (rtx, rtx);
extern rtx        gen_vec_initv4hi                       (rtx, rtx);
extern rtx        gen_vec_initv8hi                       (rtx, rtx);
extern rtx        gen_vec_initv2si                       (rtx, rtx);
extern rtx        gen_vec_initv4si                       (rtx, rtx);
extern rtx        gen_vec_initv2di                       (rtx, rtx);
extern rtx        gen_vec_initv2sf                       (rtx, rtx);
extern rtx        gen_vec_initv4sf                       (rtx, rtx);
extern rtx        gen_vec_initv2df                       (rtx, rtx);
extern rtx        gen_atomic_compare_and_swapqi          (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swaphi          (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapsi          (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapdi          (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mem_thread_fence                   (rtx);
extern rtx        gen_dmb                                (rtx);

#endif /* GCC_INSN_FLAGS_H */
