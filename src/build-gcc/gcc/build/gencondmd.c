/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

  { "(ix86_target_stack_probe ()) && (Pmode == DImode)",
    __builtin_constant_p (
#line 16553 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 16553 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 6886 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && ((unsigned) exact_log2 (INTVAL (operands[3]))\n\
       < GET_MODE_NUNITS (V8HImode))",
    __builtin_constant_p 
#line 6886 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HImode)))
    ? (int) 
#line 6886 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V8HImode)))
    : -1 },
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V1DImode, operands)",
    __builtin_constant_p 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V1DImode, operands))
    ? (int) 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V1DImode, operands))
    : -1 },
  { "(TARGET_SSSE3) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 8401 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 198 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 8401 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3) && 
#line 198 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V16QImode, operands)",
    __builtin_constant_p 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V16QImode, operands))
    ? (int) 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V16QImode, operands))
    : -1 },
#line 5845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 5845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 5845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
#line 18086 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_RDSEED",
    __builtin_constant_p 
#line 18086 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_RDSEED)
    ? (int) 
#line 18086 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_RDSEED)
    : -1 },
#line 4759 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && reload_completed",
    __builtin_constant_p 
#line 4759 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    ? (int) 
#line 4759 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && reload_completed)
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8990 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8990 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 2743 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT || TARGET_SSE",
    __builtin_constant_p 
#line 2743 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_SSE)
    ? (int) 
#line 2743 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT || TARGET_SSE)
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 10629 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 10629 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 10629 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V8HImode)\n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    : -1 },
  { "(TARGET_SSE2\n\
   && ((unsigned) exact_log2 (INTVAL (operands[3]))\n\
       < GET_MODE_NUNITS (V4SImode))) && (TARGET_SSE4_1)",
    __builtin_constant_p (
#line 6886 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SImode))) && 
#line 6871 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
    ? (int) (
#line 6886 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SImode))) && 
#line 6871 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
    : -1 },
#line 14850 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 14850 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 14850 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    : -1 },
  { "(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 15719 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 15719 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
  { "(IN_RANGE (INTVAL (operands[2]), 1, 3)\n\
   /* Validate MODE for lea.  */\n\
   && ((!TARGET_PARTIAL_REG_STALL\n\
	&& (GET_MODE (operands[0]) == QImode\n\
	    || GET_MODE (operands[0]) == HImode))\n\
       || GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   && (rtx_equal_p (operands[0], operands[3])\n\
       || peep2_reg_dead_p (2, operands[0]))\n\
   /* We reorder load and the shift.  */\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && (word_mode == SImode)",
    __builtin_constant_p (
#line 17533 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode))
    ? (int) (
#line 17533 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode))
    : -1 },
#line 15066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 15066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 15066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 1597 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 1597 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    ? (int) 
#line 1597 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    : -1 },
#line 17679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_HAS_BIONIC",
    __builtin_constant_p 
#line 17679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_HAS_BIONIC)
    ? (int) 
#line 17679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_HAS_BIONIC)
    : -1 },
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (SFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V4SFmode)\n\
       == GET_MODE_NUNITS (V16QImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V16QImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V16QImode)))
    : -1 },
#line 9432 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[1] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))",
    __builtin_constant_p 
#line 9432 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[1] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    ? (int) 
#line 9432 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[1] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0]))))))
    : -1 },
#line 3337 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_MODE (operands[0]) == TFmode\n\
       || GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == DFmode\n\
       || GET_MODE (operands[0]) == SFmode)\n\
   && (operands[2] = find_constant_src (insn))",
    __builtin_constant_p 
#line 3337 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode
       || GET_MODE (operands[0]) == SFmode)
   && (operands[2] = find_constant_src (insn)))
    ? (int) 
#line 3337 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode
       || GET_MODE (operands[0]) == SFmode)
   && (operands[2] = find_constant_src (insn)))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (SFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 5274 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5274 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5274 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    : -1 },
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V8SFmode)\n\
       == GET_MODE_NUNITS (V8SFmode))",
    __builtin_constant_p 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V8SFmode)))
    ? (int) 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V8SFmode)))
    : -1 },
#line 16654 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_MACHO && !TARGET_64BIT && flag_pic",
    __builtin_constant_p 
#line 16654 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MACHO && !TARGET_64BIT && flag_pic)
    ? (int) 
#line 16654 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MACHO && !TARGET_64BIT && flag_pic)
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SImode)\n\
       == GET_MODE_NUNITS (V32QImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V32QImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V32QImode)))
    : -1 },
  { "(TARGET_64BIT\n\
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 15573 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 15573 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 5360 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && TARGET_SSE\n\
   && reload_completed",
    __builtin_constant_p 
#line 5360 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    ? (int) 
#line 5360 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    : -1 },
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT",
    __builtin_constant_p 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT)
    ? (int) 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT)
    : -1 },
  { "(TARGET_FMA4) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 2311 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA4) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 2311 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA4) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 6255 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6262 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6255 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6262 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(TARGET_AVX) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 11090 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 213 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 11090 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 213 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 17002 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])\n\
   && GENERAL_REGNO_P (REGNO (operands[0]))\n\
   && GENERAL_REGNO_P (REGNO (operands[1]))",
    __builtin_constant_p 
#line 17002 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && GENERAL_REGNO_P (REGNO (operands[0]))
   && GENERAL_REGNO_P (REGNO (operands[1])))
    ? (int) 
#line 17002 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && GENERAL_REGNO_P (REGNO (operands[0]))
   && GENERAL_REGNO_P (REGNO (operands[1])))
    : -1 },
#line 7057 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && X87_ENABLE_ARITH (DFmode))\n\
    || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 7057 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 7057 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 15986 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 15986 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 1487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 1487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 1487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (SFmode))
    : -1 },
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V8HImode, operands)",
    __builtin_constant_p 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V8HImode, operands))
    ? (int) 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V8HImode, operands))
    : -1 },
#line 9621 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 9621 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 9621 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 4509 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 4509 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 4509 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SFmode)\n\
       == GET_MODE_NUNITS (V4DImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V4DImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V4DImode)))
    : -1 },
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (DFmode, DImode)",
    __builtin_constant_p 
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, DImode))
    ? (int) 
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, DImode))
    : -1 },
#line 4139 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4139 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    ? (int) 
#line 4139 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387)
    : -1 },
#line 3231 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && ((!TARGET_SSE_MATH\n\
		&& standard_80387_constant_p (operands[1]) > 0)\n\
	       || (TARGET_SSE_MATH\n\
		   && standard_sse_constant_p (operands[1]))))\n\
       || memory_operand (operands[0], SFmode))",
    __builtin_constant_p 
#line 3231 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && ((!TARGET_SSE_MATH
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1]))))
       || memory_operand (operands[0], SFmode)))
    ? (int) 
#line 3231 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && ((!TARGET_SSE_MATH
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1]))))
       || memory_operand (operands[0], SFmode)))
    : -1 },
#line 17215 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_OPT_AGU\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17215 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17215 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V32QImode, operands)",
    __builtin_constant_p 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V32QImode, operands))
    ? (int) 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V32QImode, operands))
    : -1 },
#line 3501 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))\n\
   && true_regnum (operands[0]) == true_regnum (operands[1])",
    __builtin_constant_p 
#line 3501 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    ? (int) 
#line 3501 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))
   && true_regnum (operands[0]) == true_regnum (operands[1]))
    : -1 },
#line 12842 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_X32",
    __builtin_constant_p 
#line 12842 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_X32)
    ? (int) 
#line 12842 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_X32)
    : -1 },
#line 4504 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4504 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4504 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && 
#line 189 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16HImode, operands)) && 
#line 189 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 1508 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 1508 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 1508 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    ? (int) 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16QImode, operands))
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V8SImode)\n\
       || register_operand (operands[1], V8SImode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode))) && 
#line 102 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8SImode)
       || register_operand (operands[1], V8SImode))) && 
#line 102 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 8230 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(~INTVAL (operands[2]) & ~255)\n\
    && !(INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8230 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8230 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~255)
    && !(INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    ? (int) 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V8HImode, operands))
    : -1 },
#line 5845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 5845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 5845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 499 "../../gcc-4.8.2/gcc/config/i386/sync.md"
  { "(unsigned HOST_WIDE_INT) INTVAL (operands[1])\n\
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])",
    __builtin_constant_p 
#line 499 "../../gcc-4.8.2/gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2]))
    ? (int) 
#line 499 "../../gcc-4.8.2/gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2]))
    : -1 },
#line 13136 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (DFmode)\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13136 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13136 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V32QImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V32QImode, operands)) && 
#line 148 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V32QImode, operands)) && 
#line 148 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 6478 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6478 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6478 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
  { "(optimize_insn_for_size_p ()\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17410 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17410 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V32QImode)\n\
       == GET_MODE_NUNITS (V8SFmode))",
    __builtin_constant_p 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V8SFmode)))
    ? (int) 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V8SFmode)))
    : -1 },
#line 9679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 9679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 9679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
#line 13076 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13076 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13076 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10878 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10878 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_AVX) && ( reload_completed && (V4DFmode != V4DFmode || !TARGET_AVX2))",
    __builtin_constant_p (
#line 10677 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 10679 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed && (V4DFmode != V4DFmode || !TARGET_AVX2)))
    ? (int) (
#line 10677 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 10679 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed && (V4DFmode != V4DFmode || !TARGET_AVX2)))
    : -1 },
  { "(ix86_match_ccmode (insn, CCZmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_AVX\n\
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 10768 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 10768 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V8SFmode)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 15242 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 15242 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 11178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_CMOVE\n\
   && (TARGET_USE_HIMODE_FIOP\n\
       || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 11178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 11178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun)))
    : -1 },
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V2DImode, operands)",
    __builtin_constant_p 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V2DImode, operands))
    ? (int) 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V2DImode, operands))
    : -1 },
  { "(TARGET_SSE) && ( reload_completed)",
    __builtin_constant_p (
#line 4355 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 4357 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 4355 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 4357 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ptr_mode == DImode",
    __builtin_constant_p 
#line 937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ptr_mode == DImode)
    ? (int) 
#line 937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ptr_mode == DImode)
    : -1 },
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V8HImode, operands)",
    __builtin_constant_p 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V8HImode, operands))
    ? (int) 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V8HImode, operands))
    : -1 },
  { "(TARGET_SSE) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 4284 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 115 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 4284 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 115 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 11703 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_SEH",
    __builtin_constant_p 
#line 11703 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_SEH)
    ? (int) 
#line 11703 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_SEH)
    : -1 },
#line 9942 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 9942 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 9942 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V8SImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V8SImode, operands)) && 
#line 150 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V8SImode, operands)) && 
#line 150 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 894 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 894 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 16941 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && true_regnum (operands[2]) != AX_REG\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 16941 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 16941 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL
   && ix86_match_ccmode (insn, CCNOmode)
   && true_regnum (operands[2]) != AX_REG
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 7032 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 7032 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 7032 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 7611 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "!TARGET_64BIT && TARGET_SSE",
    __builtin_constant_p 
#line 7611 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE)
    ? (int) 
#line 7611 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE)
    : -1 },
#line 16900 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && (true_regnum (operands[2]) != AX_REG\n\
       || satisfies_constraint_K (operands[3]))\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 16900 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != AX_REG
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 16900 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && (true_regnum (operands[2]) != AX_REG
       || satisfies_constraint_K (operands[3]))
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V8HImode)\n\
       == GET_MODE_NUNITS (V4SImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V4SImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V4SImode)))
    : -1 },
#line 937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ptr_mode == SImode",
    __builtin_constant_p 
#line 937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ptr_mode == SImode)
    ? (int) 
#line 937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ptr_mode == SImode)
    : -1 },
  { "(TARGET_SSE\n\
   && (GET_MODE_NUNITS (V2DFmode)\n\
       == GET_MODE_NUNITS (V4SFmode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V4SFmode))) && 
#line 119 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V4SFmode))) && 
#line 119 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 6586 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_ADX && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 6586 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_ADX && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 6586 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_ADX && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands)) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, DImode, operands)) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 2821 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SSE && !TARGET_64BIT\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && standard_sse_constant_p (operands[1])\n\
	   && !memory_operand (operands[0], TFmode))\n\
       || (!TARGET_MEMORY_MISMATCH_STALL\n\
	   && memory_operand (operands[0], TFmode)))",
    __builtin_constant_p 
#line 2821 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_sse_constant_p (operands[1])
	   && !memory_operand (operands[0], TFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], TFmode))))
    ? (int) 
#line 2821 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_sse_constant_p (operands[1])
	   && !memory_operand (operands[0], TFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], TFmode))))
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4433 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4433 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V4SImode)\n\
       == GET_MODE_NUNITS (V8HImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V8HImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V8HImode)))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DFmode)\n\
       == GET_MODE_NUNITS (V8SImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V8SImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V8SImode)))
    : -1 },
#line 1109 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 1109 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 1109 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    ? (int) 
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4SFmode, operands))
    : -1 },
#line 16633 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && flag_pic",
    __builtin_constant_p 
#line 16633 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    ? (int) 
#line 16633 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && flag_pic)
    : -1 },
#line 5332 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && TARGET_SSE",
    __builtin_constant_p 
#line 5332 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE)
    ? (int) 
#line 5332 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE)
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V4DFmode)\n\
       || register_operand (operands[1], V4DFmode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode))) && 
#line 106 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4DFmode)
       || register_operand (operands[1], V4DFmode))) && 
#line 106 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 13746 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 13746 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && can_create_pseudo_p ())
    ? (int) 
#line 13746 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[0]))
   && can_create_pseudo_p ())
    : -1 },
#line 18076 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_RDRND",
    __builtin_constant_p 
#line 18076 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_RDRND)
    ? (int) 
#line 18076 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_RDRND)
    : -1 },
#line 785 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode)",
    __builtin_constant_p 
#line 785 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
    ? (int) 
#line 785 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
    : -1 },
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
#line 6447 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 6447 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 6447 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((! TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 1595 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE",
    __builtin_constant_p 
#line 1595 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE)
    ? (int) 
#line 1595 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE)
    : -1 },
#line 5379 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
	&& TARGET_SSE)\n\
       || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 5379 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 5379 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 14690 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14690 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14690 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 16785 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && (GET_MODE (operands[0]) == HImode\n\
       || (GET_MODE (operands[0]) == QImode\n\
	   && (TARGET_PROMOTE_QImode\n\
	       || optimize_insn_for_size_p ())))",
    __builtin_constant_p 
#line 16785 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode
	       || optimize_insn_for_size_p ()))))
    ? (int) 
#line 16785 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && (GET_MODE (operands[0]) == HImode
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode
	       || optimize_insn_for_size_p ()))))
    : -1 },
#line 17248 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "exact_log2 (INTVAL (operands[1])) >= 0\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17248 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17248 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
  { "(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && ( reload_completed)",
    __builtin_constant_p (
#line 3591 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 3593 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 3591 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 3593 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 4766 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
        || TARGET_MIX_SSE_I387)\n\
    && reload_completed",
    __builtin_constant_p 
#line 4766 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    ? (int) 
#line 4766 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    : -1 },
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (XFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 8311 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 8311 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 8311 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 7292 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_8BIT_IDIV\n\
   && TARGET_QIMODE_MATH\n\
   && can_create_pseudo_p ()\n\
   && !optimize_insn_for_size_p ()",
    __builtin_constant_p 
#line 7292 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ())
    ? (int) 
#line 7292 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ())
    : -1 },
#line 7991 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && reload_completed",
    __builtin_constant_p 
#line 7991 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed)
    ? (int) 
#line 7991 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && reload_completed)
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V4SImode)\n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    : -1 },
#line 2229 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_FMA",
    __builtin_constant_p 
#line 2229 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA)
    ? (int) 
#line 2229 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA)
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 14850 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 14850 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5212 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5212 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5212 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
  { "(TARGET_64BIT) && (Pmode == SImode)",
    __builtin_constant_p (
#line 12758 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 12758 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((DImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 10029 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun)\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 10029 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 10029 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
  { "(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
#line 10340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, HImode, operands)",
    __builtin_constant_p 
#line 10340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    ? (int) 
#line 10340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, HImode, operands))
    : -1 },
#line 11218 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_CMOVE\n\
   && reload_completed",
    __builtin_constant_p 
#line 11218 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_CMOVE
   && reload_completed)
    ? (int) 
#line 11218 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_CMOVE
   && reload_completed)
    : -1 },
#line 8977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 8977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 8977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (SFmode, SImode)",
    __builtin_constant_p 
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, SImode))
    ? (int) 
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, SImode))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4469 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4469 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V2DFmode)\n\
       || register_operand (operands[1], V2DFmode))",
    __builtin_constant_p 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode)))
    ? (int) 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DFmode)
       || register_operand (operands[1], V2DFmode)))
    : -1 },
#line 13061 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (SFmode)\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13061 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (SFmode)
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13061 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (SFmode)
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    ? (int) 
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4SFmode, operands))
    : -1 },
#line 6181 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP",
    __builtin_constant_p 
#line 6181 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP)
    ? (int) 
#line 6181 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP)
    : -1 },
  { "(TARGET_CMOVE) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 9712 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 9712 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 8668 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8668 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8668 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 6146 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1",
    __builtin_constant_p 
#line 6146 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1)
    ? (int) 
#line 6146 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1)
    : -1 },
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V4HImode, operands))
    ? (int) 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V4HImode, operands))
    : -1 },
#line 16843 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((QImode == HImode\n\
       && TARGET_LCP_STALL)\n\
       || (TARGET_SPLIT_LONG_MOVES\n\
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))",
    __builtin_constant_p 
#line 16843 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((QImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn)))
    ? (int) 
#line 16843 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((QImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn)))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V32QImode)\n\
       == GET_MODE_NUNITS (V4DImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V4DImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V4DImode)))
    : -1 },
#line 5144 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5144 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5144 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 16156 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 16156 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 16156 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && 
#line 154 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V32QImode, operands)) && 
#line 154 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 7379 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "reload_completed",
    __builtin_constant_p 
#line 7379 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(reload_completed)
    ? (int) 
#line 7379 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(reload_completed)
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V4DImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V4DImode, operands)) && 
#line 151 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V4DImode, operands)) && 
#line 151 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 5620 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 5620 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 5620 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 4433 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4433 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4433 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 10582 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !TARGET_USE_BT",
    __builtin_constant_p 
#line 10582 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    ? (int) 
#line 10582 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_USE_BT)
    : -1 },
#line 8436 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 8436 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 8436 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    : -1 },
#line 8056 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8056 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8056 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 4097 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 4097 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 4097 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387 && flag_unsafe_math_optimizations)
    : -1 },
#line 1356 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE",
    __builtin_constant_p 
#line 1356 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE)
    ? (int) 
#line 1356 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE)
    : -1 },
#line 4994 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 4994 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 4994 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17362 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17362 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
#line 7971 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)\n\
    || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 7971 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun))
    ? (int) 
#line 7971 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_FAST_PREFIX && !TARGET_PARTIAL_REG_STALL)
    || optimize_function_for_size_p (cfun))
    : -1 },
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V8SFmode)\n\
       == GET_MODE_NUNITS (V4DFmode))",
    __builtin_constant_p 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V4DFmode)))
    ? (int) 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V4DFmode)))
    : -1 },
#line 6504 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6504 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6504 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 5417 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands)",
    __builtin_constant_p 
#line 5417 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    ? (int) 
#line 5417 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    : -1 },
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (SFmode, DImode)",
    __builtin_constant_p 
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, DImode))
    ? (int) 
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, DImode))
    : -1 },
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (DFmode, SImode)",
    __builtin_constant_p 
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, SImode))
    ? (int) 
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, SImode))
    : -1 },
#line 1508 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE\n\
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 1508 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 1508 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 5937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCZmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 5937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 5937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCZmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 785 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode)",
    __builtin_constant_p 
#line 785 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
    ? (int) 
#line 785 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
    : -1 },
  { "(TARGET_ROUND && !flag_trapping_math) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 9019 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_ROUND && !flag_trapping_math) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 9019 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_ROUND && !flag_trapping_math) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
  { "(ix86_binary_operator_ok (ROTATERT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10217 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10217 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "word_mode == SImode",
    __builtin_constant_p 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)
    ? (int) 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)
    : -1 },
#line 372 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands)",
    __builtin_constant_p 
#line 372 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    ? (int) 
#line 372 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (PLUS, V2SFmode, operands))
    : -1 },
#line 12407 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)",
    __builtin_constant_p 
#line 12407 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    ? (int) 
#line 12407 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    : -1 },
#line 4755 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && reload_completed",
    __builtin_constant_p 
#line 4755 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    ? (int) 
#line 4755 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    : -1 },
#line 17106 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && GET_CODE (operands[2]) != MINUS\n\
   && peep2_reg_dead_p (3, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && ix86_match_ccmode (peep2_next_insn (2),\n\
			 GET_CODE (operands[2]) == PLUS\n\
			 ? CCGOCmode : CCNOmode)",
    __builtin_constant_p 
#line 17106 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && GET_CODE (operands[2]) != MINUS
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode))
    ? (int) 
#line 17106 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && GET_CODE (operands[2]) != MINUS
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode))
    : -1 },
#line 17259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && exact_log2 (INTVAL (operands[2])) >= 0\n\
   && REGNO (operands[0]) == REGNO (operands[1])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && exact_log2 (INTVAL (operands[2])) >= 0
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
  { "((TARGET_SSE) && (TARGET_AVX)) && ( reload_completed)",
    __builtin_constant_p ((
#line 809 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 811 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) ((
#line 809 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX)) && 
#line 811 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V16HImode, operands)",
    __builtin_constant_p 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V16HImode, operands))
    ? (int) 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V16HImode, operands))
    : -1 },
#line 6138 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP ",
    __builtin_constant_p 
#line 6138 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP )
    ? (int) 
#line 6138 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP )
    : -1 },
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (XFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 394 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 394 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 394 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 10644 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 10644 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 10644 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    : -1 },
#line 7453 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "!TARGET_64BIT && TARGET_SSE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7453 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7453 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 6462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 6490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 17729 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SSE4_2 || TARGET_CRC32",
    __builtin_constant_p 
#line 17729 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE4_2 || TARGET_CRC32)
    ? (int) 
#line 17729 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE4_2 || TARGET_CRC32)
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5199 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5199 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 12103 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_LZCNT",
    __builtin_constant_p 
#line 12103 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LZCNT)
    ? (int) 
#line 12103 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LZCNT)
    : -1 },
#line 6255 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[2])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 6255 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 6255 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[2])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
#line 8845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (reload_completed\n\
       || !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 8845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 8845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, DImode)
   && reload_completed)
    ? (int) 
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, DImode)
   && reload_completed)
    : -1 },
#line 4766 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
        || TARGET_MIX_SSE_I387)\n\
    && reload_completed",
    __builtin_constant_p 
