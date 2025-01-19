/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_movti (TARGET_ZARCH)
#define HAVE_force_la_31 (!TARGET_64BIT)
#define HAVE_movstrictsi (TARGET_ZARCH)
#define HAVE_movsf 1
#define HAVE_movsd 1
#define HAVE_movcc 1
#define HAVE_cmpint 1
#define HAVE_fix_trunctfdi2_bfp ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fix_trunctfsi2_bfp (TARGET_HARD_FLOAT)
#define HAVE_fix_truncdfdi2_bfp ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fix_truncdfsi2_bfp (TARGET_HARD_FLOAT)
#define HAVE_fix_truncsfdi2_bfp ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fix_truncsfsi2_bfp (TARGET_HARD_FLOAT)
#define HAVE_fix_trunctddi2_dfp (TARGET_ZARCH && TARGET_HARD_DFP)
#define HAVE_fix_truncdddi2_dfp (TARGET_ZARCH && TARGET_HARD_DFP)
#define HAVE_floatditf2 (TARGET_ZARCH && TARGET_HARD_FLOAT)
#define HAVE_floatdidf2 (TARGET_ZARCH && TARGET_HARD_FLOAT)
#define HAVE_floatdisf2 (TARGET_ZARCH && TARGET_HARD_FLOAT)
#define HAVE_floatditd2 ((TARGET_ZARCH && TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_floatdidd2 ((TARGET_ZARCH && TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_floatsitf2 (TARGET_HARD_FLOAT)
#define HAVE_floatsidf2 (TARGET_HARD_FLOAT)
#define HAVE_floatsisf2 (TARGET_HARD_FLOAT)
#define HAVE_floatsitd2 (TARGET_Z196 && TARGET_HARD_FLOAT)
#define HAVE_floatsidd2 (TARGET_Z196 && TARGET_HARD_FLOAT)
#define HAVE_floatunsditf2 ((TARGET_Z196 && TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_floatunssitf2 (TARGET_Z196 && TARGET_HARD_FLOAT)
#define HAVE_floatunsdidf2 ((TARGET_Z196 && TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_floatunssidf2 (TARGET_Z196 && TARGET_HARD_FLOAT)
#define HAVE_floatunsdisf2 ((TARGET_Z196 && TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_floatunssisf2 (TARGET_Z196 && TARGET_HARD_FLOAT)
#define HAVE_floatunsditd2 ((TARGET_Z196 && TARGET_HARD_FLOAT) && ((TARGET_HARD_DFP) && (TARGET_ZARCH)))
#define HAVE_floatunssitd2 ((TARGET_Z196 && TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_floatunsdidd2 ((TARGET_Z196 && TARGET_HARD_FLOAT) && ((TARGET_HARD_DFP) && (TARGET_ZARCH)))
#define HAVE_floatunssidd2 ((TARGET_Z196 && TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_truncdfsf2 (TARGET_HARD_FLOAT)
#define HAVE_trunctfdf2 (TARGET_HARD_FLOAT)
#define HAVE_trunctfsf2 (TARGET_HARD_FLOAT)
#define HAVE_trunctddd2 (TARGET_HARD_DFP)
#define HAVE_truncddsd2 (TARGET_HARD_DFP)
#define HAVE_extenddftf2 (TARGET_HARD_FLOAT \
   && GET_MODE_SIZE (TFmode) > GET_MODE_SIZE (DFmode))
#define HAVE_extendsftf2 (TARGET_HARD_FLOAT \
   && GET_MODE_SIZE (TFmode) > GET_MODE_SIZE (SFmode))
#define HAVE_extendsfdf2 (TARGET_HARD_FLOAT \
   && GET_MODE_SIZE (DFmode) > GET_MODE_SIZE (SFmode))
#define HAVE_extenddfsf2 (TARGET_HARD_FLOAT \
   && GET_MODE_SIZE (SFmode) > GET_MODE_SIZE (DFmode))
#define HAVE_extendddtd2 (TARGET_HARD_DFP)
#define HAVE_extendsddd2 (TARGET_HARD_DFP)
#define HAVE_addti3 (TARGET_ZARCH)
#define HAVE_addtf3 (TARGET_HARD_FLOAT)
#define HAVE_adddf3 (TARGET_HARD_FLOAT)
#define HAVE_addsf3 (TARGET_HARD_FLOAT)
#define HAVE_addtd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_adddd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_subti3 (TARGET_ZARCH)
#define HAVE_subtf3 (TARGET_HARD_FLOAT)
#define HAVE_subdf3 (TARGET_HARD_FLOAT)
#define HAVE_subsf3 (TARGET_HARD_FLOAT)
#define HAVE_subtd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_subdd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_sne 1
#define HAVE_muldi3 (TARGET_ZARCH)
#define HAVE_mulsi3 1
#define HAVE_mulsidi3 (!TARGET_ZARCH)
#define HAVE_umulditi3 ((TARGET_CPU_ZARCH) && (TARGET_ZARCH))
#define HAVE_umulsidi3 ((TARGET_CPU_ZARCH) && (!TARGET_ZARCH))
#define HAVE_multf3 (TARGET_HARD_FLOAT)
#define HAVE_muldf3 (TARGET_HARD_FLOAT)
#define HAVE_mulsf3 (TARGET_HARD_FLOAT)
#define HAVE_multd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_muldd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_fmadf4 (TARGET_HARD_FLOAT)
#define HAVE_fmasf4 (TARGET_HARD_FLOAT)
#define HAVE_fmsdf4 (TARGET_HARD_FLOAT)
#define HAVE_fmssf4 (TARGET_HARD_FLOAT)
#define HAVE_divmodtidi3 (TARGET_ZARCH)
#define HAVE_divmodtisi3 (TARGET_ZARCH)
#define HAVE_udivmodtidi3 (TARGET_ZARCH)
#define HAVE_divmoddisi3 (!TARGET_ZARCH)
#define HAVE_udivmoddisi3 (!TARGET_ZARCH && TARGET_CPU_ZARCH)
#define HAVE_divtf3 (TARGET_HARD_FLOAT)
#define HAVE_divdf3 (TARGET_HARD_FLOAT)
#define HAVE_divsf3 (TARGET_HARD_FLOAT)
#define HAVE_divtd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_divdd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_absdi2 (TARGET_ZARCH)
#define HAVE_abssi2 1
#define HAVE_sqrttf2 (TARGET_HARD_FLOAT)
#define HAVE_sqrtdf2 (TARGET_HARD_FLOAT)
#define HAVE_sqrtsf2 (TARGET_HARD_FLOAT)
#define HAVE_clztidi2 ((unsigned HOST_WIDE_INT) INTVAL (operands[2]) \
   == (unsigned HOST_WIDE_INT) 1 << 63 \
   && TARGET_EXTIMM && TARGET_ZARCH)
