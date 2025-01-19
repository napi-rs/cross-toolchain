/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/build/.build/s390x-ibm-linux-gnu/src/gcc/gcc/config/s390/s390.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern int general_operand (rtx, enum machine_mode);
extern int address_operand (rtx, enum machine_mode);
extern int register_operand (rtx, enum machine_mode);
extern int pmode_register_operand (rtx, enum machine_mode);
extern int scratch_operand (rtx, enum machine_mode);
extern int immediate_operand (rtx, enum machine_mode);
extern int const_int_operand (rtx, enum machine_mode);
extern int const_double_operand (rtx, enum machine_mode);
extern int nonimmediate_operand (rtx, enum machine_mode);
extern int nonmemory_operand (rtx, enum machine_mode);
extern int push_operand (rtx, enum machine_mode);
extern int pop_operand (rtx, enum machine_mode);
extern int memory_operand (rtx, enum machine_mode);
extern int indirect_operand (rtx, enum machine_mode);
extern int ordered_comparison_operator (rtx, enum machine_mode);
extern int comparison_operator (rtx, enum machine_mode);
extern int const0_operand (rtx, enum machine_mode);
extern int consttable_operand (rtx, enum machine_mode);
extern int s_operand (rtx, enum machine_mode);
extern int bras_sym_operand (rtx, enum machine_mode);
extern int s390_plus_operand (rtx, enum machine_mode);
extern int shift_count_or_setmem_operand (rtx, enum machine_mode);
extern int nonzero_shift_count_operand (rtx, enum machine_mode);
extern int larl_operand (rtx, enum machine_mode);
extern int contiguous_bitmask_operand (rtx, enum machine_mode);
extern int s390_comparison (rtx, enum machine_mode);
extern int cc_reg_operand (rtx, enum machine_mode);
extern int s390_signed_integer_comparison (rtx, enum machine_mode);
extern int s390_unsigned_integer_comparison (rtx, enum machine_mode);
extern int s390_eqne_operator (rtx, enum machine_mode);
extern int s390_scond_operator (rtx, enum machine_mode);
extern int s390_brx_operator (rtx, enum machine_mode);
extern int s390_alc_comparison (rtx, enum machine_mode);
extern int s390_slb_comparison (rtx, enum machine_mode);
extern int load_multiple_operation (rtx, enum machine_mode);
extern int execute_operation (rtx, enum machine_mode);
extern int store_multiple_operation (rtx, enum machine_mode);
#endif /* HAVE_MACHINE_MODES */

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_a,
  CONSTRAINT_c,
  CONSTRAINT_d,
  CONSTRAINT_f,
  CONSTRAINT_t,
  CONSTRAINT_C,
  CONSTRAINT_D,
  CONSTRAINT_G,
  CONSTRAINT_I,
  CONSTRAINT_J,
  CONSTRAINT_K,
  CONSTRAINT_L,
  CONSTRAINT_M,
  CONSTRAINT_P,
  CONSTRAINT_Y,
  CONSTRAINT_NxQS0,
  CONSTRAINT_NxQD0,
  CONSTRAINT_N3HD0,
  CONSTRAINT_N2HD0,
  CONSTRAINT_N1SD0,
  CONSTRAINT_N1HS0,
  CONSTRAINT_N1HD0,
  CONSTRAINT_N0SD0,
  CONSTRAINT_N0HS0,
  CONSTRAINT_N0HD0,
  CONSTRAINT_NxQDF,
  CONSTRAINT_N1SDF,
  CONSTRAINT_N0SDF,
  CONSTRAINT_N3HDF,
  CONSTRAINT_N2HDF,
  CONSTRAINT_N1HDF,
  CONSTRAINT_N0HDF,
  CONSTRAINT_N0HSF,
  CONSTRAINT_N1HSF,
  CONSTRAINT_NxQSF,
  CONSTRAINT_NxQHF,
  CONSTRAINT_NxQH0,
  CONSTRAINT_NxxDq,
  CONSTRAINT_NxxSq,
  CONSTRAINT_Os,
  CONSTRAINT_Op,
  CONSTRAINT_On,
  CONSTRAINT_Q,
  CONSTRAINT_R,
  CONSTRAINT_S,
  CONSTRAINT_T,
  CONSTRAINT_b,
  CONSTRAINT_e,
  CONSTRAINT_m,
  CONSTRAINT_AQ,
  CONSTRAINT_AR,
  CONSTRAINT_AS,
  CONSTRAINT_AT,
  CONSTRAINT_BQ,
  CONSTRAINT_BR,
  CONSTRAINT_BS,
  CONSTRAINT_BT,
  CONSTRAINT_U,
  CONSTRAINT_W,
  CONSTRAINT_ZQ,
  CONSTRAINT_ZR,
  CONSTRAINT_ZS,
  CONSTRAINT_ZT,
  CONSTRAINT__LIMIT
};

extern enum constraint_num lookup_constraint (const char *);
extern bool constraint_satisfied_p (rtx, enum constraint_num);

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'A': return 2;
    case 'B': return 2;
    case 'N': return 5;
    case 'O': return 2;
    case 'Z': return 2;
    default: break;
    }
  return 1;
}

#define CONSTRAINT_LEN(c_,s_) insn_constraint_len (c_,s_)

extern enum reg_class regclass_for_constraint (enum constraint_num);
#define REG_CLASS_FROM_CONSTRAINT(c_,s_) \
    regclass_for_constraint (lookup_constraint (s_))
#define REG_CLASS_FOR_CONSTRAINT(x_) \
    regclass_for_constraint (x_)

extern bool insn_const_int_ok_for_constraint (HOST_WIDE_INT, enum constraint_num);
#define CONST_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    insn_const_int_ok_for_constraint (v_, lookup_constraint (s_))

#define CONST_DOUBLE_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    constraint_satisfied_p (v_, lookup_constraint (s_))

#define EXTRA_CONSTRAINT_STR(v_,c_,s_) \
    constraint_satisfied_p (v_, lookup_constraint (s_))

extern bool insn_extra_memory_constraint (enum constraint_num);
#define EXTRA_MEMORY_CONSTRAINT(c_,s_) insn_extra_memory_constraint (lookup_constraint (s_))

extern bool insn_extra_address_constraint (enum constraint_num);
#define EXTRA_ADDRESS_CONSTRAINT(c_,s_) insn_extra_address_constraint (lookup_constraint (s_))

#endif /* tm-preds.h */