#line 4766 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    ? (int) 
#line 4766 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    : -1 },
  { "(TARGET_SSE2) && (Pmode == DImode)",
    __builtin_constant_p (
#line 7760 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 7760 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 4028 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4028 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 4028 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (AND, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 4364 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4364 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4364 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (SFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 6050 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 6050 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    ? (int) 
#line 6050 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V4SImode, operands))
    : -1 },
#line 96 "../../gcc-4.8.2/gcc/config/i386/sync.md"
  { "!(TARGET_64BIT || TARGET_SSE2)",
    __builtin_constant_p 
#line 96 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(!(TARGET_64BIT || TARGET_SSE2))
    ? (int) 
#line 96 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(!(TARGET_64BIT || TARGET_SSE2))
    : -1 },
  { "(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6924 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6924 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5984 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 5984 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    ? (int) 
#line 5984 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMIN, V8HImode, operands))
    : -1 },
#line 3951 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 3951 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    ? (int) 
#line 3951 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387)
    : -1 },
#line 16876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((TARGET_NOT_UNPAIRABLE\n\
	&& (!MEM_P (operands[0])\n\
	    || !memory_displacement_operand (operands[0], QImode)))\n\
       || (TARGET_NOT_VECTORMODE\n\
	   && long_memory_operand (operands[0], QImode)))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], QImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], QImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], QImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
  { "(ix86_unary_operator_ok (NEG, DImode, operands)) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 8588 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 8588 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 18163 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_RTM",
    __builtin_constant_p 
#line 18163 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_RTM)
    ? (int) 
#line 18163 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_RTM)
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (AND, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
  { "(!TARGET_X32) && (Pmode == DImode)",
    __builtin_constant_p (
#line 12855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_X32) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 12855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_X32) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 8354 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8354 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8354 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 2376 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 2376 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 2376 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_PARTIAL_REG_STALL)
    : -1 },
  { "(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_HIMODE_FIOP\n\
       || optimize_function_for_size_p (cfun))) && ( reload_completed)",
    __builtin_constant_p (
#line 1394 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))) && 
#line 1398 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1394 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun))) && 
#line 1398 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "((unsigned HOST_WIDE_INT) INTVAL (operands[1])\n\
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 499 "../../gcc-4.8.2/gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 499 "../../gcc-4.8.2/gcc/config/i386/sync.md"
((unsigned HOST_WIDE_INT) INTVAL (operands[1])
   == -(unsigned HOST_WIDE_INT) INTVAL (operands[2])) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 7685 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && 
#line 188 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 7685 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V32QImode, operands)) && 
#line 188 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 4876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387)
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V16HImode)\n\
       == GET_MODE_NUNITS (V8SImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V8SImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V8SImode)))
    : -1 },
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (XFmode, DImode)",
    __builtin_constant_p 
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, DImode))
    ? (int) 
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, DImode))
    : -1 },
#line 440 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V2SFmode, operands)",
    __builtin_constant_p 
#line 440 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    ? (int) 
#line 440 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2SFmode, operands))
    : -1 },
#line 1531 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed\n\
   && !SSE_REG_P (operands[1])",
    __builtin_constant_p 
#line 1531 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[1]))
    ? (int) 
#line 1531 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && !SSE_REG_P (operands[1]))
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5144 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5144 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 7824 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 7824 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 7824 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
  { "(exact_log2 (INTVAL (operands[1])) >= 0\n\
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17248 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17248 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(exact_log2 (INTVAL (operands[1])) >= 0
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_X32) && (Pmode == SImode)",
    __builtin_constant_p (
#line 12855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_X32) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 12855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_X32) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 17075 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && peep2_reg_dead_p (4, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[2])\n\
   && (SImode != QImode\n\
       || immediate_operand (operands[2], QImode)\n\
       || q_regs_operand (operands[2], QImode))\n\
   && ix86_match_ccmode (peep2_next_insn (3),\n\
			 (GET_CODE (operands[3]) == PLUS\n\
			  || GET_CODE (operands[3]) == MINUS)\n\
			 ? CCGOCmode : CCNOmode)",
    __builtin_constant_p 
#line 17075 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    ? (int) 
#line 17075 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (SImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    : -1 },
  { "(TARGET_LZCNT) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12103 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12103 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LZCNT) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 2106 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))\n\
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 2106 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    ? (int) 
#line 2106 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))
   && !(MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    : -1 },
#line 1990 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, TFmode, operands)",
    __builtin_constant_p 
#line 1990 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, TFmode, operands))
    ? (int) 
#line 1990 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, TFmode, operands))
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9526 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9526 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9200 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 9200 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 9200 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 7602 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   /* Ensure that resulting mask is zero or sign extended operand.  */\n\
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64\n\
	   && INTVAL (operands[1]) > 32))\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || GET_MODE (operands[0]) == DImode\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 7602 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 7602 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   /* Ensure that resulting mask is zero or sign extended operand.  */
   && (INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
       || (INTVAL (operands[1]) + INTVAL (operands[2]) == 64
	   && INTVAL (operands[1]) > 32))
   && (GET_MODE (operands[0]) == SImode
       || GET_MODE (operands[0]) == DImode
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SFmode)\n\
       == GET_MODE_NUNITS (V16HImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V16HImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V16HImode)))
    : -1 },
#line 11848 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_LP64",
    __builtin_constant_p 
#line 11848 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LP64)
    ? (int) 
#line 11848 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LP64)
    : -1 },
#line 5158 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && reload_completed",
    __builtin_constant_p 
#line 5158 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    ? (int) 
#line 5158 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && reload_completed)
    : -1 },
#line 10331 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_BMI2 && reload_completed",
    __builtin_constant_p 
#line 10331 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed)
    ? (int) 
#line 10331 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2 && reload_completed)
    : -1 },
#line 5125 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 5125 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 5125 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(TARGET_SSE\n\
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1595 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1595 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 6095 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (EQ, V16HImode, operands)",
    __builtin_constant_p 
#line 6095 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V16HImode, operands))
    ? (int) 
#line 6095 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V16HImode, operands))
    : -1 },
#line 5199 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5199 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5199 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
  { "(TARGET_SSE4_2) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5895 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2) && 
#line 177 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5895 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2) && 
#line 177 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
  { "(optimize_insn_for_size_p ()\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17410 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17410 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
#line 13076 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13076 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13076 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 785 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode)",
    __builtin_constant_p 
#line 785 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
    ? (int) 
#line 785 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
    : -1 },
#line 14690 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14690 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14690 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 16876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((TARGET_NOT_UNPAIRABLE\n\
	&& (!MEM_P (operands[0])\n\
	    || !memory_displacement_operand (operands[0], HImode)))\n\
       || (TARGET_NOT_VECTORMODE\n\
	   && long_memory_operand (operands[0], HImode)))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], HImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], HImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], HImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
  { "(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 4509 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 4511 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 4509 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 4511 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 1086 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands)",
    __builtin_constant_p 
#line 1086 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    ? (int) 
#line 1086 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V8QImode, operands))
    : -1 },
#line 1558 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_SSE || TARGET_3DNOW",
    __builtin_constant_p 
#line 1558 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW)
    ? (int) 
#line 1558 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW)
    : -1 },
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands)",
    __builtin_constant_p 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    ? (int) 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V2SImode, operands))
    : -1 },
#line 1942 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 1942 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 1942 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (SFmode))
    : -1 },
  { "((TARGET_USE_BT || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)) && ( 1)",
    __builtin_constant_p ((
#line 10878 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10880 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) ((
#line 10878 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10880 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 4776 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE3 && INTVAL (operands[2]) + 2 == INTVAL (operands[3])",
    __builtin_constant_p 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && INTVAL (operands[2]) + 2 == INTVAL (operands[3]))
    ? (int) 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3 && INTVAL (operands[2]) + 2 == INTVAL (operands[3]))
    : -1 },
  { "((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 9695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && 
#line 814 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 9695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && 
#line 814 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
  { "((TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1) && ( 1)",
    __builtin_constant_p (
#line 10912 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 10916 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 10912 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1) && 
#line 10916 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 1990 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, TFmode, operands)",
    __builtin_constant_p 
#line 1990 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, TFmode, operands))
    ? (int) 
#line 1990 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, TFmode, operands))
    : -1 },
#line 17482 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()\n\
   && !satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 17482 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    ? (int) 
#line 17482 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    : -1 },
  { "(TARGET_BSWAP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12486 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BSWAP) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12486 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BSWAP) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 13266 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13266 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13266 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 3711 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "/* cltd is shorter than sarl $31, %eax */\n\
   !optimize_function_for_size_p (cfun)\n\
   && true_regnum (operands[1]) == AX_REG\n\
   && true_regnum (operands[2]) == DX_REG\n\
   && peep2_reg_dead_p (2, operands[1])\n\
   && peep2_reg_dead_p (3, operands[2])\n\
   && !reg_mentioned_p (operands[2], operands[3])",
    __builtin_constant_p 
#line 3711 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(/* cltd is shorter than sarl $31, %eax */
   !optimize_function_for_size_p (cfun)
   && true_regnum (operands[1]) == AX_REG
   && true_regnum (operands[2]) == DX_REG
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (3, operands[2])
   && !reg_mentioned_p (operands[2], operands[3]))
    ? (int) 
#line 3711 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(/* cltd is shorter than sarl $31, %eax */
   !optimize_function_for_size_p (cfun)
   && true_regnum (operands[1]) == AX_REG
   && true_regnum (operands[2]) == DX_REG
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (3, operands[2])
   && !reg_mentioned_p (operands[2], operands[3]))
    : -1 },
#line 6642 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6642 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6642 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 11178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_CMOVE\n\
   && (TARGET_USE_SIMODE_FIOP\n\
       || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 11178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 11178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun)))
    : -1 },
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((SImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && 
#line 156 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8SImode, operands)) && 
#line 156 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
  { "(ix86_binary_operator_ok (ROTATE, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10134 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10134 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5212 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5212 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 13302 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13302 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13302 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 5144 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5144 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5144 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 10912 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 10912 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 10912 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 16233 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE\n\
   && optimize_insn_for_speed_p ()",
    __builtin_constant_p 
#line 16233 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && optimize_insn_for_speed_p ())
    ? (int) 
#line 16233 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && optimize_insn_for_speed_p ())
    : -1 },
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V16QImode)\n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    : -1 },
  { "((TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10912 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10912 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5274 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5274 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5274 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    : -1 },
#line 5166 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5166 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5166 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 15275 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 15275 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && can_create_pseudo_p ())
    ? (int) 
#line 15275 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_XADD) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 454 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 454 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_XADD) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1086 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands)",
    __builtin_constant_p 
#line 1086 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    ? (int) 
#line 1086 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V2SImode, operands))
    : -1 },
#line 8845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (reload_completed\n\
       || !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 8845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 8845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 57 "../../gcc-4.8.2/gcc/config/i386/sync.md"
  { "TARGET_SSE || TARGET_3DNOW_A",
    __builtin_constant_p 
#line 57 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_SSE || TARGET_3DNOW_A)
    ? (int) 
#line 57 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_SSE || TARGET_3DNOW_A)
    : -1 },
  { "(TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4721 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4721 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V32QImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V32QImode, operands)) && 
#line 148 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V32QImode, operands)) && 
#line 148 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 17188 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17188 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17188 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (DFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 7483 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
    && ix86_match_ccmode (insn,\n\
 			 CONST_INT_P (operands[1])\n\
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 7483 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
    && ix86_match_ccmode (insn,
 			 CONST_INT_P (operands[1])
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 7483 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1]))
    && ix86_match_ccmode (insn,
 			 CONST_INT_P (operands[1])
 			 && INTVAL (operands[1]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 10134 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 10134 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 10134 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
#line 8071 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 8071 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 8071 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && 
#line 188 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V32QImode, operands)) && 
#line 188 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 9845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 6840 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_BMI2\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6840 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6840 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4940 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4940 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1378 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (TARGET_USE_SIMODE_FIOP\n\
       || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 1378 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 1378 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun)))
    : -1 },
#line 8301 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8301 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8301 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V4SImode, operands)",
    __builtin_constant_p 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V4SImode, operands))
    ? (int) 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V4SImode, operands))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DImode)\n\
       == GET_MODE_NUNITS (V16HImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V16HImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V16HImode)))
    : -1 },
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V8SImode)\n\
       == GET_MODE_NUNITS (V8SFmode))",
    __builtin_constant_p 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V8SFmode)))
    ? (int) 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V8SFmode)))
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5166 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5166 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9857 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 9857 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 9857 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
  { "(TARGET_FMA) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 2229 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 2229 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
  { "(ix86_unary_operator_ok (NEG, TImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8588 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, TImode, operands)) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8588 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, TImode, operands)) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 6300 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && 
#line 6293 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 6300 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP) && 
#line 6293 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 13177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, HImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 16171 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_CMOVE\n\
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE\n\
   && (MEM_P (operands[2]) || MEM_P (operands[3]))\n\
   && can_create_pseudo_p ()\n\
   && optimize_insn_for_speed_p ()",
    __builtin_constant_p 
#line 16171 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ())
    ? (int) 
#line 16171 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ())
    : -1 },
  { "(TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())\n\
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 16805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 16805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands))
    ? (int) 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V4HImode, operands))
    : -1 },
#line 8928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)\n\
    || (TARGET_SSE && (TFmode == TFmode)))\n\
   && reload_completed",
    __builtin_constant_p 
#line 8928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE && (TFmode == TFmode)))
   && reload_completed)
    ? (int) 
#line 8928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE && (TFmode == TFmode)))
   && reload_completed)
    : -1 },
#line 4272 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && reload_completed",
    __builtin_constant_p 
#line 4272 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    ? (int) 
#line 4272 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && reload_completed)
    : -1 },
#line 10363 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_REG_STALL\n\
    || (operands[1] == const1_rtx\n\
	&& TARGET_SHIFT1))",
    __builtin_constant_p 
#line 10363 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_REG_STALL
    || (operands[1] == const1_rtx
	&& TARGET_SHIFT1)))
    ? (int) 
#line 10363 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_REG_STALL
    || (operands[1] == const1_rtx
	&& TARGET_SHIFT1)))
    : -1 },
#line 8729 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed && SSE_REG_P (operands[0])",
    __builtin_constant_p 
#line 8729 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    ? (int) 
#line 8729 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && SSE_REG_P (operands[0]))
    : -1 },
  { "(TARGET_SSE2 && (V8SFmode == V4SFmode || TARGET_AVX2)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 2565 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && (V8SFmode == V4SFmode || TARGET_AVX2)) && 
#line 132 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 2565 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && (V8SFmode == V4SFmode || TARGET_AVX2)) && 
#line 132 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 8032 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)\n\
   && ix86_match_ccmode (insn,\n\
			 CONST_INT_P (operands[2])\n\
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 8032 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 CONST_INT_P (operands[2])
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 8032 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands)
   && ix86_match_ccmode (insn,
			 CONST_INT_P (operands[2])
			 && INTVAL (operands[2]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 6462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands)",
    __builtin_constant_p 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    ? (int) 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V2SImode, operands))
    : -1 },
#line 9476 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 9476 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(GET_MODE (operands[0]) == GET_MODE (operands[1])
   && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 9476 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(GET_MODE (operands[0]) == GET_MODE (operands[1])
   && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 8695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 16245 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE)\n\
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 16245 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 16245 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_AVX\n\
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 10768 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 10768 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V2DFmode)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V4DFmode)\n\
       == GET_MODE_NUNITS (V4DFmode))",
    __builtin_constant_p 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V4DFmode)))
    ? (int) 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V4DFmode)))
    : -1 },
#line 5969 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 5969 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    ? (int) 
#line 5969 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V4SImode, operands))
    : -1 },
#line 1487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SSE_MATH\n\
   && SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 1487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 1487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE_MATH
   && SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 10406 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AES",
    __builtin_constant_p 
#line 10406 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AES)
    ? (int) 
#line 10406 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AES)
    : -1 },
  { "(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_SIMODE_FIOP\n\
       || optimize_function_for_size_p (cfun))) && ( reload_completed)",
    __builtin_constant_p (
#line 1394 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))) && 
#line 1398 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1394 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun))) && 
#line 1398 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE && (TFmode == TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 8899 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (TFmode == TFmode))) && 
#line 8902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 8899 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (TFmode == TFmode))) && 
#line 8902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(TARGET_BMI2 && reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10263 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10263 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 15242 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math",
    __builtin_constant_p 
#line 15242 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    ? (int) 
#line 15242 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    : -1 },
  { "(TARGET_SSE\n\
   && (GET_MODE_NUNITS (V2DImode)\n\
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V2DFmode))) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V2DFmode))) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 10081 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 || TARGET_XOP",
    __builtin_constant_p 
#line 10081 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 || TARGET_XOP)
    ? (int) 
#line 10081 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 || TARGET_XOP)
    : -1 },
#line 4890 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 4890 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 4890 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
  { "(!TARGET_HAS_BIONIC) && (ptr_mode == DImode)",
    __builtin_constant_p (
#line 17709 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_HAS_BIONIC) && 
#line 937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ptr_mode == DImode))
    ? (int) (
#line 17709 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_HAS_BIONIC) && 
#line 937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ptr_mode == DImode))
    : -1 },
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V16HImode, operands)",
    __builtin_constant_p 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V16HImode, operands))
    ? (int) 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V16HImode, operands))
    : -1 },
#line 1379 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && !TARGET_SSE",
    __builtin_constant_p 
#line 1379 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    ? (int) 
#line 1379 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && !TARGET_SSE)
    : -1 },
#line 2257 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2257 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2257 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 8888 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE && (TFmode == TFmode))",
    __builtin_constant_p 
#line 8888 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (TFmode == TFmode)))
    ? (int) 
#line 8888 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (TFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (TFmode == TFmode)))
    : -1 },
#line 16371 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(SFmode != DFmode || TARGET_64BIT)\n\
   && TARGET_80387 && TARGET_CMOVE\n\
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE\n\
   && optimize_insn_for_speed_p ()",
    __builtin_constant_p 
#line 16371 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SFmode != DFmode || TARGET_64BIT)
   && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && optimize_insn_for_speed_p ())
    ? (int) 
#line 16371 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SFmode != DFmode || TARGET_64BIT)
   && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && optimize_insn_for_speed_p ())
    : -1 },
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V4HImode, operands)",
    __builtin_constant_p 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V4HImode, operands))
    ? (int) 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V4HImode, operands))
    : -1 },
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
  { "(TARGET_64BIT\n\
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 15492 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 15492 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 4490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 4490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V8HImode)\n\
       == GET_MODE_NUNITS (V8HImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V8HImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V8HImode)))
    : -1 },
  { "((((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
      && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))\n\
    || GET_MODE (operands[0]) == SImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) - 1 < 3\n\
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])\n\
       < ((unsigned HOST_WIDE_INT) 1 << INTVAL (operands[2])))) && ( reload_completed)",
    __builtin_constant_p (
#line 6353 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
      && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    || GET_MODE (operands[0]) == SImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) - 1 < 3
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < ((unsigned HOST_WIDE_INT) 1 << INTVAL (operands[2])))) && 
#line 6362 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6353 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
      && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    || GET_MODE (operands[0]) == SImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) - 1 < 3
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < ((unsigned HOST_WIDE_INT) 1 << INTVAL (operands[2])))) && 
#line 6362 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 5379 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
	&& TARGET_SSE)\n\
       || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 5379 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 5379 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V16QImode)\n\
       == GET_MODE_NUNITS (V8HImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V8HImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V8HImode)))
    : -1 },
  { "(TARGET_LWP) && (Pmode == DImode)",
    __builtin_constant_p (
#line 17991 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 17991 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 8282 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 8282 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 8282 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
  { "(TARGET_LWP) && (Pmode == SImode)",
    __builtin_constant_p (
#line 17991 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 17991 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
       && DImode != HImode \n\
       && ((DImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 6300 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSSE3 || TARGET_AVX || TARGET_XOP",
    __builtin_constant_p 
#line 6300 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP)
    ? (int) 
#line 6300 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 || TARGET_AVX || TARGET_XOP)
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4890 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4890 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 8856 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 8856 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    ? (int) 
#line 8856 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387))
    : -1 },
  { "(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 413 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands)",
    __builtin_constant_p 
#line 413 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    ? (int) 
#line 413 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V2SFmode, operands))
    : -1 },
  { "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17400 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17400 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
#line 5028 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "!TARGET_SSE2 && TARGET_SSE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 5028 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 5028 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(!TARGET_SSE2 && TARGET_SSE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17347 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17347 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
  { "(TARGET_MOVBE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12471 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12471 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 7455 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7455 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7455 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 16843 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((HImode == HImode\n\
       && TARGET_LCP_STALL)\n\
       || (TARGET_SPLIT_LONG_MOVES\n\
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))",
    __builtin_constant_p 
#line 16843 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((HImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn)))
    ? (int) 
#line 16843 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((HImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn)))
    : -1 },
#line 16843 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((SImode == HImode\n\
       && TARGET_LCP_STALL)\n\
       || (TARGET_SPLIT_LONG_MOVES\n\
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))",
    __builtin_constant_p 
#line 16843 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((SImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn)))
    ? (int) 
#line 16843 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((SImode == HImode
       && TARGET_LCP_STALL)
       || (TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn)))
    : -1 },
#line 10217 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 10217 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 10217 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 8275 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 8275 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 8275 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT || TARGET_CMPXCHG8B)",
    __builtin_constant_p (
#line 343 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 330 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_CMPXCHG8B))
    ? (int) (
#line 343 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 330 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_CMPXCHG8B))
    : -1 },
#line 8658 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 8658 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 8658 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 9135 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_CMOVE",
    __builtin_constant_p 
#line 9135 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE)
    ? (int) 
#line 9135 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE)
    : -1 },
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands)",
    __builtin_constant_p 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    ? (int) 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V8QImode, operands))
    : -1 },
#line 15320 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && TARGET_C99_FUNCTIONS\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15320 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 15320 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(peep2_reg_dead_p (3, operands[0])\n\
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])\n\
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 475 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 475 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1])) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V4DImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V4DImode, operands)) && 
#line 151 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V4DImode, operands)) && 
#line 151 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 800 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH",
    __builtin_constant_p 
#line 800 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    ? (int) 
#line 800 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH)
    : -1 },
#line 4755 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && reload_completed",
    __builtin_constant_p 
#line 4755 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    ? (int) 
#line 4755 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    : -1 },
#line 1319 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE3\n\
   && INTVAL (operands[3]) != INTVAL (operands[4])\n\
   && INTVAL (operands[5]) != INTVAL (operands[6])",
    __builtin_constant_p 
#line 1319 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3
   && INTVAL (operands[3]) != INTVAL (operands[4])
   && INTVAL (operands[5]) != INTVAL (operands[6]))
    ? (int) 
#line 1319 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3
   && INTVAL (operands[3]) != INTVAL (operands[4])
   && INTVAL (operands[5]) != INTVAL (operands[6]))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (AND, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 2612 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 2612 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun))
    ? (int) 