#define HAVE_rotldi3 ((TARGET_CPU_ZARCH) && (TARGET_ZARCH))
#define HAVE_rotlsi3 (TARGET_CPU_ZARCH)
#define HAVE_trap 1
#define HAVE_condtrap 1
#define HAVE_doloop_si64 (TARGET_CPU_ZARCH)
#define HAVE_doloop_si31 (!TARGET_CPU_ZARCH)
#define HAVE_doloop_di (TARGET_ZARCH)
#define HAVE_indirect_jump 1
#define HAVE_casesi_jump 1
#define HAVE_blockage 1
#define HAVE_mem_thread_fence_1 1
#define HAVE_atomic_loaddi_1 (!TARGET_ZARCH)
#define HAVE_atomic_loadti_1 (TARGET_ZARCH)
#define HAVE_atomic_storedi_1 (!TARGET_ZARCH)
#define HAVE_atomic_storeti_1 (TARGET_ZARCH)
#define HAVE_atomic_fetch_anddi_iaf ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_iordi_iaf ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_xordi_iaf ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_adddi_iaf ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_andsi_iaf (TARGET_Z196)
#define HAVE_atomic_fetch_iorsi_iaf (TARGET_Z196)
#define HAVE_atomic_fetch_xorsi_iaf (TARGET_Z196)
#define HAVE_atomic_fetch_addsi_iaf (TARGET_Z196)
#define HAVE_nop 1
#define HAVE_nop1 1
#define HAVE_nop_2_byte 1
#define HAVE_nop_4_byte 1
#define HAVE_nop_6_byte (TARGET_CPU_ZARCH)
#define HAVE_pool_align 1
#define HAVE_pool_section_start 1
#define HAVE_pool_section_end 1
#define HAVE_main_base_31_small (!TARGET_CPU_ZARCH && GET_MODE (operands[0]) == Pmode)
#define HAVE_main_base_31_large (!TARGET_CPU_ZARCH && GET_MODE (operands[0]) == Pmode)
#define HAVE_main_base_64 (TARGET_CPU_ZARCH && GET_MODE (operands[0]) == Pmode)
#define HAVE_main_pool (GET_MODE (operands[0]) == Pmode)
#define HAVE_reload_base_31 (!TARGET_CPU_ZARCH && GET_MODE (operands[0]) == Pmode)
#define HAVE_reload_base_64 (TARGET_CPU_ZARCH && GET_MODE (operands[0]) == Pmode)
#define HAVE_pool 1
#define HAVE_stack_protect_setdi 1
#define HAVE_stack_protect_setsi 1
#define HAVE_stack_protect_testdi 1
#define HAVE_stack_protect_testsi 1
#define HAVE_stack_tie 1
#define HAVE_prefetch (TARGET_Z10)
#define HAVE_bswapdi2 ((TARGET_CPU_ZARCH) && (TARGET_ZARCH))
#define HAVE_bswapsi2 (TARGET_CPU_ZARCH)
#define HAVE_copysigntf3 (TARGET_Z196)
#define HAVE_copysigndf3 (TARGET_Z196)
#define HAVE_copysignsf3 (TARGET_Z196)
#define HAVE_copysigntd3 ((TARGET_Z196) && (TARGET_HARD_DFP))
#define HAVE_copysigndd3 ((TARGET_Z196) && (TARGET_HARD_DFP))
#define HAVE_tbegin_1 (TARGET_HTM && INTVAL (operands[0]) >= 0 && INTVAL (operands[0]) <= 0xffff)
#define HAVE_tbegin_nofloat_1 (TARGET_HTM && INTVAL (operands[0]) >= 0 && INTVAL (operands[0]) <= 0xffff)
#define HAVE_etnd (TARGET_HTM)
#define HAVE_ntstg (TARGET_HTM)
#define HAVE_reloadtidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloaddidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadhidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadqidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadtisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadsisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadhisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadqisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadtidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloaddidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadhidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadqidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadtisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadsisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadhisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadqisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadtfdi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloaddfdi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsfdi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadtddi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloaddddi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsddi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadtfsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddfsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadsfsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadtdsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadddsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadsdsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadtfdi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloaddfdi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsfdi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadtddi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloaddddi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsddi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadtfsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddfsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadsfsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadtdsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadddsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadsdsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddi_larl_odd_addend_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsi_larl_odd_addend_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddi_plus (TARGET_64BIT)
#define HAVE_reloadsi_plus (!TARGET_64BIT)
#define HAVE_reloaddi_nonoffmem_in (TARGET_64BIT)
#define HAVE_reloadsi_nonoffmem_in (!TARGET_64BIT)
#define HAVE_reloaddi_nonoffmem_out (TARGET_64BIT)
#define HAVE_reloadsi_nonoffmem_out (!TARGET_64BIT)
#define HAVE_reloaddi_PIC_addr (TARGET_64BIT)
#define HAVE_reloadsi_PIC_addr (!TARGET_64BIT)
#define HAVE_movdi 1
#define HAVE_movsi 1
#define HAVE_movhi 1
#define HAVE_movqi 1
#define HAVE_movtf 1
#define HAVE_movtd 1
#define HAVE_movdf 1
#define HAVE_movdd 1
#define HAVE_load_multiple (reload_completed)
#define HAVE_store_multiple (reload_completed)
#define HAVE_strlendi (TARGET_64BIT)
#define HAVE_strlensi (!TARGET_64BIT)
#define HAVE_cmpstrsi 1
#define HAVE_movstr 1
#define HAVE_movmemdi (TARGET_ZARCH)
#define HAVE_movmemsi 1
#define HAVE_movmem_short 1
#define HAVE_movmem_long 1
#define HAVE_signbittf2 (TARGET_HARD_FLOAT)
#define HAVE_signbitdf2 (TARGET_HARD_FLOAT)
#define HAVE_signbitsf2 (TARGET_HARD_FLOAT)
#define HAVE_signbittd2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_signbitdd2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_signbitsd2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_isinftf2 (TARGET_HARD_FLOAT)
#define HAVE_isinfdf2 (TARGET_HARD_FLOAT)
#define HAVE_isinfsf2 (TARGET_HARD_FLOAT)
#define HAVE_isinftd2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_isinfdd2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_isinfsd2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_setmemdi (TARGET_ZARCH)
#define HAVE_setmemsi 1
#define HAVE_clrmem_short 1
#define HAVE_setmem_long 1
#define HAVE_cmpmemsi 1
#define HAVE_cmpmem_short 1
#define HAVE_cmpmem_long 1
#define HAVE_extzv (TARGET_Z10)
#define HAVE_insv 1
#define HAVE_extendsidi2 1
#define HAVE_extendhidi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendqidi2 1
#define HAVE_extendqisi2 1
#define HAVE_zero_extendsidi2 1
#define HAVE_zero_extendhidi2 1
#define HAVE_zero_extendqidi2 1
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendqihi2 (TARGET_ZARCH && !TARGET_EXTIMM)
#define HAVE_fixuns_truncdddi2 (TARGET_HARD_DFP)
#define HAVE_fixuns_trunctddi2 (TARGET_HARD_DFP)
#define HAVE_fixuns_trunctfdi2 ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fixuns_trunctfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fixuns_truncdfdi2 ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fixuns_truncdfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fixuns_truncsfdi2 ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fixuns_truncsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fixuns_trunctdsi2 (TARGET_Z196 && TARGET_HARD_DFP)
#define HAVE_fixuns_truncddsi2 (TARGET_Z196 && TARGET_HARD_DFP)
#define HAVE_fix_truncdfdi2 ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fix_truncdfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fix_truncsfdi2 ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fix_truncsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fix_trunctddi2 (TARGET_ZARCH && TARGET_HARD_DFP)
#define HAVE_fix_truncdddi2 (TARGET_ZARCH && TARGET_HARD_DFP)
#define HAVE_fix_trunctfdi2 ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fix_trunctfsi2 (TARGET_HARD_FLOAT)
#define HAVE_trunctftd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) > GET_MODE_SIZE (TDmode))
#define HAVE_trunctfdd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) > GET_MODE_SIZE (DDmode))
#define HAVE_trunctfsd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) > GET_MODE_SIZE (SDmode))
#define HAVE_truncdftd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DFmode) > GET_MODE_SIZE (TDmode))
#define HAVE_truncdfdd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DFmode) > GET_MODE_SIZE (DDmode))
#define HAVE_truncdfsd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DFmode) > GET_MODE_SIZE (SDmode))
#define HAVE_truncsftd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SFmode) > GET_MODE_SIZE (TDmode))
#define HAVE_truncsfdd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SFmode) > GET_MODE_SIZE (DDmode))
#define HAVE_truncsfsd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SFmode) > GET_MODE_SIZE (SDmode))
#define HAVE_trunctdtf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) >= GET_MODE_SIZE (TFmode))
#define HAVE_truncddtf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) >= GET_MODE_SIZE (TFmode))
#define HAVE_truncsdtf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) >= GET_MODE_SIZE (TFmode))
#define HAVE_trunctddf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) >= GET_MODE_SIZE (DFmode))
#define HAVE_truncdddf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) >= GET_MODE_SIZE (DFmode))
#define HAVE_truncsddf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) >= GET_MODE_SIZE (DFmode))
#define HAVE_trunctdsf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) >= GET_MODE_SIZE (SFmode))
#define HAVE_truncddsf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) >= GET_MODE_SIZE (SFmode))
#define HAVE_truncsdsf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) >= GET_MODE_SIZE (SFmode))
#define HAVE_extendtftd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) <= GET_MODE_SIZE (TDmode))
#define HAVE_extendtfdd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) <= GET_MODE_SIZE (DDmode))
#define HAVE_extendtfsd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) <= GET_MODE_SIZE (SDmode))
#define HAVE_extenddftd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DFmode) <= GET_MODE_SIZE (TDmode))
#define HAVE_extenddfdd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DFmode) <= GET_MODE_SIZE (DDmode))
#define HAVE_extenddfsd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DFmode) <= GET_MODE_SIZE (SDmode))
#define HAVE_extendsftd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SFmode) <= GET_MODE_SIZE (TDmode))
#define HAVE_extendsfdd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SFmode) <= GET_MODE_SIZE (DDmode))
#define HAVE_extendsfsd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SFmode) <= GET_MODE_SIZE (SDmode))
#define HAVE_extendtdtf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) < GET_MODE_SIZE (TFmode))
#define HAVE_extendddtf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) < GET_MODE_SIZE (TFmode))
#define HAVE_extendsdtf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) < GET_MODE_SIZE (TFmode))
#define HAVE_extendtddf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) < GET_MODE_SIZE (DFmode))
#define HAVE_extenddddf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) < GET_MODE_SIZE (DFmode))
#define HAVE_extendsddf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) < GET_MODE_SIZE (DFmode))
#define HAVE_extendtdsf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) < GET_MODE_SIZE (SFmode))
#define HAVE_extendddsf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) < GET_MODE_SIZE (SFmode))
#define HAVE_extendsdsf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) < GET_MODE_SIZE (SFmode))
#define HAVE_adddi3 1
#define HAVE_addsi3 1
#define HAVE_subdi3 1
#define HAVE_subsi3 1
#define HAVE_adddicc ((TARGET_CPU_ZARCH) && (TARGET_ZARCH))
#define HAVE_addsicc (TARGET_CPU_ZARCH)
#define HAVE_cstoredi4 ((TARGET_CPU_ZARCH) && (TARGET_ZARCH))
#define HAVE_cstoresi4 (TARGET_CPU_ZARCH)
#define HAVE_cstorecc4 1
#define HAVE_movdicc ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_movsicc (TARGET_Z196)
#define HAVE_divmoddi4 (TARGET_ZARCH)
#define HAVE_udivmoddi4 (TARGET_ZARCH)
#define HAVE_divmodsi4 (!TARGET_ZARCH)
#define HAVE_udivmodsi4 (!TARGET_ZARCH && TARGET_CPU_ZARCH)
#define HAVE_udivsi3 (!TARGET_ZARCH && !TARGET_CPU_ZARCH)
#define HAVE_umodsi3 (!TARGET_ZARCH && !TARGET_CPU_ZARCH)
#define HAVE_anddi3 (TARGET_ZARCH)
#define HAVE_andsi3 1
#define HAVE_andhi3 1
#define HAVE_andqi3 1
#define HAVE_iordi3 (TARGET_ZARCH)
#define HAVE_iorsi3 1
#define HAVE_iorhi3 1
#define HAVE_iorqi3 1
#define HAVE_xordi3 (TARGET_ZARCH)
#define HAVE_xorsi3 1
#define HAVE_xorhi3 1
#define HAVE_xorqi3 1
#define HAVE_negdi2 1
#define HAVE_negsi2 1
#define HAVE_negtf2 (TARGET_HARD_FLOAT)
#define HAVE_negdf2 (TARGET_HARD_FLOAT)
#define HAVE_negsf2 (TARGET_HARD_FLOAT)
#define HAVE_abstf2 (TARGET_HARD_FLOAT)
#define HAVE_absdf2 (TARGET_HARD_FLOAT)
#define HAVE_abssf2 (TARGET_HARD_FLOAT)
#define HAVE_one_cmpldi2 (TARGET_ZARCH)
#define HAVE_one_cmplsi2 1
#define HAVE_one_cmplhi2 1
#define HAVE_one_cmplqi2 1
#define HAVE_clzdi2 (TARGET_EXTIMM && TARGET_ZARCH)
#define HAVE_ashldi3 1
#define HAVE_lshrdi3 1
#define HAVE_ashlsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashrdi3 1
#define HAVE_ashrsi3 1
#define HAVE_cbranchdi4 (TARGET_ZARCH)
#define HAVE_cbranchsi4 1
#define HAVE_cbranchtf4 (TARGET_HARD_FLOAT)
#define HAVE_cbranchdf4 (TARGET_HARD_FLOAT)
#define HAVE_cbranchsf4 (TARGET_HARD_FLOAT)
#define HAVE_cbranchtd4 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_cbranchdd4 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_cbranchcc4 (TARGET_HARD_FLOAT)
#define HAVE_ctrapdi4 (TARGET_ZARCH)
#define HAVE_ctrapsi4 1
#define HAVE_ctraptf4 1
#define HAVE_ctrapdf4 1
#define HAVE_ctrapsf4 1
#define HAVE_ctraptd4 (TARGET_HARD_DFP)
#define HAVE_ctrapdd4 (TARGET_HARD_DFP)
#define HAVE_doloop_end 1
#define HAVE_jump 1
#define HAVE_casesi 1
#define HAVE_untyped_call 1
#define HAVE_sibcall 1
#define HAVE_sibcall_value 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_get_thread_pointerdi (TARGET_64BIT)
#define HAVE_get_thread_pointersi (!TARGET_64BIT)
#define HAVE_set_thread_pointerdi (TARGET_64BIT)
#define HAVE_set_thread_pointersi (!TARGET_64BIT)
#define HAVE_mem_signal_fence 1
#define HAVE_mem_thread_fence 1
#define HAVE_atomic_loadti (TARGET_ZARCH)
#define HAVE_atomic_loaddi 1
#define HAVE_atomic_loadsi 1
#define HAVE_atomic_loadhi 1
#define HAVE_atomic_loadqi 1
#define HAVE_atomic_storeti (TARGET_ZARCH)
#define HAVE_atomic_storedi 1
#define HAVE_atomic_storesi 1
#define HAVE_atomic_storehi 1
#define HAVE_atomic_storeqi 1
#define HAVE_atomic_compare_and_swapti (TARGET_ZARCH)
#define HAVE_atomic_compare_and_swapdi 1
#define HAVE_atomic_compare_and_swapsi 1
#define HAVE_atomic_compare_and_swaphi 1
#define HAVE_atomic_compare_and_swapqi 1
#define HAVE_atomic_compare_and_swapti_internal (TARGET_ZARCH)
#define HAVE_atomic_compare_and_swapdi_internal 1
#define HAVE_atomic_compare_and_swapsi_internal 1
#define HAVE_atomic_fetch_anddi ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_iordi ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_xordi ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_adddi ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_andsi (TARGET_Z196)
#define HAVE_atomic_fetch_iorsi (TARGET_Z196)
#define HAVE_atomic_fetch_xorsi (TARGET_Z196)
#define HAVE_atomic_fetch_addsi (TARGET_Z196)
#define HAVE_atomic_andhi 1
#define HAVE_atomic_iorhi 1
#define HAVE_atomic_xorhi 1
#define HAVE_atomic_addhi 1
#define HAVE_atomic_subhi 1
#define HAVE_atomic_nandhi 1
#define HAVE_atomic_andqi 1
#define HAVE_atomic_iorqi 1
#define HAVE_atomic_xorqi 1
#define HAVE_atomic_addqi 1
#define HAVE_atomic_subqi 1
#define HAVE_atomic_nandqi 1
#define HAVE_atomic_fetch_andhi 1
#define HAVE_atomic_fetch_iorhi 1
#define HAVE_atomic_fetch_xorhi 1
#define HAVE_atomic_fetch_addhi 1
#define HAVE_atomic_fetch_subhi 1
#define HAVE_atomic_fetch_nandhi 1
#define HAVE_atomic_fetch_andqi 1
#define HAVE_atomic_fetch_iorqi 1
#define HAVE_atomic_fetch_xorqi 1
#define HAVE_atomic_fetch_addqi 1
#define HAVE_atomic_fetch_subqi 1
#define HAVE_atomic_fetch_nandqi 1
#define HAVE_atomic_and_fetchhi 1
#define HAVE_atomic_ior_fetchhi 1
#define HAVE_atomic_xor_fetchhi 1
#define HAVE_atomic_add_fetchhi 1
#define HAVE_atomic_sub_fetchhi 1
#define HAVE_atomic_nand_fetchhi 1
#define HAVE_atomic_and_fetchqi 1
#define HAVE_atomic_ior_fetchqi 1
#define HAVE_atomic_xor_fetchqi 1
#define HAVE_atomic_add_fetchqi 1
#define HAVE_atomic_sub_fetchqi 1
#define HAVE_atomic_nand_fetchqi 1
#define HAVE_atomic_exchangehi 1
#define HAVE_atomic_exchangeqi 1
#define HAVE_allocate_stack (TARGET_BACKCHAIN)
#define HAVE_builtin_setjmp_receiver (flag_pic)
#define HAVE_save_stack_function 1
#define HAVE_restore_stack_function 1
#define HAVE_restore_stack_block (TARGET_BACKCHAIN)
#define HAVE_save_stack_nonlocal 1
#define HAVE_restore_stack_nonlocal 1
#define HAVE_exception_receiver 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_ptr_extend (TARGET_64BIT)
#define HAVE_stack_protect_set 1
#define HAVE_stack_protect_test 1
#define HAVE_popcountdi2 (TARGET_Z196 && TARGET_64BIT)
#define HAVE_popcountsi2 (TARGET_Z196)
#define HAVE_popcounthi2 (TARGET_Z196)
#define HAVE_popcountqi2 (TARGET_Z196)
#define HAVE_tbegin (TARGET_HTM)
#define HAVE_tbegin_nofloat (TARGET_HTM)
#define HAVE_tbegin_retry (TARGET_HTM)
#define HAVE_tbegin_retry_nofloat (TARGET_HTM)
#define HAVE_tbeginc (TARGET_HTM)
#define HAVE_tend (TARGET_HTM)
#define HAVE_tabort (TARGET_HTM && operands != NULL)
#define HAVE_tx_assist (TARGET_HTM)
static inline rtx gen_prologue_tpf                       (void);
static inline rtx
gen_prologue_tpf(void)
{
  return 0;
}
static inline rtx gen_epilogue_tpf                       (void);
static inline rtx
gen_epilogue_tpf(void)
{
  return 0;
}
extern rtx        gen_movti                              (rtx, rtx);
extern rtx        gen_force_la_31                        (rtx, rtx);
extern rtx        gen_movstrictsi                        (rtx, rtx);
extern rtx        gen_movsf                              (rtx, rtx);
extern rtx        gen_movsd                              (rtx, rtx);
extern rtx        gen_movcc                              (rtx, rtx);
extern rtx        gen_cmpint                             (rtx, rtx);
extern rtx        gen_fix_trunctfdi2_bfp                 (rtx, rtx, rtx);
extern rtx        gen_fix_trunctfsi2_bfp                 (rtx, rtx, rtx);
extern rtx        gen_fix_truncdfdi2_bfp                 (rtx, rtx, rtx);
extern rtx        gen_fix_truncdfsi2_bfp                 (rtx, rtx, rtx);
extern rtx        gen_fix_truncsfdi2_bfp                 (rtx, rtx, rtx);
extern rtx        gen_fix_truncsfsi2_bfp                 (rtx, rtx, rtx);
extern rtx        gen_fix_trunctddi2_dfp                 (rtx, rtx, rtx);
extern rtx        gen_fix_truncdddi2_dfp                 (rtx, rtx, rtx);
extern rtx        gen_floatditf2                         (rtx, rtx);
extern rtx        gen_floatdidf2                         (rtx, rtx);
extern rtx        gen_floatdisf2                         (rtx, rtx);
extern rtx        gen_floatditd2                         (rtx, rtx);
extern rtx        gen_floatdidd2                         (rtx, rtx);
extern rtx        gen_floatsitf2                         (rtx, rtx);
extern rtx        gen_floatsidf2                         (rtx, rtx);
extern rtx        gen_floatsisf2                         (rtx, rtx);
extern rtx        gen_floatsitd2                         (rtx, rtx);
extern rtx        gen_floatsidd2                         (rtx, rtx);
extern rtx        gen_floatunsditf2                      (rtx, rtx);
extern rtx        gen_floatunssitf2                      (rtx, rtx);
extern rtx        gen_floatunsdidf2                      (rtx, rtx);
extern rtx        gen_floatunssidf2                      (rtx, rtx);
extern rtx        gen_floatunsdisf2                      (rtx, rtx);
extern rtx        gen_floatunssisf2                      (rtx, rtx);
extern rtx        gen_floatunsditd2                      (rtx, rtx);
extern rtx        gen_floatunssitd2                      (rtx, rtx);
extern rtx        gen_floatunsdidd2                      (rtx, rtx);
extern rtx        gen_floatunssidd2                      (rtx, rtx);
extern rtx        gen_truncdfsf2                         (rtx, rtx);
extern rtx        gen_trunctfdf2                         (rtx, rtx);
extern rtx        gen_trunctfsf2                         (rtx, rtx);
extern rtx        gen_trunctddd2                         (rtx, rtx);
extern rtx        gen_truncddsd2                         (rtx, rtx);
extern rtx        gen_extenddftf2                        (rtx, rtx);
extern rtx        gen_extendsftf2                        (rtx, rtx);
static inline rtx gen_extenddfdf2                        (rtx, rtx);
static inline rtx
gen_extenddfdf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_extendsfdf2                        (rtx, rtx);
extern rtx        gen_extenddfsf2                        (rtx, rtx);
static inline rtx gen_extendsfsf2                        (rtx, rtx);
static inline rtx
gen_extendsfsf2(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_extendddtd2                        (rtx, rtx);
extern rtx        gen_extendsddd2                        (rtx, rtx);
extern rtx        gen_addti3                             (rtx, rtx, rtx);
extern rtx        gen_addtf3                             (rtx, rtx, rtx);
extern rtx        gen_adddf3                             (rtx, rtx, rtx);
extern rtx        gen_addsf3                             (rtx, rtx, rtx);
extern rtx        gen_addtd3                             (rtx, rtx, rtx);
extern rtx        gen_adddd3                             (rtx, rtx, rtx);
extern rtx        gen_subti3                             (rtx, rtx, rtx);
extern rtx        gen_subtf3                             (rtx, rtx, rtx);
extern rtx        gen_subdf3                             (rtx, rtx, rtx);
extern rtx        gen_subsf3                             (rtx, rtx, rtx);
extern rtx        gen_subtd3                             (rtx, rtx, rtx);
extern rtx        gen_subdd3                             (rtx, rtx, rtx);
extern rtx        gen_sne                                (rtx, rtx);
extern rtx        gen_muldi3                             (rtx, rtx, rtx);
extern rtx        gen_mulsi3                             (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                           (rtx, rtx, rtx);
extern rtx        gen_umulditi3                          (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                          (rtx, rtx, rtx);
extern rtx        gen_multf3                             (rtx, rtx, rtx);
extern rtx        gen_muldf3                             (rtx, rtx, rtx);
extern rtx        gen_mulsf3                             (rtx, rtx, rtx);
extern rtx        gen_multd3                             (rtx, rtx, rtx);
extern rtx        gen_muldd3                             (rtx, rtx, rtx);
extern rtx        gen_fmadf4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_fmasf4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsdf4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_fmssf4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_divmodtidi3                        (rtx, rtx, rtx);
extern rtx        gen_divmodtisi3                        (rtx, rtx, rtx);
extern rtx        gen_udivmodtidi3                       (rtx, rtx, rtx);
extern rtx        gen_divmoddisi3                        (rtx, rtx, rtx);
extern rtx        gen_udivmoddisi3                       (rtx, rtx, rtx);
extern rtx        gen_divtf3                             (rtx, rtx, rtx);
extern rtx        gen_divdf3                             (rtx, rtx, rtx);
extern rtx        gen_divsf3                             (rtx, rtx, rtx);
extern rtx        gen_divtd3                             (rtx, rtx, rtx);
extern rtx        gen_divdd3                             (rtx, rtx, rtx);
extern rtx        gen_absdi2                             (rtx, rtx);
extern rtx        gen_abssi2                             (rtx, rtx);
extern rtx        gen_sqrttf2                            (rtx, rtx);
extern rtx        gen_sqrtdf2                            (rtx, rtx);
extern rtx        gen_sqrtsf2                            (rtx, rtx);
extern rtx        gen_clztidi2                           (rtx, rtx, rtx);
extern rtx        gen_rotldi3                            (rtx, rtx, rtx);
extern rtx        gen_rotlsi3                            (rtx, rtx, rtx);
extern rtx        gen_trap                               (void);
extern rtx        gen_condtrap                           (rtx, rtx);
extern rtx        gen_doloop_si64                        (rtx, rtx, rtx);
extern rtx        gen_doloop_si31                        (rtx, rtx, rtx);
extern rtx        gen_doloop_di                          (rtx, rtx, rtx);
extern rtx        gen_indirect_jump                      (rtx);
extern rtx        gen_casesi_jump                        (rtx, rtx);
extern rtx        gen_blockage                           (void);
extern rtx        gen_mem_thread_fence_1                 (rtx);
extern rtx        gen_atomic_loaddi_1                    (rtx, rtx);
extern rtx        gen_atomic_loadti_1                    (rtx, rtx);
extern rtx        gen_atomic_storedi_1                   (rtx, rtx);
extern rtx        gen_atomic_storeti_1                   (rtx, rtx);
extern rtx        gen_atomic_fetch_anddi_iaf             (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_iordi_iaf             (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xordi_iaf             (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_adddi_iaf             (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andsi_iaf             (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_iorsi_iaf             (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorsi_iaf             (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addsi_iaf             (rtx, rtx, rtx);
extern rtx        gen_nop                                (void);
extern rtx        gen_nop1                               (void);
extern rtx        gen_nop_2_byte                         (void);
extern rtx        gen_nop_4_byte                         (void);
extern rtx        gen_nop_6_byte                         (void);
extern rtx        gen_pool_align                         (rtx);
extern rtx        gen_pool_section_start                 (void);
extern rtx        gen_pool_section_end                   (void);
extern rtx        gen_main_base_31_small                 (rtx, rtx);
extern rtx        gen_main_base_31_large                 (rtx, rtx, rtx);
extern rtx        gen_main_base_64                       (rtx, rtx);
extern rtx        gen_main_pool                          (rtx);
extern rtx        gen_reload_base_31                     (rtx, rtx);
extern rtx        gen_reload_base_64                     (rtx, rtx);
extern rtx        gen_pool                               (rtx);
extern rtx        gen_stack_protect_setdi                (rtx, rtx);
extern rtx        gen_stack_protect_setsi                (rtx, rtx);
extern rtx        gen_stack_protect_testdi               (rtx, rtx);
extern rtx        gen_stack_protect_testsi               (rtx, rtx);
extern rtx        gen_stack_tie                          (rtx);
extern rtx        gen_prefetch                           (rtx, rtx, rtx);
extern rtx        gen_bswapdi2                           (rtx, rtx);
extern rtx        gen_bswapsi2                           (rtx, rtx);
extern rtx        gen_copysigntf3                        (rtx, rtx, rtx);
extern rtx        gen_copysigndf3                        (rtx, rtx, rtx);
extern rtx        gen_copysignsf3                        (rtx, rtx, rtx);
extern rtx        gen_copysigntd3                        (rtx, rtx, rtx);
extern rtx        gen_copysigndd3                        (rtx, rtx, rtx);
extern rtx        gen_tbegin_1                           (rtx, rtx);
extern rtx        gen_tbegin_nofloat_1                   (rtx, rtx);
extern rtx        gen_etnd                               (rtx);
extern rtx        gen_ntstg                              (rtx, rtx);
extern rtx        gen_reloadtidi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloaddidi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadsidi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadhidi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadqidi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadtisi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloaddisi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadsisi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadhisi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadqisi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadtidi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloaddidi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadsidi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadhidi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadqidi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadtisi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloaddisi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadsisi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadhisi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadqisi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadtfdi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloaddfdi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadsfdi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadtddi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloaddddi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadsddi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadtfsi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloaddfsi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadsfsi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadtdsi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadddsi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadsdsi_tomem_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadtfdi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloaddfdi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadsfdi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadtddi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloaddddi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadsddi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadtfsi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloaddfsi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadsfsi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadtdsi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadddsi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloadsdsi_toreg_z10               (rtx, rtx, rtx);
extern rtx        gen_reloaddi_larl_odd_addend_z10       (rtx, rtx, rtx);
extern rtx        gen_reloadsi_larl_odd_addend_z10       (rtx, rtx, rtx);
extern rtx        gen_reloaddi_plus                      (rtx, rtx, rtx);
extern rtx        gen_reloadsi_plus                      (rtx, rtx, rtx);
extern rtx        gen_reloaddi_nonoffmem_in              (rtx, rtx, rtx);
extern rtx        gen_reloadsi_nonoffmem_in              (rtx, rtx, rtx);
extern rtx        gen_reloaddi_nonoffmem_out             (rtx, rtx, rtx);
extern rtx        gen_reloadsi_nonoffmem_out             (rtx, rtx, rtx);
extern rtx        gen_reloaddi_PIC_addr                  (rtx, rtx, rtx);
extern rtx        gen_reloadsi_PIC_addr                  (rtx, rtx, rtx);
extern rtx        gen_movdi                              (rtx, rtx);
extern rtx        gen_movsi                              (rtx, rtx);
extern rtx        gen_movhi                              (rtx, rtx);
extern rtx        gen_movqi                              (rtx, rtx);
extern rtx        gen_movtf                              (rtx, rtx);
extern rtx        gen_movtd                              (rtx, rtx);
extern rtx        gen_movdf                              (rtx, rtx);
extern rtx        gen_movdd                              (rtx, rtx);
extern rtx        gen_load_multiple                      (rtx, rtx, rtx);
extern rtx        gen_store_multiple                     (rtx, rtx, rtx);
extern rtx        gen_strlendi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_strlensi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_cmpstrsi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_movstr                             (rtx, rtx, rtx);
extern rtx        gen_movmemdi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_movmem_short                       (rtx, rtx, rtx);
extern rtx        gen_movmem_long                        (rtx, rtx, rtx);
extern rtx        gen_signbittf2                         (rtx, rtx);
extern rtx        gen_signbitdf2                         (rtx, rtx);
extern rtx        gen_signbitsf2                         (rtx, rtx);
extern rtx        gen_signbittd2                         (rtx, rtx);
extern rtx        gen_signbitdd2                         (rtx, rtx);
extern rtx        gen_signbitsd2                         (rtx, rtx);
extern rtx        gen_isinftf2                           (rtx, rtx);
extern rtx        gen_isinfdf2                           (rtx, rtx);
extern rtx        gen_isinfsf2                           (rtx, rtx);
extern rtx        gen_isinftd2                           (rtx, rtx);
extern rtx        gen_isinfdd2                           (rtx, rtx);
extern rtx        gen_isinfsd2                           (rtx, rtx);
extern rtx        gen_setmemdi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_setmemsi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_clrmem_short                       (rtx, rtx);
extern rtx        gen_setmem_long                        (rtx, rtx, rtx);
extern rtx        gen_cmpmemsi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cmpmem_short                       (rtx, rtx, rtx);
extern rtx        gen_cmpmem_long                        (rtx, rtx, rtx);
extern rtx        gen_extzv                              (rtx, rtx, rtx, rtx);
extern rtx        gen_insv                               (rtx, rtx, rtx, rtx);
extern rtx        gen_extendsidi2                        (rtx, rtx);
extern rtx        gen_extendhidi2                        (rtx, rtx);
extern rtx        gen_extendhisi2                        (rtx, rtx);
extern rtx        gen_extendqidi2                        (rtx, rtx);
extern rtx        gen_extendqisi2                        (rtx, rtx);
extern rtx        gen_zero_extendsidi2                   (rtx, rtx);
extern rtx        gen_zero_extendhidi2                   (rtx, rtx);
extern rtx        gen_zero_extendqidi2                   (rtx, rtx);
extern rtx        gen_zero_extendhisi2                   (rtx, rtx);
extern rtx        gen_zero_extendqisi2                   (rtx, rtx);
extern rtx        gen_zero_extendqihi2                   (rtx, rtx);
extern rtx        gen_fixuns_truncdddi2                  (rtx, rtx);
extern rtx        gen_fixuns_trunctddi2                  (rtx, rtx);
extern rtx        gen_fixuns_trunctfdi2                  (rtx, rtx);
extern rtx        gen_fixuns_trunctfsi2                  (rtx, rtx);
extern rtx        gen_fixuns_truncdfdi2                  (rtx, rtx);
extern rtx        gen_fixuns_truncdfsi2                  (rtx, rtx);
extern rtx        gen_fixuns_truncsfdi2                  (rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2                  (rtx, rtx);
extern rtx        gen_fixuns_trunctdsi2                  (rtx, rtx);
extern rtx        gen_fixuns_truncddsi2                  (rtx, rtx);
extern rtx        gen_fix_truncdfdi2                     (rtx, rtx);
extern rtx        gen_fix_truncdfsi2                     (rtx, rtx);
extern rtx        gen_fix_truncsfdi2                     (rtx, rtx);
extern rtx        gen_fix_truncsfsi2                     (rtx, rtx);
extern rtx        gen_fix_trunctddi2                     (rtx, rtx);
extern rtx        gen_fix_truncdddi2                     (rtx, rtx);
extern rtx        gen_fix_trunctfdi2                     (rtx, rtx);
extern rtx        gen_fix_trunctfsi2                     (rtx, rtx);
extern rtx        gen_trunctftd2                         (rtx, rtx);
extern rtx        gen_trunctfdd2                         (rtx, rtx);
extern rtx        gen_trunctfsd2                         (rtx, rtx);
extern rtx        gen_truncdftd2                         (rtx, rtx);
extern rtx        gen_truncdfdd2                         (rtx, rtx);
extern rtx        gen_truncdfsd2                         (rtx, rtx);
extern rtx        gen_truncsftd2                         (rtx, rtx);
extern rtx        gen_truncsfdd2                         (rtx, rtx);
extern rtx        gen_truncsfsd2                         (rtx, rtx);
extern rtx        gen_trunctdtf2                         (rtx, rtx);
extern rtx        gen_truncddtf2                         (rtx, rtx);
extern rtx        gen_truncsdtf2                         (rtx, rtx);
extern rtx        gen_trunctddf2                         (rtx, rtx);
extern rtx        gen_truncdddf2                         (rtx, rtx);
extern rtx        gen_truncsddf2                         (rtx, rtx);
extern rtx        gen_trunctdsf2                         (rtx, rtx);
extern rtx        gen_truncddsf2                         (rtx, rtx);
extern rtx        gen_truncsdsf2                         (rtx, rtx);
extern rtx        gen_extendtftd2                        (rtx, rtx);
extern rtx        gen_extendtfdd2                        (rtx, rtx);
extern rtx        gen_extendtfsd2                        (rtx, rtx);
extern rtx        gen_extenddftd2                        (rtx, rtx);
extern rtx        gen_extenddfdd2                        (rtx, rtx);
extern rtx        gen_extenddfsd2                        (rtx, rtx);
extern rtx        gen_extendsftd2                        (rtx, rtx);
extern rtx        gen_extendsfdd2                        (rtx, rtx);
extern rtx        gen_extendsfsd2                        (rtx, rtx);
extern rtx        gen_extendtdtf2                        (rtx, rtx);
extern rtx        gen_extendddtf2                        (rtx, rtx);
extern rtx        gen_extendsdtf2                        (rtx, rtx);
extern rtx        gen_extendtddf2                        (rtx, rtx);
extern rtx        gen_extenddddf2                        (rtx, rtx);
extern rtx        gen_extendsddf2                        (rtx, rtx);
extern rtx        gen_extendtdsf2                        (rtx, rtx);
extern rtx        gen_extendddsf2                        (rtx, rtx);
extern rtx        gen_extendsdsf2                        (rtx, rtx);
extern rtx        gen_adddi3                             (rtx, rtx, rtx);
extern rtx        gen_addsi3                             (rtx, rtx, rtx);
extern rtx        gen_subdi3                             (rtx, rtx, rtx);
extern rtx        gen_subsi3                             (rtx, rtx, rtx);
extern rtx        gen_adddicc                            (rtx, rtx, rtx, rtx);
extern rtx        gen_addsicc                            (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cstorecc4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_movdicc                            (rtx, rtx, rtx, rtx);
extern rtx        gen_movsicc                            (rtx, rtx, rtx, rtx);
extern rtx        gen_divmoddi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmoddi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_divmodsi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmodsi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_udivsi3                            (rtx, rtx, rtx);
extern rtx        gen_umodsi3                            (rtx, rtx, rtx);
extern rtx        gen_anddi3                             (rtx, rtx, rtx);
extern rtx        gen_andsi3                             (rtx, rtx, rtx);
extern rtx        gen_andhi3                             (rtx, rtx, rtx);
extern rtx        gen_andqi3                             (rtx, rtx, rtx);
extern rtx        gen_iordi3                             (rtx, rtx, rtx);
extern rtx        gen_iorsi3                             (rtx, rtx, rtx);
extern rtx        gen_iorhi3                             (rtx, rtx, rtx);
extern rtx        gen_iorqi3                             (rtx, rtx, rtx);
extern rtx        gen_xordi3                             (rtx, rtx, rtx);
extern rtx        gen_xorsi3                             (rtx, rtx, rtx);
extern rtx        gen_xorhi3                             (rtx, rtx, rtx);
extern rtx        gen_xorqi3                             (rtx, rtx, rtx);
extern rtx        gen_negdi2                             (rtx, rtx);
extern rtx        gen_negsi2                             (rtx, rtx);
extern rtx        gen_negtf2                             (rtx, rtx);
extern rtx        gen_negdf2                             (rtx, rtx);
extern rtx        gen_negsf2                             (rtx, rtx);
extern rtx        gen_abstf2                             (rtx, rtx);
extern rtx        gen_absdf2                             (rtx, rtx);
extern rtx        gen_abssf2                             (rtx, rtx);
extern rtx        gen_one_cmpldi2                        (rtx, rtx);
extern rtx        gen_one_cmplsi2                        (rtx, rtx);
extern rtx        gen_one_cmplhi2                        (rtx, rtx);
extern rtx        gen_one_cmplqi2                        (rtx, rtx);
extern rtx        gen_clzdi2                             (rtx, rtx);
extern rtx        gen_ashldi3                            (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                            (rtx, rtx, rtx);
extern rtx        gen_ashlsi3                            (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                            (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                            (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                            (rtx, rtx, rtx);
extern rtx        gen_cbranchdi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchtf4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchtd4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdd4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchcc4                         (rtx, rtx, rtx, rtx);
extern rtx        gen_ctrapdi4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_ctrapsi4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_ctraptf4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_ctrapdf4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_ctrapsf4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_ctraptd4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_ctrapdd4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_doloop_end                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_jump                               (rtx);
extern rtx        gen_casesi                             (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_untyped_call                       (rtx, rtx, rtx);
#define GEN_SIBCALL(A, B, C, D) gen_sibcall ((A), (B))
extern rtx        gen_sibcall                            (rtx, rtx);
#define GEN_SIBCALL_VALUE(A, B, C, D, E) gen_sibcall_value ((A), (B), (C))
extern rtx        gen_sibcall_value                      (rtx, rtx, rtx);
#define GEN_CALL(A, B, C, D) gen_call ((A), (B), (C))
extern rtx        gen_call                               (rtx, rtx, rtx);
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C), (D))
extern rtx        gen_call_value                         (rtx, rtx, rtx, rtx);
extern rtx        gen_get_thread_pointerdi               (rtx);
extern rtx        gen_get_thread_pointersi               (rtx);
extern rtx        gen_set_thread_pointerdi               (rtx);
extern rtx        gen_set_thread_pointersi               (rtx);
extern rtx        gen_mem_signal_fence                   (rtx);
extern rtx        gen_mem_thread_fence                   (rtx);
extern rtx        gen_atomic_loadti                      (rtx, rtx, rtx);
extern rtx        gen_atomic_loaddi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_loadsi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_loadhi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_loadqi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_storeti                     (rtx, rtx, rtx);
extern rtx        gen_atomic_storedi                     (rtx, rtx, rtx);
extern rtx        gen_atomic_storesi                     (rtx, rtx, rtx);
extern rtx        gen_atomic_storehi                     (rtx, rtx, rtx);
extern rtx        gen_atomic_storeqi                     (rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapti          (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapdi          (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapsi          (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swaphi          (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapqi          (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapti_internal (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapdi_internal (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapsi_internal (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_anddi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_iordi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xordi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_adddi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_iorsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addsi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_andhi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_iorhi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_xorhi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_addhi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_subhi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_nandhi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_andqi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_iorqi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_xorqi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_addqi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_subqi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_nandqi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_iorhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nandhi                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_iorqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nandqi                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_ior_fetchhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchhi                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_ior_fetchqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchqi                (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangehi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangeqi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_allocate_stack                     (rtx, rtx);
extern rtx        gen_builtin_setjmp_receiver            (rtx);
extern rtx        gen_save_stack_function                (rtx, rtx);
extern rtx        gen_restore_stack_function             (rtx, rtx);
extern rtx        gen_restore_stack_block                (rtx, rtx);
extern rtx        gen_save_stack_nonlocal                (rtx, rtx);
extern rtx        gen_restore_stack_nonlocal             (rtx, rtx);
extern rtx        gen_exception_receiver                 (void);
extern rtx        gen_prologue                           (void);
extern rtx        gen_epilogue                           (void);
extern rtx        gen_sibcall_epilogue                   (void);
extern rtx        gen_ptr_extend                         (rtx, rtx);
static inline rtx gen_eh_return                          (rtx);
static inline rtx
gen_eh_return(rtx ARG_UNUSED (a))
{
  return 0;
}
extern rtx        gen_stack_protect_set                  (rtx, rtx);
extern rtx        gen_stack_protect_test                 (rtx, rtx, rtx);
extern rtx        gen_popcountdi2                        (rtx, rtx);
extern rtx        gen_popcountsi2                        (rtx, rtx);
extern rtx        gen_popcounthi2                        (rtx, rtx);
extern rtx        gen_popcountqi2                        (rtx, rtx);
extern rtx        gen_tbegin                             (rtx, rtx);
extern rtx        gen_tbegin_nofloat                     (rtx, rtx);
extern rtx        gen_tbegin_retry                       (rtx, rtx, rtx);
extern rtx        gen_tbegin_retry_nofloat               (rtx, rtx, rtx);
extern rtx        gen_tbeginc                            (void);
extern rtx        gen_tend                               (rtx);
extern rtx        gen_tabort                             (rtx);
extern rtx        gen_tx_assist                          (rtx);

#endif /* GCC_INSN_FLAGS_H */