#line 2612 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_function_for_speed_p (cfun))
    : -1 },
  { "(TARGET_RDRND) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 18076 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_RDRND) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 18076 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_RDRND) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, HImode, operands)",
    __builtin_constant_p 
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    ? (int) 
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, HImode, operands))
    : -1 },
  { "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17322 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17322 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
  { "(TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4721 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4721 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 5360 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && TARGET_SSE\n\
   && reload_completed",
    __builtin_constant_p 
#line 5360 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    ? (int) 
#line 5360 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    : -1 },
#line 10340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, QImode, operands)",
    __builtin_constant_p 
#line 10340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    ? (int) 
#line 10340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, QImode, operands))
    : -1 },
#line 5779 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed && ix86_avoid_lea_for_add (insn, operands)",
    __builtin_constant_p 
#line 5779 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_add (insn, operands))
    ? (int) 
#line 5779 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_add (insn, operands))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DImode)\n\
       == GET_MODE_NUNITS (V8SImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V8SImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V8SImode)))
    : -1 },
  { "(TARGET_SSE2) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 10141 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 168 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 10141 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 168 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
  { "(TARGET_64BIT\n\
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 15573 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 15573 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
  { "(reload_completed && ix86_avoid_lea_for_add (insn, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5779 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_add (insn, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5779 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_add (insn, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE4_1) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 8632 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 168 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 8632 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 168 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 10340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, QImode, operands)",
    __builtin_constant_p 
#line 10340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    ? (int) 
#line 10340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, QImode, operands))
    : -1 },
#line 16191 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL",
    __builtin_constant_p 
#line 16191 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    ? (int) 
#line 16191 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL)
    : -1 },
#line 13392 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[2]))",
    __builtin_constant_p 
#line 13392 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[2])))
    ? (int) 
#line 13392 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[2])))
    : -1 },
  { "(TARGET_SSE\n\
   && (GET_MODE_NUNITS (V4SFmode)\n\
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V2DFmode))) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V2DFmode))) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 9526 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 9526 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 9526 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
#line 17177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode\n\
    || GET_MODE (operands[0]) == HImode)\n\
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode
    || GET_MODE (operands[0]) == HImode)
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 8956 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_ROUND",
    __builtin_constant_p 
#line 8956 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_ROUND)
    ? (int) 
#line 8956 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_ROUND)
    : -1 },
#line 12708 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_GNU_TLS",
    __builtin_constant_p 
#line 12708 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    ? (int) 
#line 12708 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU_TLS)
    : -1 },
#line 3591 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 3591 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 3591 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))
    : -1 },
#line 10388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
  && (TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 10388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
  && (TARGET_USE_XCHGB || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 10388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
  && (TARGET_USE_XCHGB || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (IOR, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
  { "(TARGET_AVX) && ( reload_completed)",
    __builtin_constant_p (
#line 11103 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 11105 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 11103 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 11105 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V8QImode, operands)",
    __builtin_constant_p 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V8QImode, operands))
    ? (int) 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_MINUS, V8QImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (ROTATE, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10217 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10217 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, DImode, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 8977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, HImode, operands)",
    __builtin_constant_p 
#line 8977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, HImode, operands))
    ? (int) 
#line 8977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, HImode, operands))
    : -1 },
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V2SImode, operands)",
    __builtin_constant_p 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    ? (int) 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V2SImode, operands))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && 
#line 156 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8SImode, operands)) && 
#line 156 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 5166 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5166 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5166 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
  { "(TARGET_SSE || TARGET_3DNOW_A) && (Pmode == DImode)",
    __builtin_constant_p (
#line 1663 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 1663 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 7464 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7464 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7464 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 8354 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8354 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8354 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands))
    ? (int) 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_PLUS, V8QImode, operands))
    : -1 },
  { "(TARGET_SSE) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6433 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 151 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6433 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 151 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(TARGET_64BIT) && (Pmode == DImode)",
    __builtin_constant_p (
#line 12758 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 12758 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 17621 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_PRFCHW",
    __builtin_constant_p 
#line 17621 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_PRFCHW)
    ? (int) 
#line 17621 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_PRFCHW)
    : -1 },
#line 5893 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 5893 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 5893 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 9942 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 9942 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    ? (int) 
#line 9942 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, QImode, operands))
    : -1 },
#line 6050 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands)",
    __builtin_constant_p 
#line 6050 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    ? (int) 
#line 6050 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V4SImode, operands))
    : -1 },
  { "(ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    ? (int) 
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && 
#line 188 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V32QImode, operands)) && 
#line 188 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 16245 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 16245 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 16245 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT && TARGET_CMPXCHG16B)",
    __builtin_constant_p (
#line 343 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 331 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B))
    ? (int) (
#line 343 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 331 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_64BIT && TARGET_CMPXCHG16B))
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 17054 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   /* Do not split stack checking probes.  */\n\
   && GET_CODE (operands[3]) != IOR && operands[1] != const0_rtx",
    __builtin_constant_p 
#line 17054 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   /* Do not split stack checking probes.  */
   && GET_CODE (operands[3]) != IOR && operands[1] != const0_rtx)
    ? (int) 
#line 17054 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   /* Do not split stack checking probes.  */
   && GET_CODE (operands[3]) != IOR && operands[1] != const0_rtx)
    : -1 },
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (DFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 4708 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 4708 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    ? (int) 
#line 4708 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    : -1 },
  { "(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)) && ( reload_completed)",
    __builtin_constant_p (
#line 251 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)) && 
#line 253 "../../gcc-4.8.2/gcc/config/i386/sync.md"
( reload_completed))
    ? (int) (
#line 251 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)) && 
#line 253 "../../gcc-4.8.2/gcc/config/i386/sync.md"
( reload_completed))
    : -1 },
#line 5565 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (MULT, V16HImode, operands)",
    __builtin_constant_p 
#line 5565 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (MULT, V16HImode, operands))
    ? (int) 
#line 5565 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (MULT, V16HImode, operands))
    : -1 },
#line 14961 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math)",
    __builtin_constant_p 
#line 14961 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    ? (int) 
#line 14961 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    : -1 },
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V2SImode, operands)",
    __builtin_constant_p 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V2SImode, operands))
    ? (int) 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V2SImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V2SImode, operands))
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4915 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4915 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (GET_MODE_NUNITS (V2DImode)\n\
       == GET_MODE_NUNITS (V4SFmode))",
    __builtin_constant_p 
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V4SFmode)))
    ? (int) 
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V4SFmode)))
    : -1 },
  { "(IN_RANGE (INTVAL (operands[2]), 1, 3)\n\
   /* Validate MODE for lea.  */\n\
   && ((!TARGET_PARTIAL_REG_STALL\n\
	&& (GET_MODE (operands[0]) == QImode\n\
	    || GET_MODE (operands[0]) == HImode))\n\
       || GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   && (rtx_equal_p (operands[0], operands[3])\n\
       || peep2_reg_dead_p (2, operands[0]))\n\
   /* We reorder load and the shift.  */\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && (word_mode == DImode)",
    __builtin_constant_p (
#line 17533 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode))
    ? (int) (
#line 17533 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(IN_RANGE (INTVAL (operands[2]), 1, 3)
   /* Validate MODE for lea.  */
   && ((!TARGET_PARTIAL_REG_STALL
	&& (GET_MODE (operands[0]) == QImode
	    || GET_MODE (operands[0]) == HImode))
       || GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && (rtx_equal_p (operands[0], operands[3])
       || peep2_reg_dead_p (2, operands[0]))
   /* We reorder load and the shift.  */
   && !reg_overlap_mentioned_p (operands[0], operands[4])) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V4SImode)\n\
       == GET_MODE_NUNITS (V16QImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V16QImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V16QImode)))
    : -1 },
#line 1715 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && operands[1] == constm1_rtx",
    __builtin_constant_p 
#line 1715 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx)
    ? (int) 
#line 1715 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx)
    : -1 },
  { "(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 15719 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 15719 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 5832 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed && ix86_lea_for_add_ok (insn, operands)",
    __builtin_constant_p 
#line 5832 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed && ix86_lea_for_add_ok (insn, operands))
    ? (int) 
#line 5832 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed && ix86_lea_for_add_ok (insn, operands))
    : -1 },
#line 6944 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_QIMODE_MATH\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6944 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6944 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_QIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 8367 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 8367 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 8367 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 7624 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && INTVAL (operands[1]) > 0\n\
   && INTVAL (operands[2]) >= 0\n\
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32\n\
   && (GET_MODE (operands[0]) == SImode\n\
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)\n\
       || GET_MODE (operands[0]) == HImode\n\
       || GET_MODE (operands[0]) == QImode)",
    __builtin_constant_p 
#line 7624 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    ? (int) 
#line 7624 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && INTVAL (operands[1]) > 0
   && INTVAL (operands[2]) >= 0
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32
   && (GET_MODE (operands[0]) == SImode
       || (TARGET_64BIT && GET_MODE (operands[0]) == DImode)
       || GET_MODE (operands[0]) == HImode
       || GET_MODE (operands[0]) == QImode))
    : -1 },
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands))
    ? (int) 
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V8HImode, operands))
    : -1 },
#line 8677 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 8677 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 8677 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (SFmode))
    : -1 },
#line 4977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 4977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 4977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    : -1 },
  { "(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()\n\
   && satisfies_constraint_K (operands[2])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17501 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17501 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2])) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((SImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 5178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(reload_completed) && (TARGET_HIMODE_MATH)",
    __builtin_constant_p (
#line 7330 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 810 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
    ? (int) (
#line 7330 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 810 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V32QImode)\n\
       == GET_MODE_NUNITS (V16HImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V16HImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V16HImode)))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4547 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4547 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 1565 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode) && 1",
    __builtin_constant_p 
#line 1565 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    ? (int) 
#line 1565 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode) && 1)
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4469 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4469 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(ix86_binary_operator_ok (PLUS, TImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5470 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands)) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5470 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, TImode, operands)) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4737 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 0)",
    __builtin_constant_p 
#line 4737 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 0))
    ? (int) 
#line 4737 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 0))
    : -1 },
#line 3566 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 3566 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 3566 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(ix86_binary_operator_ok (ROTATERT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10134 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10134 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE\n\
   && (GET_MODE_NUNITS (V4SImode)\n\
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V2DFmode))) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V2DFmode))) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
  { "(TARGET_SSE\n\
   && (GET_MODE_NUNITS (V16QImode)\n\
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V2DFmode))) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V2DFmode))) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 6287 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)",
    __builtin_constant_p 
#line 6287 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    ? (int) 
#line 6287 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode))
    : -1 },
#line 1361 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE3\n\
   && INTVAL (operands[2]) != INTVAL (operands[3])",
    __builtin_constant_p 
#line 1361 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3
   && INTVAL (operands[2]) != INTVAL (operands[3]))
    ? (int) 
#line 1361 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3
   && INTVAL (operands[2]) != INTVAL (operands[3]))
    : -1 },
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands)",
    __builtin_constant_p 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    ? (int) 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V4HImode, operands))
    : -1 },
#line 2805 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && TARGET_64BIT",
    __builtin_constant_p 
#line 2805 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    ? (int) 
#line 2805 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT)
    : -1 },
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V8HImode, operands)",
    __builtin_constant_p 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V8HImode, operands))
    ? (int) 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V8HImode, operands))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V4SImode)\n\
       == GET_MODE_NUNITS (V4SImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V4SImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V4SImode)))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V4SFmode)\n\
       == GET_MODE_NUNITS (V8HImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V8HImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V8HImode)))
    : -1 },
#line 1394 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_SIMODE_FIOP\n\
       || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 1394 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 1394 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_SIMODE_FIOP
       || optimize_function_for_size_p (cfun)))
    : -1 },
#line 4209 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1\n\
   && ((unsigned) exact_log2 (INTVAL (operands[3]))\n\
       < GET_MODE_NUNITS (V4SFmode))",
    __builtin_constant_p 
#line 4209 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SFmode)))
    ? (int) 
#line 4209 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4SFmode)))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (IOR, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 12387 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_POPCNT",
    __builtin_constant_p 
#line 12387 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_POPCNT)
    ? (int) 
#line 12387 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_POPCNT)
    : -1 },
  { "(TARGET_SSE2) && (Pmode == SImode)",
    __builtin_constant_p (
#line 7760 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 7760 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 7685 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 7685 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    ? (int) 
#line 7685 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16QImode, operands))
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9621 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9621 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 9679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 9679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
  { "(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 15986 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 15986 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 7081 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && X87_ENABLE_ARITH (SFmode))\n\
    || TARGET_SSE_MATH",
    __builtin_constant_p 
#line 7081 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || TARGET_SSE_MATH)
    ? (int) 
#line 7081 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || TARGET_SSE_MATH)
    : -1 },
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V1TImode)\n\
       || register_operand (operands[1], V1TImode))",
    __builtin_constant_p 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V1TImode)
       || register_operand (operands[1], V1TImode)))
    ? (int) 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V1TImode)
       || register_operand (operands[1], V1TImode)))
    : -1 },
  { "(TARGET_SSE) && ( reload_completed\n\
   && (TARGET_INTER_UNIT_MOVES\n\
       || MEM_P (operands [0])\n\
       || !GENERAL_REGNO_P (true_regnum (operands [0]))))",
    __builtin_constant_p (
#line 7363 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 7365 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0])))))
    ? (int) (
#line 7363 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 7365 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0])))))
    : -1 },
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    ? (int) 
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    : -1 },
  { "(TARGET_SSE4_1) && ( reload_completed && SSE_REG_P (operands[0]))",
    __builtin_constant_p (
#line 4315 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 4320 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed && SSE_REG_P (operands[0])))
    ? (int) (
#line 4315 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 4320 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed && SSE_REG_P (operands[0])))
    : -1 },
#line 17237 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !TARGET_OPT_AGU\n\
   && REGNO (operands[0]) == REGNO (operands[2])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17237 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_OPT_AGU
   && REGNO (operands[0]) == REGNO (operands[2])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17237 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_OPT_AGU
   && REGNO (operands[0]) == REGNO (operands[2])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (IOR, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(!SIBLING_CALL_P (insn)) && (word_mode == DImode)",
    __builtin_constant_p (
#line 11530 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode))
    ? (int) (
#line 11530 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode))
    : -1 },
#line 7864 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 7864 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 7864 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
#line 10946 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_BT || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 10946 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun))
    ? (int) 
#line 10946 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun))
    : -1 },
  { "(TARGET_ROUND && !flag_trapping_math) && (TARGET_AVX)",
    __builtin_constant_p (
#line 9062 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_ROUND && !flag_trapping_math) && 
#line 136 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 9062 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_ROUND && !flag_trapping_math) && 
#line 136 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && 
#line 188 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V32QImode, operands)) && 
#line 188 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V4SImode, operands)",
    __builtin_constant_p 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V4SImode, operands))
    ? (int) 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V4SImode, operands))
    : -1 },
#line 5274 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 5274 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 5274 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun))
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V2TImode)\n\
       || register_operand (operands[1], V2TImode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2TImode)
       || register_operand (operands[1], V2TImode))) && 
#line 104 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2TImode)
       || register_operand (operands[1], V2TImode))) && 
#line 104 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (XOR, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V16HImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V16HImode, operands)) && 
#line 149 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V16HImode, operands)) && 
#line 149 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V32QImode)\n\
       == GET_MODE_NUNITS (V4DFmode))",
    __builtin_constant_p 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V4DFmode)))
    ? (int) 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V4DFmode)))
    : -1 },
#line 785 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode)",
    __builtin_constant_p 
#line 785 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
    ? (int) 
#line 785 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V8SFmode)\n\
       || register_operand (operands[1], V8SFmode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode))) && 
#line 105 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V8SFmode)
       || register_operand (operands[1], V8SFmode))) && 
#line 105 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
       && DImode != HImode \n\
       && ((DImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 4407 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH\n\
   && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 4407 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 4407 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun))
    : -1 },
  { "(TARGET_SSE4_1) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 8551 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 8551 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V2DImode, operands)",
    __builtin_constant_p 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V2DImode, operands))
    ? (int) 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V2DImode, operands))
    : -1 },
#line 8640 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, QImode, operands)",
    __builtin_constant_p 
#line 8640 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    ? (int) 
#line 8640 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, QImode, operands))
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands))
    ? (int) 
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16QImode, operands))
    : -1 },
#line 6050 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 6050 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    ? (int) 
#line 6050 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMAX, V8HImode, operands))
    : -1 },
#line 13801 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations\n\
   && standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 13801 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 13801 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    : -1 },
#line 15404 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15404 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 15404 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17400 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17400 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
#line 15060 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 15060 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 15060 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations)
    : -1 },
  { "(TARGET_SSE4_1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6940 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6940 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5984 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)\n\
   && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 5984 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 5984 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCZmode)
   && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V8QImode, operands)",
    __builtin_constant_p 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V8QImode, operands))
    ? (int) 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V8QImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V8QImode, operands))
    : -1 },
#line 16690 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && ((GET_MODE (operands[0]) == HImode\n\
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)\n\
            /* ??? next two lines just !satisfies_constraint_K (...) */\n\
	    || !CONST_INT_P (operands[2])\n\
	    || satisfies_constraint_K (operands[2])))\n\
       || (GET_MODE (operands[0]) == QImode\n\
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun))))",
    __builtin_constant_p 
#line 16690 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || !CONST_INT_P (operands[2])
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun)))))
    ? (int) 
#line 16690 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ((GET_MODE (operands[0]) == HImode
	&& ((optimize_function_for_speed_p (cfun) && !TARGET_FAST_PREFIX)
            /* ??? next two lines just !satisfies_constraint_K (...) */
	    || !CONST_INT_P (operands[2])
	    || satisfies_constraint_K (operands[2])))
       || (GET_MODE (operands[0]) == QImode
	   && (TARGET_PROMOTE_QImode || optimize_function_for_size_p (cfun)))))
    : -1 },
#line 2730 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_MODE (operands[0]) == TFmode\n\
       || GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == DFmode)\n\
   && !ANY_FP_REG_P (operands[1])",
    __builtin_constant_p 
#line 2730 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !ANY_FP_REG_P (operands[1]))
    ? (int) 
#line 2730 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !ANY_FP_REG_P (operands[1]))
    : -1 },
#line 4940 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 4940 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 4940 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && 
#line 815 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize && flag_peephole2) ? epilogue_completed : reload_completed) && 
#line 815 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 10283 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands)",
    __builtin_constant_p 
#line 10283 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    ? (int) 
#line 10283 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATERT, SImode, operands))
    : -1 },
#line 8677 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 8677 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 8677 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387 && SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V8SImode, operands)",
    __builtin_constant_p 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V8SImode, operands))
    ? (int) 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMAX, V8SImode, operands))
    : -1 },
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && ( 1)",
    __builtin_constant_p (
#line 10946 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 10948 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 10946 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_BT || optimize_function_for_size_p (cfun)) && 
#line 10948 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 13487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (DFmode))\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 13487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (DFmode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 13487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (DFmode))
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands)",
    __builtin_constant_p 
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands))
    ? (int) 
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (AND, V4SFmode, operands))
    : -1 },
  { "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17400 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17400 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DFmode)\n\
       == GET_MODE_NUNITS (V16HImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V16HImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V16HImode)))
    : -1 },
  { "(TARGET_BMI2 && reload_completed\n\
  && true_regnum (operands[1]) == DX_REG) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6900 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed
  && true_regnum (operands[1]) == DX_REG) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6900 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed
  && true_regnum (operands[1]) == DX_REG) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 2316 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_LP64 && ix86_check_movabs (insn, 0)",
    __builtin_constant_p 
#line 2316 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 0))
    ? (int) 
#line 2316 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 0))
    : -1 },
#line 8945 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, HImode, operands)",
    __builtin_constant_p 
#line 8945 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    ? (int) 
#line 8945 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, HImode, operands))
    : -1 },
#line 10855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && avx_vperm2f128_parallel (operands[3], V8SImode)",
    __builtin_constant_p 
#line 10855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SImode))
    ? (int) 
#line 10855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SImode))
    : -1 },
  { "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && GET_CODE (operands[2]) != MINUS\n\
   && peep2_reg_dead_p (3, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && ix86_match_ccmode (peep2_next_insn (2),\n\
			 GET_CODE (operands[2]) == PLUS\n\
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17106 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && GET_CODE (operands[2]) != MINUS
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17106 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && GET_CODE (operands[2]) != MINUS
   && peep2_reg_dead_p (3, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && ix86_match_ccmode (peep2_next_insn (2),
			 GET_CODE (operands[2]) == PLUS
			 ? CCGOCmode : CCNOmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 16371 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(DFmode != DFmode || TARGET_64BIT)\n\
   && TARGET_80387 && TARGET_CMOVE\n\
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE\n\
   && optimize_insn_for_speed_p ()",
    __builtin_constant_p 
#line 16371 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((DFmode != DFmode || TARGET_64BIT)
   && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && optimize_insn_for_speed_p ())
    ? (int) 
#line 16371 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((DFmode != DFmode || TARGET_64BIT)
   && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && optimize_insn_for_speed_p ())
    : -1 },
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "Pmode == SImode",
    __builtin_constant_p 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)
    ? (int) 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)
    : -1 },
  { "(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH\n\
   && optimize_function_for_speed_p (cfun)) && ( reload_completed)",
    __builtin_constant_p (
#line 4407 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && 
#line 4410 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 4407 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH
   && optimize_function_for_speed_p (cfun)) && 
#line 4410 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 16202 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL\n\
   && reload_completed",
    __builtin_constant_p 
#line 16202 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL
   && reload_completed)
    ? (int) 
#line 16202 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !TARGET_PARTIAL_REG_STALL
   && reload_completed)
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4469 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ()) && 
#line 4469 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 7421 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && reload_completed\n\
   && (TARGET_INTER_UNIT_MOVES\n\
       || MEM_P (operands [0])\n\
       || !GENERAL_REGNO_P (true_regnum (operands [0])))",
    __builtin_constant_p 
#line 7421 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0]))))
    ? (int) 
#line 7421 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && reload_completed
   && (TARGET_INTER_UNIT_MOVES
       || MEM_P (operands [0])
       || !GENERAL_REGNO_P (true_regnum (operands [0]))))
    : -1 },
#line 4364 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4364 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4364 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (XFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands)",
    __builtin_constant_p 
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands))
    ? (int) 
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4SFmode, operands))
    : -1 },
#line 6095 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (EQ, V32QImode, operands)",
    __builtin_constant_p 
#line 6095 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V32QImode, operands))
    ? (int) 
#line 6095 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V32QImode, operands))
    : -1 },
#line 1027 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 1027 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 1027 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
  { "(TARGET_64BIT\n\
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 15750 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 15750 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 9526 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 9526 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 9526 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
#line 10272 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_BMI2",
    __builtin_constant_p 
#line 10272 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2)
    ? (int) 
#line 10272 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_BMI2)
    : -1 },
#line 9574 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun)\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && (TARGET_SHIFT1\n\
	       || TARGET_DOUBLE_WITH_ADD)))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 9574 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 9574 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && (TARGET_SHIFT1
	       || TARGET_DOUBLE_WITH_ADD)))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
  { "(TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V2DFmode)\n\
       == GET_MODE_NUNITS (V8HImode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V8HImode))) && 
#line 119 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V8HImode))) && 
#line 119 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 11888 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "epilogue_completed",
    __builtin_constant_p 
#line 11888 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(epilogue_completed)
    ? (int) 
#line 11888 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(epilogue_completed)
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V4DImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V4DImode, operands)) && 
#line 151 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V4DImode, operands)) && 
#line 151 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (XFmode, SImode)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, SImode)
   && reload_completed)
    ? (int) 
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, SImode)
   && reload_completed)
    : -1 },
  { "(TARGET_LWP) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 18026 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 18026 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LWP) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 12957 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 12957 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
    ? (int) 
#line 12957 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_GNU2_TLS)
    : -1 },
#line 6095 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (EQ, V8SImode, operands)",
    __builtin_constant_p 
#line 6095 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V8SImode, operands))
    ? (int) 
#line 6095 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V8SImode, operands))
    : -1 },
  { "(TARGET_BMI) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12170 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12170 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(reload_completed) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10182 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10182 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V16HImode, operands)",
    __builtin_constant_p 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V16HImode, operands))
    ? (int) 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V16HImode, operands))
    : -1 },
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (DFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 16561 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_target_stack_probe ()",
    __builtin_constant_p 
#line 16561 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_target_stack_probe ())
    ? (int) 
#line 16561 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_target_stack_probe ())
    : -1 },
#line 17501 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()\n\
   && satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 17501 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2]))
    ? (int) 
#line 17501 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM8 && optimize_insn_for_speed_p ()
   && satisfies_constraint_K (operands[2]))
    : -1 },
#line 6353 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
      && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))\n\
    || GET_MODE (operands[0]) == SImode\n\
    || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) - 1 < 3\n\
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])\n\
       < ((unsigned HOST_WIDE_INT) 1 << INTVAL (operands[2])))",
    __builtin_constant_p 
#line 6353 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
      && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    || GET_MODE (operands[0]) == SImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) - 1 < 3
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < ((unsigned HOST_WIDE_INT) 1 << INTVAL (operands[2]))))
    ? (int) 
#line 6353 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
      && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    || GET_MODE (operands[0]) == SImode
    || (TARGET_64BIT && GET_MODE (operands[0]) == DImode))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[2])) - 1 < 3
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       < ((unsigned HOST_WIDE_INT) 1 << INTVAL (operands[2]))))
    : -1 },
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, QImode, operands)",
    __builtin_constant_p 
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    ? (int) 
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, QImode, operands))
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5166 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5166 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SFmode)\n\
       == GET_MODE_NUNITS (V32QImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V32QImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V32QImode)))
    : -1 },
#line 14961 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math)",
    __builtin_constant_p 
#line 14961 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    ? (int) 
#line 14961 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && !flag_trapping_math))
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 14850 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 14850 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(!TARGET_OPT_AGU\n\
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17215 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17215 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_OPT_AGU
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 10061 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)",
    __builtin_constant_p 
#line 10061 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode))
    ? (int) 
#line 10061 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode))
    : -1 },
#line 17920 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_XSAVE",
    __builtin_constant_p 
#line 17920 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE)
    ? (int) 
#line 17920 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE)
    : -1 },
#line 9754 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && INTVAL (operands[2]) == 63\n\
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands)",
    __builtin_constant_p 
#line 9754 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    ? (int) 
#line 9754 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 63
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
    : -1 },
#line 4119 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4119 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 4119 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 4364 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 4364 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    ? (int) 
#line 4364 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(SSE_FLOAT_MODE_P (DFmode) && (!TARGET_FISTTP || TARGET_SSE_MATH)))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V16QImode)\n\
       == GET_MODE_NUNITS (V4SImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V4SImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V4SImode)))
    : -1 },
#line 10217 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 10217 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 10217 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 12893 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 12893 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
    ? (int) 
#line 12893 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_GNU2_TLS)
    : -1 },
#line 4253 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 4253 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    ? (int) 
#line 4253 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && flag_unsafe_math_optimizations)
    : -1 },
#line 5817 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && reload_completed && ix86_avoid_lea_for_add (insn, operands)",
    __builtin_constant_p 
#line 5817 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && reload_completed && ix86_avoid_lea_for_add (insn, operands))
    ? (int) 
#line 5817 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && reload_completed && ix86_avoid_lea_for_add (insn, operands))
    : -1 },
  { "(ix86_match_ccmode (insn, CCmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1016 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 1016 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "((TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & 0x1f) == 0x1f) && ( 1)",
    __builtin_constant_p (
#line 10983 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f) && 
#line 10986 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 10983 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f) && 
#line 10986 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 475 "../../gcc-4.8.2/gcc/config/i386/sync.md"
  { "peep2_reg_dead_p (3, operands[0])\n\
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])\n\
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])",
    __builtin_constant_p 
#line 475 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    ? (int) 
#line 475 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(peep2_reg_dead_p (3, operands[0])
   && (unsigned HOST_WIDE_INT) INTVAL (operands[2])
      == -(unsigned HOST_WIDE_INT) INTVAL (operands[3])
   && !reg_overlap_mentioned_p (operands[0], operands[1]))
    : -1 },
  { "(SIBLING_CALL_P (insn)) && (word_mode == DImode)",
    __builtin_constant_p (
#line 11538 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode))
    ? (int) (
#line 11538 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode))
    : -1 },
#line 8275 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 8275 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 8275 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
#line 12344 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_TBM",
    __builtin_constant_p 
#line 12344 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_TBM)
    ? (int) 
#line 12344 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_TBM)
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8381 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8381 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_AVOID_VECTOR_DECODE\n\
   && SSE_FLOAT_MODE_P (SFmode)\n\
   && optimize_insn_for_speed_p ()",
    __builtin_constant_p 
#line 4453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (SFmode)
   && optimize_insn_for_speed_p ())
    ? (int) 
#line 4453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (SFmode)
   && optimize_insn_for_speed_p ())
    : -1 },
#line 6858 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_BMI2\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6858 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_BMI2
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6858 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_BMI2
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 1425 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1425 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1425 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 2311 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_FMA4",
    __builtin_constant_p 
#line 2311 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA4)
    ? (int) 
#line 2311 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA4)
    : -1 },
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V4HImode, operands)",
    __builtin_constant_p 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V4HImode, operands))
    ? (int) 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V4HImode, operands))
    : -1 },
#line 5427 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed && ix86_avoid_lea_for_addr (insn, operands)",
    __builtin_constant_p 
#line 5427 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_addr (insn, operands))
    ? (int) 
#line 5427 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_addr (insn, operands))
    : -1 },
#line 16245 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && TARGET_CMOVE)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 16245 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 16245 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && TARGET_CMOVE)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 6490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (XOR, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 5314 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5314 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed)
    ? (int) 
#line 5314 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed)
    : -1 },
#line 5845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, QImode, operands)",
    __builtin_constant_p 
#line 5845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    ? (int) 
#line 5845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, QImode, operands))
    : -1 },
#line 1460 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 1460 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 1460 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (SFmode))
    : -1 },
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "word_mode == DImode",
    __builtin_constant_p 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)
    ? (int) 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)
    : -1 },
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands)",
    __builtin_constant_p 
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands))
    ? (int) 
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4SImode, operands))
    : -1 },
#line 6490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)\n\
   && ix86_binary_operator_ok (MINUS, SImode, operands)",
    __builtin_constant_p 
#line 6490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    ? (int) 
#line 6490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode)
   && ix86_binary_operator_ok (MINUS, SImode, operands))
    : -1 },
#line 1624 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 1624 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 1624 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
#line 440 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V2SFmode, operands)",
    __builtin_constant_p 
#line 440 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    ? (int) 
#line 440 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V2SFmode, operands))
    : -1 },
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (GET_MODE_NUNITS (V16QImode)\n\
       == GET_MODE_NUNITS (V4SFmode))",
    __builtin_constant_p 
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V4SFmode)))
    ? (int) 
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V4SFmode)))
    : -1 },
#line 8845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (reload_completed\n\
       || !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 8845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 8845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (reload_completed
       || !(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    : -1 },
#line 2878 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && standard_80387_constant_p (operands[1]) > 0\n\
	   && !memory_operand (operands[0], XFmode))\n\
       || (!TARGET_MEMORY_MISMATCH_STALL\n\
	   && memory_operand (operands[0], XFmode)))",
    __builtin_constant_p 
#line 2878 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], XFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], XFmode))))
    ? (int) 
#line 2878 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], XFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], XFmode))))
    : -1 },
  { "(TARGET_CMPXCHG) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 392 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 392 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_XOP) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 10225 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 10225 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 4940 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 4940 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 4940 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 9375 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 9375 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 9375 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
#line 11584 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 11584 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !SIBLING_CALL_P (insn))
    ? (int) 
#line 11584 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !SIBLING_CALL_P (insn))
    : -1 },
  { "(TARGET_FMA || TARGET_FMA4) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 2178 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 2178 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 4182 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4182 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    ? (int) 
#line 4182 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !TARGET_MIX_SSE_I387)
    : -1 },
#line 15242 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math",
    __builtin_constant_p 
#line 15242 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    ? (int) 
#line 15242 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !flag_trapping_math)
    : -1 },
  { "(TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 13177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, SImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_SSE2\n\
   && ((unsigned) exact_log2 (INTVAL (operands[3]))\n\
       < GET_MODE_NUNITS (V2DImode))) && (TARGET_SSE4_1 && TARGET_64BIT)",
    __builtin_constant_p (
#line 6886 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2DImode))) && 
#line 6872 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT))
    ? (int) (
#line 6886 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V2DImode))) && 
#line 6872 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V2DFmode)\n\
       == GET_MODE_NUNITS (V4SImode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V4SImode))) && 
#line 119 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V4SImode))) && 
#line 119 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 6122 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP\n\
   && ix86_binary_operator_ok (EQ, V4SImode, operands)",
    __builtin_constant_p 
#line 6122 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V4SImode, operands))
    ? (int) 
#line 6122 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V4SImode, operands))
    : -1 },
#line 15382 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15382 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 15382 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 4645 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 4645 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    ? (int) 
#line 4645 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DFmode)\n\
       == GET_MODE_NUNITS (V4DImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V4DImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V4DImode)))
    : -1 },
#line 3356 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_MODE (operands[0]) == TFmode\n\
       || GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == DFmode)\n\
   && (operands[2] = find_constant_src (insn))",
    __builtin_constant_p 
#line 3356 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && (operands[2] = find_constant_src (insn)))
    ? (int) 
#line 3356 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && (operands[2] = find_constant_src (insn)))
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4433 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4433 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1033 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMIN, V8QImode, operands)",
    __builtin_constant_p 
#line 1033 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    ? (int) 
#line 1033 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMIN, V8QImode, operands))
    : -1 },
#line 5332 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && TARGET_SSE",
    __builtin_constant_p 
#line 5332 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE)
    ? (int) 
#line 5332 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE)
    : -1 },
#line 13136 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (SFmode)\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   && !COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13136 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (SFmode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13136 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (SFmode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && !COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && peep2_reg_dead_p (4, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[2])\n\
   && (DImode != QImode\n\
       || immediate_operand (operands[2], QImode)\n\
       || q_regs_operand (operands[2], QImode))\n\
   && ix86_match_ccmode (peep2_next_insn (3),\n\
			 (GET_CODE (operands[3]) == PLUS\n\
			  || GET_CODE (operands[3]) == MINUS)\n\
			 ? CCGOCmode : CCNOmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17075 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17075 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (DImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V16HImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V16HImode, operands)) && 
#line 149 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V16HImode, operands)) && 
#line 149 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5199 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5199 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DFmode)\n\
       == GET_MODE_NUNITS (V32QImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V32QImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V32QImode)))
    : -1 },
#line 7007 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_64BIT && TARGET_SSE4_1",
    __builtin_constant_p 
#line 7007 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE4_1)
    ? (int) 
#line 7007 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_64BIT && TARGET_SSE4_1)
    : -1 },
#line 1447 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && reload_completed",
    __builtin_constant_p 
#line 1447 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    ? (int) 
#line 1447 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && reload_completed)
    : -1 },
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))
    ? (int) 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16QImode, operands))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 1820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && !SSE_REG_P (operands[0]) && !SSE_REG_P (operands[1])",
    __builtin_constant_p 
#line 1820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && !SSE_REG_P (operands[0]) && !SSE_REG_P (operands[1]))
    ? (int) 
#line 1820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && !SSE_REG_P (operands[0]) && !SSE_REG_P (operands[1]))
    : -1 },
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
       && SImode != HImode \n\
       && ((SImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 16721 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && optimize_insn_for_speed_p ()\n\
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)\n\
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 16721 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && optimize_insn_for_speed_p ()
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 16721 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && optimize_insn_for_speed_p ()
   && ((GET_MODE (operands[1]) == HImode && ! TARGET_FAST_PREFIX)
       || (GET_MODE (operands[1]) == QImode && TARGET_PROMOTE_QImode))
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[4]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
#line 11270 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_F16C",
    __builtin_constant_p 
#line 11270 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_F16C)
    ? (int) 
#line 11270 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_F16C)
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 8945 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 8945 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 8945 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
  { "(TARGET_64BIT\n\
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 15679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 15679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 5456 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (MULT, V8SImode, operands)",
    __builtin_constant_p 
#line 5456 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (MULT, V8SImode, operands))
    ? (int) 
#line 5456 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (MULT, V8SImode, operands))
    : -1 },
#line 6282 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_2",
    __builtin_constant_p 
#line 6282 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2)
    ? (int) 
#line 6282 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2)
    : -1 },
#line 1990 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, TFmode, operands)",
    __builtin_constant_p 
#line 1990 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, TFmode, operands))
    ? (int) 
#line 1990 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, TFmode, operands))
    : -1 },
#line 13044 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13044 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13044 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 10617 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX && !TARGET_AVX2 && reload_completed",
    __builtin_constant_p 
#line 10617 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX && !TARGET_AVX2 && reload_completed)
    ? (int) 
#line 10617 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX && !TARGET_AVX2 && reload_completed)
    : -1 },
#line 12486 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_BSWAP",
    __builtin_constant_p 
#line 12486 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BSWAP)
    ? (int) 
#line 12486 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BSWAP)
    : -1 },
#line 5379 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && ((TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
	&& TARGET_SSE)\n\
       || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))",
    __builtin_constant_p 
#line 5379 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    ? (int) 
#line 5379 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && ((TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
	&& TARGET_SSE)
       || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)))
    : -1 },
  { "(SIBLING_CALL_P (insn)) && (word_mode == SImode)",
    __builtin_constant_p (
#line 11538 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode))
    ? (int) (
#line 11538 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SIBLING_CALL_P (insn)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode))
    : -1 },
#line 1014 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMAX, V4HImode, operands)",
    __builtin_constant_p 
#line 1014 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    ? (int) 
#line 1014 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMAX, V4HImode, operands))
    : -1 },
#line 4766 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
        || TARGET_MIX_SSE_I387)\n\
    && reload_completed",
    __builtin_constant_p 
#line 4766 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    ? (int) 
#line 4766 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
        || TARGET_MIX_SSE_I387)
    && reload_completed)
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (XFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 7699 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[2])\n\
    && GET_MODE (operands[2]) != QImode\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~(127 << 8))))",
    __builtin_constant_p 
#line 7699 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    ? (int) 
#line 7699 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[2])
    && GET_MODE (operands[2]) != QImode
    && ((ix86_match_ccmode (insn, CCZmode)
    	 && !(INTVAL (operands[3]) & ~(255 << 8)))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~(127 << 8)))))
    : -1 },
  { "((optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 10061 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 10061 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5656 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands)",
    __builtin_constant_p 
#line 5656 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    ? (int) 
#line 5656 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V4SImode, operands))
    : -1 },
#line 16255 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE",
    __builtin_constant_p 
#line 16255 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    ? (int) 
#line 16255 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE)
    : -1 },
#line 13787 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 13787 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 13787 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    : -1 },
#line 10855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && avx_vperm2f128_parallel (operands[3], V4DFmode)",
    __builtin_constant_p 
#line 10855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V4DFmode))
    ? (int) 
#line 10855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V4DFmode))
    : -1 },
#line 5396 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5396 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    ? (int) 
#line 5396 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SSE_MATH)
    : -1 },
#line 8640 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, HImode, operands)",
    __builtin_constant_p 
#line 8640 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    ? (int) 
#line 8640 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, HImode, operands))
    : -1 },
#line 7793 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 7793 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 7793 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 2758 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && standard_sse_constant_p (operands[1])\n\
	   && !memory_operand (operands[0], TFmode))\n\
       || (!TARGET_MEMORY_MISMATCH_STALL\n\
	   && memory_operand (operands[0], TFmode)))",
    __builtin_constant_p 
#line 2758 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_sse_constant_p (operands[1])
	   && !memory_operand (operands[0], TFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], TFmode))))
    ? (int) 
#line 2758 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_sse_constant_p (operands[1])
	   && !memory_operand (operands[0], TFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], TFmode))))
    : -1 },
#line 1086 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands)",
    __builtin_constant_p 
#line 1086 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    ? (int) 
#line 1086 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (EQ, V4HImode, operands))
    : -1 },
#line 16454 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])",
    __builtin_constant_p 
#line 16454 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    ? (int) 
#line 16454 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1]))
    : -1 },
#line 10660 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 10660 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 10660 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_SSE && reload_completed) && (Pmode == SImode)",
    __builtin_constant_p (
#line 2605 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 2605 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 12471 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_MOVBE\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 12471 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 12471 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MOVBE
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands)",
    __builtin_constant_p 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands))
    ? (int) 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V8QImode, operands))
    : -1 },
#line 7074 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && X87_ENABLE_ARITH (DFmode))\n\
    || (TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 7074 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 7074 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (DFmode))
    || (TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
  { "(((TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)) && ( 1)",
    __builtin_constant_p ((
#line 10912 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10916 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) ((
#line 10912 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT)) && 
#line 10916 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(optimize_insn_for_size_p ()\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17410 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17410 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V32QImode, operands)",
    __builtin_constant_p 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V32QImode, operands))
    ? (int) 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V32QImode, operands))
    : -1 },
#line 8928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
    || (TARGET_SSE && (DFmode == TFmode)))\n\
   && reload_completed",
    __builtin_constant_p 
#line 8928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE && (DFmode == TFmode)))
   && reload_completed)
    ? (int) 
#line 8928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE && (DFmode == TFmode)))
   && reload_completed)
    : -1 },
  { "(reload_completed && ix86_avoid_lea_for_addr (insn, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5427 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_addr (insn, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5427 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && ix86_avoid_lea_for_addr (insn, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 1356 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE) && 
#line 1358 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 1356 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE) && 
#line 1358 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
       && SImode != HImode \n\
       && ((SImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 12205 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_BMI2",
    __builtin_constant_p 
#line 12205 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI2)
    ? (int) 
#line 12205 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI2)
    : -1 },
#line 4636 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 1)",
    __builtin_constant_p 
#line 4636 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 1))
    ? (int) 
#line 4636 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_vec_interleave_v2df_operator_ok (operands, 1))
    : -1 },
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
       && HImode != HImode \n\
       && ((HImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4890 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4890 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(ix86_target_stack_probe ()) && (Pmode == SImode)",
    __builtin_constant_p (
#line 16553 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 16553 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_target_stack_probe ()) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
  { "(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 15538 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 15538 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_64BIT\n\
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 15679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 15679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))
    ? (int) 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V8HImode, operands))
    : -1 },
#line 4890 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && TARGET_INTER_UNIT_CONVERSIONS\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 4890 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 4890 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && TARGET_INTER_UNIT_CONVERSIONS
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 13302 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13302 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13302 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 894 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 894 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 4915 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 4915 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 4915 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 9177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 9177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 9177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
#line 965 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 965 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 965 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4940 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4940 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5332 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)\n\
   && TARGET_SSE",
    __builtin_constant_p 
#line 5332 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE)
    ? (int) 
#line 5332 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (SFmode, DImode)
   && TARGET_SSE)
    : -1 },
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands)",
    __builtin_constant_p 
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    ? (int) 
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (IOR, V4SFmode, operands))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SFmode)\n\
       == GET_MODE_NUNITS (V8SImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V8SImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SFmode)
       == GET_MODE_NUNITS (V8SImode)))
    : -1 },
  { "(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL) && ( reload_completed)",
    __builtin_constant_p (
#line 10629 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL) && 
#line 10631 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 10629 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_PARTIAL_REG_STALL) && 
#line 10631 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (DFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (DFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 3394 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (GET_MODE (operands[0]) == TFmode\n\
       || GET_MODE (operands[0]) == XFmode\n\
       || GET_MODE (operands[0]) == DFmode)\n\
   && !(ANY_FP_REG_P (operands[0]) || ANY_FP_REG_P (operands[1]))",
    __builtin_constant_p 
#line 3394 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !(ANY_FP_REG_P (operands[0]) || ANY_FP_REG_P (operands[1])))
    ? (int) 
#line 3394 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && (GET_MODE (operands[0]) == TFmode
       || GET_MODE (operands[0]) == XFmode
       || GET_MODE (operands[0]) == DFmode)
   && !(ANY_FP_REG_P (operands[0]) || ANY_FP_REG_P (operands[1])))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && 
#line 155 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V16HImode, operands)) && 
#line 155 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 251 "../../gcc-4.8.2/gcc/config/i386/sync.md"
  { "!TARGET_64BIT && (TARGET_80387 || TARGET_SSE)",
    __builtin_constant_p 
#line 251 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE))
    ? (int) 
#line 251 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(!TARGET_64BIT && (TARGET_80387 || TARGET_SSE))
    : -1 },
  { "(TARGET_AVX) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 10787 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 10787 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 6095 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (EQ, V4DImode, operands)",
    __builtin_constant_p 
#line 6095 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V4DImode, operands))
    ? (int) 
#line 6095 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (EQ, V4DImode, operands))
    : -1 },
#line 17579 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE || TARGET_PRFCHW",
    __builtin_constant_p 
#line 17579 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_PRFCHW)
    ? (int) 
#line 17579 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE || TARGET_PRFCHW)
    : -1 },
  { "(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 1404 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1406 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
( reload_completed))
    ? (int) (
#line 1404 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 1406 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
( reload_completed))
    : -1 },
#line 12496 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_XCHGB || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 12496 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))
    ? (int) 
#line 12496 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_XCHGB || optimize_function_for_size_p (cfun))
    : -1 },
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && can_create_pseudo_p ())
    ? (int) 
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5347 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V16HImode, operands)) && 
#line 171 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5347 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V16HImode, operands)) && 
#line 171 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
  { "(TARGET_SSE && !flag_finite_math_only) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1132 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && !flag_finite_math_only) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1132 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && !flag_finite_math_only) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
       && SImode != HImode \n\
       && ((SImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
       && SImode != HImode 
       && ((SImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V2DImode)\n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    : -1 },
  { "(TARGET_SSE3) && (Pmode == SImode)",
    __builtin_constant_p (
#line 7824 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 7824 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 18066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_FSGSBASE",
    __builtin_constant_p 
#line 18066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE)
    ? (int) 
#line 18066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE)
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V32QImode)\n\
       == GET_MODE_NUNITS (V8SImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V8SImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V8SImode)))
    : -1 },
#line 4340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 4340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 4340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 7009 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 7009 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 7009 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 2947 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && ((!(TARGET_SSE2 && TARGET_SSE_MATH)\n\
		&& standard_80387_constant_p (operands[1]) > 0)\n\
	       || (TARGET_SSE2 && TARGET_SSE_MATH\n\
		   && standard_sse_constant_p (operands[1]))))\n\
       || memory_operand (operands[0], DFmode))",
    __builtin_constant_p 
#line 2947 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && ((!(TARGET_SSE2 && TARGET_SSE_MATH)
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE2 && TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1]))))
       || memory_operand (operands[0], DFmode)))
    ? (int) 
#line 2947 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && ((!(TARGET_SSE2 && TARGET_SSE_MATH)
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE2 && TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1]))))
       || memory_operand (operands[0], DFmode)))
    : -1 },
#line 16816 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())\n\
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0))",
    __builtin_constant_p 
#line 16816 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    ? (int) 
#line 16816 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(TARGET_PUSH_MEMORY || optimize_insn_for_size_p ())
   && !RTX_FRAME_RELATED_P (peep2_next_insn (0)))
    : -1 },
#line 8888 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE && (DFmode == TFmode))",
    __builtin_constant_p 
#line 8888 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (DFmode == TFmode)))
    ? (int) 
#line 8888 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (DFmode == TFmode)))
    : -1 },
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands)",
    __builtin_constant_p 
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    ? (int) 
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4SImode, operands))
    : -1 },
#line 6122 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP\n\
   && ix86_binary_operator_ok (EQ, V16QImode, operands)",
    __builtin_constant_p 
#line 6122 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V16QImode, operands))
    ? (int) 
#line 6122 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V16QImode, operands))
    : -1 },
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V2DImode, operands)",
    __builtin_constant_p 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V2DImode, operands))
    ? (int) 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V2DImode, operands))
    : -1 },
  { "(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
#line 13023 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13023 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13023 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 3862 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)\n\
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)\n\
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)\n\
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4))",
    __builtin_constant_p 
#line 3862 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)))
    ? (int) 
#line 3862 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (INTVAL (operands[3]) == (INTVAL (operands[7]) - 4)
       && INTVAL (operands[4]) == (INTVAL (operands[8]) - 4)
       && INTVAL (operands[5]) == (INTVAL (operands[9]) - 4)
       && INTVAL (operands[6]) == (INTVAL (operands[10]) - 4)))
    : -1 },
#line 322 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0])\n\
	|| MMX_REG_P (operands[1]) || SSE_REG_P (operands[1]))",
    __builtin_constant_p 
#line 322 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0])
	|| MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    ? (int) 
#line 322 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(!TARGET_64BIT && reload_completed
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0])
	|| MMX_REG_P (operands[1]) || SSE_REG_P (operands[1])))
    : -1 },
#line 5314 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5314 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed)
    ? (int) 
#line 5314 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (XFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed)
    : -1 },
#line 7061 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])\n\
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])\n\
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])\n\
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9])",
    __builtin_constant_p 
#line 7061 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9]))
    ? (int) 
#line 7061 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && INTVAL (operands[2]) + 4 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 4 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 4 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 4 == INTVAL (operands[9]))
    : -1 },
  { "(TARGET_SSE\n\
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1595 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1595 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && GET_RTX_CLASS (GET_CODE (operands[3])) == RTX_COMM_COMPARE) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 3375 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (standard_80387_constant_p (operands[1]) == 8\n\
       || standard_80387_constant_p (operands[1]) == 9)",
    __builtin_constant_p 
#line 3375 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9))
    ? (int) 
#line 3375 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && (standard_80387_constant_p (operands[1]) == 8
       || standard_80387_constant_p (operands[1]) == 9))
    : -1 },
#line 8056 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 8056 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 8056 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
       && DImode != HImode \n\
       && ((DImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && DImode != HImode 
       && ((DImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 1576 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW)\n\
   && ix86_binary_operator_ok (PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 1576 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    ? (int) 
#line 1576 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW)
   && ix86_binary_operator_ok (PLUS, V8QImode, operands))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V16HImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V16HImode, operands)) && 
#line 149 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V16HImode, operands)) && 
#line 149 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V32QImode, operands)",
    __builtin_constant_p 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V32QImode, operands))
    ? (int) 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V32QImode, operands))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V8HImode)\n\
       == GET_MODE_NUNITS (V16QImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V16QImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V16QImode)))
    : -1 },
#line 9526 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& (TARGET_SHIFT1\n\
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFT, QImode, operands)",
    __builtin_constant_p 
#line 9526 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    ? (int) 
#line 9526 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& (TARGET_SHIFT1
	    || (TARGET_DOUBLE_WITH_ADD && REG_P (operands[0])))))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFT, QImode, operands))
    : -1 },
  { "(!TARGET_PARTIAL_REG_STALL\n\
   || DImode == SImode\n\
   || optimize_function_for_size_p (cfun)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17439 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   || DImode == SImode
   || optimize_function_for_size_p (cfun)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17439 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   || DImode == SImode
   || optimize_function_for_size_p (cfun)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 16316 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 16316 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 16316 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 8545 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 8545 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 8545 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (XFmode, DImode)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, DImode)
   && reload_completed)
    ? (int) 
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, DImode)
   && reload_completed)
    : -1 },
#line 1094 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 1094 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 1094 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SImode)\n\
       == GET_MODE_NUNITS (V16HImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V16HImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V16HImode)))
    : -1 },
  { "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17322 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17322 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "((TARGET_80387\n\
     && X87_ENABLE_FLOAT (SFmode, DImode)\n\
     && (!((DImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((DImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((DImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    ? (int) 
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, DImode)
     && (!((DImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((DImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((DImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ())
    : -1 },
#line 17439 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL\n\
   || SImode == SImode\n\
   || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 17439 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   || SImode == SImode
   || optimize_function_for_size_p (cfun))
    ? (int) 
#line 17439 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   || SImode == SImode
   || optimize_function_for_size_p (cfun))
    : -1 },
#line 9942 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 9942 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 9942 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
  { "(reload_completed) && (Pmode == SImode)",
    __builtin_constant_p (
#line 3876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 3876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 7393 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE",
    __builtin_constant_p 
#line 7393 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE)
    ? (int) 
#line 7393 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE)
    : -1 },
#line 17135 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && REG_P (operands[0]) && REG_P (operands[4])\n\
   && REGNO (operands[0]) == REGNO (operands[4])\n\
   && peep2_reg_dead_p (4, operands[0])\n\
   && (QImode != QImode\n\
       || immediate_operand (operands[2], SImode)\n\
       || q_regs_operand (operands[2], SImode))\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[2])\n\
   && ix86_match_ccmode (peep2_next_insn (3),\n\
			 (GET_CODE (operands[3]) == PLUS\n\
			  || GET_CODE (operands[3]) == MINUS)\n\
			 ? CCGOCmode : CCNOmode)",
    __builtin_constant_p 
#line 17135 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REG_P (operands[0]) && REG_P (operands[4])
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (4, operands[0])
   && (QImode != QImode
       || immediate_operand (operands[2], SImode)
       || q_regs_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    ? (int) 
#line 17135 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REG_P (operands[0]) && REG_P (operands[4])
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (4, operands[0])
   && (QImode != QImode
       || immediate_operand (operands[2], SImode)
       || q_regs_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    : -1 },
#line 1460 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_MIX_SSE_I387\n\
   && SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 1460 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 1460 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MIX_SSE_I387
   && SSE_FLOAT_MODE_P (DFmode))
    : -1 },
  { "(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()\n\
   && !satisfies_constraint_K (operands[2])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17469 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17469 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2])) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 17846 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_FXSR",
    __builtin_constant_p 
#line 17846 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_FXSR)
    ? (int) 
#line 17846 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_FXSR)
    : -1 },
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "Pmode == DImode",
    __builtin_constant_p 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)
    ? (int) 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)
    : -1 },
  { "(TARGET_64BIT\n\
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 15750 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 15750 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[AX_REG] || fixed_regs[CX_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (XFmode, SImode)",
    __builtin_constant_p 
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, SImode))
    ? (int) 
#line 5238 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (XFmode, SImode))
    : -1 },
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
       && HImode != HImode \n\
       && ((HImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 9271 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands)",
    __builtin_constant_p 
#line 9271 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    ? (int) 
#line 9271 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFT, SImode, operands))
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V16HImode)\n\
       || register_operand (operands[1], V16HImode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode))) && 
#line 101 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V16HImode)
       || register_operand (operands[1], V16HImode))) && 
#line 101 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(TARGET_SSE && reload_completed) && (Pmode == DImode)",
    __builtin_constant_p (
#line 2605 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 2605 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE && reload_completed) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 13758 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 13758 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && can_create_pseudo_p ())
    ? (int) 
#line 13758 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(find_regno_note (insn, REG_UNUSED, REGNO (operands[1]))
   && can_create_pseudo_p ())
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4547 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4547 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(TARGET_64BIT && TARGET_FSGSBASE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 18066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 18066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FSGSBASE) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V32QImode, operands)",
    __builtin_constant_p 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V32QImode, operands))
    ? (int) 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V32QImode, operands))
    : -1 },
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))\n\
   && ix86_binary_operator_ok (MINUS, V1DImode, operands)",
    __builtin_constant_p 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V1DImode, operands))
    ? (int) 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V1DImode == V1DImode))
   && ix86_binary_operator_ok (MINUS, V1DImode, operands))
    : -1 },
  { "(TARGET_BMI2) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12205 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12205 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI2) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4721 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ()) && 
#line 4721 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5212 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5212 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0]))))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 6767 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_HIMODE_MATH\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6767 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6767 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(TARGET_64BIT\n\
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 15492 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 15492 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && !(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))
    ? (int) 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V16QImode, operands))
    : -1 },
  { "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17333 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17333 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
  { "(TARGET_SSE2\n\
   && ((unsigned) exact_log2 (INTVAL (operands[3]))\n\
       < GET_MODE_NUNITS (V16QImode))) && (TARGET_SSE4_1)",
    __builtin_constant_p (
#line 6886 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V16QImode))) && 
#line 6870 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
    ? (int) (
#line 6886 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V16QImode))) && 
#line 6870 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1))
    : -1 },
  { "(TARGET_SSE3) && (Pmode == DImode)",
    __builtin_constant_p (
#line 7824 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 7824 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 6035 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && ix86_match_ccmode (insn, CCGCmode)",
    __builtin_constant_p 
#line 6035 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGCmode))
    ? (int) 
#line 6035 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && ix86_match_ccmode (insn, CCGCmode))
    : -1 },
#line 5969 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands)",
    __builtin_constant_p 
#line 5969 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    ? (int) 
#line 5969 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V4SImode, operands))
    : -1 },
  { "(TARGET_SSE) && (TARGET_SSE2 && TARGET_64BIT)",
    __builtin_constant_p (
#line 789 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 778 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT))
    ? (int) (
#line 789 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 778 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && TARGET_64BIT))
    : -1 },
  { "(TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 15087 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && can_create_pseudo_p ()) && 
#line 15091 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 15087 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && can_create_pseudo_p ()) && 
#line 15091 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 2178 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_FMA || TARGET_FMA4",
    __builtin_constant_p 
#line 2178 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)
    ? (int) 
#line 2178 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4)
    : -1 },
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands)",
    __builtin_constant_p 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    ? (int) 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16QImode, operands))
    : -1 },
  { "(!TARGET_64BIT && TARGET_CMOVE\n\
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE\n\
   && (MEM_P (operands[2]) || MEM_P (operands[3]))\n\
   && can_create_pseudo_p ()\n\
   && optimize_insn_for_speed_p ()) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 16171 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 16171 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ()) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 16827 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((SImode == HImode\n\
       && TARGET_LCP_STALL)\n\
       || (!TARGET_USE_MOV0\n\
          && TARGET_SPLIT_LONG_MOVES\n\
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16827 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((SImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16827 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((SImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
  { "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17362 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17362 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
#line 16827 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((HImode == HImode\n\
       && TARGET_LCP_STALL)\n\
       || (!TARGET_USE_MOV0\n\
          && TARGET_SPLIT_LONG_MOVES\n\
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16827 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((HImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16827 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((HImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 10420 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_PCLMUL",
    __builtin_constant_p 
#line 10420 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_PCLMUL)
    ? (int) 
#line 10420 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_PCLMUL)
    : -1 },
#line 85 "../../gcc-4.8.2/gcc/config/i386/sync.md"
  { "TARGET_64BIT || TARGET_SSE2",
    __builtin_constant_p 
#line 85 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_SSE2)
    ? (int) 
#line 85 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_64BIT || TARGET_SSE2)
    : -1 },
#line 6119 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 6119 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 6119 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 3616 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun))",
    __builtin_constant_p 
#line 3616 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
    ? (int) 
#line 3616 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)))
    : -1 },
#line 1348 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW_A",
    __builtin_constant_p 
#line 1348 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    ? (int) 
#line 1348 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW_A)
    : -1 },
  { "(TARGET_SSE4A) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 8444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4A) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 8444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4A) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
  { "(TARGET_AVOID_VECTOR_DECODE\n\
   && SSE_FLOAT_MODE_P (SFmode)\n\
   && optimize_insn_for_speed_p ()) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (SFmode)
   && optimize_insn_for_speed_p ()) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (SFmode)
   && optimize_insn_for_speed_p ()) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 11687 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_can_use_return_insn_p ()",
    __builtin_constant_p 
#line 11687 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    ? (int) 
#line 11687 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_can_use_return_insn_p ())
    : -1 },
  { "(! TARGET_POPCNT) && ( reload_completed)",
    __builtin_constant_p (
#line 12596 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_POPCNT) && 
#line 12598 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 12596 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_POPCNT) && 
#line 12598 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V2DImode)\n\
       == GET_MODE_NUNITS (V8HImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V8HImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V8HImode)))
    : -1 },
  { "(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 16156 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 16156 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && !(MEM_P (operands[2]) && MEM_P (operands[3]))) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9506 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 9506 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 9506 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 139 "../../gcc-4.8.2/gcc/config/i386/sync.md"
  { "TARGET_64BIT || (TARGET_CMPXCHG8B && (TARGET_80387 || TARGET_SSE))",
    __builtin_constant_p 
#line 139 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_64BIT || (TARGET_CMPXCHG8B && (TARGET_80387 || TARGET_SSE)))
    ? (int) 
#line 139 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_64BIT || (TARGET_CMPXCHG8B && (TARGET_80387 || TARGET_SSE)))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (PLUS, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V2DFmode)\n\
       == GET_MODE_NUNITS (V16QImode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V16QImode))) && 
#line 119 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V16QImode))) && 
#line 119 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
  { "(ix86_binary_operator_ok (PLUS, DImode, operands)) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 5470 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 5470 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4915 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4915 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 2630 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 2630 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun))
    ? (int) 
#line 2630 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_function_for_size_p (cfun))
    : -1 },
#line 5104 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_SSE_MATH\n\
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5104 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5104 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_SSE_MATH
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 1394 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE\n\
   && (TARGET_USE_HIMODE_FIOP\n\
       || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 1394 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 1394 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_SAHF && !TARGET_CMOVE
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(optimize_insn_for_speed_p ()\n\
   && (!TARGET_PARTIAL_REG_STALL || DImode == SImode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || DImode == SImode)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || DImode == SImode)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 8257 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V16HImode, operands)) && 
#line 171 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 8257 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V16HImode, operands)) && 
#line 171 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
  { "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17347 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17347 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V2DImode)\n\
       == GET_MODE_NUNITS (V16QImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V16QImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V16QImode)))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V2DImode)\n\
       == GET_MODE_NUNITS (V4SImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V4SImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V2DImode)
       == GET_MODE_NUNITS (V4SImode)))
    : -1 },
  { "(TARGET_USE_FANCY_MATH_387\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 15275 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && can_create_pseudo_p ()) && 
#line 15278 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 15275 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && can_create_pseudo_p ()) && 
#line 15278 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 17453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && (!TARGET_PARTIAL_REG_STALL || SImode == SImode)",
    __builtin_constant_p 
#line 17453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || SImode == SImode))
    ? (int) 
#line 17453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && (!TARGET_PARTIAL_REG_STALL || SImode == SImode))
    : -1 },
#line 13116 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13116 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13116 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
  { "((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)\n\
   && peep2_regno_dead_p (0, FLAGS_REG)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 17188 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 17188 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_insn_for_size_p () || TARGET_MOVE_M1_VIA_OR)
   && peep2_regno_dead_p (0, FLAGS_REG)) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 17135 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && REG_P (operands[0]) && REG_P (operands[4])\n\
   && REGNO (operands[0]) == REGNO (operands[4])\n\
   && peep2_reg_dead_p (4, operands[0])\n\
   && (HImode != QImode\n\
       || immediate_operand (operands[2], SImode)\n\
       || q_regs_operand (operands[2], SImode))\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[2])\n\
   && ix86_match_ccmode (peep2_next_insn (3),\n\
			 (GET_CODE (operands[3]) == PLUS\n\
			  || GET_CODE (operands[3]) == MINUS)\n\
			 ? CCGOCmode : CCNOmode)",
    __builtin_constant_p 
#line 17135 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REG_P (operands[0]) && REG_P (operands[4])
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (4, operands[0])
   && (HImode != QImode
       || immediate_operand (operands[2], SImode)
       || q_regs_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    ? (int) 
#line 17135 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && REG_P (operands[0]) && REG_P (operands[4])
   && REGNO (operands[0]) == REGNO (operands[4])
   && peep2_reg_dead_p (4, operands[0])
   && (HImode != QImode
       || immediate_operand (operands[2], SImode)
       || q_regs_operand (operands[2], SImode))
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    : -1 },
#line 1279 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ((unsigned) exact_log2 (INTVAL (operands[3]))\n\
       < GET_MODE_NUNITS (V4HImode))",
    __builtin_constant_p 
#line 1279 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode)))
    ? (int) 
#line 1279 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ((unsigned) exact_log2 (INTVAL (operands[3]))
       < GET_MODE_NUNITS (V4HImode)))
    : -1 },
#line 17422 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(((!TARGET_FUSE_CMP_AND_BRANCH || optimize_insn_for_size_p ())\n\
     && incdec_operand (operands[3], GET_MODE (operands[3])))\n\
    || (!TARGET_FUSE_CMP_AND_BRANCH\n\
	&& INTVAL (operands[3]) == 128))\n\
   && ix86_match_ccmode (insn, CCGCmode)\n\
   && peep2_reg_dead_p (1, operands[2])",
    __builtin_constant_p 
#line 17422 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((((!TARGET_FUSE_CMP_AND_BRANCH || optimize_insn_for_size_p ())
     && incdec_operand (operands[3], GET_MODE (operands[3])))
    || (!TARGET_FUSE_CMP_AND_BRANCH
	&& INTVAL (operands[3]) == 128))
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    ? (int) 
#line 17422 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((((!TARGET_FUSE_CMP_AND_BRANCH || optimize_insn_for_size_p ())
     && incdec_operand (operands[3], GET_MODE (operands[3])))
    || (!TARGET_FUSE_CMP_AND_BRANCH
	&& INTVAL (operands[3]) == 128))
   && ix86_match_ccmode (insn, CCGCmode)
   && peep2_reg_dead_p (1, operands[2]))
    : -1 },
#line 13177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, HImode)
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_HIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands)",
    __builtin_constant_p 
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    ? (int) 
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V2DImode, operands))
    : -1 },
#line 10283 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands)",
    __builtin_constant_p 
#line 10283 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    ? (int) 
#line 10283 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ROTATE, SImode, operands))
    : -1 },
#line 1554 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 1554 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 1554 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
#line 16334 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE\n\
   && (MEM_P (operands[2]) || MEM_P (operands[3]))\n\
   && can_create_pseudo_p ()\n\
   && optimize_insn_for_speed_p ()",
    __builtin_constant_p 
#line 16334 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ())
    ? (int) 
#line 16334 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && (MEM_P (operands[2]) || MEM_P (operands[3]))
   && can_create_pseudo_p ()
   && optimize_insn_for_speed_p ())
    : -1 },
#line 16858 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 16858 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 16858 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p () && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
#line 6065 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 6065 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    ? (int) 
#line 6065 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMAX, V16QImode, operands))
    : -1 },
#line 8668 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8668 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8668 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 13177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 13177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 13177 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (SFmode, SImode)
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   && (TARGET_USE_SIMODE_FIOP || optimize_function_for_size_p (cfun)))
    : -1 },
#line 9771 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "INTVAL (operands[2]) == 31\n\
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9771 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9771 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
  { "(TARGET_SSE\n\
   && (GET_MODE_NUNITS (V8HImode)\n\
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V2DFmode))) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V2DFmode))) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands)",
    __builtin_constant_p 
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    ? (int) 
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4SFmode, operands))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V16HImode)\n\
       == GET_MODE_NUNITS (V16HImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V16HImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V16HImode)))
    : -1 },
#line 8489 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && ANY_QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(INTVAL (operands[2]) & ~255)\n\
    && (INTVAL (operands[2]) & 128)\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8489 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8489 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
    && ANY_QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~255)
    && (INTVAL (operands[2]) & 128)
    && GET_MODE (operands[0]) != QImode)
    : -1 },
  { "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE && (SFmode == TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 8899 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (SFmode == TFmode))) && 
#line 8902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 8899 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (SFmode == TFmode))) && 
#line 8902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 17946 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_XSAVE",
    __builtin_constant_p 
#line 17946 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE)
    ? (int) 
#line 17946 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE)
    : -1 },
  { "(TARGET_CMPXCHG16B) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 427 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG16B) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 427 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG16B) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V32QImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V32QImode, operands)) && 
#line 148 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V32QImode, operands)) && 
#line 148 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE && (DFmode == TFmode))) && ( reload_completed)",
    __builtin_constant_p (
#line 8899 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (DFmode == TFmode))) && 
#line 8902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 8899 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (DFmode == TFmode))) && 
#line 8902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 17856 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_FXSR",
    __builtin_constant_p 
#line 17856 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FXSR)
    ? (int) 
#line 17856 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_FXSR)
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V16HImode)\n\
       == GET_MODE_NUNITS (V32QImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V32QImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V32QImode)))
    : -1 },
  { "(TARGET_TBM) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12344 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12344 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_TBM) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1378 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (TARGET_USE_HIMODE_FIOP\n\
       || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 1378 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 1378 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (TARGET_USE_HIMODE_FIOP
       || optimize_function_for_size_p (cfun)))
    : -1 },
#line 4504 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4504 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4504 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
  { "(optimize_insn_for_size_p ()\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17410 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17410 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_size_p ()
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
#line 5790 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed && ix86_lea_for_add_ok (insn, operands)",
    __builtin_constant_p 
#line 5790 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands))
    ? (int) 
#line 5790 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands))
    : -1 },
#line 5969 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands)",
    __builtin_constant_p 
#line 5969 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    ? (int) 
#line 5969 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMAX, V16QImode, operands))
    : -1 },
#line 1014 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (SMIN, V4HImode, operands)",
    __builtin_constant_p 
#line 1014 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    ? (int) 
#line 1014 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (SMIN, V4HImode, operands))
    : -1 },
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (GET_MODE_NUNITS (V4SImode)\n\
       == GET_MODE_NUNITS (V4SFmode))",
    __builtin_constant_p 
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V4SFmode)))
    ? (int) 
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V4SImode)
       == GET_MODE_NUNITS (V4SFmode)))
    : -1 },
#line 8888 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
   || (TARGET_SSE && (SFmode == TFmode))",
    __builtin_constant_p 
#line 8888 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (SFmode == TFmode)))
    ? (int) 
#line 8888 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
   || (TARGET_SSE && (SFmode == TFmode)))
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5144 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5144 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 8015 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, DImode, operands)",
    __builtin_constant_p 
#line 8015 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    ? (int) 
#line 8015 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, DImode, operands))
    : -1 },
#line 1508 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && TARGET_CMOVE\n\
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 1508 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 1508 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && TARGET_CMOVE
   && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && ( reload_completed)",
    __builtin_constant_p (
#line 6318 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 6323 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6318 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3])) && 
#line 6323 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V16HImode)\n\
       == GET_MODE_NUNITS (V8SFmode))",
    __builtin_constant_p 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V8SFmode)))
    ? (int) 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V8SFmode)))
    : -1 },
#line 16060 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8])",
    __builtin_constant_p 
#line 16060 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    ? (int) 
#line 16060 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(peep2_reg_dead_p (4, operands[7]) && peep2_reg_dead_p (4, operands[8]))
    : -1 },
  { "(reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 7928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 7928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1])) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    ? (int) 
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    : -1 },
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands)",
    __builtin_constant_p 
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands))
    ? (int) 
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V2DImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, DImode, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 17075 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && peep2_reg_dead_p (4, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[2])\n\
   && (HImode != QImode\n\
       || immediate_operand (operands[2], QImode)\n\
       || q_regs_operand (operands[2], QImode))\n\
   && ix86_match_ccmode (peep2_next_insn (3),\n\
			 (GET_CODE (operands[3]) == PLUS\n\
			  || GET_CODE (operands[3]) == MINUS)\n\
			 ? CCGOCmode : CCNOmode)",
    __builtin_constant_p 
#line 17075 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    ? (int) 
#line 17075 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (HImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    : -1 },
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    ? (int) 
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    : -1 },
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V8SImode, operands)",
    __builtin_constant_p 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V8SImode, operands))
    ? (int) 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMAX, V8SImode, operands))
    : -1 },
#line 76 "../../gcc-4.8.2/gcc/config/i386/sync.md"
  { "TARGET_SSE2",
    __builtin_constant_p 
#line 76 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_SSE2)
    ? (int) 
#line 76 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_SSE2)
    : -1 },
#line 9898 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9898 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9898 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
  { "(ix86_binary_operator_ok (MINUS, SImode, operands)) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 6404 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands)) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 6404 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, SImode, operands)) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && 
#line 157 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MINUS, V4DImode, operands)) && 
#line 157 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 4296 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 4296 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 4296 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(TARGET_AVX2) && (Pmode == SImode)",
    __builtin_constant_p (
#line 11495 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 11495 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 931 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 931 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 931 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DImode)\n\
       == GET_MODE_NUNITS (V4DImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V4DImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V4DImode)))
    : -1 },
#line 4755 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && reload_completed",
    __builtin_constant_p 
#line 4755 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    ? (int) 
#line 4755 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && reload_completed)
    : -1 },
#line 9017 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 9017 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 9017 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode))
    : -1 },
  { "(X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4547 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && can_create_pseudo_p ()) && 
#line 4547 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 11104 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && !TARGET_CMOVE",
    __builtin_constant_p 
#line 11104 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_CMOVE)
    ? (int) 
#line 11104 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !TARGET_CMOVE)
    : -1 },
#line 13252 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13252 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13252 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 16300 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed",
    __builtin_constant_p 
#line 16300 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    ? (int) 
#line 16300 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed)
    : -1 },
  { "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17362 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17362 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
#line 3510 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && reload_completed\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0]))",
    __builtin_constant_p 
#line 3510 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0])))
    ? (int) 
#line 3510 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && reload_completed
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && !(MMX_REG_P (operands[0]) || SSE_REG_P (operands[0])))
    : -1 },
#line 8455 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 8455 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    ? (int) 
#line 8455 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    : -1 },
#line 9330 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFT, HImode, operands)",
    __builtin_constant_p 
#line 9330 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, HImode, operands))
    ? (int) 
#line 9330 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, HImode, operands))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (XFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (XFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
  { "(TARGET_SSE2) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6967 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6967 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V16HImode)\n\
       == GET_MODE_NUNITS (V4DFmode))",
    __builtin_constant_p 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V4DFmode)))
    ? (int) 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V4DFmode)))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 13023 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13023 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13023 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(((TARGET_80387\n\
     && X87_ENABLE_FLOAT (SFmode, SImode)\n\
     && (!((SImode != DImode || TARGET_64BIT)\n\
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	 || TARGET_MIX_SSE_I387))\n\
    || ((SImode != DImode || TARGET_64BIT)\n\
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
	&& ((SImode == SImode\n\
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS\n\
	     && optimize_function_for_speed_p (cfun)\n\
	     && flag_trapping_math)\n\
	    || !(TARGET_INTER_UNIT_CONVERSIONS\n\
	         || optimize_function_for_size_p (cfun)))))\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    ? (int) (
#line 4805 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((TARGET_80387
     && X87_ENABLE_FLOAT (SFmode, SImode)
     && (!((SImode != DImode || TARGET_64BIT)
	   && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	 || TARGET_MIX_SSE_I387))
    || ((SImode != DImode || TARGET_64BIT)
	&& SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
	&& ((SImode == SImode
	     && TARGET_SSE2 && TARGET_USE_VECTOR_CONVERTS
	     && optimize_function_for_speed_p (cfun)
	     && flag_trapping_math)
	    || !(TARGET_INTER_UNIT_CONVERSIONS
	         || optimize_function_for_size_p (cfun)))))
   && can_create_pseudo_p ()) && 
#line 4820 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( 1))
    : -1 },
#line 1580 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ((optimize > 0 && flag_peephole2)\n\
		    ? epilogue_completed : reload_completed)\n\
   && !symbolic_operand (operands[1], DImode)\n\
   && !x86_64_immediate_operand (operands[1], DImode)",
    __builtin_constant_p 
#line 1580 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? epilogue_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    ? (int) 
#line 1580 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ((optimize > 0 && flag_peephole2)
		    ? epilogue_completed : reload_completed)
   && !symbolic_operand (operands[1], DImode)
   && !x86_64_immediate_operand (operands[1], DImode))
    : -1 },
  { "(TARGET_AVX2) && (Pmode == DImode)",
    __builtin_constant_p (
#line 11495 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 11495 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 4504 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	&& (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4504 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4504 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	&& (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
  { "(reload_completed\n\
   && operands[1] == constm1_rtx) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1715 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 1715 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && operands[1] == constm1_rtx) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 8466 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8466 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8466 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 16284 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 16284 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 16284 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
#line 8381 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 8381 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 8381 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
  { "(TARGET_MACHO && !TARGET_64BIT && flag_pic) && ( reload_completed)",
    __builtin_constant_p (
#line 16654 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MACHO && !TARGET_64BIT && flag_pic) && 
#line 16656 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 16654 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_MACHO && !TARGET_64BIT && flag_pic) && 
#line 16656 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 11383 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(peep2_reg_dead_p (3, operands[1])\n\
    || operands_match_p (operands[1], operands[3]))\n\
   && ! reg_overlap_mentioned_p (operands[3], operands[0])",
    __builtin_constant_p 
#line 11383 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    ? (int) 
#line 11383 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((peep2_reg_dead_p (3, operands[1])
    || operands_match_p (operands[1], operands[3]))
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    : -1 },
#line 1433 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SAHF",
    __builtin_constant_p 
#line 1433 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SAHF)
    ? (int) 
#line 1433 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SAHF)
    : -1 },
#line 16876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((TARGET_NOT_UNPAIRABLE\n\
	&& (!MEM_P (operands[0])\n\
	    || !memory_displacement_operand (operands[0], SImode)))\n\
       || (TARGET_NOT_VECTORMODE\n\
	   && long_memory_operand (operands[0], SImode)))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], SImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((TARGET_NOT_UNPAIRABLE
	&& (!MEM_P (operands[0])
	    || !memory_displacement_operand (operands[0], SImode)))
       || (TARGET_NOT_VECTORMODE
	   && long_memory_operand (operands[0], SImode)))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V4SImode, operands)",
    __builtin_constant_p 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V4SImode, operands))
    ? (int) 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V4SImode, operands))
    : -1 },
#line 8966 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 8966 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 8966 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 6318 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[3])",
    __builtin_constant_p 
#line 6318 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    ? (int) 
#line 6318 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && GET_MODE (operands[0]) == GET_MODE (operands[3]))
    : -1 },
  { "(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES) && ( reload_completed)",
    __builtin_constant_p (
#line 526 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES) && 
#line 528 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 526 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES) && 
#line 528 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 526 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES",
    __builtin_constant_p 
#line 526 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES)
    ? (int) 
#line 526 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES)
    : -1 },
#line 217 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_64BIT && TARGET_MMX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 217 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 217 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_64BIT && TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE\n\
   && optimize_insn_for_speed_p ()) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 16233 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && optimize_insn_for_speed_p ()) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 16233 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE && TARGET_AVOID_MEM_OPND_FOR_CMOVE
   && optimize_insn_for_speed_p ()) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 5178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 5178 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V32QImode)\n\
       || register_operand (operands[1], V32QImode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode))) && 
#line 100 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V32QImode)
       || register_operand (operands[1], V32QImode))) && 
#line 100 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 8257 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands)",
    __builtin_constant_p 
#line 8257 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    ? (int) 
#line 8257 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3 && ix86_binary_operator_ok (MULT, V8HImode, operands))
    : -1 },
#line 16985 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!(TARGET_READ_MODIFY || optimize_insn_for_size_p ())",
    __builtin_constant_p 
#line 16985 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ()))
    ? (int) 
#line 16985 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(TARGET_READ_MODIFY || optimize_insn_for_size_p ()))
    : -1 },
#line 8056 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (AND, HImode, operands)",
    __builtin_constant_p 
#line 8056 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    ? (int) 
#line 8056 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (AND, HImode, operands))
    : -1 },
  { "(TARGET_AVX) && ( reload_completed && (V8SFmode != V4DFmode || !TARGET_AVX2))",
    __builtin_constant_p (
#line 10677 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 10679 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed && (V8SFmode != V4DFmode || !TARGET_AVX2)))
    ? (int) (
#line 10677 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX) && 
#line 10679 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed && (V8SFmode != V4DFmode || !TARGET_AVX2)))
    : -1 },
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (SFmode, SImode)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, SImode)
   && reload_completed)
    ? (int) 
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (SFmode, SImode)
   && reload_completed)
    : -1 },
#line 1063 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE_MATH",
    __builtin_constant_p 
#line 1063 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE_MATH)
    ? (int) 
#line 1063 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE_MATH)
    : -1 },
#line 319 "../../gcc-4.8.2/gcc/config/i386/sync.md"
  { "TARGET_CMPXCHG",
    __builtin_constant_p 
#line 319 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    ? (int) 
#line 319 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG)
    : -1 },
  { "(TARGET_SSE_MATH) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1063 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE_MATH) && 
#line 132 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1063 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE_MATH) && 
#line 132 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 5199 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5199 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5199 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
  { "(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && ( reload_completed)",
    __builtin_constant_p (
#line 4296 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 4298 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) (
#line 4296 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && !(MEM_P (operands[0]) && MEM_P (operands[1]))) && 
#line 4298 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9200 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9200 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFT, DImode, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17362 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17362 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    ? (int) 
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, HImode, operands))
    : -1 },
  { "(ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5360 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT\n\
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && TARGET_SSE\n\
   && reload_completed",
    __builtin_constant_p 
#line 5360 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    ? (int) 
#line 5360 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT
   && TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE
   && reload_completed)
    : -1 },
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands)",
    __builtin_constant_p 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    ? (int) 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (XOR, V4HImode, operands))
    : -1 },
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands)",
    __builtin_constant_p 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    ? (int) 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V8QImode, operands))
    : -1 },
#line 10855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && avx_vperm2f128_parallel (operands[3], V8SFmode)",
    __builtin_constant_p 
#line 10855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SFmode))
    ? (int) 
#line 10855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vperm2f128_parallel (operands[3], V8SFmode))
    : -1 },
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V16QImode, operands)",
    __builtin_constant_p 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V16QImode, operands))
    ? (int) 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V16QImode, operands))
    : -1 },
#line 7068 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387",
    __builtin_constant_p 
#line 7068 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387)
    ? (int) 
#line 7068 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387)
    : -1 },
#line 801 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_HIMODE_MATH",
    __builtin_constant_p 
#line 801 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    ? (int) 
#line 801 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_HIMODE_MATH)
    : -1 },
#line 12426 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)",
    __builtin_constant_p 
#line 12426 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    ? (int) 
#line 12426 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode))
    : -1 },
#line 3092 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && ((!(TARGET_SSE2 && TARGET_SSE_MATH)\n\
		&& standard_80387_constant_p (operands[1]) > 0)\n\
	       || (TARGET_SSE2 && TARGET_SSE_MATH\n\
		   && standard_sse_constant_p (operands[1])))\n\
	   && !memory_operand (operands[0], DFmode))\n\
       || (!TARGET_MEMORY_MISMATCH_STALL\n\
	   && memory_operand (operands[0], DFmode)))",
    __builtin_constant_p 
#line 3092 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && ((!(TARGET_SSE2 && TARGET_SSE_MATH)
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE2 && TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1])))
	   && !memory_operand (operands[0], DFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], DFmode))))
    ? (int) 
#line 3092 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && ((!(TARGET_SSE2 && TARGET_SSE_MATH)
		&& standard_80387_constant_p (operands[1]) > 0)
	       || (TARGET_SSE2 && TARGET_SSE_MATH
		   && standard_sse_constant_p (operands[1])))
	   && !memory_operand (operands[0], DFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], DFmode))))
    : -1 },
#line 10983 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_BT || optimize_function_for_size_p (cfun))\n\
   && (INTVAL (operands[3]) & 0x1f) == 0x1f",
    __builtin_constant_p 
#line 10983 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f)
    ? (int) 
#line 10983 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_BT || optimize_function_for_size_p (cfun))
   && (INTVAL (operands[3]) & 0x1f) == 0x1f)
    : -1 },
  { "(!TARGET_PARTIAL_REG_STALL\n\
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && ( reload_completed)",
    __builtin_constant_p (
#line 10660 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && 
#line 10663 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 10660 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && (!TARGET_ZERO_EXTEND_WITH_AND || optimize_function_for_size_p (cfun))) && 
#line 10663 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 13235 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (DFmode)\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 13235 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    ? (int) 
#line 13235 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(TARGET_SSE2 && TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && 
#line 188 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V32QImode, operands)) && 
#line 188 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 6122 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && !TARGET_XOP\n\
   && ix86_binary_operator_ok (EQ, V8HImode, operands)",
    __builtin_constant_p 
#line 6122 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V8HImode, operands))
    ? (int) 
#line 6122 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && !TARGET_XOP
   && ix86_binary_operator_ok (EQ, V8HImode, operands))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V16QImode)\n\
       == GET_MODE_NUNITS (V16QImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V16QImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V16QImode)
       == GET_MODE_NUNITS (V16QImode)))
    : -1 },
#line 14952 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && !optimize_insn_for_size_p ()",
    __builtin_constant_p 
#line 14952 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !optimize_insn_for_size_p ())
    ? (int) 
#line 14952 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && !optimize_insn_for_size_p ())
    : -1 },
#line 17750 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_SSE4_2 || TARGET_CRC32)",
    __builtin_constant_p 
#line 17750 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_SSE4_2 || TARGET_CRC32))
    ? (int) 
#line 17750 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_SSE4_2 || TARGET_CRC32))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SImode)\n\
       == GET_MODE_NUNITS (V4DImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V4DImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V4DImode)))
    : -1 },
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V8QImode, operands)",
    __builtin_constant_p 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V8QImode, operands))
    ? (int) 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (US_PLUS, V8QImode, operands))
    : -1 },
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V4DImode)\n\
       == GET_MODE_NUNITS (V8SFmode))",
    __builtin_constant_p 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V8SFmode)))
    ? (int) 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V8SFmode)))
    : -1 },
  { "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17347 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17347 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
  { "(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == DImode)",
    __builtin_constant_p (
#line 15945 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 15945 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
#line 2912 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))\n\
   && (!can_create_pseudo_p ()\n\
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)\n\
       || GET_CODE (operands[1]) != CONST_DOUBLE\n\
       || (optimize_function_for_size_p (cfun)\n\
	   && standard_80387_constant_p (operands[1]) > 0\n\
	   && !memory_operand (operands[0], XFmode))\n\
       || (!TARGET_MEMORY_MISMATCH_STALL\n\
	   && memory_operand (operands[0], XFmode)))",
    __builtin_constant_p 
#line 2912 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], XFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], XFmode))))
    ? (int) 
#line 2912 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))
   && (!can_create_pseudo_p ()
       || (ix86_cmodel == CM_MEDIUM || ix86_cmodel == CM_LARGE)
       || GET_CODE (operands[1]) != CONST_DOUBLE
       || (optimize_function_for_size_p (cfun)
	   && standard_80387_constant_p (operands[1]) > 0
	   && !memory_operand (operands[0], XFmode))
       || (!TARGET_MEMORY_MISMATCH_STALL
	   && memory_operand (operands[0], XFmode))))
    : -1 },
  { "((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
   && GET_MODE (operands[0]) == GET_MODE (operands[1])\n\
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])\n\
       || GET_MODE (operands[3]) == VOIDmode)) && ( reload_completed)",
    __builtin_constant_p (
#line 6287 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6293 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 6287 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((GET_MODE (operands[0]) == QImode || GET_MODE (operands[0]) == HImode)
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
   && GET_MODE (operands[0]) == GET_MODE (operands[1])
   && (GET_MODE (operands[0]) == GET_MODE (operands[3])
       || GET_MODE (operands[3]) == VOIDmode)) && 
#line 6293 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
#line 15356 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387",
    __builtin_constant_p 
#line 15356 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    ? (int) 
#line 15356 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387)
    : -1 },
#line 7722 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && GET_MODE (operands[2]) != QImode\n\
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))\n\
    && ((ix86_match_ccmode (insn, CCZmode)\n\
	 && !(INTVAL (operands[3]) & ~255))\n\
	|| (ix86_match_ccmode (insn, CCNOmode)\n\
	    && !(INTVAL (operands[3]) & ~127)))",
    __builtin_constant_p 
#line 7722 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    ? (int) 
#line 7722 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
    && GET_MODE (operands[2]) != QImode
    && (!REG_P (operands[2]) || ANY_QI_REG_P (operands[2]))
    && ((ix86_match_ccmode (insn, CCZmode)
	 && !(INTVAL (operands[3]) & ~255))
	|| (ix86_match_ccmode (insn, CCNOmode)
	    && !(INTVAL (operands[3]) & ~127))))
    : -1 },
  { "(TARGET_FMA || TARGET_FMA4) && (TARGET_AVX)",
    __builtin_constant_p (
#line 2178 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 2178 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 2542 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && TARGET_64BIT",
    __builtin_constant_p 
#line 2542 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    ? (int) 
#line 2542 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && TARGET_64BIT)
    : -1 },
#line 11559 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 11559 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !SIBLING_CALL_P (insn))
    ? (int) 
#line 11559 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !SIBLING_CALL_P (insn))
    : -1 },
  { "((TARGET_SSE) && (TARGET_SSE2)) && ( reload_completed)",
    __builtin_constant_p ((
#line 809 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 811 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    ? (int) ((
#line 809 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2)) && 
#line 811 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( reload_completed))
    : -1 },
#line 10134 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATERT, SImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))\n\
      == GET_MODE_BITSIZE (SImode)-1",
    __builtin_constant_p 
#line 10134 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    ? (int) 
#line 10134 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATERT, SImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (SImode)-1))
      == GET_MODE_BITSIZE (SImode)-1)
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 10340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ROTATE, HImode, operands)",
    __builtin_constant_p 
#line 10340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    ? (int) 
#line 10340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ROTATE, HImode, operands))
    : -1 },
#line 9004 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 9004 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 9004 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && can_create_pseudo_p ())
    ? (int) 
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12407 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12407 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_POPCNT && ix86_match_ccmode (insn, CCZmode)) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V8SImode, operands)",
    __builtin_constant_p 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V8SImode, operands))
    ? (int) 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V8SImode, operands))
    : -1 },
#line 10029 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (optimize_function_for_size_p (cfun)\n\
       || !TARGET_PARTIAL_FLAG_REG_STALL\n\
       || (operands[2] == const1_rtx\n\
	   && TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 10029 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    ? (int) 
#line 10029 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (optimize_function_for_size_p (cfun)
       || !TARGET_PARTIAL_FLAG_REG_STALL
       || (operands[2] == const1_rtx
	   && TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    : -1 },
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (GET_MODE_NUNITS (V4SFmode)\n\
       == GET_MODE_NUNITS (V4SFmode))",
    __builtin_constant_p 
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V4SFmode)))
    ? (int) 
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V4SFmode)))
    : -1 },
#line 4591 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1])))",
    __builtin_constant_p 
#line 4591 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    ? (int) 
#line 4591 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(TARGET_64BIT && SSE_FLOAT_MODE_P (GET_MODE (operands[1]))))
    : -1 },
#line 4340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || SSE_FLOAT_MODE_P (SFmode)",
    __builtin_constant_p 
#line 4340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    ? (int) 
#line 4340 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || SSE_FLOAT_MODE_P (SFmode))
    : -1 },
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
       && HImode != HImode \n\
       && ((HImode != DImode) || TARGET_64BIT)\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14855 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && HImode != HImode 
       && ((HImode != DImode) || TARGET_64BIT)
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (XOR, V2DFmode, operands)) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1782 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (XOR, V2DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 7021 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && TARGET_64BIT",
    __builtin_constant_p 
#line 7021 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT)
    ? (int) 
#line 7021 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && TARGET_64BIT)
    : -1 },
  { "(TARGET_AVX\n\
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 10768 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 10768 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V4DFmode)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 8977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, SImode, operands)",
    __builtin_constant_p 
#line 8977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    ? (int) 
#line 8977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, SImode, operands))
    : -1 },
#line 6080 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGCmode)",
    __builtin_constant_p 
#line 6080 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode))
    ? (int) 
#line 6080 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGCmode))
    : -1 },
  { "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17333 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17333 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
#line 17225 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && !TARGET_OPT_AGU\n\
   && REGNO (operands[0]) == REGNO (operands[1])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17225 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_OPT_AGU
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17225 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && !TARGET_OPT_AGU
   && REGNO (operands[0]) == REGNO (operands[1])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (PLUS, HImode, operands)",
    __builtin_constant_p 
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    ? (int) 
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (PLUS, HImode, operands))
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 855 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MINUS, V8SFmode, operands)) && 
#line 127 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(TARGET_SSE || TARGET_3DNOW_A) && (Pmode == SImode)",
    __builtin_constant_p (
#line 1663 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 1663 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_SSE || TARGET_3DNOW_A) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands)",
    __builtin_constant_p 
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    ? (int) 
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4SFmode, operands))
    : -1 },
#line 4433 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode)\n\
   && (!TARGET_FISTTP || TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4433 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    ? (int) 
#line 4433 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode)
   && (!TARGET_FISTTP || TARGET_SSE_MATH))
    : -1 },
#line 2565 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && (V4SFmode == V4SFmode || TARGET_AVX2)",
    __builtin_constant_p 
#line 2565 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && (V4SFmode == V4SFmode || TARGET_AVX2))
    ? (int) 
#line 2565 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && (V4SFmode == V4SFmode || TARGET_AVX2))
    : -1 },
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 15320 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && TARGET_C99_FUNCTIONS\n\
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 15320 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 15320 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS
   && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 7264 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])\n\
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])\n\
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])\n\
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9])",
    __builtin_constant_p 
#line 7264 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9]))
    ? (int) 
#line 7264 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && INTVAL (operands[2]) + 8 == INTVAL (operands[6])
   && INTVAL (operands[3]) + 8 == INTVAL (operands[7])
   && INTVAL (operands[4]) + 8 == INTVAL (operands[8])
   && INTVAL (operands[5]) + 8 == INTVAL (operands[9]))
    : -1 },
#line 17018 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "REGNO (operands[0]) != REGNO (operands[1])\n\
   && ((MMX_REG_P (operands[0]) && MMX_REG_P (operands[1])) \n\
       || (SSE_REG_P (operands[0]) && SSE_REG_P (operands[1])))",
    __builtin_constant_p 
#line 17018 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && ((MMX_REG_P (operands[0]) && MMX_REG_P (operands[1])) 
       || (SSE_REG_P (operands[0]) && SSE_REG_P (operands[1]))))
    ? (int) 
#line 17018 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(REGNO (operands[0]) != REGNO (operands[1])
   && ((MMX_REG_P (operands[0]) && MMX_REG_P (operands[1])) 
       || (SSE_REG_P (operands[0]) && SSE_REG_P (operands[1]))))
    : -1 },
  { "(TARGET_CMOVE) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9712 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9712 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_CMOVE) && 
#line 823 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    ? (int) 
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    : -1 },
#line 1128 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCmode)",
    __builtin_constant_p 
#line 1128 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    ? (int) 
#line 1128 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCmode))
    : -1 },
#line 4490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || SImode != DImode))\n\
	&& TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    ? (int) 
#line 4490 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || SImode != DImode))
	&& TARGET_SSE_MATH))
    : -1 },
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V8SImode, operands)",
    __builtin_constant_p 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V8SImode, operands))
    ? (int) 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (UMIN, V8SImode, operands))
    : -1 },
#line 4303 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode))",
    __builtin_constant_p 
#line 4303 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    ? (int) 
#line 4303 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (SFmode)))
    : -1 },
#line 7508 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 7508 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 7508 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 4053 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_VECTOR_FP_CONVERTS\n\
   && optimize_insn_for_speed_p ()\n\
   && reload_completed && SSE_REG_P (operands[0])",
    __builtin_constant_p 
#line 4053 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed && SSE_REG_P (operands[0]))
    ? (int) 
#line 4053 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_VECTOR_FP_CONVERTS
   && optimize_insn_for_speed_p ()
   && reload_completed && SSE_REG_P (operands[0]))
    : -1 },
#line 1704 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW",
    __builtin_constant_p 
#line 1704 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    ? (int) 
#line 1704 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW)
    : -1 },
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))\n\
   && ix86_binary_operator_ok (PLUS, V4HImode, operands)",
    __builtin_constant_p 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    ? (int) 
#line 793 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_MMX || (TARGET_SSE2 && V4HImode == V1DImode))
   && ix86_binary_operator_ok (PLUS, V4HImode, operands))
    : -1 },
  { "(TARGET_RDSEED) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 18086 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_RDSEED) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 18086 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_RDSEED) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 13044 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13044 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13044 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V16HImode, operands)",
    __builtin_constant_p 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V16HImode, operands))
    ? (int) 
#line 5883 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2 && ix86_binary_operator_ok (SMIN, V16HImode, operands))
    : -1 },
  { "(TARGET_SSE && !flag_finite_math_only) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1132 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && !flag_finite_math_only) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1132 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && !flag_finite_math_only) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 894 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands)",
    __builtin_constant_p 
#line 894 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    ? (int) 
#line 894 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4SFmode, operands))
    : -1 },
#line 3695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "REGNO (operands[1]) != REGNO (operands[2])\n\
   && peep2_reg_dead_p (2, operands[1])\n\
   && peep2_reg_dead_p (4, operands[2])\n\
   && !reg_mentioned_p (operands[2], operands[3])",
    __builtin_constant_p 
#line 3695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(REGNO (operands[1]) != REGNO (operands[2])
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (4, operands[2])
   && !reg_mentioned_p (operands[2], operands[3]))
    ? (int) 
#line 3695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(REGNO (operands[1]) != REGNO (operands[2])
   && peep2_reg_dead_p (2, operands[1])
   && peep2_reg_dead_p (4, operands[2])
   && !reg_mentioned_p (operands[2], operands[3]))
    : -1 },
#line 11363 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "REGNO (operands[1]) == REGNO (operands[3])\n\
   && ! reg_overlap_mentioned_p (operands[3], operands[0])",
    __builtin_constant_p 
#line 11363 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(REGNO (operands[1]) == REGNO (operands[3])
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    ? (int) 
#line 11363 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(REGNO (operands[1]) == REGNO (operands[3])
   && ! reg_overlap_mentioned_p (operands[3], operands[0]))
    : -1 },
#line 8570 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode)",
    __builtin_constant_p 
#line 8570 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    ? (int) 
#line 8570 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && 
#line 189 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_MINUS, V16HImode, operands)) && 
#line 189 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 10501 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && (TARGET_USE_BT || reload_completed)",
    __builtin_constant_p 
#line 10501 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    ? (int) 
#line 10501 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && (TARGET_USE_BT || reload_completed))
    : -1 },
#line 12002 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_CMOVE",
    __builtin_constant_p 
#line 12002 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_CMOVE)
    ? (int) 
#line 12002 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_CMOVE)
    : -1 },
#line 6107 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands)",
    __builtin_constant_p 
#line 6107 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands))
    ? (int) 
#line 6107 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (EQ, V2DImode, operands))
    : -1 },
  { "(TARGET_SSE3) && (TARGET_AVX)",
    __builtin_constant_p (
#line 720 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 161 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 720 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3) && 
#line 161 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(reload_completed) && (Pmode == DImode)",
    __builtin_constant_p (
#line 3876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    ? (int) (
#line 3876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && 
#line 189 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V16HImode, operands)) && 
#line 189 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
#line 3611 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands)",
    __builtin_constant_p 
#line 3611 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    ? (int) 
#line 3611 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (UNKNOWN, V4SFmode, operands))
    : -1 },
  { "(TARGET_SSE\n\
   && (register_operand (operands[0], V4DImode)\n\
       || register_operand (operands[1], V4DImode))) && (TARGET_AVX)",
    __builtin_constant_p (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode))) && 
#line 103 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4DImode)
       || register_operand (operands[1], V4DImode))) && 
#line 103 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 8640 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NEG, SImode, operands)",
    __builtin_constant_p 
#line 8640 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    ? (int) 
#line 8640 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, SImode, operands))
    : -1 },
#line 7854 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands)",
    __builtin_constant_p 
#line 7854 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    ? (int) 
#line 7854 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (AND, SImode, operands))
    : -1 },
#line 8695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V32QImode)\n\
       == GET_MODE_NUNITS (V32QImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V32QImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V32QImode)
       == GET_MODE_NUNITS (V32QImode)))
    : -1 },
#line 8417 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT\n\
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 8417 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 8417 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT
   && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun)))
    : -1 },
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && ix86_binary_operator_ok (XOR, V16QImode, operands)",
    __builtin_constant_p 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V16QImode, operands))
    ? (int) 
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (XOR, V16QImode, operands))
    : -1 },
  { "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17333 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17333 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
#line 13801 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations\n\
   && standard_80387_constant_p (operands[3]) == 2",
    __builtin_constant_p 
#line 13801 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    ? (int) 
#line 13801 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations
   && standard_80387_constant_p (operands[3]) == 2)
    : -1 },
#line 1942 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "SSE_FLOAT_MODE_P (DFmode)",
    __builtin_constant_p 
#line 1942 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode))
    ? (int) 
#line 1942 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(SSE_FLOAT_MODE_P (DFmode))
    : -1 },
#line 8954 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_unary_operator_ok (NOT, QImode, operands)",
    __builtin_constant_p 
#line 8954 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    ? (int) 
#line 8954 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, QImode, operands))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 7685 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && 
#line 189 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 7685 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V16HImode, operands)) && 
#line 189 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
  { "(TARGET_SSE4_2\n\
   && can_create_pseudo_p ()) && ( 1)",
    __builtin_constant_p (
#line 9374 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && can_create_pseudo_p ()) && 
#line 9377 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( 1))
    ? (int) (
#line 9374 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && can_create_pseudo_p ()) && 
#line 9377 "../../gcc-4.8.2/gcc/config/i386/sse.md"
( 1))
    : -1 },
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
  { "(TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVEOPT)",
    __builtin_constant_p (
#line 17908 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 17869 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_XSAVEOPT))
    ? (int) (
#line 17908 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_XSAVE) && 
#line 17869 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_XSAVEOPT))
    : -1 },
  { "(TARGET_AVX2) && (TARGET_AVX)",
    __builtin_constant_p (
#line 10488 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 151 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 10488 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2) && 
#line 151 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 13487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (SFmode))\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 13487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (SFmode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 13487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387 && X87_ENABLE_ARITH (SFmode))
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && 
#line 157 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5260 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V4DImode, operands)) && 
#line 157 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
  { "(ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4708 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 4708 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    ? (int) 
#line 4708 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    : -1 },
#line 5212 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 5212 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 5212 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 13197 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (DFmode)\n\
   && !(TARGET_SSE2 && TARGET_SSE_MATH)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13197 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13197 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && !(TARGET_SSE2 && TARGET_SSE_MATH)
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 8928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
    || (TARGET_SSE && (SFmode == TFmode)))\n\
   && reload_completed",
    __builtin_constant_p 
#line 8928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE && (SFmode == TFmode)))
   && reload_completed)
    ? (int) 
#line 8928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(((SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
    || (TARGET_SSE && (SFmode == TFmode)))
   && reload_completed)
    : -1 },
  { "(TARGET_BMI2 && reload_completed\n\
  && true_regnum (operands[1]) == DX_REG) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 6900 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed
  && true_regnum (operands[1]) == DX_REG) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 6900 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed
  && true_regnum (operands[1]) == DX_REG) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 3422 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || reload_completed",
    __builtin_constant_p 
#line 3422 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || reload_completed)
    ? (int) 
#line 3422 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || reload_completed)
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 996 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands)",
    __builtin_constant_p 
#line 996 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    ? (int) 
#line 996 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_SSE2 && ix86_binary_operator_ok (MULT, V2SImode, operands))
    : -1 },
  { "(ix86_unary_operator_ok (NEG, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8640 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8640 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NEG, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 17600 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_PREFETCH_SSE",
    __builtin_constant_p 
#line 17600 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE)
    ? (int) 
#line 17600 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_PREFETCH_SSE)
    : -1 },
  { "((TARGET_SINGLE_POP || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17347 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17347 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_POP || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((DImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 16268 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_80387 && TARGET_CMOVE\n\
   && !(MEM_P (operands[2]) && MEM_P (operands[3]))",
    __builtin_constant_p 
#line 16268 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    ? (int) 
#line 16268 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_80387 && TARGET_CMOVE
   && !(MEM_P (operands[2]) && MEM_P (operands[3])))
    : -1 },
  { "(!TARGET_64BIT && TARGET_XSAVE) && (TARGET_XSAVEOPT)",
    __builtin_constant_p (
#line 17882 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE) && 
#line 17865 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_XSAVEOPT))
    ? (int) (
#line 17882 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_XSAVE) && 
#line 17865 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_XSAVEOPT))
    : -1 },
#line 16750 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "! TARGET_PARTIAL_REG_STALL && reload_completed\n\
   && ! TARGET_FAST_PREFIX\n\
   && optimize_insn_for_speed_p ()\n\
   /* Ensure that the operand will remain sign-extended immediate.  */\n\
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode)",
    __builtin_constant_p 
#line 16750 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ! TARGET_FAST_PREFIX
   && optimize_insn_for_speed_p ()
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode))
    ? (int) 
#line 16750 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_PARTIAL_REG_STALL && reload_completed
   && ! TARGET_FAST_PREFIX
   && optimize_insn_for_speed_p ()
   /* Ensure that the operand will remain sign-extended immediate.  */
   && ix86_match_ccmode (insn, INTVAL (operands[3]) >= 0 ? CCNOmode : CCZmode))
    : -1 },
  { "(ix86_match_ccmode (insn, CCGOCmode)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 1027 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 1027 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_XOP) && (TARGET_AVX)",
    __builtin_constant_p (
#line 10318 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 10318 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_XOP) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    ? (int) 
#line 4716 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && can_create_pseudo_p ())
    : -1 },
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (MINUS, QImode, operands)",
    __builtin_constant_p 
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    ? (int) 
#line 6522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (MINUS, QImode, operands))
    : -1 },
#line 17469 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()\n\
   && !satisfies_constraint_K (operands[2])",
    __builtin_constant_p 
#line 17469 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    ? (int) 
#line 17469 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SLOW_IMUL_IMM32_MEM && optimize_insn_for_speed_p ()
   && !satisfies_constraint_K (operands[2]))
    : -1 },
  { "(TARGET_FMA || TARGET_FMA4) && (TARGET_SSE_MATH)",
    __builtin_constant_p (
#line 2075 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 2042 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE_MATH))
    ? (int) (
#line 2075 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_FMA || TARGET_FMA4) && 
#line 2042 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE_MATH))
    : -1 },
  { "(TARGET_USE_8BIT_IDIV\n\
   && TARGET_QIMODE_MATH\n\
   && can_create_pseudo_p ()\n\
   && !optimize_insn_for_size_p ()) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 7292 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 7292 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_8BIT_IDIV
   && TARGET_QIMODE_MATH
   && can_create_pseudo_p ()
   && !optimize_insn_for_size_p ()) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 9942 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (ASHIFTRT, HImode, operands)",
    __builtin_constant_p 
#line 9942 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    ? (int) 
#line 9942 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, HImode, operands))
    : -1 },
#line 16827 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "optimize_insn_for_speed_p ()\n\
   && ((QImode == HImode\n\
       && TARGET_LCP_STALL)\n\
       || (!TARGET_USE_MOV0\n\
          && TARGET_SPLIT_LONG_MOVES\n\
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 16827 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((QImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 16827 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(optimize_insn_for_speed_p ()
   && ((QImode == HImode
       && TARGET_LCP_STALL)
       || (!TARGET_USE_MOV0
          && TARGET_SPLIT_LONG_MOVES
          && get_attr_length (insn) >= ix86_cur_cost ()->large_insn))
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
  { "(TARGET_POPCNT) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 12387 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 12387 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_POPCNT) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 7892 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (AND, QImode, operands)",
    __builtin_constant_p 
#line 7892 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    ? (int) 
#line 7892 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (AND, QImode, operands))
    : -1 },
#line 8695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8695 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && !(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V8SImode)\n\
       == GET_MODE_NUNITS (V8SImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V8SImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V8SImode)))
    : -1 },
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V8SImode)\n\
       == GET_MODE_NUNITS (V4DFmode))",
    __builtin_constant_p 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V4DFmode)))
    ? (int) 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V8SImode)
       == GET_MODE_NUNITS (V4DFmode)))
    : -1 },
#line 4915 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))",
    __builtin_constant_p 
#line 4915 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    ? (int) 
#line 4915 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && (TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun)))
    : -1 },
#line 9789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && INTVAL (operands[2]) == 31\n\
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))\n\
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    ? (int) 
#line 9789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && INTVAL (operands[2]) == 31
   && (TARGET_USE_CLTD || optimize_function_for_size_p (cfun))
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
    : -1 },
#line 4384 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 4384 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 4384 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
#line 1671 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX",
    __builtin_constant_p 
#line 1671 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX)
    ? (int) 
#line 1671 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX)
    : -1 },
#line 454 "../../gcc-4.8.2/gcc/config/i386/sync.md"
  { "TARGET_XADD",
    __builtin_constant_p 
#line 454 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_XADD)
    ? (int) 
#line 454 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_XADD)
    : -1 },
#line 13371 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))\n\
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[1]))",
    __builtin_constant_p 
#line 13371 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[1])))
    ? (int) 
#line 13371 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && X87_FLOAT_MODE_P (GET_MODE (operands[0]))
   && X87_ENABLE_FLOAT (GET_MODE (operands[0]), GET_MODE (operands[1])))
    : -1 },
  { "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17322 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17322 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (AND, V8SImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V8SImode, operands)) && 
#line 150 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (AND, V8SImode, operands)) && 
#line 150 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && TARGET_FISTTP\n\
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || DImode != DImode))\n\
	&& TARGET_SSE_MATH)\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    ? (int) 
#line 4462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && TARGET_FISTTP
   && !((SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || DImode != DImode))
	&& TARGET_SSE_MATH)
   && can_create_pseudo_p ())
    : -1 },
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "X87_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
   && !TARGET_FISTTP\n\
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))\n\
	 && (TARGET_64BIT || HImode != DImode))\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && can_create_pseudo_p ())
    ? (int) 
#line 4541 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(X87_FLOAT_MODE_P (GET_MODE (operands[1]))
   && !TARGET_FISTTP
   && !(SSE_FLOAT_MODE_P (GET_MODE (operands[1]))
	 && (TARGET_64BIT || HImode != DImode))
   && can_create_pseudo_p ())
    : -1 },
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 434 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    : -1 },
  { "(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH\n\
   && !flag_trapping_math) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 15242 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 15242 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH
   && !flag_trapping_math) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 12871 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && TARGET_SUN_TLS",
    __builtin_constant_p 
#line 12871 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SUN_TLS)
    ? (int) 
#line 12871 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && TARGET_SUN_TLS)
    : -1 },
  { "(reload_completed && ix86_lea_for_add_ok (insn, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 5790 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 5790 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed && ix86_lea_for_add_ok (insn, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 12170 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_BMI",
    __builtin_constant_p 
#line 12170 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI)
    ? (int) 
#line 12170 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI)
    : -1 },
  { "(reload_completed) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 10182 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 10182 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, DImode)
   && reload_completed)
    ? (int) 
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, DImode)
   && reload_completed)
    : -1 },
  { "(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == SImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
#line 9062 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_ROUND && !flag_trapping_math",
    __builtin_constant_p 
#line 9062 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_ROUND && !flag_trapping_math)
    ? (int) 
#line 9062 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_ROUND && !flag_trapping_math)
    : -1 },
#line 13116 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
   && !COMMUTATIVE_ARITH_P (operands[3])",
    __builtin_constant_p 
#line 13116 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    ? (int) 
#line 13116 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
   && !COMMUTATIVE_ARITH_P (operands[3]))
    : -1 },
#line 9374 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_2\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 9374 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && can_create_pseudo_p ())
    ? (int) 
#line 9374 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_2
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_ADX && ix86_binary_operator_ok (PLUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6586 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_ADX && ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6586 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_ADX && ix86_binary_operator_ok (PLUS, DImode, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((SImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((SImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH))
    : -1 },
#line 9845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (LSHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    ? (int) 
#line 9845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    : -1 },
#line 7928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && true_regnum (operands[0]) != true_regnum (operands[1])",
    __builtin_constant_p 
#line 7928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    ? (int) 
#line 7928 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && true_regnum (operands[0]) != true_regnum (operands[1]))
    : -1 },
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE\n\
   && (GET_MODE_NUNITS (V8HImode)\n\
       == GET_MODE_NUNITS (V4SFmode))",
    __builtin_constant_p 
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V4SFmode)))
    ? (int) 
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V8HImode)
       == GET_MODE_NUNITS (V4SFmode)))
    : -1 },
#line 11595 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 11595 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (insn))
    ? (int) 
#line 11595 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && SIBLING_CALL_P (insn))
    : -1 },
  { "(!TARGET_HAS_BIONIC) && (ptr_mode == SImode)",
    __builtin_constant_p (
#line 17709 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_HAS_BIONIC) && 
#line 937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ptr_mode == SImode))
    ? (int) (
#line 17709 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_HAS_BIONIC) && 
#line 937 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ptr_mode == SImode))
    : -1 },
#line 10129 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 10129 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 10129 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_XOP && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 1828 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SSE && !TARGET_64BIT\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 1828 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 1828 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE && !TARGET_64BIT
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V4DImode)\n\
       == GET_MODE_NUNITS (V32QImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V32QImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V32QImode)))
    : -1 },
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands)",
    __builtin_constant_p 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands))
    ? (int) 
#line 812 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (SS_MINUS, V4HImode, operands))
    : -1 },
#line 11570 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT",
    __builtin_constant_p 
#line 11570 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT)
    ? (int) 
#line 11570 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT)
    : -1 },
#line 2021 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 2021 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 2021 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(TARGET_SSE\n\
   && ix86_binary_operator_ok (IOR, V8SImode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V8SImode, operands)) && 
#line 150 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 6444 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && ix86_binary_operator_ok (IOR, V8SImode, operands)) && 
#line 150 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 15066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 15066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 15066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
#line 1132 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && !flag_finite_math_only",
    __builtin_constant_p 
#line 1132 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && !flag_finite_math_only)
    ? (int) 
#line 1132 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && !flag_finite_math_only)
    : -1 },
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_binary_operator_ok (IOR, SImode, operands)",
    __builtin_constant_p 
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    ? (int) 
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, SImode, operands))
    : -1 },
  { "(TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMIN, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMIN, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 4303 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode))",
    __builtin_constant_p 
#line 4303 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    ? (int) 
#line 4303 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || (TARGET_64BIT && SSE_FLOAT_MODE_P (DFmode)))
    : -1 },
#line 6642 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands)",
    __builtin_constant_p 
#line 6642 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    ? (int) 
#line 6642 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
    : -1 },
  { "(TARGET_SSE && flag_finite_math_only\n\
   && ix86_binary_operator_ok (SMAX, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 1116 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && flag_finite_math_only
   && ix86_binary_operator_ok (SMAX, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
#line 4902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 4902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 4902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 17075 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())\n\
   && peep2_reg_dead_p (4, operands[0])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[1])\n\
   && !reg_overlap_mentioned_p (operands[0], operands[2])\n\
   && (QImode != QImode\n\
       || immediate_operand (operands[2], QImode)\n\
       || q_regs_operand (operands[2], QImode))\n\
   && ix86_match_ccmode (peep2_next_insn (3),\n\
			 (GET_CODE (operands[3]) == PLUS\n\
			  || GET_CODE (operands[3]) == MINUS)\n\
			 ? CCGOCmode : CCNOmode)",
    __builtin_constant_p 
#line 17075 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    ? (int) 
#line 17075 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_READ_MODIFY_WRITE || optimize_insn_for_size_p ())
   && peep2_reg_dead_p (4, operands[0])
   && !reg_overlap_mentioned_p (operands[0], operands[1])
   && !reg_overlap_mentioned_p (operands[0], operands[2])
   && (QImode != QImode
       || immediate_operand (operands[2], QImode)
       || q_regs_operand (operands[2], QImode))
   && ix86_match_ccmode (peep2_next_insn (3),
			 (GET_CODE (operands[3]) == PLUS
			  || GET_CODE (operands[3]) == MINUS)
			 ? CCGOCmode : CCNOmode))
    : -1 },
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands)",
    __builtin_constant_p 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    ? (int) 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (AND, V2SImode, operands))
    : -1 },
#line 5402 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_64BIT || TARGET_KEEPS_VECTOR_ALIGNED_STACK)\n\
   && TARGET_SSE2 && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 5402 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_64BIT || TARGET_KEEPS_VECTOR_ALIGNED_STACK)
   && TARGET_SSE2 && TARGET_SSE_MATH)
    ? (int) 
#line 5402 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_64BIT || TARGET_KEEPS_VECTOR_ALIGNED_STACK)
   && TARGET_SSE2 && TARGET_SSE_MATH)
    : -1 },
  { "(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 15945 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 15945 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[CX_REG] || fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 7685 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 7685 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    ? (int) 
#line 7685 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (PLUS, V8HImode, operands))
    : -1 },
#line 5984 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands)",
    __builtin_constant_p 
#line 5984 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    ? (int) 
#line 5984 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SMAX, V8HImode, operands))
    : -1 },
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (XOR, HImode, operands)",
    __builtin_constant_p 
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    ? (int) 
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (XOR, HImode, operands))
    : -1 },
  { "(TARGET_SSE4_1) && (TARGET_AVX)",
    __builtin_constant_p (
#line 8551 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 8551 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17333 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17333 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_DOUBLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
#line 4453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_AVOID_VECTOR_DECODE\n\
   && SSE_FLOAT_MODE_P (DFmode)\n\
   && optimize_insn_for_speed_p ()",
    __builtin_constant_p 
#line 4453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (DFmode)
   && optimize_insn_for_speed_p ())
    ? (int) 
#line 4453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (DFmode)
   && optimize_insn_for_speed_p ())
    : -1 },
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    ? (int) 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_PLUS, V8HImode, operands))
    : -1 },
#line 15294 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && TARGET_C99_FUNCTIONS",
    __builtin_constant_p 
#line 15294 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS)
    ? (int) 
#line 15294 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && TARGET_C99_FUNCTIONS)
    : -1 },
#line 4902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387\n\
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))\n\
   && reload_completed\n\
   && (SSE_REG_P (operands[0])\n\
       || (GET_CODE (operands[0]) == SUBREG\n\
	   && SSE_REG_P (SUBREG_REG (operands[0]))))",
    __builtin_constant_p 
#line 4902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    ? (int) 
#line 4902 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (SFmode) && TARGET_MIX_SSE_I387
   && !(TARGET_INTER_UNIT_CONVERSIONS || optimize_function_for_size_p (cfun))
   && reload_completed
   && (SSE_REG_P (operands[0])
       || (GET_CODE (operands[0]) == SUBREG
	   && SSE_REG_P (SUBREG_REG (operands[0])))))
    : -1 },
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V8HImode, operands)",
    __builtin_constant_p 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))
    ? (int) 
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (US_MINUS, V8HImode, operands))
    : -1 },
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2\n\
   && (GET_MODE_NUNITS (V4SFmode)\n\
       == GET_MODE_NUNITS (V4SImode))",
    __builtin_constant_p 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V4SImode)))
    ? (int) 
#line 6265 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2
   && (GET_MODE_NUNITS (V4SFmode)
       == GET_MODE_NUNITS (V4SImode)))
    : -1 },
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(optimize_function_for_size_p (cfun)\n\
    || !TARGET_PARTIAL_FLAG_REG_STALL\n\
    || (operands[2] == const1_rtx\n\
	&& TARGET_SHIFT1))\n\
   && ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands)",
    __builtin_constant_p 
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    ? (int) 
#line 9998 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((optimize_function_for_size_p (cfun)
    || !TARGET_PARTIAL_FLAG_REG_STALL
    || (operands[2] == const1_rtx
	&& TARGET_SHIFT1))
   && ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (ASHIFTRT, QImode, operands))
    : -1 },
  { "(!SIBLING_CALL_P (insn)) && (word_mode == SImode)",
    __builtin_constant_p (
#line 11530 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode))
    ? (int) (
#line 11530 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!SIBLING_CALL_P (insn)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode))
    : -1 },
#line 15087 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && flag_unsafe_math_optimizations\n\
   && can_create_pseudo_p ()",
    __builtin_constant_p 
#line 15087 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && can_create_pseudo_p ())
    ? (int) 
#line 15087 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && flag_unsafe_math_optimizations
   && can_create_pseudo_p ())
    : -1 },
  { "(TARGET_SSE\n\
   && (GET_MODE_NUNITS (V2DFmode)\n\
       == GET_MODE_NUNITS (V2DFmode))) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V2DFmode))) && 
#line 119 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 1704 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE
   && (GET_MODE_NUNITS (V2DFmode)
       == GET_MODE_NUNITS (V2DFmode))) && 
#line 119 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 6462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, HImode, operands)",
    __builtin_constant_p 
#line 6462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    ? (int) 
#line 6462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, HImode, operands))
    : -1 },
#line 8493 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4A",
    __builtin_constant_p 
#line 8493 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4A)
    ? (int) 
#line 8493 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4A)
    : -1 },
#line 5969 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 5969 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    ? (int) 
#line 5969 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (SMIN, V16QImode, operands))
    : -1 },
#line 5314 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)\n\
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES\n\
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5314 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed)
    ? (int) 
#line 5314 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_FLOAT (DFmode, DImode)
   && TARGET_SSE2 && TARGET_INTER_UNIT_MOVES
   && !TARGET_64BIT && optimize_function_for_speed_p (cfun)
   && reload_completed)
    : -1 },
  { "(ix86_match_ccmode (insn, CCGOCmode)\n\
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && ix86_binary_operator_ok (MINUS, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 7057 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_80387 && X87_ENABLE_ARITH (SFmode))\n\
    || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 7057 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 7057 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_80387 && X87_ENABLE_ARITH (SFmode))
    || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
  { "(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && ((((((((word_mode == DImode) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (Pmode == SImode)) && (word_mode == DImode)) && (Pmode == SImode)) && (Pmode == SImode))",
    __builtin_constant_p (
#line 17388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    ? (int) (
#line 17388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode)))
    : -1 },
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V4DFmode)\n\
       == GET_MODE_NUNITS (V8SFmode))",
    __builtin_constant_p 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V8SFmode)))
    ? (int) 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DFmode)
       == GET_MODE_NUNITS (V8SFmode)))
    : -1 },
#line 1033 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (UMAX, V8QImode, operands)",
    __builtin_constant_p 
#line 1033 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    ? (int) 
#line 1033 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (UMAX, V8QImode, operands))
    : -1 },
#line 6050 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands)",
    __builtin_constant_p 
#line 6050 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    ? (int) 
#line 6050 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (UMIN, V8HImode, operands))
    : -1 },
#line 14850 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH",
    __builtin_constant_p 
#line 14850 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    ? (int) 
#line 14850 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_SSE_MATH)
    : -1 },
#line 6065 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands)",
    __builtin_constant_p 
#line 6065 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    ? (int) 
#line 6065 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (UMIN, V16QImode, operands))
    : -1 },
  { "(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && (((((((((((word_mode == DImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == DImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17400 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17400 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(INTVAL (operands[0]) == 2*GET_MODE_SIZE (word_mode)) && ((((((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
#line 4272 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE && reload_completed",
    __builtin_constant_p 
#line 4272 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    ? (int) 
#line 4272 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && reload_completed)
    : -1 },
#line 580 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands)",
    __builtin_constant_p 
#line 580 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    ? (int) 
#line 580 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_3DNOW && ix86_binary_operator_ok (EQ, V2SFmode, operands))
    : -1 },
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2\n\
   && (GET_MODE_NUNITS (V16HImode)\n\
       == GET_MODE_NUNITS (V4DImode))",
    __builtin_constant_p 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V4DImode)))
    ? (int) 
#line 6248 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2
   && (GET_MODE_NUNITS (V16HImode)
       == GET_MODE_NUNITS (V4DImode)))
    : -1 },
#line 884 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "(TARGET_SSE || TARGET_3DNOW_A)\n\
   && ix86_binary_operator_ok (MULT, V4HImode, operands)",
    __builtin_constant_p 
#line 884 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    ? (int) 
#line 884 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
((TARGET_SSE || TARGET_3DNOW_A)
   && ix86_binary_operator_ok (MULT, V4HImode, operands))
    : -1 },
  { "(TARGET_ROUND) && (TARGET_SSE2)",
    __builtin_constant_p (
#line 8998 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_ROUND) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    ? (int) (
#line 8998 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_ROUND) && 
#line 140 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2))
    : -1 },
#line 4708 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)\n\
       || TARGET_MIX_SSE_I387)",
    __builtin_constant_p 
#line 4708 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    ? (int) 
#line 4708 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && (!(SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)
       || TARGET_MIX_SSE_I387))
    : -1 },
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   || ((DImode != DImode || TARGET_64BIT)\n\
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 4776 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   || ((DImode != DImode || TARGET_64BIT)
       && SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH))
    : -1 },
#line 1480 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSE3",
    __builtin_constant_p 
#line 1480 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3)
    ? (int) 
#line 1480 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE3)
    : -1 },
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387\n\
   && X87_ENABLE_FLOAT (DFmode, SImode)\n\
   && reload_completed",
    __builtin_constant_p 
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, SImode)
   && reload_completed)
    ? (int) 
#line 5259 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387
   && X87_ENABLE_FLOAT (DFmode, SImode)
   && reload_completed)
    : -1 },
  { "(TARGET_ROUND) && (TARGET_AVX)",
    __builtin_constant_p (
#line 8956 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_ROUND) && 
#line 136 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 8956 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_ROUND) && 
#line 136 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(!TARGET_PARTIAL_REG_STALL\n\
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && ( reload_completed)",
    __builtin_constant_p (
#line 10644 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 10647 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 10644 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_PARTIAL_REG_STALL
   && TARGET_ZERO_EXTEND_WITH_AND && optimize_function_for_speed_p (cfun)) && 
#line 10647 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && 
#line 189 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5283 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2 && ix86_binary_operator_ok (SS_PLUS, V16HImode, operands)) && 
#line 189 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
  { "(TARGET_SSE2) && (TARGET_AVX)",
    __builtin_constant_p (
#line 3453 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 136 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 3453 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE2) && 
#line 136 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(TARGET_AVOID_VECTOR_DECODE\n\
   && SSE_FLOAT_MODE_P (DFmode)\n\
   && optimize_insn_for_speed_p ()) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 4453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (DFmode)
   && optimize_insn_for_speed_p ()) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 4453 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_AVOID_VECTOR_DECODE
   && SSE_FLOAT_MODE_P (DFmode)
   && optimize_insn_for_speed_p ()) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())\n\
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)) && ((((((((word_mode == SImode) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (Pmode == DImode)) && (word_mode == SImode)) && (Pmode == DImode)) && (Pmode == DImode))",
    __builtin_constant_p (
#line 17322 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    ? (int) (
#line 17322 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_SINGLE_PUSH || optimize_insn_for_size_p ())
   && INTVAL (operands[0]) == -GET_MODE_SIZE (word_mode)) && (((((((
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 932 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(word_mode == SImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == DImode)))
    : -1 },
#line 2330 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_LP64 && ix86_check_movabs (insn, 1)",
    __builtin_constant_p 
#line 2330 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 1))
    ? (int) 
#line 2330 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LP64 && ix86_check_movabs (insn, 1))
    : -1 },
  { "(ix86_binary_operator_ok (IOR, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands)) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8264 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (IOR, DImode, operands)) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 10263 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_BMI2 && reload_completed",
    __builtin_constant_p 
#line 10263 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed)
    ? (int) 
#line 10263 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_BMI2 && reload_completed)
    : -1 },
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands)",
    __builtin_constant_p 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    ? (int) 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V8QImode, operands))
    : -1 },
#line 11121 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX",
    __builtin_constant_p 
#line 11121 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX)
    ? (int) 
#line 11121 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX)
    : -1 },
#line 8668 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH)",
    __builtin_constant_p 
#line 8668 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    ? (int) 
#line 8668 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 || (SSE_FLOAT_MODE_P (XFmode) && TARGET_SSE_MATH))
    : -1 },
#line 17166 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD\n\
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())\n\
   && GENERAL_REG_P (operands[0])\n\
   && peep2_regno_dead_p (0, FLAGS_REG)",
    __builtin_constant_p 
#line 17166 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    ? (int) 
#line 17166 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(GET_MODE_SIZE (GET_MODE (operands[0])) <= UNITS_PER_WORD
   && (! TARGET_USE_MOV0 || optimize_insn_for_size_p ())
   && GENERAL_REG_P (operands[0])
   && peep2_regno_dead_p (0, FLAGS_REG))
    : -1 },
  { "(TARGET_CMPXCHG8B) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 427 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG8B) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 427 "../../gcc-4.8.2/gcc/config/i386/sync.md"
(TARGET_CMPXCHG8B) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE) && (TARGET_SSE4A)",
    __builtin_constant_p (
#line 789 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 779 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4A))
    ? (int) (
#line 789 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE) && 
#line 779 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4A))
    : -1 },
#line 8413 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_SSSE3",
    __builtin_constant_p 
#line 8413 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3)
    ? (int) 
#line 8413 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSSE3)
    : -1 },
  { "(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)) && (TARGET_AVX)",
    __builtin_constant_p (
#line 894 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    ? (int) (
#line 894 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE && ix86_binary_operator_ok (MULT, V4DFmode, operands)) && 
#line 128 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX))
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)\n\
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))\n\
      == GET_MODE_BITSIZE (DImode)-1) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9679 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)
   && (INTVAL (operands[3]) & (GET_MODE_BITSIZE (DImode)-1))
      == GET_MODE_BITSIZE (DImode)-1) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 10225 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_XOP",
    __builtin_constant_p 
#line 10225 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_XOP)
    ? (int) 
#line 10225 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_XOP)
    : -1 },
#line 4858 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_SSE2 && TARGET_MIX_SSE_I387\n\
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun)",
    __builtin_constant_p 
#line 4858 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    ? (int) 
#line 4858 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_SSE2 && TARGET_MIX_SSE_I387
   && TARGET_USE_VECTOR_CONVERTS && optimize_function_for_speed_p (cfun))
    : -1 },
#line 2723 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
   && (operands[2] = find_constant_src (insn))",
    __builtin_constant_p 
#line 2723 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && (operands[2] = find_constant_src (insn)))
    ? (int) 
#line 2723 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
   && (operands[2] = find_constant_src (insn)))
    : -1 },
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_binary_operator_ok (IOR, QImode, operands)",
    __builtin_constant_p 
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    ? (int) 
#line 8325 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_binary_operator_ok (IOR, QImode, operands))
    : -1 },
#line 4876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387",
    __builtin_constant_p 
#line 4876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    ? (int) 
#line 4876 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(SSE_FLOAT_MODE_P (DFmode) && TARGET_MIX_SSE_I387)
    : -1 },
  { "(ix86_match_ccmode (insn, CCNOmode)\n\
   && ix86_unary_operator_ok (NOT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8977 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCNOmode)
   && ix86_unary_operator_ok (NOT, DImode, operands)) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
#line 272 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "!TARGET_64BIT && TARGET_MMX\n\
   && !(MEM_P (operands[0]) && MEM_P (operands[1]))",
    __builtin_constant_p 
#line 272 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(!TARGET_64BIT && TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    ? (int) 
#line 272 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(!TARGET_64BIT && TARGET_MMX
   && !(MEM_P (operands[0]) && MEM_P (operands[1])))
    : -1 },
  { "(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && (!TARGET_64BIT)",
    __builtin_constant_p (
#line 6924 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    ? (int) (
#line 6924 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 822 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_64BIT))
    : -1 },
#line 11404 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX2",
    __builtin_constant_p 
#line 11404 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2)
    ? (int) 
#line 11404 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2)
    : -1 },
#line 15233 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_USE_FANCY_MATH_387\n\
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)\n\
   && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 15233 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    ? (int) 
#line 15233 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_USE_FANCY_MATH_387
   && (!TARGET_SSE_MATH || TARGET_MIX_SSE_I387)
   && flag_unsafe_math_optimizations)
    : -1 },
  { "(ix86_match_ccmode (insn, CCGOCmode)\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 6119 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 6119 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_match_ccmode (insn, CCGOCmode)
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))) && 
#line 786 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && (Pmode == SImode)",
    __builtin_constant_p (
#line 15538 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    ? (int) (
#line 15538 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!(fixed_regs[SI_REG] || fixed_regs[DI_REG])) && 
#line 927 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(Pmode == SImode))
    : -1 },
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
  { "TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands)",
    __builtin_constant_p 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    ? (int) 
#line 1130 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
(TARGET_MMX && ix86_binary_operator_ok (IOR, V4HImode, operands))
    : -1 },
#line 9898 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, SImode, operands)",
    __builtin_constant_p 
#line 9898 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    ? (int) 
#line 9898 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (LSHIFTRT, SImode, operands))
    : -1 },
#line 14690 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "(TARGET_USE_FANCY_MATH_387\n\
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)\n\
	|| TARGET_MIX_SSE_I387)\n\
    && flag_unsafe_math_optimizations)\n\
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH\n\
       && !flag_trapping_math && !flag_rounding_math)",
    __builtin_constant_p 
#line 14690 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math))
    ? (int) 
#line 14690 "../../gcc-4.8.2/gcc/config/i386/i386.md"
((TARGET_USE_FANCY_MATH_387
    && (!(SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH)
	|| TARGET_MIX_SSE_I387)
    && flag_unsafe_math_optimizations)
   || (SSE_FLOAT_MODE_P (SFmode) && TARGET_SSE_MATH
       && !flag_trapping_math && !flag_rounding_math))
    : -1 },
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && (GET_MODE_NUNITS (V4DImode)\n\
       == GET_MODE_NUNITS (V4DFmode))",
    __builtin_constant_p 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V4DFmode)))
    ? (int) 
#line 1687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && (GET_MODE_NUNITS (V4DImode)
       == GET_MODE_NUNITS (V4DFmode)))
    : -1 },
#line 10768 "../../gcc-4.8.2/gcc/config/i386/sse.md"
  { "TARGET_AVX\n\
   && avx_vpermilp_parallel (operands[2], V4SFmode)",
    __builtin_constant_p 
#line 10768 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V4SFmode))
    ? (int) 
#line 10768 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX
   && avx_vpermilp_parallel (operands[2], V4SFmode))
    : -1 },
#line 12543 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "! TARGET_POPCNT",
    __builtin_constant_p 
#line 12543 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_POPCNT)
    ? (int) 
#line 12543 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(! TARGET_POPCNT)
    : -1 },
#line 13061 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_80387 && X87_ENABLE_ARITH (DFmode)\n\
   && COMMUTATIVE_ARITH_P (operands[3])\n\
   && !(MEM_P (operands[1]) && MEM_P (operands[2]))",
    __builtin_constant_p 
#line 13061 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    ? (int) 
#line 13061 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_80387 && X87_ENABLE_ARITH (DFmode)
   && COMMUTATIVE_ARITH_P (operands[3])
   && !(MEM_P (operands[1]) && MEM_P (operands[2])))
    : -1 },
#line 8207 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "reload_completed\n\
    && QI_REG_P (operands[0])\n\
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))\n\
    && !(~INTVAL (operands[2]) & ~(255 << 8))\n\
    && GET_MODE (operands[0]) != QImode",
    __builtin_constant_p 
#line 8207 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    ? (int) 
#line 8207 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(reload_completed
    && QI_REG_P (operands[0])
    && (!TARGET_PARTIAL_REG_STALL || optimize_function_for_size_p (cfun))
    && !(~INTVAL (operands[2]) & ~(255 << 8))
    && GET_MODE (operands[0]) != QImode)
    : -1 },
#line 8301 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands)",
    __builtin_constant_p 
#line 8301 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    ? (int) 
#line 8301 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT && ix86_binary_operator_ok (XOR, SImode, operands))
    : -1 },
#line 18026 "../../gcc-4.8.2/gcc/config/i386/i386.md"
  { "TARGET_LWP",
    __builtin_constant_p 
#line 18026 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LWP)
    ? (int) 
#line 18026 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_LWP)
    : -1 },
  { "(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 9845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 9845 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_binary_operator_ok (ASHIFTRT, DImode, operands)) && 
#line 792 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },
  { "(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V8SImode, operands)) && (TARGET_AVX2)",
    __builtin_constant_p (
#line 5656 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V8SImode, operands)) && 
#line 174 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    ? (int) (
#line 5656 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_SSE4_1 && ix86_binary_operator_ok (MULT, V8SImode, operands)) && 
#line 174 "../../gcc-4.8.2/gcc/config/i386/sse.md"
(TARGET_AVX2))
    : -1 },
  { "(!TARGET_CMOVE) && ( reload_completed)",
    __builtin_constant_p (
#line 12002 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_CMOVE) && 
#line 12004 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    ? (int) (
#line 12002 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(!TARGET_CMOVE) && 
#line 12004 "../../gcc-4.8.2/gcc/config/i386/i386.md"
( reload_completed))
    : -1 },
  { "(ix86_unary_operator_ok (NOT, DImode, operands)) && (TARGET_64BIT)",
    __builtin_constant_p (
#line 8945 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, DImode, operands)) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    ? (int) (
#line 8945 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(ix86_unary_operator_ok (NOT, DImode, operands)) && 
#line 789 "../../gcc-4.8.2/gcc/config/i386/i386.md"
(TARGET_64BIT))
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
