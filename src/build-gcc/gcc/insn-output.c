/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "diagnostic-core.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_1[] = {
  "test{b}\t%0, %0",
  "cmp{b}\t{%1, %0|%0, %1}",
};

static const char * const output_2[] = {
  "test{w}\t%0, %0",
  "cmp{w}\t{%1, %0|%0, %1}",
};

static const char * const output_3[] = {
  "test{l}\t%0, %0",
  "cmp{l}\t{%1, %0|%0, %1}",
};

static const char * const output_4[] = {
  "test{q}\t%0, %0",
  "cmp{q}\t{%1, %0|%0, %1}",
};

static const char *
output_19 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1246 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_20 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1246 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_21 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1246 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_25 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1279 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_27 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1312 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_28 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1312 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_31 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1345 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, true);
}

static const char *
output_32 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1345 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, true);
}

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1345 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, true);
}

static const char *
output_37 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1381 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_38 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1381 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_39 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1381 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_40 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1381 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_41 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1381 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_42 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1381 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, false, false);
}

static const char *
output_50 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1434 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
#ifndef HAVE_AS_IX86_SAHF
  if (TARGET_64BIT)
    return ASM_BYTE "0x9e";
  else
#endif
  return "sahf";
}
}

static const char *
output_51 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPmode == CCFPUmode);
}

static const char *
output_52 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPmode == CCFPUmode);
}

static const char *
output_53 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPUmode == CCFPUmode);
}

static const char *
output_54 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1462 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPUmode == CCFPUmode);
}

static const char *
output_55 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1489 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPmode == CCFPUmode);
}

static const char *
output_56 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1489 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPmode == CCFPUmode);
}

static const char *
output_57 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1489 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPUmode == CCFPUmode);
}

static const char *
output_58 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1489 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPUmode == CCFPUmode);
}

static const char *
output_59 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1510 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPmode == CCFPUmode);
}

static const char *
output_60 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1510 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPmode == CCFPUmode);
}

static const char *
output_61 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1510 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPmode == CCFPUmode);
}

static const char *
output_62 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1510 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPUmode == CCFPUmode);
}

static const char *
output_63 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1510 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPUmode == CCFPUmode);
}

static const char *
output_64 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1510 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fp_compare (insn, operands, true,
			       CCFPUmode == CCFPUmode);
}

static const char * const output_67[] = {
  "push{q}\t%1",
  "#",
};

static const char *
output_84 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1726 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      if (misaligned_operand (operands[0], OImode)
	  || misaligned_operand (operands[1], OImode))
	{
	  if (get_attr_mode (insn) == MODE_V8SF)
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqu\t{%1, %0|%0, %1}";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_V8SF)
	    return "vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_85 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1767 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return "#";
    case 2:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 3:
    case 4:
      /* TDmode values are passed as TImode on the stack.  Moving them
	 to stack may result in unaligned memory access.  */
      if (misaligned_operand (operands[0], TImode)
	  || misaligned_operand (operands[1], TImode))
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqu\t{%1, %0|%0, %1}";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_86 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1830 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* TDmode values are passed as TImode on the stack.  Moving them
	 to stack may result in unaligned memory access.  */
      if (misaligned_operand (operands[0], TImode)
	  || misaligned_operand (operands[1], TImode))
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqu\t{%1, %0|%0, %1}";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_87 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1881 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSECVT:
      if (SSE_REG_P (operands[0]))
	return "movq2dq\t{%1, %0|%0, %1}";
      else
	return "movdq2q\t{%1, %0|%0, %1}";

    case TYPE_SSEMOV:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "%vmovaps\t{%1, %0|%0, %1}";
      else if (get_attr_mode (insn) == MODE_TI)
	return "%vmovdqa\t{%1, %0|%0, %1}";

      /* Handle broken assemblers that require movd instead of movq.  */
      if (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1]))
	return "%vmovd\t{%1, %0|%0, %1}";
      else
	return "%vmovq\t{%1, %0|%0, %1}";

    case TYPE_MMXMOV:
      /* Handle broken assemblers that require movd instead of movq.  */
      if (GENERAL_REG_P (operands[0]) || GENERAL_REG_P (operands[1]))
	return "movd\t{%1, %0|%0, %1}";
      else
	return "movq\t{%1, %0|%0, %1}";

    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_LEA:
      return "lea{q}\t{%E1, %0|%0, %E1}";

    default:
      gcc_assert (!flag_pic || LEGITIMATE_PIC_OPERAND_P (operands[1]));
      if (get_attr_mode (insn) == MODE_SI)
	return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else if (which_alternative == 2)
	return "movabs{q}\t{%1, %0|%0, %1}";
      else if (ix86_use_lea_for_mov (insn, operands))
	return "lea{q}\t{%E1, %0|%0, %E1}";
      else
	return "mov{q}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_88 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2022 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSECVT:
      if (SSE_REG_P (operands[0]))
	return "movq2dq\t{%1, %0|%0, %1}";
      else
	return "movdq2q\t{%1, %0|%0, %1}";

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_DI:
	   return "%vmovq\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";
	case MODE_V2SF:
	  return "movlps\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    case TYPE_MMXMOV:
      return "movq\t{%1, %0|%0, %1}";

    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_MULTI:
      return "#";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_89 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2118 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSELOG1:
      return standard_sse_constant_opcode (insn, operands[1]);

    case TYPE_SSEMOV:
      switch (get_attr_mode (insn))
	{
	case MODE_TI:
	  return "%vmovdqa\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";
	case MODE_SI:
          return "%vmovd\t{%1, %0|%0, %1}";
	case MODE_SF:
          return "%vmovss\t{%1, %0|%0, %1}";
	default:
	  gcc_unreachable ();
	}

    case TYPE_MMX:
      return "pxor\t%0, %0";

    case TYPE_MMXMOV:
      if (get_attr_mode (insn) == MODE_DI)
	return "movq\t{%1, %0|%0, %1}";
      return "movd\t{%1, %0|%0, %1}";

    case TYPE_LEA:
      return "lea{l}\t{%E1, %0|%0, %E1}";

    default:
      gcc_assert (!flag_pic || LEGITIMATE_PIC_OPERAND_P (operands[1]));
      if (ix86_use_lea_for_mov (insn, operands))
	return "lea{l}\t{%E1, %0|%0, %E1}";
      else
	return "mov{l}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_90 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2202 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      /* movzwl is faster than movw on p2 due to partial word stalls,
	 though not as fast as an aligned movl.  */
      return "movz{wl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{w}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_91 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2258 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      gcc_assert (ANY_QI_REG_P (operands[1]) || MEM_P (operands[1]));
      return "movz{bl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char * const output_92[] = {
  "movabs{b}\t{%1, %P0|[%P0], %1}",
  "mov{b}\t{%1, %a0|BYTE PTR %a0, %1}",
};

static const char * const output_93[] = {
  "movabs{w}\t{%1, %P0|[%P0], %1}",
  "mov{w}\t{%1, %a0|WORD PTR %a0, %1}",
};

static const char * const output_94[] = {
  "movabs{l}\t{%1, %P0|[%P0], %1}",
  "mov{l}\t{%1, %a0|DWORD PTR %a0, %1}",
};

static const char * const output_95[] = {
  "movabs{q}\t{%1, %P0|[%P0], %1}",
  "mov{q}\t{%1, %a0|QWORD PTR %a0, %1}",
};

static const char * const output_96[] = {
  "movabs{b}\t{%P1, %0|%0, [%P1]}",
  "mov{b}\t{%a1, %0|%0, BYTE PTR %a1}",
};

static const char * const output_97[] = {
  "movabs{w}\t{%P1, %0|%0, [%P1]}",
  "mov{w}\t{%a1, %0|%0, WORD PTR %a1}",
};

static const char * const output_98[] = {
  "movabs{l}\t{%P1, %0|%0, [%P1]}",
  "mov{l}\t{%a1, %0|%0, DWORD PTR %a1}",
};

static const char * const output_99[] = {
  "movabs{q}\t{%P1, %0|%0, [%P1]}",
  "mov{q}\t{%a1, %0|%0, QWORD PTR %a1}",
};

static const char *
output_112 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2434 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movs{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_113 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2459 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movs{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_116 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2496 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movz{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_117 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2522 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movz{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *
output_118 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2554 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (CONST_INT_P (operands[1]))
    operands[1] = simplify_gen_subreg (QImode, operands[1], SImode, 0);
  return "mov{b}\t{%b1, %h0|%h0, %b1}";
}
}

static const char *
output_119 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2554 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (CONST_INT_P (operands[1]))
    operands[1] = simplify_gen_subreg (QImode, operands[1], DImode, 0);
  return "mov{b}\t{%b1, %h0|%h0, %b1}";
}
}

static const char *
output_120 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2568 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (CONST_INT_P (operands[1]))
    operands[1] = simplify_gen_subreg (QImode, operands[1], SImode, 0);
  return "mov{b}\t{%b1, %h0|%h0, %b1}";
}
}

static const char *
output_122 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2593 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_123 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2613 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_124 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2631 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_125 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2652 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_126 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2668 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  /* This insn should be already split before reg-stack.  */
  gcc_unreachable ();
}
}

static const char *
output_127 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2689 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  /* Anything else should be already split before reg-stack.  */
  gcc_assert (which_alternative == 1);
  return "push{q}\t%q1";
}
}

static const char *
output_128 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2702 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  /* Anything else should be already split before reg-stack.  */
  gcc_assert (which_alternative == 1);
  return "push{l}\t%1";
}
}

static const char *
output_129 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2767 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* Handle misaligned load/store since we
         don't have movmisaligntf pattern. */
      if (misaligned_operand (operands[0], TFmode)
	  || misaligned_operand (operands[1], TFmode))
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqu\t{%1, %0|%0, %1}";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";
	}

    case 3:
    case 4:
	return "#";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_130 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2831 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      /* Handle misaligned load/store since we
         don't have movmisaligntf pattern. */
      if (misaligned_operand (operands[0], TFmode)
	  || misaligned_operand (operands[1], TFmode))
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqu\t{%1, %0|%0, %1}";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_V4SF)
	    return "%vmovaps\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_131 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2887 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "#";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_132 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2921 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "#";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_133 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2957 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "mov{q}\t{%1, %0|%0, %1}";

    case 5:
      return "mov{l}\t{%1, %k0|%k0, %1}";

    case 6:
      return "movabs{q}\t{%1, %0|%0, %1}";

    case 7:
      return standard_sse_constant_opcode (insn, operands[1]);

    case 8:
    case 9:
    case 10:
      switch (get_attr_mode (insn))
	{
	case MODE_V2DF:
	  return "%vmovapd\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_DI:
	  return "%vmovq\t{%1, %0|%0, %1}";
	case MODE_DF:
	  if (TARGET_AVX && REG_P (operands[0]) && REG_P (operands[1]))
	    return "vmovsd\t{%1, %0, %0|%0, %0, %1}";
	  return "%vmovsd\t{%1, %0|%0, %1}";
	case MODE_V1DF:
	  return "%vmovlpd\t{%1, %d0|%d0, %1}";
	case MODE_V2SF:
	  return "%vmovlps\t{%1, %d0|%d0, %1}";
	default:
	  gcc_unreachable ();
	}

    case 11:
    case 12:
      /* Handle broken assemblers that require movd instead of movq.  */
      return "%vmovd\t{%1, %0|%0, %1}";

    default:
      gcc_unreachable();
    }
}
}

static const char *
output_134 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3104 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "#";

    case 5:
    case 9:
      return standard_sse_constant_opcode (insn, operands[1]);

    case 6:
    case 7:
    case 8:
    case 10:
    case 11:
    case 12:
      switch (get_attr_mode (insn))
	{
	case MODE_V2DF:
	  return "%vmovapd\t{%1, %0|%0, %1}";
	case MODE_V4SF:
	  return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_DI:
	  return "%vmovq\t{%1, %0|%0, %1}";
	case MODE_DF:
	  if (TARGET_AVX && REG_P (operands[0]) && REG_P (operands[1]))
	    return "vmovsd\t{%1, %0, %0|%0, %0, %1}";
	  return "%vmovsd\t{%1, %0|%0, %1}";
	case MODE_V1DF:
	  return "%vmovlpd\t{%1, %d0|%d0, %1}";
	case MODE_V2SF:
	  return "%vmovlps\t{%1, %d0|%d0, %1}";
	default:
	  gcc_unreachable ();
	}

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_135 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3241 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return standard_80387_constant_opcode (operands[1]);

    case 3:
    case 4:
      return "mov{l}\t{%1, %0|%0, %1}";

    case 5:
      return standard_sse_constant_opcode (insn, operands[1]);

    case 6:
      if (get_attr_mode (insn) == MODE_V4SF)
	return "%vmovaps\t{%1, %0|%0, %1}";
      if (TARGET_AVX)
	return "vmovss\t{%1, %0, %0|%0, %0, %1}";

    case 7:
    case 8:
      return "%vmovss\t{%1, %0|%0, %1}";

    case 9:
    case 10:
    case 14:
    case 15:
      return "movd\t{%1, %0|%0, %1}";

    case 11:
      return "movq\t{%1, %0|%0, %1}";

    case 12:
    case 13:
      return "%vmovd\t{%1, %0|%0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_136 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3408 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_137 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3423 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_138 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3423 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *
output_139 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3445 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      if (ix86_use_lea_for_mov (insn, operands))
	return "lea{l}\t{%E1, %k0|%k0, %E1}";
      else
	return "mov{l}\t{%1, %k0|%k0, %1}";

    case TYPE_MULTI:
      return "#";

    case TYPE_MMXMOV:
      return "movd\t{%1, %0|%0, %1}";

    case TYPE_SSEMOV:
      return "%vmovd\t{%1, %0|%0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_140[] = {
  "#",
  "#",
  "#",
  "movd\t{%1, %0|%0, %1}",
  "movd\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
};

static const char * const output_149[] = {
  "{cltq|cdqe}",
  "movs{lq|x}\t{%1, %0|%0, %1}",
};

static const char *
output_153 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3767 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cwtl|cwde}";
    default:
      return "movs{wl|x}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_154 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3795 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cwtl|cwde}";
    default:
      return "movs{wl|x}\t{%1, %k0|%k0, %1}";
    }
}
}

static const char *
output_157 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3838 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cbtw|cbw}";
    default:
      return "movs{bw|x}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_158 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3952 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
    case 1:
      return output_387_reg_move (insn, operands);

    case 2:
      return "%vcvtss2sd\t{%1, %d0|%d0, %1}";

    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_160 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3983 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_161 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4012 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_162 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4012 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_163 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4098 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);
    case 1:
      return "%vcvtsd2ss\t{%1, %d0|%d0, %1}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_165 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4130 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_166 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4140 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);
    case 1:
      return "%vcvtsd2ss\t{%1, %d0|%d0, %1}";

    default:
      return "#";
    }
}
}

static const char *
output_167 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4164 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (which_alternative)
    {
    case 0:
      return output_387_reg_move (insn, operands);

    default:
      return "#";
    }
}
}

static const char *
output_168 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4185 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_169 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4226 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_170 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4240 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  gcc_assert (!which_alternative);
  return output_387_reg_move (insn, operands);
}
}

static const char *
output_171 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4254 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_172 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4254 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_173 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4263 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_174 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4263 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_184 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4495 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, true);
}

static const char *
output_185 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4495 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, true);
}

static const char *
output_186 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4495 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, true);
}

static const char *
output_193 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4579 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_195 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4634 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_196 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4634 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char * const output_218[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_219[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_224[] = {
  "fild%Z1\t%1",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
};

static const char * const output_225[] = {
  "fild%Z1\t%1",
  "%vcvtsi2ss{q}\t{%1, %d0|%d0, %1}",
  "%vcvtsi2ss{q}\t{%1, %d0|%d0, %1}",
};

static const char * const output_226[] = {
  "fild%Z1\t%1",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
};

static const char * const output_227[] = {
  "fild%Z1\t%1",
  "%vcvtsi2sd{q}\t{%1, %d0|%d0, %1}",
  "%vcvtsi2sd{q}\t{%1, %d0|%d0, %1}",
};

static const char * const output_228[] = {
  "fild%Z1\t%1",
  "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
};

static const char * const output_229[] = {
  "fild%Z1\t%1",
  "%vcvtsi2ss{q}\t{%1, %d0|%d0, %1}",
};

static const char * const output_230[] = {
  "fild%Z1\t%1",
  "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
};

static const char * const output_231[] = {
  "fild%Z1\t%1",
  "%vcvtsi2sd{q}\t{%1, %d0|%d0, %1}",
};

static const char * const output_248[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_249[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_250[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_251[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_252[] = {
  "fild%Z1\t%1",
  "#",
};

static const char * const output_253[] = {
  "fild%Z1\t%1",
  "#",
};

static const char *
output_266 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5418 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (SImode_address_operand (operands[1], VOIDmode))
    {
      gcc_assert (TARGET_64BIT);
      return "lea{l}\t{%E1, %k0|%k0, %E1}";
    }
  else 
    return "lea{l}\t{%E1, %0|%0, %E1}";
}
}

static const char *
output_267 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5418 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (SImode_address_operand (operands[1], VOIDmode))
    {
      gcc_assert (TARGET_64BIT);
      return "lea{l}\t{%E1, %k0|%k0, %E1}";
    }
  else 
    return "lea{q}\t{%E1, %0|%0, %E1}";
}
}

static const char *
output_273 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5520 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      /* For most processors, ADD is faster than LEA.  This alternative
	 was added to use ADD as much as possible.  */
      if (which_alternative == 2)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_274 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5520 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      /* For most processors, ADD is faster than LEA.  This alternative
	 was added to use ADD as much as possible.  */
      if (which_alternative == 2)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], DImode))
        return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_275 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5579 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%k0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%k0";
	}

    default:
      /* For most processors, ADD is faster than LEA.  This alternative
	 was added to use ADD as much as possible.  */
      if (which_alternative == 1)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %k0|%k0, %2}";

      return "add{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_276 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5629 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return "dec{w}\t%0";
	}

    default:
      /* For most processors, ADD is faster than LEA.  This alternative
	 was added to use ADD as much as possible.  */
      if (which_alternative == 2)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], HImode))
	return "sub{w}\t{%2, %0|%0, %2}";

      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_277 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5682 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  bool widen = (which_alternative == 3 || which_alternative == 4);

  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_INCDEC:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (operands[2] == const1_rtx)
	return widen ? "inc{l}\t%k0" : "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
	  return widen ? "dec{l}\t%k0" : "dec{b}\t%0";
	}

    default:
      /* For most processors, ADD is faster than LEA.  These alternatives
	 were added to use ADD as much as possible.  */
      if (which_alternative == 2 || which_alternative == 4)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], QImode))
	{
	  if (widen)
	    return "sub{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sub{b}\t{%2, %0|%0, %2}";
	}
      if (widen)
        return "add{l}\t{%k2, %k0|%k0, %k2}";
      else
        return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_278 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5744 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[1] == const1_rtx)
	return "inc{b}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "dec{b}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[1], QImode))
	return "sub{b}\t{%1, %0|%0, %1}";

      return "add{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_279 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5847 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{b}\t%0";
	}

    default:
      if (which_alternative == 2)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], QImode))
        return "sub{b}\t{%2, %0|%0, %2}";

      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_280 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5847 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{w}\t%0";
	}

    default:
      if (which_alternative == 2)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], HImode))
        return "sub{w}\t{%2, %0|%0, %2}";

      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_281 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5847 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      if (which_alternative == 2)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_282 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5847 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      if (which_alternative == 2)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}
        
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], DImode))
        return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_283 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5895 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%k0";
      else
	{
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%k0";
	}

    default:
      if (which_alternative == 1)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %k0|%k0, %2}";

      return "add{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_284 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5939 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{b}\t%0";
	}

    default:
      if (which_alternative == 1)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], QImode))
        return "sub{b}\t{%2, %0|%0, %2}";

      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_285 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5939 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{w}\t%0";
	}

    default:
      if (which_alternative == 1)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], HImode))
        return "sub{w}\t{%2, %0|%0, %2}";

      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_286 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5939 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      if (which_alternative == 1)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_287 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5939 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      if (which_alternative == 1)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], DImode))
        return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_288 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5986 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%k0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%k0";
	}

    default:
      if (which_alternative == 1)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %k0|%k0, %2}";

      return "add{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_289 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6037 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{q}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{q}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], DImode))
	return "add{q}\t{%2, %0|%0, %2}";

      return "sub{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_290 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6081 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{b}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{b}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], QImode))
	return "add{b}\t{%2, %0|%0, %2}";

      return "sub{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_291 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6081 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{w}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{w}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], HImode))
	return "add{w}\t{%2, %0|%0, %2}";

      return "sub{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_292 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6081 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{l}\t%0";
      else
        {
	  gcc_assert (operands[2] == const1_rtx);
          return "dec{l}\t%0";
	}

    default:
      if (x86_maybe_negate_const_int (&operands[2], SImode))
	return "add{l}\t{%2, %0|%0, %2}";

      return "sub{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_293 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6121 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{b}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{b}\t%0";
	}

    default:
      if (which_alternative == 1)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], QImode))
        return "sub{b}\t{%2, %0|%0, %2}";

      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_294 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6121 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{w}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{w}\t%0";
	}

    default:
      if (which_alternative == 1)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], HImode))
        return "sub{w}\t{%2, %0|%0, %2}";

      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_295 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6121 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{l}\t%0";
	}

    default:
      if (which_alternative == 1)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], SImode))
        return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_296 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6121 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else
        {
          gcc_assert (operands[2] == constm1_rtx);
          return "dec{q}\t%0";
	}

    default:
      if (which_alternative == 1)
	{
	  rtx tmp;
	  tmp = operands[1], operands[1] = operands[2], operands[2] = tmp;
	}

      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], DImode))
        return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_297 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6170 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%h0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{b}\t%h0";
        }

    default:
      return "add{b}\t{%2, %h0|%h0, %2}";
    }
}
}

static const char *
output_298 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6205 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%h0";
      else
        {
	  gcc_assert (operands[2] == constm1_rtx);
          return "dec{b}\t%h0";
	}

    default:
      return "add{b}\t{%2, %h0|%h0, %2}";
    }
}
}

static const char * const output_353[] = {
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %0|%0, %2}",
};

static const char * const output_354[] = {
  "imul{q}\t{%2, %1, %0|%0, %1, %2}",
  "imul{q}\t{%2, %1, %0|%0, %1, %2}",
  "imul{q}\t{%2, %0|%0, %2}",
};

static const char * const output_355[] = {
  "imul{l}\t{%2, %1, %k0|%k0, %1, %2}",
  "imul{l}\t{%2, %1, %k0|%k0, %1, %2}",
  "imul{l}\t{%2, %k0|%k0, %2}",
};

static const char * const output_356[] = {
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %0|%0, %2}",
};

static const char * const output_360[] = {
  "#",
  "mul{l}\t%2",
};

static const char * const output_361[] = {
  "#",
  "mul{q}\t%2",
};

static const char * const output_390[] = {
  "test{l}\t{%k1, %k0|%k0, %k1}",
  "test{l}\t{%k1, %k0|%k0, %k1}",
  "test{q}\t{%1, %0|%0, %1}",
  "test{q}\t{%1, %0|%0, %1}",
  "test{q}\t{%1, %0|%0, %1}",
};

static const char *
output_391 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (which_alternative == 3)
    {
      if (CONST_INT_P (operands[1]) && INTVAL (operands[1]) < 0)
	operands[1] = GEN_INT (INTVAL (operands[1]) & 0xff);
      return "test{l}\t{%1, %k0|%k0, %1}";
    }
  return "test{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_401 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7794 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "#";

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (get_attr_mode (insn) == MODE_SI)
	return "and{l}\t{%k2, %k0|%k0, %k2}";
      else
	return "and{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_402 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7825 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "#";

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "and{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_404 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7865 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "#";

    default:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "and{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_405[] = {
  "and{b}\t{%2, %0|%0, %2}",
  "and{b}\t{%2, %0|%0, %2}",
  "and{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_407[] = {
  "and{l}\t{%k2, %k0|%k0, %k2}",
  "and{q}\t{%2, %0|%0, %2}",
  "and{q}\t{%2, %0|%0, %2}",
};

static const char *
output_408 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8036 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (which_alternative == 2)
    {
      if (CONST_INT_P (operands[2]) && INTVAL (operands[2]) < 0)
        operands[2] = GEN_INT (INTVAL (operands[2]) & 0xff);
      return "and{l}\t{%2, %k0|%k0, %2}";
    }
  return "and{b}\t{%2, %0|%0, %2}";
}
}

static const char * const output_425[] = {
  "or{b}\t{%2, %0|%0, %2}",
  "or{b}\t{%2, %0|%0, %2}",
  "or{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_426[] = {
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_506[] = {
  "not{b}\t%0",
  "not{l}\t%k0",
};

static const char *
output_517 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9180 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  return "sal{l}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_518 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9180 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  return "sal{q}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_521 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9201 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
    case TYPE_ISHIFTX:
      return "#";

    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "add{l}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_522 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9201 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
    case TYPE_ISHIFTX:
      return "#";

    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      return "add{q}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_524 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9272 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
    case TYPE_ISHIFTX:
      return "#";

    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t%k0, %k0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%k0";
      else
	return "sal{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_525 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9331 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_526 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9376 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";

    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      if (REG_P (operands[1]) && !ANY_QI_REG_P (operands[1]))
        return "add{l}\t%k0, %k0";
      else
        return "add{b}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t%k0";
	  else
	    return "sal{b}\t%0";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sal{b}\t{%2, %0|%0, %2}";
	}
    }
}
}

static const char *
output_527 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9437 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[1] == const1_rtx);
      return "add{b}\t%0, %0";

    default:
      if (operands[1] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_528 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9533 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_529 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9533 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_530 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9533 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_531 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9533 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{q}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_532 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9582 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t%k0, %k0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%k0";
      else
	return "sal{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_533 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9627 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{b}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_534 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9627 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{w}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_535 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9627 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{l}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_536 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9627 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      gcc_assert (operands[2] == const1_rtx);
      return "add{q}\t%0, %0";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_537 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9682 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  return "shr{l}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_538 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9682 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  return "sar{l}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_539 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9682 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  return "shr{q}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_540 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9682 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  return "sar{q}\t{%b2, %0|%0, %b2}";
}
}

static const char * const output_547[] = {
  "{cqto|cqo}",
  "sar{q}\t{%2, %0|%0, %2}",
};

static const char * const output_548[] = {
  "{cltd|cdq}",
  "sar{l}\t{%2, %0|%0, %2}",
};

static const char * const output_549[] = {
  "{cltd|cdq}",
  "sar{l}\t{%2, %k0|%k0, %2}",
};

static const char *
output_554 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9846 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "shr{l}\t%0";
      else
	return "shr{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_555 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9846 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sar{l}\t%0";
      else
	return "sar{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_556 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9846 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "shr{q}\t%0";
      else
	return "shr{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_557 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9846 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sar{q}\t%0";
      else
	return "sar{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_560 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9899 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "shr{l}\t%k0";
      else
	return "shr{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_561 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9899 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ISHIFTX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "sar{l}\t%k0";
      else
	return "sar{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_562 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9943 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{b}\t%0";
  else
    return "shr{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_563 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9943 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{b}\t%0";
  else
    return "sar{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_564 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9943 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{w}\t%0";
  else
    return "shr{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_565 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9943 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{w}\t%0";
  else
    return "sar{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_566 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9969 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[1] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{b}\t%0";
  else
    return "shr{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_567 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9969 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[1] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{b}\t%0";
  else
    return "sar{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_568 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10004 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{b}\t%0";
  else
    return "shr{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_569 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10004 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{b}\t%0";
  else
    return "sar{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_570 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10004 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{w}\t%0";
  else
    return "shr{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_571 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10004 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{w}\t%0";
  else
    return "sar{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_572 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10004 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{l}\t%0";
  else
    return "shr{l}\t{%2, %0|%0, %2}";
}
}

static const char *
output_573 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10004 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{l}\t%0";
  else
    return "sar{l}\t{%2, %0|%0, %2}";
}
}

static const char *
output_574 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10004 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{q}\t%0";
  else
    return "shr{q}\t{%2, %0|%0, %2}";
}
}

static const char *
output_575 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10004 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{q}\t%0";
  else
    return "sar{q}\t{%2, %0|%0, %2}";
}
}

static const char *
output_576 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10036 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{l}\t%k0";
  else
    return "shr{l}\t{%2, %k0|%k0, %2}";
}
}

static const char *
output_577 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10036 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{l}\t%k0";
  else
    return "sar{l}\t{%2, %k0|%k0, %2}";
}
}

static const char *
output_578 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{b}\t%0";
  else
    return "shr{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_579 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{b}\t%0";
  else
    return "sar{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_580 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{w}\t%0";
  else
    return "shr{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_581 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{w}\t%0";
  else
    return "sar{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_582 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{l}\t%0";
  else
    return "shr{l}\t{%2, %0|%0, %2}";
}
}

static const char *
output_583 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{l}\t%0";
  else
    return "sar{l}\t{%2, %0|%0, %2}";
}
}

static const char *
output_584 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "shr{q}\t%0";
  else
    return "shr{q}\t{%2, %0|%0, %2}";
}
}

static const char *
output_585 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10066 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "sar{q}\t%0";
  else
    return "sar{q}\t{%2, %0|%0, %2}";
}
}

static const char *
output_586 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10137 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  return "rol{l}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_587 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10137 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  return "ror{l}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_588 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10137 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  return "rol{q}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_589 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10137 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  return "ror{q}\t{%b2, %0|%0, %b2}";
}
}

static const char *
output_596 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10218 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "rol{l}\t%0";
      else
	return "rol{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_597 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10218 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "ror{l}\t%0";
      else
	return "ror{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_598 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10218 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "rol{q}\t%0";
      else
	return "rol{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_599 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10218 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "ror{q}\t%0";
      else
	return "ror{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *
output_601 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10284 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "rol{l}\t%k0";
      else
	return "rol{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_602 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10284 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_ROTATEX:
      return "#";

    default:
      if (operands[2] == const1_rtx
	  && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
	return "ror{l}\t%k0";
      else
	return "ror{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *
output_603 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10341 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "rol{b}\t%0";
  else
    return "rol{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_604 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10341 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "ror{b}\t%0";
  else
    return "ror{b}\t{%2, %0|%0, %2}";
}
}

static const char *
output_605 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10341 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "rol{w}\t%0";
  else
    return "rol{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_606 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10341 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[2] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "ror{w}\t%0";
  else
    return "ror{w}\t{%2, %0|%0, %2}";
}
}

static const char *
output_607 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10367 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[1] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "rol{b}\t%0";
  else
    return "rol{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_608 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10367 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[1] == const1_rtx
      && (TARGET_SHIFT1 || optimize_function_for_size_p (cfun)))
    return "ror{b}\t%0";
  else
    return "ror{b}\t{%1, %0|%0, %1}";
}
}

static const char * const output_619[] = {
  "cmp%D3ss\t{%2, %0|%0, %2}",
  "vcmp%D3ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_620[] = {
  "cmp%D3sd\t{%2, %0|%0, %2}",
  "vcmp%D3sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_664 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11437 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_665 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11437 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_666 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11457 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_667 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11464 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_668 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11464 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_669 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11487 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_670 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11497 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[0]);
}

static const char *
output_671 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11531 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_672 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11531 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_673 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11539 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_674 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11539 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_675 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11560 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_676 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11585 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_677 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11596 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return ix86_output_call_insn (insn, operands[1]);
}

static const char *
output_686 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11767 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  int num = INTVAL (operands[0]);

  gcc_assert (IN_RANGE (num, 1, 8));

  while (num--)
    fputs ("\tnop\n", asm_out_file);

  return "";
}
}

static const char *
output_687 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11788 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
#ifdef ASM_OUTPUT_MAX_SKIP_PAD
  ASM_OUTPUT_MAX_SKIP_PAD (asm_out_file, 4, (int)INTVAL (operands[0]));
#else
  /* It is tempting to use ASM_OUTPUT_ALIGN here, but we don't want to do that.
     The align insn is used to avoid 3 jump instructions in the row to improve
     branch prediction and the benefits hardly outweigh the cost of extra 8
     nops on the average inserted by full alignment pseudo operation.  */
#endif
  return "";
}
}

static const char *
output_688 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11811 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_set_got (operands[0], NULL_RTX);
}

static const char *
output_689 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11821 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_set_got (operands[0], operands[1]);
}

static const char *
output_696 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11924 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (operands[0] == const0_rtx)
    return "ret";
  else
    return "ret\t%0";
}
}

static const char *
output_702 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12057 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (TARGET_BMI)
    return "tzcnt{w}\t{%1, %0|%0, %1}";
  else if (optimize_function_for_size_p (cfun))
    ;
  else if (TARGET_GENERIC)
    /* tzcnt expands to 'rep bsf' and we can use it even if !TARGET_BMI.  */
    return "rep%; bsf{w}\t{%1, %0|%0, %1}";

  return "bsf{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_703 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12057 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (TARGET_BMI)
    return "tzcnt{l}\t{%1, %0|%0, %1}";
  else if (optimize_function_for_size_p (cfun))
    ;
  else if (TARGET_GENERIC)
    /* tzcnt expands to 'rep bsf' and we can use it even if !TARGET_BMI.  */
    return "rep%; bsf{l}\t{%1, %0|%0, %1}";

  return "bsf{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_704 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12057 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (TARGET_BMI)
    return "tzcnt{q}\t{%1, %0|%0, %1}";
  else if (optimize_function_for_size_p (cfun))
    ;
  else if (TARGET_GENERIC)
    /* tzcnt expands to 'rep bsf' and we can use it even if !TARGET_BMI.  */
    return "rep%; bsf{q}\t{%1, %0|%0, %1}";

  return "bsf{q}\t{%1, %0|%0, %1}";
}
}

static const char *
output_724 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12220 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) << 8 | INTVAL (operands[3]));
  return "bextr\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_725 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12220 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) << 8 | INTVAL (operands[3]));
  return "bextr\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_747 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{w}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_748 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{l}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_749 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12388 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{q}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_750 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12408 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{w}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_751 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12408 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{l}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_752 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12408 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{q}\t{%1, %0|%0, %1}";
#endif
}
}

static const char *
output_753 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12427 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
#if TARGET_MACHO
  return "popcnt\t{%1, %0|%0, %1}";
#else
  return "popcnt{l}\t{%1, %0|%0, %1}";
#endif
}
}

static const char * const output_754[] = {
  "bswap\t%0",
  "movbe\t{%1, %0|%0, %1}",
  "movbe\t{%1, %0|%0, %1}",
};

static const char * const output_755[] = {
  "bswap\t%0",
  "movbe\t{%1, %0|%0, %1}",
  "movbe\t{%1, %0|%0, %1}",
};

static const char * const output_758[] = {
  "xchg{b}\t{%h0, %b0|%b0, %h0}",
  "rol{w}\t{$8, %0|%0, 8}",
};

static const char *
output_763 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12641 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  output_asm_insn
    ("lea{l}\t{%E2@tlsgd(,%1,1), %0|%0, %E2@tlsgd[%1*1]}", operands);
  if (TARGET_SUN_TLS)
#ifdef HAVE_AS_IX86_TLSGDPLT
    return "call\t%a2@tlsgdplt";
#else
    return "call\t%p3@plt";
#endif
  return "call\t%P3";
}
}

static const char *
output_764 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12674 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (!TARGET_X32)
    fputs (ASM_BYTE "0x66\n", asm_out_file);
  output_asm_insn
    ("lea{q}\t{%E1@tlsgd(%%rip), %%rdi|rdi, %E1@tlsgd[rip]}", operands);
  fputs (ASM_SHORT "0x6666\n", asm_out_file);
  fputs ("\trex64\n", asm_out_file);
  if (TARGET_SUN_TLS)
    return "call\t%p2@plt";
  return "call\t%P2";
}
}

static const char *
output_765 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12674 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (!TARGET_X32)
    fputs (ASM_BYTE "0x66\n", asm_out_file);
  output_asm_insn
    ("lea{q}\t{%E1@tlsgd(%%rip), %%rdi|rdi, %E1@tlsgd[rip]}", operands);
  fputs (ASM_SHORT "0x6666\n", asm_out_file);
  fputs ("\trex64\n", asm_out_file);
  if (TARGET_SUN_TLS)
    return "call\t%p2@plt";
  return "call\t%P2";
}
}

static const char *
output_766 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12709 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  output_asm_insn
    ("lea{l}\t{%&@tlsldm(%1), %0|%0, %&@tlsldm[%1]}", operands);
  if (TARGET_SUN_TLS)
#ifdef HAVE_AS_IX86_TLSLDMPLT
    return "call\t%&@tlsldmplt";
#else
    return "call\t%p2@plt";
#endif
  return "call\t%P2";
}
}

static const char *
output_767 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12741 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  output_asm_insn
    ("lea{q}\t{%&@tlsld(%%rip), %%rdi|rdi, %&@tlsld[rip]}", operands);
  if (TARGET_SUN_TLS)
    return "call\t%p1@plt";
  return "call\t%P1";
}
}

static const char *
output_768 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 12741 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  output_asm_insn
    ("lea{q}\t{%&@tlsld(%%rip), %%rdi|rdi, %&@tlsld[rip]}", operands);
  if (TARGET_SUN_TLS)
    return "call\t%p1@plt";
  return "call\t%P1";
}
}

static const char *
output_784 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13026 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_785 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13026 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_786 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13047 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_787 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13047 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_788 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13064 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_789 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13064 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_790 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13079 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_791 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13079 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_793 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13118 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_794 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13118 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_795 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13140 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_796 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13140 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_797 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13160 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_798 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13160 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_799 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13160 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_800 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13160 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_801 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13180 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_802 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13180 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_803 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13180 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_804 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13180 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_805 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13200 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_806 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13218 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_807 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13237 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_808 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13254 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_809 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13268 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_810 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13285 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_811 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13285 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_812 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13303 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_813 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13303 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *
output_814 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13321 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_815 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13321 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_816 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13338 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_817 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13338 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_818 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13356 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_819 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13356 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_binary_op (insn, operands);
}

static const char *
output_820 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13418 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_821 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 13418 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_387_reg_move (insn, operands);
}

static const char *
output_860 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14750 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_864 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14809 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_865 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 14809 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_882 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15123 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_883 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15123 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_886 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15182 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_887 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15182 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_888 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15182 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char *
output_889 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 15182 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_fix_trunc (insn, operands, false);
}

static const char * const output_941[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_942[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_943[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_945[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
};

static const char * const output_946[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_947[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "#",
  "#",
};

static const char * const output_948[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_951[] = {
  "maxss\t{%2, %0|%0, %2}",
  "vmaxss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_952[] = {
  "minss\t{%2, %0|%0, %2}",
  "vminss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_953[] = {
  "maxsd\t{%2, %0|%0, %2}",
  "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_954[] = {
  "minsd\t{%2, %0|%0, %2}",
  "vminsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_955[] = {
  "maxss\t{%2, %0|%0, %2}",
  "vmaxss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_956[] = {
  "minss\t{%2, %0|%0, %2}",
  "vminss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_957[] = {
  "maxsd\t{%2, %0|%0, %2}",
  "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_958[] = {
  "minsd\t{%2, %0|%0, %2}",
  "vminsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_959 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16501 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOV:
      return "mov{l}\t{%1, %0|%0, %1}";

    case TYPE_ALU:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], SImode))
	return "sub{l}\t{%2, %0|%0, %2}";

      return "add{l}\t{%2, %0|%0, %2}";

    default:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%E2, %0|%0, %E2}";
    }
}
}

static const char *
output_960 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16501 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOV:
      return "mov{q}\t{%1, %0|%0, %1}";

    case TYPE_ALU:
      gcc_assert (rtx_equal_p (operands[0], operands[1]));
      if (x86_maybe_negate_const_int (&operands[2], DImode))
	return "sub{q}\t{%2, %0|%0, %2}";

      return "add{q}\t{%2, %0|%0, %2}";

    default:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{q}\t{%E2, %0|%0, %E2}";
    }
}
}

static const char *
output_965 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16618 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_adjust_stack_and_probe (operands[0]);
}

static const char *
output_966 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16618 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_adjust_stack_and_probe (operands[0]);
}

static const char *
output_967 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16628 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_probe_stack_range (operands[0], operands[2]);
}

static const char *
output_968 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 16628 "../../gcc-4.8.2/gcc/config/i386/i386.md"
 return output_probe_stack_range (operands[0], operands[2]);
}

static const char *
output_969 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17572 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{ return ASM_SHORT "0x0b0f"; }
}

static const char *
output_970 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17601 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  static const char * const patterns[4] = {
   "prefetchnta\t%a0", "prefetcht2\t%a0", "prefetcht1\t%a0", "prefetcht0\t%a0"
  };

  int locality = INTVAL (operands[1]);
  gcc_assert (IN_RANGE (locality, 0, 3));

  return patterns[locality];
}
}

static const char *
output_971 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 17622 "../../gcc-4.8.2/gcc/config/i386/i386.md"
{
  if (INTVAL (operands[1]) == 0)
    return "prefetch\t%a0";
  else
    return "prefetchw\t%a0";
}
}

static const char * const output_1030[] = {
  "mov{q}\t{%1, %0|%0, %1}",
  "mov{q}\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
};

static const char * const output_1031[] = {
  "mov{q}\t{%1, %0|%0, %1}",
  "mov{q}\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
};

static const char * const output_1032[] = {
  "mov{q}\t{%1, %0|%0, %1}",
  "mov{q}\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
};

static const char * const output_1033[] = {
  "mov{q}\t{%1, %0|%0, %1}",
  "mov{q}\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
};

static const char * const output_1034[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_1035[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_1036[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_1037[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vpxor\t%0, %d0",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_1038[] = {
  "mov{q}\t{%1, %0|%0, %1}",
  "mov{q}\t{%1, %0|%0, %1}",
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vxorps\t%0, %d0",
  "%vmovaps\t{%1, %0|%0, %1}",
  "%vmovlps\t{%1, %d0|%d0, %1}",
  "%vmovlps\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
};

static const char * const output_1039[] = {
  "pxor\t%0, %0",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdq2q\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "%vxorps\t%0, %d0",
  "%vmovaps\t{%1, %0|%0, %1}",
  "%vmovlps\t{%1, %d0|%d0, %1}",
  "%vmovlps\t{%1, %0|%0, %1}",
  "#",
  "#",
};

static const char * const output_1042[] = {
  "pfsub\t{%2, %0|%0, %2}",
  "pfsubr\t{%1, %0|%0, %1}",
};

static const char * const output_1065[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1067[] = {
  "punpckhdq\t%0, %0",
  "unpckhps\t%0, %0",
  "#",
  "#",
  "#",
  "#",
};

static const char *
output_1129 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1282 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));
  if (MEM_P (operands[2]))
    return "pinsrw\t{%3, %2, %0|%0, %2, %3}";
  else
    return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
}
}

static const char *
output_1131 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1329 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "pshufw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_1135[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1137[] = {
  "punpckhdq\t%0, %0",
  "punpckhdq\t%0, %0",
  "pshufd\t{$85, %1, %0|%0, %1, 85}",
  "unpckhps\t%0, %0",
  "#",
  "#",
  "#",
};

static const char *
output_1138 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1578 "../../gcc-4.8.2/gcc/config/i386/mmx.md"
{
  /* These two instructions have the same operation, but their encoding
     is different.  Prefer the one that is de facto standard.  */
  if (TARGET_SSE || TARGET_3DNOW_A)
    return "pavgb\t{%2, %0|%0, %2}";
  else
    return "pavgusb\t{%2, %0|%0, %2}";
}
}

static const char *
output_1146 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V32QImode)
		  || misaligned_operand (operands[1], V32QImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V32QImode)
		  || misaligned_operand (operands[1], V32QImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V32QImode)
		  || misaligned_operand (operands[1], V32QImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1147 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V16QImode)
		  || misaligned_operand (operands[1], V16QImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V16QImode)
		  || misaligned_operand (operands[1], V16QImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V16QImode)
		  || misaligned_operand (operands[1], V16QImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1148 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V16HImode)
		  || misaligned_operand (operands[1], V16HImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V16HImode)
		  || misaligned_operand (operands[1], V16HImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V16HImode)
		  || misaligned_operand (operands[1], V16HImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1149 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8HImode)
		  || misaligned_operand (operands[1], V8HImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8HImode)
		  || misaligned_operand (operands[1], V8HImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8HImode)
		  || misaligned_operand (operands[1], V8HImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1150 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8SImode)
		  || misaligned_operand (operands[1], V8SImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8SImode)
		  || misaligned_operand (operands[1], V8SImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8SImode)
		  || misaligned_operand (operands[1], V8SImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1151 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4SImode)
		  || misaligned_operand (operands[1], V4SImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4SImode)
		  || misaligned_operand (operands[1], V4SImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4SImode)
		  || misaligned_operand (operands[1], V4SImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1152 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4DImode)
		  || misaligned_operand (operands[1], V4DImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4DImode)
		  || misaligned_operand (operands[1], V4DImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4DImode)
		  || misaligned_operand (operands[1], V4DImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1153 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2DImode)
		  || misaligned_operand (operands[1], V2DImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2DImode)
		  || misaligned_operand (operands[1], V2DImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2DImode)
		  || misaligned_operand (operands[1], V2DImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1154 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2TImode)
		  || misaligned_operand (operands[1], V2TImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2TImode)
		  || misaligned_operand (operands[1], V2TImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2TImode)
		  || misaligned_operand (operands[1], V2TImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1155 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V1TImode)
		  || misaligned_operand (operands[1], V1TImode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V1TImode)
		  || misaligned_operand (operands[1], V1TImode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V1TImode)
		  || misaligned_operand (operands[1], V1TImode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1156 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8SFmode)
		  || misaligned_operand (operands[1], V8SFmode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8SFmode)
		  || misaligned_operand (operands[1], V8SFmode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V8SFmode)
		  || misaligned_operand (operands[1], V8SFmode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1157 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4SFmode)
		  || misaligned_operand (operands[1], V4SFmode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4SFmode)
		  || misaligned_operand (operands[1], V4SFmode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4SFmode)
		  || misaligned_operand (operands[1], V4SFmode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1158 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4DFmode)
		  || misaligned_operand (operands[1], V4DFmode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4DFmode)
		  || misaligned_operand (operands[1], V4DFmode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V4DFmode)
		  || misaligned_operand (operands[1], V4DFmode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1159 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 437 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return standard_sse_constant_opcode (insn, operands[1]);
    case 1:
    case 2:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	case MODE_V4SF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2DFmode)
		  || misaligned_operand (operands[1], V2DFmode)))
	    return "vmovups\t{%1, %0|%0, %1}";
	  else
	    return "%vmovaps\t{%1, %0|%0, %1}";

	case MODE_V4DF:
	case MODE_V2DF:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2DFmode)
		  || misaligned_operand (operands[1], V2DFmode)))
	    return "vmovupd\t{%1, %0|%0, %1}";
	  else
	    return "%vmovapd\t{%1, %0|%0, %1}";

	case MODE_OI:
	case MODE_TI:
	  if (TARGET_AVX
	      && (misaligned_operand (operands[0], V2DFmode)
		  || misaligned_operand (operands[1], V2DFmode)))
	    return "vmovdqu\t{%1, %0|%0, %1}";
	  else
	    return "%vmovdqa\t{%1, %0|%0, %1}";

	default:
	  gcc_unreachable ();
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1162 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 596 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovups\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1163 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 596 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovups\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1164 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 596 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovupd\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1165 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 596 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovupd\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1166 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 625 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovups\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1167 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 625 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovups\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1168 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 625 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovupd\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1169 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 625 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovupd\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1170 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 654 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovdqu\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1171 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 654 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovdqu\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1172 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovdqu\t{%1, %0|%0, %1}";
    }
}
}

static const char *
output_1173 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 687 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      return "%vmovups\t{%1, %0|%0, %1}";
    default:
      return "%vmovdqu\t{%1, %0|%0, %1}";
    }
}
}

static const char * const output_1188[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1189[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1190[] = {
  "addps\t{%2, %0|%0, %2}",
  "vaddps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1191[] = {
  "subps\t{%2, %0|%0, %2}",
  "vsubps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1192[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1193[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1194[] = {
  "addpd\t{%2, %0|%0, %2}",
  "vaddpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1195[] = {
  "subpd\t{%2, %0|%0, %2}",
  "vsubpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1196[] = {
  "addss\t{%2, %0|%0, %2}",
  "vaddss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1197[] = {
  "subss\t{%2, %0|%0, %2}",
  "vsubss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1198[] = {
  "addsd\t{%2, %0|%0, %2}",
  "vaddsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1199[] = {
  "subsd\t{%2, %0|%0, %2}",
  "vsubsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1200[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1201[] = {
  "mulps\t{%2, %0|%0, %2}",
  "vmulps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1202[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1203[] = {
  "mulpd\t{%2, %0|%0, %2}",
  "vmulpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1204[] = {
  "mulss\t{%2, %0|%0, %2}",
  "vmulss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1205[] = {
  "mulsd\t{%2, %0|%0, %2}",
  "vmulsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1206[] = {
  "divps\t{%2, %0|%0, %2}",
  "vdivps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1207[] = {
  "divps\t{%2, %0|%0, %2}",
  "vdivps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1208[] = {
  "divpd\t{%2, %0|%0, %2}",
  "vdivpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1209[] = {
  "divpd\t{%2, %0|%0, %2}",
  "vdivpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1210[] = {
  "divss\t{%2, %0|%0, %2}",
  "vdivss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1211[] = {
  "divsd\t{%2, %0|%0, %2}",
  "vdivsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1214[] = {
  "rcpss\t{%1, %0|%0, %1}",
  "vrcpss\t{%1, %2, %0|%0, %2, %1}",
};

static const char * const output_1219[] = {
  "sqrtss\t{%1, %0|%0, %1}",
  "vsqrtss\t{%1, %2, %0|%0, %2, %1}",
};

static const char * const output_1220[] = {
  "sqrtsd\t{%1, %0|%0, %1}",
  "vsqrtsd\t{%1, %2, %0|%0, %2, %1}",
};

static const char * const output_1223[] = {
  "rsqrtss\t{%1, %0|%0, %1}",
  "vrsqrtss\t{%1, %2, %0|%0, %2, %1}",
};

static const char * const output_1224[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1225[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1226[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1227[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1228[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1229[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1230[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1231[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1232[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1233[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1234[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1235[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1236[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1237[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1238[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1239[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1240[] = {
  "maxss\t{%2, %0|%0, %2}",
  "vmaxss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1241[] = {
  "minss\t{%2, %0|%0, %2}",
  "vminss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1242[] = {
  "maxsd\t{%2, %0|%0, %2}",
  "vmaxsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1243[] = {
  "minsd\t{%2, %0|%0, %2}",
  "vminsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1244[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1245[] = {
  "minps\t{%2, %0|%0, %2}",
  "vminps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1246[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1247[] = {
  "minpd\t{%2, %0|%0, %2}",
  "vminpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1248[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1249[] = {
  "maxps\t{%2, %0|%0, %2}",
  "vmaxps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1250[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1251[] = {
  "maxpd\t{%2, %0|%0, %2}",
  "vmaxpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1253[] = {
  "addsubpd\t{%2, %0|%0, %2}",
  "vaddsubpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1255[] = {
  "addsubps\t{%2, %0|%0, %2}",
  "vaddsubps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1258[] = {
  "haddpd\t{%2, %0|%0, %2}",
  "vhaddpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1259[] = {
  "hsubpd\t{%2, %0|%0, %2}",
  "vhsubpd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1260[] = {
  "haddpd\t{%0, %0|%0, %0}",
  "vhaddpd\t{%1, %1, %0|%0, %1, %1}",
};

static const char * const output_1261[] = {
  "hsubpd\t{%0, %0|%0, %0}",
  "vhsubpd\t{%1, %1, %0|%0, %1, %1}",
};

static const char * const output_1264[] = {
  "haddps\t{%2, %0|%0, %2}",
  "vhaddps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1265[] = {
  "hsubps\t{%2, %0|%0, %2}",
  "vhsubps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1272[] = {
  "cmp%D3ps\t{%2, %0|%0, %2}",
  "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1273[] = {
  "cmp%D3ps\t{%2, %0|%0, %2}",
  "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1274[] = {
  "cmp%D3pd\t{%2, %0|%0, %2}",
  "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1275[] = {
  "cmp%D3pd\t{%2, %0|%0, %2}",
  "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1276[] = {
  "cmp%D3ps\t{%2, %0|%0, %2}",
  "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1277[] = {
  "cmp%D3ps\t{%2, %0|%0, %2}",
  "vcmp%D3ps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1278[] = {
  "cmp%D3pd\t{%2, %0|%0, %2}",
  "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1279[] = {
  "cmp%D3pd\t{%2, %0|%0, %2}",
  "vcmp%D3pd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1280[] = {
  "cmp%D3ss\t{%2, %0|%0, %2}",
  "vcmp%D3ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1281[] = {
  "cmp%D3sd\t{%2, %0|%0, %2}",
  "vcmp%D3sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1286 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1726 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1287 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1726 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1288 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1726 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1289 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1726 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1290 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1783 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1291 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1783 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1292 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1783 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1293 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1783 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1294 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1783 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1295 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1783 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "ps";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1296 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1783 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1297 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1783 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1298 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1783 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1299 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1783 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1300 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1783 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1301 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1783 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix;

  switch (get_attr_mode (insn))
    {
    case MODE_V8SF:
    case MODE_V4SF:
      suffix = "ps";
      break;
    default:
      suffix = "pd";
    }

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1302 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1856 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1303 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1856 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      ops = "andn%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vandn%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1304 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1896 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp
    = (get_attr_mode (insn) == MODE_V4SF) ? "andnps" : "pandn";

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1305 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1943 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1306 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1943 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1307 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1943 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "ps";

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1308 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1943 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      ops = "and%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vand%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1309 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1943 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      ops = "or%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1310 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1943 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *suffix
    = (get_attr_mode (insn) == MODE_V4SF) ? "ps" : "pd";

  switch (which_alternative)
    {
    case 0:
      ops = "xor%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "vxor%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, suffix);
  return buf;
}
}

static const char *
output_1311 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1992 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp
    = (get_attr_mode (insn) == MODE_V4SF) ? "andps" : "pand";

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1312 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1992 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp
    = (get_attr_mode (insn) == MODE_V4SF) ? "orps" : "por";

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1313 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1992 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp
    = (get_attr_mode (insn) == MODE_V4SF) ? "xorps" : "pxor";

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char * const output_1314[] = {
  "vfmadd132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ss\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1315[] = {
  "vfmadd132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231sd\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1316[] = {
  "vfmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1317[] = {
  "vfmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1318[] = {
  "vfmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1319[] = {
  "vfmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmadd231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1320[] = {
  "vfmsub132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ss\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1321[] = {
  "vfmsub132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231sd\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1322[] = {
  "vfmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1323[] = {
  "vfmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1324[] = {
  "vfmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1325[] = {
  "vfmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsub231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1326[] = {
  "vfnmadd132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ss\t{%2, %1, %0|%0, %1, %2}",
  "vfnmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmaddss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1327[] = {
  "vfnmadd132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231sd\t{%2, %1, %0|%0, %1, %2}",
  "vfnmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmaddsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1328[] = {
  "vfnmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1329[] = {
  "vfnmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1330[] = {
  "vfnmadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1331[] = {
  "vfnmadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmadd231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1332[] = {
  "vfnmsub132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ss\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ss\t{%2, %1, %0|%0, %1, %2}",
  "vfnmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1333[] = {
  "vfnmsub132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213sd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231sd\t{%2, %1, %0|%0, %1, %2}",
  "vfnmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1334[] = {
  "vfnmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1335[] = {
  "vfnmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1336[] = {
  "vfnmsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1337[] = {
  "vfnmsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfnmsub231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfnmsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1338[] = {
  "vfmaddsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1339[] = {
  "vfmaddsub132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddsubps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1340[] = {
  "vfmaddsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1341[] = {
  "vfmaddsub132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmaddsub213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmaddsub231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmaddsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmaddsubpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1342[] = {
  "vfmsubadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1343[] = {
  "vfmsubadd132ps\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213ps\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231ps\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubaddps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1344[] = {
  "vfmsubadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1345[] = {
  "vfmsubadd132pd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsubadd213pd\t{%3, %2, %0|%0, %2, %3}",
  "vfmsubadd231pd\t{%2, %1, %0|%0, %1, %2}",
  "vfmsubaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
  "vfmsubaddpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1346[] = {
  "vfmadd132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213ss\t{%3, %2, %0|%0, %2, %3}",
};

static const char * const output_1347[] = {
  "vfmadd132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmadd213sd\t{%3, %2, %0|%0, %2, %3}",
};

static const char * const output_1348[] = {
  "vfmsub132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213ss\t{%3, %2, %0|%0, %2, %3}",
};

static const char * const output_1349[] = {
  "vfmsub132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfmsub213sd\t{%3, %2, %0|%0, %2, %3}",
};

static const char * const output_1350[] = {
  "vfnmadd132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213ss\t{%3, %2, %0|%0, %2, %3}",
};

static const char * const output_1351[] = {
  "vfnmadd132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmadd213sd\t{%3, %2, %0|%0, %2, %3}",
};

static const char * const output_1352[] = {
  "vfnmsub132ss\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213ss\t{%3, %2, %0|%0, %2, %3}",
};

static const char * const output_1353[] = {
  "vfnmsub132sd\t{%2, %3, %0|%0, %3, %2}",
  "vfnmsub213sd\t{%3, %2, %0|%0, %2, %3}",
};

static const char * const output_1365[] = {
  "cvtsi2ss\t{%2, %0|%0, %2}",
  "cvtsi2ss\t{%2, %0|%0, %2}",
  "vcvtsi2ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1366[] = {
  "cvtsi2ssq\t{%2, %0|%0, %2}",
  "cvtsi2ssq\t{%2, %0|%0, %2}",
  "vcvtsi2ssq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1382[] = {
  "cvtsi2sd\t{%2, %0|%0, %2}",
  "cvtsi2sd\t{%2, %0|%0, %2}",
  "vcvtsi2sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1383[] = {
  "cvtsi2sdq\t{%2, %0|%0, %2}",
  "cvtsi2sdq\t{%2, %0|%0, %2}",
  "vcvtsi2sdq\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1395 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2897 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (TARGET_AVX)
    return "vcvtpd2dq{x}\t{%1, %0|%0, %1}";
  else
    return "cvtpd2dq\t{%1, %0|%0, %1}";
}
}

static const char *
output_1398 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2955 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (TARGET_AVX)
    return "vcvttpd2dq{x}\t{%1, %0|%0, %1}";
  else
    return "cvttpd2dq\t{%1, %0|%0, %1}";
}
}

static const char * const output_1399[] = {
  "cvtsd2ss\t{%2, %0|%0, %2}",
  "cvtsd2ss\t{%2, %0|%0, %2}",
  "vcvtsd2ss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1400[] = {
  "cvtss2sd\t{%2, %0|%0, %2}",
  "cvtss2sd\t{%2, %0|%0, %2}",
  "vcvtss2sd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1402 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3040 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (TARGET_AVX)
    return "vcvtpd2ps{x}\t{%1, %0|%0, %1}";
  else
    return "cvtpd2ps\t{%1, %0|%0, %1}";
}
}

static const char * const output_1406[] = {
  "movhlps\t{%2, %0|%0, %2}",
  "vmovhlps\t{%2, %1, %0|%0, %1, %2}",
  "movlps\t{%H2, %0|%0, %H2}",
  "vmovlps\t{%H2, %1, %0|%0, %1, %H2}",
  "%vmovhps\t{%2, %0|%0, %2}",
};

static const char * const output_1407[] = {
  "movlhps\t{%2, %0|%0, %2}",
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
  "%vmovlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_1409[] = {
  "unpckhps\t{%2, %0|%0, %2}",
  "vunpckhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1411[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "vunpcklps\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1416 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3867 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 8) << 4;
  mask |= (INTVAL (operands[6]) - 8) << 6;
  operands[3] = GEN_INT (mask);

  return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1417 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3909 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  switch (which_alternative)
    {
    case 0:
      return "shufps\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1418 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3909 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[3]) << 0;
  mask |= INTVAL (operands[4]) << 2;
  mask |= (INTVAL (operands[5]) - 4) << 4;
  mask |= (INTVAL (operands[6]) - 4) << 6;
  operands[3] = GEN_INT (mask);

  switch (which_alternative)
    {
    case 0:
      return "shufps\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vshufps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_1419[] = {
  "%vmovhps\t{%1, %0|%0, %1}",
  "%vmovhlps\t{%1, %d0|%d0, %1}",
  "%vmovlps\t{%H1, %d0|%d0, %H1}",
};

static const char * const output_1420[] = {
  "movhps\t{%2, %0|%0, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "%vmovlps\t{%2, %H0|%H0, %2}",
};

static const char * const output_1421[] = {
  "%vmovlps\t{%1, %0|%0, %1}",
  "%vmovaps\t{%1, %0|%0, %1}",
  "%vmovlps\t{%1, %d0|%d0, %1}",
};

static const char * const output_1422[] = {
  "shufps\t{$0xe4, %1, %0|%0, %1, 0xe4}",
  "vshufps\t{$0xe4, %1, %2, %0|%0, %2, %1, 0xe4}",
  "movlps\t{%2, %0|%0, %2}",
  "vmovlps\t{%2, %1, %0|%0, %1, %2}",
  "%vmovlps\t{%2, %0|%0, %2}",
};

static const char * const output_1423[] = {
  "movss\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1427[] = {
  "vshufps\t{$0, %1, %1, %0|%0, %1, %1, 0}",
  "vbroadcastss\t{%1, %0|%0, %1}",
  "shufps\t{$0, %0, %0|%0, %0, 0}",
};

static const char * const output_1428[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "vunpcklps\t{%2, %1, %0|%0, %1, %2}",
  "insertps\t{$0x10, %2, %0|%0, %2, 0x10}",
  "vinsertps\t{$0x10, %2, %1, %0|%0, %1, %2, 0x10}",
  "%vmovss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1429[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1430[] = {
  "movlhps\t{%2, %0|%0, %2}",
  "vmovlhps\t{%2, %1, %0|%0, %1, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1431[] = {
  "%vinsertps\t{$0xe, %d2, %0|%0, %d2, 0xe}",
  "%vmovd\t{%2, %0|%0, %2}",
  "%vmovd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
  "pinsrd\t{$0, %2, %0|%0, %2, 0}",
  "vpinsrd\t{$0, %2, %1, %0|%0, %1, %2, 0}",
  "#",
  "#",
  "#",
};

static const char * const output_1432[] = {
  "%vinsertps\t{$0xe, %d2, %0|%0, %d2, 0xe}",
  "%vmovss\t{%2, %0|%0, %2}",
  "%vmovd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
  "pinsrd\t{$0, %2, %0|%0, %2, 0}",
  "vpinsrd\t{$0, %2, %1, %0|%0, %1, %2, 0}",
  "#",
  "#",
  "#",
};

static const char *
output_1433 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4212 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])) << 4);
  switch (which_alternative)
    {
    case 0:
      return "insertps\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vinsertps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1434 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4239 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (MEM_P (operands[2]))
    {
      unsigned count_s = INTVAL (operands[3]) >> 6;
      if (count_s)
	operands[3] = GEN_INT (INTVAL (operands[3]) & 0x3f);
      operands[2] = adjust_address_nv (operands[2], SFmode, count_s * 4);
    }
  switch (which_alternative)
    {
    case 0:
      return "insertps\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vinsertps\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_1436[] = {
  "%vextractps\t{%2, %1, %0|%0, %1, %2}",
  "#",
  "#",
};

static const char * const output_1451[] = {
  "unpckhpd\t{%2, %0|%0, %2}",
  "vunpckhpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovddup\t{%H1, %0|%0, %H1}",
  "movlpd\t{%H1, %0|%0, %H1}",
  "vmovlpd\t{%H1, %2, %0|%0, %2, %H1}",
  "%vmovhpd\t{%1, %0|%0, %1}",
};

static const char * const output_1452[] = {
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "vmovddup\t{%1, %0|%0, %1}",
};

static const char * const output_1453[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovddup\t{%1, %0|%0, %1}",
  "movhpd\t{%2, %0|%0, %2}",
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovlpd\t{%2, %H0|%H0, %2}",
};

static const char *
output_1454 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4809 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 4) << 1;
  mask |= (INTVAL (operands[5]) - 2) << 2;
  mask |= (INTVAL (operands[6]) - 6) << 3;
  operands[3] = GEN_INT (mask);

  return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char * const output_1456[] = {
  "punpckhqdq\t{%2, %0|%0, %2}",
  "vpunpckhqdq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1458[] = {
  "punpcklqdq\t{%2, %0|%0, %2}",
  "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1459 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4916 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  switch (which_alternative)
    {
    case 0:
      return "shufpd\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1460 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4916 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask;
  mask = INTVAL (operands[3]);
  mask |= (INTVAL (operands[4]) - 2) << 1;
  operands[3] = GEN_INT (mask);

  switch (which_alternative)
    {
    case 0:
      return "shufpd\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vshufpd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_1461[] = {
  "%vmovhpd\t{%1, %0|%0, %1}",
  "unpckhpd\t%0, %0",
  "vunpckhpd\t{%d1, %0|%0, %d1}",
  "#",
  "#",
  "#",
};

static const char * const output_1462[] = {
  "movhps\t{%1, %0|%0, %1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_1463[] = {
  "%vmovlpd\t{%1, %0|%0, %1}",
  "#",
  "#",
  "#",
  "#",
};

static const char * const output_1464[] = {
  "movlps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
  "movlps\t{%1, %0|%0, %1}",
};

static const char * const output_1465[] = {
  "movhpd\t{%2, %0|%0, %2}",
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "unpcklpd\t{%2, %0|%0, %2}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "#",
  "#",
  "#",
};

static const char * const output_1466[] = {
  "%vmovsd\t{%2, %0|%0, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "vmovlpd\t{%2, %1, %0|%0, %1, %2}",
  "movsd\t{%2, %0|%0, %2}",
  "vmovsd\t{%2, %1, %0|%0, %1, %2}",
  "shufpd\t{$2, %1, %0|%0, %1, 2}",
  "movhpd\t{%H1, %0|%0, %H1}",
  "vmovhpd\t{%H1, %2, %0|%0, %2, %H1}",
  "#",
  "#",
  "#",
};

static const char * const output_1467[] = {
  "movsd\t{%2, %0|%0, %2}",
  "vmovsd\t{%2, %1, %0|%0, %1, %2}",
  "movlpd\t{%2, %0|%0, %2}",
  "vmovlpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovlpd\t{%2, %0|%0, %2}",
  "shufpd\t{$2, %1, %0|%0, %1, 2}",
  "movhps\t{%H1, %0|%0, %H1}",
  "vmovhps\t{%H1, %2, %0|%0, %2, %H1}",
  "%vmovhps\t{%1, %H0|%H0, %1}",
};

static const char * const output_1468[] = {
  "unpcklpd\t%0, %0",
  "%vmovddup\t{%1, %0|%0, %1}",
};

static const char * const output_1469[] = {
  "unpcklpd\t{%2, %0|%0, %2}",
  "vunpcklpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovddup\t{%1, %0|%0, %1}",
  "movhpd\t{%2, %0|%0, %2}",
  "vmovhpd\t{%2, %1, %0|%0, %1, %2}",
  "%vmovsd\t{%1, %0|%0, %1}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
};

static const char * const output_1470[] = {
  "paddb\t{%2, %0|%0, %2}",
  "vpaddb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1471[] = {
  "psubb\t{%2, %0|%0, %2}",
  "vpsubb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1472[] = {
  "paddb\t{%2, %0|%0, %2}",
  "vpaddb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1473[] = {
  "psubb\t{%2, %0|%0, %2}",
  "vpsubb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1474[] = {
  "paddw\t{%2, %0|%0, %2}",
  "vpaddw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1475[] = {
  "psubw\t{%2, %0|%0, %2}",
  "vpsubw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1476[] = {
  "paddw\t{%2, %0|%0, %2}",
  "vpaddw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1477[] = {
  "psubw\t{%2, %0|%0, %2}",
  "vpsubw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1478[] = {
  "paddd\t{%2, %0|%0, %2}",
  "vpaddd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1479[] = {
  "psubd\t{%2, %0|%0, %2}",
  "vpsubd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1480[] = {
  "paddd\t{%2, %0|%0, %2}",
  "vpaddd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1481[] = {
  "psubd\t{%2, %0|%0, %2}",
  "vpsubd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1482[] = {
  "paddq\t{%2, %0|%0, %2}",
  "vpaddq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1483[] = {
  "psubq\t{%2, %0|%0, %2}",
  "vpsubq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1484[] = {
  "paddq\t{%2, %0|%0, %2}",
  "vpaddq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1485[] = {
  "psubq\t{%2, %0|%0, %2}",
  "vpsubq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1486[] = {
  "paddsb\t{%2, %0|%0, %2}",
  "vpaddsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1487[] = {
  "paddusb\t{%2, %0|%0, %2}",
  "vpaddusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1488[] = {
  "psubsb\t{%2, %0|%0, %2}",
  "vpsubsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1489[] = {
  "psubusb\t{%2, %0|%0, %2}",
  "vpsubusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1490[] = {
  "paddsb\t{%2, %0|%0, %2}",
  "vpaddsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1491[] = {
  "paddusb\t{%2, %0|%0, %2}",
  "vpaddusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1492[] = {
  "psubsb\t{%2, %0|%0, %2}",
  "vpsubsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1493[] = {
  "psubusb\t{%2, %0|%0, %2}",
  "vpsubusb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1494[] = {
  "paddsw\t{%2, %0|%0, %2}",
  "vpaddsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1495[] = {
  "paddusw\t{%2, %0|%0, %2}",
  "vpaddusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1496[] = {
  "psubsw\t{%2, %0|%0, %2}",
  "vpsubsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1497[] = {
  "psubusw\t{%2, %0|%0, %2}",
  "vpsubusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1498[] = {
  "paddsw\t{%2, %0|%0, %2}",
  "vpaddsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1499[] = {
  "paddusw\t{%2, %0|%0, %2}",
  "vpaddusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1500[] = {
  "psubsw\t{%2, %0|%0, %2}",
  "vpsubsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1501[] = {
  "psubusw\t{%2, %0|%0, %2}",
  "vpsubusw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1502[] = {
  "pmullw\t{%2, %0|%0, %2}",
  "vpmullw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1503[] = {
  "pmullw\t{%2, %0|%0, %2}",
  "vpmullw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1504[] = {
  "pmulhw\t{%2, %0|%0, %2}",
  "vpmulhw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1505[] = {
  "pmulhuw\t{%2, %0|%0, %2}",
  "vpmulhuw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1506[] = {
  "pmulhw\t{%2, %0|%0, %2}",
  "vpmulhw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1507[] = {
  "pmulhuw\t{%2, %0|%0, %2}",
  "vpmulhuw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1509[] = {
  "pmuludq\t{%2, %0|%0, %2}",
  "vpmuludq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1511[] = {
  "pmuldq\t{%2, %0|%0, %2}",
  "vpmuldq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1513[] = {
  "pmaddwd\t{%2, %0|%0, %2}",
  "vpmaddwd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1514[] = {
  "pmulld\t{%2, %0|%0, %2}",
  "vpmulld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1515[] = {
  "pmulld\t{%2, %0|%0, %2}",
  "vpmulld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1516[] = {
  "psraw\t{%2, %0|%0, %2}",
  "vpsraw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1517[] = {
  "psraw\t{%2, %0|%0, %2}",
  "vpsraw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1518[] = {
  "psrad\t{%2, %0|%0, %2}",
  "vpsrad\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1519[] = {
  "psrad\t{%2, %0|%0, %2}",
  "vpsrad\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1520[] = {
  "psllw\t{%2, %0|%0, %2}",
  "vpsllw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1521[] = {
  "psrlw\t{%2, %0|%0, %2}",
  "vpsrlw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1522[] = {
  "psllw\t{%2, %0|%0, %2}",
  "vpsllw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1523[] = {
  "psrlw\t{%2, %0|%0, %2}",
  "vpsrlw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1524[] = {
  "pslld\t{%2, %0|%0, %2}",
  "vpslld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1525[] = {
  "psrld\t{%2, %0|%0, %2}",
  "vpsrld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1526[] = {
  "pslld\t{%2, %0|%0, %2}",
  "vpslld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1527[] = {
  "psrld\t{%2, %0|%0, %2}",
  "vpsrld\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1528[] = {
  "psllq\t{%2, %0|%0, %2}",
  "vpsllq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1529[] = {
  "psrlq\t{%2, %0|%0, %2}",
  "vpsrlq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1530[] = {
  "psllq\t{%2, %0|%0, %2}",
  "vpsllq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1531[] = {
  "psrlq\t{%2, %0|%0, %2}",
  "vpsrlq\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1532 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5811 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "pslldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpslldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1533 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5811 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "pslldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpslldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1534 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5848 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "psrldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpsrldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1535 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5848 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[2] = GEN_INT (INTVAL (operands[2]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "psrldq\t{%2, %0|%0, %2}";
    case 1:
      return "vpsrldq\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char * const output_1548[] = {
  "pmaxsb\t{%2, %0|%0, %2}",
  "vpmaxsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1549[] = {
  "pminsb\t{%2, %0|%0, %2}",
  "vpminsb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1550[] = {
  "pmaxsd\t{%2, %0|%0, %2}",
  "vpmaxsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1551[] = {
  "pminsd\t{%2, %0|%0, %2}",
  "vpminsd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1552[] = {
  "pmaxsw\t{%2, %0|%0, %2}",
  "vpmaxsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1553[] = {
  "pminsw\t{%2, %0|%0, %2}",
  "vpminsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1554[] = {
  "pmaxuw\t{%2, %0|%0, %2}",
  "vpmaxuw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1555[] = {
  "pminuw\t{%2, %0|%0, %2}",
  "vpminuw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1556[] = {
  "pmaxud\t{%2, %0|%0, %2}",
  "vpmaxud\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1557[] = {
  "pminud\t{%2, %0|%0, %2}",
  "vpminud\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1558[] = {
  "pmaxub\t{%2, %0|%0, %2}",
  "vpmaxub\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1559[] = {
  "pminub\t{%2, %0|%0, %2}",
  "vpminub\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1564[] = {
  "pcmpeqq\t{%2, %0|%0, %2}",
  "vpcmpeqq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1565[] = {
  "pcmpeqb\t{%2, %0|%0, %2}",
  "vpcmpeqb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1566[] = {
  "pcmpeqw\t{%2, %0|%0, %2}",
  "vpcmpeqw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1567[] = {
  "pcmpeqd\t{%2, %0|%0, %2}",
  "vpcmpeqd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1568[] = {
  "pcmpgtq\t{%2, %0|%0, %2}",
  "vpcmpgtq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1573[] = {
  "pcmpgtb\t{%2, %0|%0, %2}",
  "vpcmpgtb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1574[] = {
  "pcmpgtw\t{%2, %0|%0, %2}",
  "vpcmpgtw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1575[] = {
  "pcmpgtd\t{%2, %0|%0, %2}",
  "vpcmpgtd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1576 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6361 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1577 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6361 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1578 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6361 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1579 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6361 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1580 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6361 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1581 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6361 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1582 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6361 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1583 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6361 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pandn";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andnps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1584 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1585 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1586 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1587 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1588 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1589 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1590 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1591 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1592 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1593 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1594 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1595 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1596 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1597 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1598 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1599 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1600 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1601 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1602 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1603 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1604 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1605 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pand";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "andps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1606 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "por";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "orps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char *
output_1607 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  static char buf[32];
  const char *ops;
  const char *tmp;

  switch (get_attr_mode (insn))
    {
    case MODE_OI:
      gcc_assert (TARGET_AVX2);
    case MODE_TI:
      gcc_assert (TARGET_SSE2);

      tmp = "pxor";
      break;

   case MODE_V8SF:
      gcc_assert (TARGET_AVX);
   case MODE_V4SF:
      gcc_assert (TARGET_SSE);

      tmp = "xorps";
      break;

   default:
      gcc_unreachable ();
   }

  switch (which_alternative)
    {
    case 0:
      ops = "%s\t{%%2, %%0|%%0, %%2}";
      break;
    case 1:
      ops = "v%s\t{%%2, %%1, %%0|%%0, %%1, %%2}";
      break;
    default:
      gcc_unreachable ();
    }

  snprintf (buf, sizeof (buf), ops, tmp);
  return buf;
}
}

static const char * const output_1608[] = {
  "packsswb\t{%2, %0|%0, %2}",
  "vpacksswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1609[] = {
  "packsswb\t{%2, %0|%0, %2}",
  "vpacksswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1610[] = {
  "packssdw\t{%2, %0|%0, %2}",
  "vpackssdw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1611[] = {
  "packssdw\t{%2, %0|%0, %2}",
  "vpackssdw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1612[] = {
  "packuswb\t{%2, %0|%0, %2}",
  "vpackuswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1613[] = {
  "packuswb\t{%2, %0|%0, %2}",
  "vpackuswb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1615[] = {
  "punpckhbw\t{%2, %0|%0, %2}",
  "vpunpckhbw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1617[] = {
  "punpcklbw\t{%2, %0|%0, %2}",
  "vpunpcklbw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1619[] = {
  "punpckhwd\t{%2, %0|%0, %2}",
  "vpunpckhwd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1621[] = {
  "punpcklwd\t{%2, %0|%0, %2}",
  "vpunpcklwd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1623[] = {
  "punpckhdq\t{%2, %0|%0, %2}",
  "vpunpckhdq\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1625[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "vpunpckldq\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1626 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6889 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));

  switch (which_alternative)
    {
    case 0:
      if (GET_MODE_SIZE (QImode) < GET_MODE_SIZE (SImode))
	return "pinsrb\t{%3, %k2, %0|%0, %k2, %3}";
      /* FALLTHRU */
    case 1:
      return "pinsrb\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      if (GET_MODE_SIZE (QImode) < GET_MODE_SIZE (SImode))
	return "vpinsrb\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
      /* FALLTHRU */
    case 3:
      return "vpinsrb\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1627 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6889 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));

  switch (which_alternative)
    {
    case 0:
      if (GET_MODE_SIZE (HImode) < GET_MODE_SIZE (SImode))
	return "pinsrw\t{%3, %k2, %0|%0, %k2, %3}";
      /* FALLTHRU */
    case 1:
      return "pinsrw\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      if (GET_MODE_SIZE (HImode) < GET_MODE_SIZE (SImode))
	return "vpinsrw\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
      /* FALLTHRU */
    case 3:
      return "vpinsrw\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1628 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6889 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));

  switch (which_alternative)
    {
    case 0:
      if (GET_MODE_SIZE (SImode) < GET_MODE_SIZE (SImode))
	return "pinsrd\t{%3, %k2, %0|%0, %k2, %3}";
      /* FALLTHRU */
    case 1:
      return "pinsrd\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      if (GET_MODE_SIZE (SImode) < GET_MODE_SIZE (SImode))
	return "vpinsrd\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
      /* FALLTHRU */
    case 3:
      return "vpinsrd\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1629 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6889 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (exact_log2 (INTVAL (operands[3])));

  switch (which_alternative)
    {
    case 0:
      if (GET_MODE_SIZE (DImode) < GET_MODE_SIZE (SImode))
	return "pinsrq\t{%3, %k2, %0|%0, %k2, %3}";
      /* FALLTHRU */
    case 1:
      return "pinsrq\t{%3, %2, %0|%0, %2, %3}";
    case 2:
      if (GET_MODE_SIZE (DImode) < GET_MODE_SIZE (SImode))
	return "vpinsrq\t{%3, %k2, %1, %0|%0, %1, %k2, %3}";
      /* FALLTHRU */
    case 3:
      return "vpinsrq\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1639 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7066 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshufd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1640 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7105 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshufd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1641 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7165 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshuflw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1642 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7208 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshuflw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1643 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7269 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= (INTVAL (operands[2]) - 4) << 0;
  mask |= (INTVAL (operands[3]) - 4) << 2;
  mask |= (INTVAL (operands[4]) - 4) << 4;
  mask |= (INTVAL (operands[5]) - 4) << 6;
  operands[2] = GEN_INT (mask);

  return "vpshufhw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1644 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7312 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= (INTVAL (operands[2]) - 4) << 0;
  mask |= (INTVAL (operands[3]) - 4) << 2;
  mask |= (INTVAL (operands[4]) - 4) << 4;
  mask |= (INTVAL (operands[5]) - 4) << 6;
  operands[2] = GEN_INT (mask);

  return "%vpshufhw\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_1645[] = {
  "%vmovd\t{%2, %0|%0, %2}",
  "%vmovd\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "movss\t{%2, %0|%0, %2}",
  "vmovss\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1648[] = {
  "#",
  "#",
  "mov{q}\t{%1, %0|%0, %1}",
};

static const char * const output_1650[] = {
  "%vmovhps\t{%1, %0|%0, %1}",
  "psrldq\t{$8, %0|%0, 8}",
  "vpsrldq\t{$8, %1, %0|%0, %1, 8}",
  "%vmovq\t{%H1, %0|%0, %H1}",
  "mov{q}\t{%H1, %0|%0, %H1}",
};

static const char * const output_1651[] = {
  "%vmovhps\t{%1, %0|%0, %1}",
  "psrldq\t{$8, %0|%0, 8}",
  "vpsrldq\t{$8, %1, %0|%0, %1, 8}",
  "%vmovq\t{%H1, %0|%0, %H1}",
  "movhlps\t{%1, %0|%0, %1}",
  "movlps\t{%H1, %0|%0, %H1}",
};

static const char * const output_1652[] = {
  "%vpshufd\t{$0, %1, %0|%0, %1, 0}",
  "vbroadcastss\t{%1, %0|%0, %1}",
  "shufps\t{$0, %0, %0|%0, %0, 0}",
};

static const char * const output_1653[] = {
  "punpcklqdq\t%0, %0",
  "vpunpcklqdq\t{%d1, %0|%0, %d1}",
  "%vmovddup\t{%1, %0|%0, %1}",
  "movlhps\t%0, %0",
};

static const char * const output_1654[] = {
  "pinsrd\t{$1, %2, %0|%0, %2, 1}",
  "vpinsrd\t{$1, %2, %1, %0|%0, %1, %2, 1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "vpunpckldq\t{%2, %1, %0|%0, %1, %2}",
  "%vmovd\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1655[] = {
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1656[] = {
  "unpcklps\t{%2, %0|%0, %2}",
  "movss\t{%1, %0|%0, %1}",
  "punpckldq\t{%2, %0|%0, %2}",
  "movd\t{%1, %0|%0, %1}",
};

static const char * const output_1657[] = {
  "punpcklqdq\t{%2, %0|%0, %2}",
  "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1658[] = {
  "pinsrq\t{$1, %2, %0|%0, %2, 1}",
  "vpinsrq\t{$1, %2, %1, %0|%0, %1, %2, 1}",
  "%vmovq\t{%1, %0|%0, %1}",
  "%vmovd\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "punpcklqdq\t{%2, %0|%0, %2}",
  "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1659[] = {
  "%vmovq\t{%1, %0|%0, %1}",
  "movq2dq\t{%1, %0|%0, %1}",
  "punpcklqdq\t{%2, %0|%0, %2}",
  "vpunpcklqdq\t{%2, %1, %0|%0, %1, %2}",
  "movlhps\t{%2, %0|%0, %2}",
  "movhps\t{%2, %0|%0, %2}",
  "vmovhps\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1660[] = {
  "pavgb\t{%2, %0|%0, %2}",
  "vpavgb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1661[] = {
  "pavgb\t{%2, %0|%0, %2}",
  "vpavgb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1662[] = {
  "pavgw\t{%2, %0|%0, %2}",
  "vpavgw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1663[] = {
  "pavgw\t{%2, %0|%0, %2}",
  "vpavgw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1664[] = {
  "psadbw\t{%2, %0|%0, %2}",
  "vpsadbw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1665[] = {
  "psadbw\t{%2, %0|%0, %2}",
  "vpsadbw\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1672 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7761 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  /* We can't use %^ here due to ASM_OUTPUT_OPCODE processing
     that requires %v to be at the beginning of the opcode name.  */
  if (Pmode != word_mode)
    fputs ("\taddr32", asm_out_file);
  return "%vmaskmovdqu\t{%2, %1|%1, %2}";
}
}

static const char *
output_1673 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7761 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  /* We can't use %^ here due to ASM_OUTPUT_OPCODE processing
     that requires %v to be at the beginning of the opcode name.  */
  if (Pmode != word_mode)
    fputs ("\taddr32", asm_out_file);
  return "%vmaskmovdqu\t{%2, %1|%1, %2}";
}
}

static const char * const output_1684[] = {
  "phaddw\t{%2, %0|%0, %2}",
  "vphaddw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1685[] = {
  "phaddsw\t{%2, %0|%0, %2}",
  "vphaddsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1686[] = {
  "phsubw\t{%2, %0|%0, %2}",
  "vphsubw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1687[] = {
  "phsubsw\t{%2, %0|%0, %2}",
  "vphsubsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1694[] = {
  "phaddd\t{%2, %0|%0, %2}",
  "vphaddd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1695[] = {
  "phsubd\t{%2, %0|%0, %2}",
  "vphsubd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1699[] = {
  "pmaddubsw\t{%2, %0|%0, %2}",
  "vpmaddubsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1701[] = {
  "pmulhrsw\t{%2, %0|%0, %2}",
  "vpmulhrsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1702[] = {
  "pmulhrsw\t{%2, %0|%0, %2}",
  "vpmulhrsw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1704[] = {
  "pshufb\t{%2, %0|%0, %2}",
  "vpshufb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1705[] = {
  "pshufb\t{%2, %0|%0, %2}",
  "vpshufb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1707[] = {
  "psignb\t{%2, %0|%0, %2}",
  "vpsignb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1708[] = {
  "psignb\t{%2, %0|%0, %2}",
  "vpsignb\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1709[] = {
  "psignw\t{%2, %0|%0, %2}",
  "vpsignw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1710[] = {
  "psignw\t{%2, %0|%0, %2}",
  "vpsignw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1711[] = {
  "psignd\t{%2, %0|%0, %2}",
  "vpsignd\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1712[] = {
  "psignd\t{%2, %0|%0, %2}",
  "vpsignd\t{%2, %1, %0|%0, %1, %2}",
};

static const char *
output_1716 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8357 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "palignr\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vpalignr\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1717 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8357 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);

  switch (which_alternative)
    {
    case 0:
      return "palignr\t{%3, %2, %0|%0, %2, %3}";
    case 1:
      return "vpalignr\t{%3, %2, %1, %0|%0, %1, %2, %3}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1718 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8386 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) / 8);
  return "palignr\t{%3, %2, %0|%0, %2, %3}";
}
}

static const char * const output_1736[] = {
  "blendps\t{%3, %2, %0|%0, %2, %3}",
  "vblendps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1737[] = {
  "blendps\t{%3, %2, %0|%0, %2, %3}",
  "vblendps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1738[] = {
  "blendpd\t{%3, %2, %0|%0, %2, %3}",
  "vblendpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1739[] = {
  "blendpd\t{%3, %2, %0|%0, %2, %3}",
  "vblendpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1740[] = {
  "blendvps\t{%3, %2, %0|%0, %2, %3}",
  "vblendvps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1741[] = {
  "blendvps\t{%3, %2, %0|%0, %2, %3}",
  "vblendvps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1742[] = {
  "blendvpd\t{%3, %2, %0|%0, %2, %3}",
  "vblendvpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1743[] = {
  "blendvpd\t{%3, %2, %0|%0, %2, %3}",
  "vblendvpd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1744[] = {
  "dpps\t{%3, %2, %0|%0, %2, %3}",
  "vdpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1745[] = {
  "dpps\t{%3, %2, %0|%0, %2, %3}",
  "vdpps\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1746[] = {
  "dppd\t{%3, %2, %0|%0, %2, %3}",
  "vdppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1747[] = {
  "dppd\t{%3, %2, %0|%0, %2, %3}",
  "vdppd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1750[] = {
  "mpsadbw\t{%3, %2, %0|%0, %2, %3}",
  "vmpsadbw\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1751[] = {
  "mpsadbw\t{%3, %2, %0|%0, %2, %3}",
  "vmpsadbw\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1753[] = {
  "packusdw\t{%2, %0|%0, %2}",
  "vpackusdw\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1754[] = {
  "pblendvb\t{%3, %2, %0|%0, %2, %3}",
  "vpblendvb\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1755[] = {
  "pblendvb\t{%3, %2, %0|%0, %2, %3}",
  "vpblendvb\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1756[] = {
  "pblendw\t{%3, %2, %0|%0, %2, %3}",
  "vpblendw\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char *
output_1757 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8681 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[3] = GEN_INT (INTVAL (operands[3]) & 0xff);
  return "vpblendw\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char * const output_1795[] = {
  "roundss\t{%3, %2, %0|%0, %2, %3}",
  "vroundss\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1796[] = {
  "roundsd\t{%3, %2, %0|%0, %2, %3}",
  "vroundsd\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char * const output_1801[] = {
  "%vpcmpestrm\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestrm\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestri\t{%6, %4, %2|%2, %4, %6}",
  "%vpcmpestri\t{%6, %4, %2|%2, %4, %6}",
};

static const char * const output_1806[] = {
  "%vpcmpistrm\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistrm\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistri\t{%4, %3, %2|%2, %3, %4}",
  "%vpcmpistri\t{%4, %3, %2|%2, %3, %4}",
};

static const char *
output_1854 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9944 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[3]
    = GEN_INT (GET_MODE_BITSIZE (QImode) - INTVAL (operands[2]));
  return "vprotb\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1855 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9944 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[3]
    = GEN_INT (GET_MODE_BITSIZE (HImode) - INTVAL (operands[2]));
  return "vprotw\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1856 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9944 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[3]
    = GEN_INT (GET_MODE_BITSIZE (SImode) - INTVAL (operands[2]));
  return "vprotd\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1857 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9944 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  operands[3]
    = GEN_INT (GET_MODE_BITSIZE (DImode) - INTVAL (operands[2]));
  return "vprotq\t{%3, %1, %0|%0, %1, %3}";
}
}

static const char *
output_1890 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10299 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtrueb\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalseb\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_1891 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10299 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtruew\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalsew\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_1892 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10299 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtrued\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalsed\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char *
output_1893 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10299 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  return ((INTVAL (operands[3]) != 0)
	  ? "vpcomtrueq\t{%2, %1, %0|%0, %1, %2}"
	  : "vpcomfalseq\t{%2, %1, %0|%0, %1, %2}");
}
}

static const char * const output_1898[] = {
  "aesenc\t{%2, %0|%0, %2}",
  "vaesenc\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1899[] = {
  "aesenclast\t{%2, %0|%0, %2}",
  "vaesenclast\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1900[] = {
  "aesdec\t{%2, %0|%0, %2}",
  "vaesdec\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1901[] = {
  "aesdeclast\t{%2, %0|%0, %2}",
  "vaesdeclast\t{%2, %1, %0|%0, %1, %2}",
};

static const char * const output_1904[] = {
  "pclmulqdq\t{%3, %2, %0|%0, %2, %3}",
  "vpclmulqdq\t{%3, %2, %1, %0|%0, %1, %2, %3}",
};

static const char *
output_1921 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10544 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);
  return "vpermq\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1922 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10544 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = 0;
  mask |= INTVAL (operands[2]) << 0;
  mask |= INTVAL (operands[3]) << 2;
  mask |= INTVAL (operands[4]) << 4;
  mask |= INTVAL (operands[5]) << 6;
  operands[2] = GEN_INT (mask);
  return "vpermpd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char * const output_1925[] = {
  "vbroadcastss\t{%1, %0|%0, %1}",
  "vbroadcastss\t{%x1, %0|%0, %x1}",
  "#",
};

static const char * const output_1926[] = {
  "vbroadcastss\t{%1, %0|%0, %1}",
  "vbroadcastss\t{%x1, %0|%0, %x1}",
  "#",
};

static const char * const output_1927[] = {
  "vbroadcastsd\t{%1, %0|%0, %1}",
  "vbroadcastsd\t{%x1, %0|%0, %x1}",
  "#",
};

static const char * const output_1928[] = {
  "vbroadcastsd\t{%1, %0|%0, %1}",
  "vbroadcastsd\t{%x1, %0|%0, %x1}",
  "#",
};

static const char * const output_1933[] = {
  "vbroadcast%~128\t{%1, %0|%0, %1}",
  "vinsert%~128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2%~128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1934[] = {
  "vbroadcast%~128\t{%1, %0|%0, %1}",
  "vinsert%~128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2%~128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1935[] = {
  "vbroadcast%~128\t{%1, %0|%0, %1}",
  "vinsert%~128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2%~128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1936[] = {
  "vbroadcast%~128\t{%1, %0|%0, %1}",
  "vinsert%~128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2%~128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1937[] = {
  "vbroadcastf128\t{%1, %0|%0, %1}",
  "vinsertf128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2f128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char * const output_1938[] = {
  "vbroadcastf128\t{%1, %0|%0, %1}",
  "vinsertf128\t{$1, %1, %0, %0|%0, %0, %1, 1}",
  "vperm2f128\t{$0, %t1, %t1, %0|%0, %t1, %t1, 0}",
};

static const char *
output_1939 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10650 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int elt = INTVAL (operands[3]);
  switch (which_alternative)
    {
    case 0:
    case 1:
      operands[1] = adjust_address_nv (operands[1], SFmode, elt * 4);
      return "vbroadcastss\t{%1, %0|%0, %1}";
    case 2:
      operands[2] = GEN_INT (elt * 0x55);
      return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_1942 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10770 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V8SFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1943 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10770 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V4SFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilps\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1944 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10770 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V4DFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilpd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1945 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10770 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = avx_vpermilp_parallel (operands[2], V2DFmode) - 1;
  operands[2] = GEN_INT (mask);
  return "vpermilpd\t{%2, %1, %0|%0, %1, %2}";
}
}

static const char *
output_1953 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10857 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = avx_vperm2f128_parallel (operands[3], V8SImode) - 1;
  if (mask == 0x12)
    return "vinsert%~128\t{$0, %x2, %1, %0|%0, %1, %x2, 0}";
  if (mask == 0x20)
    return "vinsert%~128\t{$1, %x2, %1, %0|%0, %1, %x2, 1}";
  operands[3] = GEN_INT (mask);
  return "vperm2%~128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1954 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10857 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = avx_vperm2f128_parallel (operands[3], V8SFmode) - 1;
  if (mask == 0x12)
    return "vinsertf128\t{$0, %x2, %1, %0|%0, %1, %x2, 0}";
  if (mask == 0x20)
    return "vinsertf128\t{$1, %x2, %1, %0|%0, %1, %x2, 1}";
  operands[3] = GEN_INT (mask);
  return "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1955 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10857 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  int mask = avx_vperm2f128_parallel (operands[3], V4DFmode) - 1;
  if (mask == 0x12)
    return "vinsertf128\t{$0, %x2, %1, %0|%0, %1, %x2, 0}";
  if (mask == 0x20)
    return "vinsertf128\t{$1, %x2, %1, %0|%0, %1, %x2, 1}";
  operands[3] = GEN_INT (mask);
  return "vperm2f128\t{%3, %2, %1, %0|%0, %1, %2, %3}";
}
}

static const char *
output_1999 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11204 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsert%~128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2000 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11204 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsert%~128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2001 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11204 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsert%~128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2002 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11204 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsert%~128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2003 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11204 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2004 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11204 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  switch (which_alternative)
    {
    case 0:
      return "vinsertf128\t{$0x1, %2, %t1, %0|%0, %t1, %2, 0x1}";
    case 1:
      switch (get_attr_mode (insn))
	{
	case MODE_V8SF:
	  return "vmovaps\t{%1, %x0|%x0, %1}";
	case MODE_V4DF:
	  return "vmovapd\t{%1, %x0|%x0, %1}";
	default:
	  return "vmovdqa\t{%1, %x0|%x0, %1}";
	}
    default:
      gcc_unreachable ();
    }
}
}

static const char *
output_2059 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V2DImode != V2DImode)
    return "vpgatherqq\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqq\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2060 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V2DImode != V2DImode)
    return "vpgatherqq\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqq\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2061 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V2DFmode != V2DFmode)
    return "vgatherqpd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqpd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2062 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V2DFmode != V2DFmode)
    return "vgatherqpd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqpd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2063 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V4DImode != V4DImode)
    return "vpgatherqq\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqq\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2064 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V4DImode != V4DImode)
    return "vpgatherqq\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqq\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2065 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V4DFmode != V4DFmode)
    return "vgatherqpd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqpd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2066 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V4DFmode != V4DFmode)
    return "vgatherqpd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqpd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2067 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V4SImode != V4SImode)
    return "vpgatherqd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2068 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V4SImode != V4SImode)
    return "vpgatherqd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2069 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V4SFmode != V4SFmode)
    return "vgatherqps\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqps\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2070 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V4SFmode != V4SFmode)
    return "vgatherqps\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqps\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2071 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V8SImode != V4SImode)
    return "vpgatherqd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2072 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V8SImode != V4SImode)
    return "vpgatherqd\t{%4, %6, %x0|%x0, %6, %4}";
  return "vpgatherqd\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2073 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V8SFmode != V4SFmode)
    return "vgatherqps\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqps\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2074 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11446 "../../gcc-4.8.2/gcc/config/i386/sse.md"
{
  if (V8SFmode != V4SFmode)
    return "vgatherqps\t{%4, %6, %x0|%x0, %6, %4}";
  return "vgatherqps\t{%4, %6, %0|%0, %6, %4}";
}
}

static const char *
output_2094 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 302 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  gcc_assert (find_regno_note (insn, REG_DEAD, FIRST_STACK_REG) != NULL_RTX);

  return "fistp%Z0\t%0";
}
}

static const char *
output_2099 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 428 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  bool swap = REGNO (operands[5]) != BX_REG;
  const char *xchg = "xchg{l}\t%%ebx, %5";

  if (swap)
    output_asm_insn (xchg, operands);
  output_asm_insn ("lock{%;} %K7cmpxchg8b\t%2", operands);
  if (swap)
    output_asm_insn (xchg, operands);

  return "";
}
}

static const char *
output_2100 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 428 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  bool swap = REGNO (operands[5]) != BX_REG;
  const char *xchg = "xchg{q}\t%%rbx, %5";

  if (swap)
    output_asm_insn (xchg, operands);
  output_asm_insn ("lock{%;} %K7cmpxchg16b\t%2", operands);
  if (swap)
    output_asm_insn (xchg, operands);

  return "";
}
}

static const char *
output_2105 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 501 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], QImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K3inc{b}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K3dec{b}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], QImode))
    return "lock{%;} %K3sub{b}\t{%1, %0|%0, %1}";

  return "lock{%;} %K3add{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_2106 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 501 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], HImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K3inc{w}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K3dec{w}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], HImode))
    return "lock{%;} %K3sub{w}\t{%1, %0|%0, %1}";

  return "lock{%;} %K3add{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_2107 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 501 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], SImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K3inc{l}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K3dec{l}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], SImode))
    return "lock{%;} %K3sub{l}\t{%1, %0|%0, %1}";

  return "lock{%;} %K3add{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_2108 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 501 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], DImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K3inc{q}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K3dec{q}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], DImode))
    return "lock{%;} %K3sub{q}\t{%1, %0|%0, %1}";

  return "lock{%;} %K3add{q}\t{%1, %0|%0, %1}";
}
}

static const char *
output_2113 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 541 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], QImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2inc{b}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2dec{b}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], QImode))
    return "lock{%;} %K2sub{b}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2add{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_2114 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 541 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], HImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2inc{w}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2dec{w}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], HImode))
    return "lock{%;} %K2sub{w}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2add{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_2115 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 541 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], SImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2inc{l}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2dec{l}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], SImode))
    return "lock{%;} %K2sub{l}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2add{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_2116 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 541 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], DImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2inc{q}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2dec{q}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], DImode))
    return "lock{%;} %K2sub{q}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2add{q}\t{%1, %0|%0, %1}";
}
}

static const char *
output_2117 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 568 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], QImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2dec{b}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2inc{b}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], QImode))
    return "lock{%;} %K2add{b}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2sub{b}\t{%1, %0|%0, %1}";
}
}

static const char *
output_2118 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 568 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], HImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2dec{w}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2inc{w}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], HImode))
    return "lock{%;} %K2add{w}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2sub{w}\t{%1, %0|%0, %1}";
}
}

static const char *
output_2119 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 568 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], SImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2dec{l}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2inc{l}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], SImode))
    return "lock{%;} %K2add{l}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2sub{l}\t{%1, %0|%0, %1}";
}
}

static const char *
output_2120 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 568 "../../gcc-4.8.2/gcc/config/i386/sync.md"
{
  if (incdec_operand (operands[1], DImode))
    {
      if (operands[1] == const1_rtx)
	return "lock{%;} %K2dec{q}\t%0";
      else
	{
	  gcc_assert (operands[1] == constm1_rtx);
	  return "lock{%;} %K2inc{q}\t%0";
	}
    }

  if (x86_maybe_negate_const_int (&operands[1], DImode))
    return "lock{%;} %K2add{q}\t{%1, %0|%0, %1}";

  return "lock{%;} %K2sub{q}\t{%1, %0|%0, %1}";
}
}



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "q,?mq",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,?mr",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,?mr",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,?mr",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Q",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Qn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "f,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "f,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "riF*o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "riF*o",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<,!<",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "re*m,n",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "ri*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=X",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "=X",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_no_elim_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "=X",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_no_elim_operand,
    "re",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "=<",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "re*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "re*m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    pop_operand,
    ">",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r*m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    pop_operand,
    ">",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,xm,x",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=!r,o,x,x,m",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "riFo,re,C,xm,x",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,xm,x",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,*y,m*y,?*y,?r,?*Ym,*x,m,*x,*x,?r,?*Yi,?*x,?*Ym",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Z,rem,i,re,C,*y,m,*Ym,r,C,*x,*x,m,*Yi,r,*Ym,*x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,*y,m*y,*y,*x,m,*x,*x,*x,m,*x,*x,?*x,?*Ym",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "riFo,riF,C,*y,m,C,*x,*x,m,C,*x,*x,m,*Ym,*x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,*y,*y,?rm,?*y,*x,*x,?r,m,?*Yi,*x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "g,re,C,*y,*y,rm,C,*x,*Yi,*x,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "r,rn,rm,rn",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=q,q,q,r,r,?r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "q,qn,qm,q,rn,qm,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "a,rn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "a,rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "a,re",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "a,re",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+q",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+rm,r",
    HImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+q",
    QImode,
    1,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    HImode,
    1,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=R",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=R",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Q,?R",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Qm,?r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=R",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=Qm,?R",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Qn",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Qn",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "Qmn",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "Q",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "=<,<,<",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "x,Fo,*r",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<,<",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "f,ro",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<,<",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "f,*rFo",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<,<,<",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "f,Yd*rFm,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=<,<,<",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "f,Yd*rFo,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "=X,X,X",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_no_elim_operand,
    "f,rF,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "=<,<,<",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_no_elim_operand,
    "f,rFm,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m,?*r,!o",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "C,xm,x,*roF,*rC",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "C,xm,x",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,?Yx*r,!o",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "fm,f,G,Yx*roF,Yx*rC",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,?Yx*r,!o",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "fm,f,G,Yx*roF,Yx*rF",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=Yf*f,m,Yf*f,?r,?m,?r,?r,x,x,x,m,Yi,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Yf*fm,Yf*f,G,rm,rC,C,F,C,x,m,x,r,Yi",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=Yf*f,m,Yf*f,?Yd*r,!o,x,x,x,m,*x,*x,*x,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Yf*fm,Yf*f,G,Yd*roF,Yd*rF,C,x,m,x,C,*x,m,*x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=Yf*f,m,Yf*f,?r,?m,x,x,x,m,!*y,!m,!*y,?Yi,?r,!*Ym,!r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "Yf*fm,Yf*f,G,rmF,rF,C,x,m,x,m,*y,*y,r,Yi,r,*Ym",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "+f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "+f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,o,?*Ym,?!*y,?*Yi,?*x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_zext_general_operand,
    "rmWz,0,r,m,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=ro,?r,?o,?*Ym,?!*y,?*Yi,?*x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm,r,r,m,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,?&q",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,?&r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,?&q",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=*a,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "*0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=*A,r,?r,?*o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,X,X,&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=*a,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "*0,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=*a,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "*0,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=*a,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "*0,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,f,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=fm,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "f,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,?f,?x,?*r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "f,xm,f,f,f",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,X,m,m,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?x,?*r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "f,f,f,f",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=m,?f,?x,?*r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f,?x,?*r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m,m,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&x,&x",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "m,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&x,&x",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "m,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f,x,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r,r,m,!x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m,m,X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f,x,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r,r,m,!x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m,m,X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m,m,X",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r,r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m,m,X",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m,m,X",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r,r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m,m,X",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,!x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,!x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,X",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,X",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,X",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,X",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,x",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    lea_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    lea_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "ronF,rnF",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "roe,re",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,0,le",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,0,le",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,r,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,0,le",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r,Yp",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r,Yp",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm,0,ln",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,q,r,r,Yp",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,q,0,r,Yp",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm,0,rn,0,ln",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rmn,rn,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=q,q",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r,r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rmn,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r,r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r,r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=rm",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_immediate_operand,
    "e",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=qm",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=rm",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=rm",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Qn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "%0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const248_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "ri",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const248_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "l",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "ronF,rnF",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "roe,re",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_general_operand,
    "rme",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_general_operand,
    "rme",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rmn",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "K,e,mr",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "K,e,mr",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "K,e,mr",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%rm,rm,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "K,n,mr",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%d",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%d",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%d,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,A",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%d,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=A",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%a",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=1",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%a",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=1",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%a",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=1",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&d",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "1",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,!*a,r,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_szext_general_operand,
    "Z,Z,e,e,re",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "n,n,qn,n",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,q,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "n,n,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "n,n,rn",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%!*a,r,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "e,e,re",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,rm,r,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0,qm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_szext_general_operand,
    "Z,re,rm,L",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,Ya",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "re,rm,L",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,Ya",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rn,rm,L",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qmn,rn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "qn,qmn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_szext_general_operand,
    "Z,rem,re",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm,*r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn,n",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "rmn,rn",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "qmn,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "rme,re",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=q,m,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn,rn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_zext_immediate_operand,
    "Z",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "+q,m",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_zext_immediate_operand,
    "Z",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "qmn,qn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "=q",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "qmn",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=ro",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=ro",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,f,!r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,0,X,X",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,f,!r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,0,X,X",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,!r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xm,0,X",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,!r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "xm,0,X",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,!r",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,0",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    TFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xmC",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xmC",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xmC",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1,x,1,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1,x,1,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=x,x,x,x,x",
    TFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "x,0,0,x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1,x,1,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "X,xm,xm,0,0",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,xm,1,xm,1",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=&r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_pm1_operand,
    "n,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Jc,Jc",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r,r",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_pm1_operand,
    "n,0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Oc,Oc",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "+r*m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Jc",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "+r*m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Ic",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,l,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,M,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,l,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cJ,M,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,l,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,M,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,Yp",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,l",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=qm,r,Yp",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0,l",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,cI,M",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_1_to_63_operand,
    "J",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_63_operand,
    "J",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Jc",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "Oc",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=*d,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "*a,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=*d,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "*a,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=*d,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "*a,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cJ,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_63_operand,
    "J",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "J",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cJ,J",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "cI,I",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_63_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "rN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "rN",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=q",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=q",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPUmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPUmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    CCFPUmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=a,a",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    indirect_branch_operand,
    "rw",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    indirect_branch_operand,
    "rw",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    indirect_branch_operand,
    "rw",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    indirect_branch_operand,
    "rw",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "lzw",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "rzw",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "Uz",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "Uz",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    call_insn_operand,
    "lzm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "Uz",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    sibcall_insn_operand,
    "Uz",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    BLKmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&q",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "n",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,m,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,m,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+Q,r",
    HImode,
    1,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=Q",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=&Q",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=Q",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "z",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "z",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "z",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "z",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "z",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "z",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "z",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=d",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=c",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_modbase_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    tls_modbase_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,fm,0,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,fm,0,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,fm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,fm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "F",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "F",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_double_operand,
    "F",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "u",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=2",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "2",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "2",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&c",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r,0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=f,f,r,r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f,&r,&r",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=f,f,r,r",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "re,le",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "re,le",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    address_operand,
    "p",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    address_operand,
    "p",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    CCZmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "A",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "+a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm,r,!?y,!y,!?y,m,!y,*x,x,x,m,r,Yi",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,!y,m,!?y,*x,!y,C,xm,x,Yi,r",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,!?y,!y,!?y,m,!y,*x,x,x,m,r,Yi",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,!y,m,!?y,*x,!y,C,xm,x,Yi,r",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,!?y,!y,!?y,m,!y,*x,x,x,m,r,Yi",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,!y,m,!?y,*x,!y,C,xm,x,Yi,r",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,!?y,!y,!?y,m,!y,*x,x,x,m,r,Yi",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,!y,m,!?y,*x,!y,C,xm,x,Yi,r",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!y,!?y,m,!y,*x,*x,*x,m,*x,*x,*x,m,r,m",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,!y,m,!?y,*x,!y,C,*xm,*x,C,*x,m,*x,irm,r",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!y,!?y,m,!y,*x,*x,*x,m,*x,*x,*x,m,r,m",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,!y,m,!?y,*x,!y,C,*xm,*x,C,*x,m,*x,irm,r",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!y,!?y,m,!y,*x,*x,*x,m,*x,*x,*x,m,r,m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,!y,m,!?y,*x,!y,C,*xm,*x,C,*x,m,*x,irm,r",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!y,!?y,m,!y,*x,*x,*x,m,*x,*x,*x,m,r,m",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,!y,m,!?y,*x,!y,C,*xm,*x,C,*x,m,*x,irm,r",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,!?y,!y,!?y,m,!y,*x,x,x,x,m,r,Yi",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "Cr,m,C,!y,m,!?y,*x,!y,C,x,m,x,Yi,r",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=!?y,!y,!?y,m,!y,*x,*x,*x,*x,m,r,m",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,!y,m,!?y,*x,!y,C,*x,m,*x,irm,r",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym,0",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,rm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,y,m,f,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,ym,y,m,m",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,x,y,x,f,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0,o,o,o,o",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "yN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y,y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "ym,C",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,y,m,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,ym,y,m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=y,x,x,x,y,x,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,0,x,0,o,o,o",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    emms_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V1TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V1TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_sse_const_operand,
    "C,xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=?x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=&x,X",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,xm,x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V8SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,xm,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V4SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,xm,x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V4DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,xm,x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,0,xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V2DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V8SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V2DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V8SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_comparison_operator,
    "",
    V2DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "%0,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x,x,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,xm,x,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,0,xm,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x,x,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,xm,x,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,0,xm,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x,x,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,xm,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,0,xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x,x,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,xm,x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,0,xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x,x,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,xm,x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,0,xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,0,x,x,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,xm,x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm,0,xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "y,m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,x,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o,o,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,o",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,x,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m,m,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,o",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,x,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "m,m,x,x,x",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,0,x,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,m,m,x",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,0",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x,*y,*y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x,0,x,m,0,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "x,x,m,m,C,*ym,C",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,m,0,m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0,x",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,x,m,m",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,x,x,x,m,m,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,C,C,C,0,x,0,x,0,0,0",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "x,m,*r,m,x,x,*rm,*rm,!x,!*re,!*fF",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,x,x,x,m,m,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,C,C,C,0,x,0,x,0,0,0",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "x,m,*r,m,x,x,*rm,*rm,!x,!*re,!*fF",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m,f,r",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x,m,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=rm,x,x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "n,n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,*r,f",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "o,o,o",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "n,n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,o,o,o,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,1,0,x,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,1",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,o",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,m,0,x,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,1,m,m,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_5_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_6_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_2_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=m,x,x,x,*f,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,0,x,o,o,o",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,o",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x,*f,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m,m,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,o,o,o",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,x,0,0,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "m,m,x,x,x,*f,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,x,x,x,x,m,m,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,0,x,0,x,x,o,o,0,0,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "m,m,m,x,x,0,0,x,x,*f,r",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,x,x,m,x,x,x,o",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "0,x,0,x,0,x,o,o,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,x,m,m,x,0,0,x,0",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,xm",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x,x,x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x,m,0,x,m,0,0",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "x,x,1,m,m,C,x,m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "xN,xN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "xN,xN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "xN,xN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "xN,xN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "xN,xN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "xN,xN",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2TImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_mul_8_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V1TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V1TImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_mul_8_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,r,m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,r,m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,r,m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,0,x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "r,m,r,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_8_to_11_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_12_to_15_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_4_to_7_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,Yi,x,x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_0_operand,
    "C,C,C,0,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,r,m,x,x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=xm,r",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,Yi",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "o",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=xm,*r,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,Yi,o",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=xm",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=m,x,x,x,r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,0,x,o,o",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=m,x,x,x,x,x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,0,x,o,x,o",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,0",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x,m,0",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,x,x,*y,*y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x,0,x,rm,0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "rm,rm,x,x,C,*ym,C",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,rm,0,rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,*y,*y",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,m,0,*rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    reg_or_0_operand,
    "x,C,*y,C",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x,x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x,0,0,x",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,x,x,m,m",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x,Yi,!x,x,x,x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "0,x,xm,r,*y,0,x,0,x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "rm,rm,C,C,C,x,x,m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,?x,x,x,x,x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,*y,0,x,0,0,x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    vector_move_operand,
    "C,C,x,x,x,m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    const1_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const1_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    const1_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const1_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "D",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    const1_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2TImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2TImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_mul_8_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yz,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yz,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yz,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yz,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%0,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yz,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "Yz,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    avx2_pblendw_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_15_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=Yz,Yz,X,X",
    V16QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,c,c",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "x,x,x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "a,a,a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "d,d,d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "n,n,n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yz,Yz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=Yz",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=c,c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=Yz,Yz,X,X",
    V16QImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "=X,X,c,c",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "x,x,x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m,x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n,n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_7_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_31_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_63_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "x,m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const0_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_int_operator,
    "",
    V16QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_int_operator,
    "",
    V8HImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_int_operator,
    "",
    V4SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_int_operator,
    "",
    V2DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_uns_operator,
    "",
    V16QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_uns_operator,
    "",
    V8HImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_uns_operator,
    "",
    V4SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_uns_operator,
    "",
    V2DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "%x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "0,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm,xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n,n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vzeroall_operation,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,x,?x",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,x,?x",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,x,?x",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,x,?x",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,0,?x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,o,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "C,n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,o,?x",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "C,n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x,x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "m,o,?x",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "C,n,n",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xm,C",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xm,C",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xm,C",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xm,C",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xm,C",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x,x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x,x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "xm,C",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=x",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "N",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "N",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=xm",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "N",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    DFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SImode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=&x",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    vsib_address_operand,
    "p",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand,
    "n",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_mem_operator,
    "",
    SFmode,
    0,
    1,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m,?r",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "m,m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=X,X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,xf,xf",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "qn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_nonmemory_operand,
    "re",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_nonmemory_operand,
    "re",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=m,m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "x,m,?r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "=X,X,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "=X,xf,xf",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "q",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=a,a",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    cmpxchg8b_pic_memory_operand,
    "+m,m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b,!*r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c,c",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,&5",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=a,a",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=d,d",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    cmpxchg8b_pic_memory_operand,
    "+m,m",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0,0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "1,1",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "b,!*r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "c,c",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "=X,&5",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "=q",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=q",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "qn",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "rn",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "re",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "+m",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "re",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    push_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    push_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    OImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    CDImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    CDImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "=m",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=&r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "m",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    1,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    sse_reg_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    any_fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    any_fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    push_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    any_fp_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "x",
    SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "x",
    SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "x",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "x",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    fp_register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    fp_register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    fp_register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    lea_address_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    lea_address_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_szext_general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_szext_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_szext_general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_zext_immediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    absneg_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    vector_move_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    TFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    ashldi_input_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    reg_or_pm1_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    index_register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_31_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    const_1_to_63_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_63_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    0,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    bt_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_fp_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    ix86_swapped_fp_comparison_operator,
    "",
    CCFPmode,
    0,
    1,
    0,
    0
  },
  {
    float_operator,
    "",
    XFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    indirect_branch_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    q_regs_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    q_regs_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    constant_call_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    tls_modbase_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    tls_symbolic_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    tls_modbase_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "",
    XFmode,
    0,
    0,
    0,
    0
  },
  {
     register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
     register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_carry_flag_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    0,
    1,
    0
  },
  {
    register_and_not_any_fp_reg_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_and_not_any_fp_reg_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    SFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_and_not_any_fp_reg_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    fp_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    ordered_comparison_operator,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    promotable_binary_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    aligned_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    push_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    push_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    push_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    push_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    SFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    flags_reg_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    compare_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    commutative_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    commutative_operator,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    plusminuslogic_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    plusminuslogic_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    plusminuslogic_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    x86_64_nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    plusminuslogic_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    plusminuslogic_operator,
    "",
    QImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    plusminuslogic_operator,
    "",
    HImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    plusminuslogic_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    plusminuslogic_operator,
    "",
    DImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    plusminuslogic_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    plusminuslogic_operator,
    "",
    SImode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const0_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    1,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const359_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const359_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const359_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const359_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    x86_64_general_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0,
    0,
    0
  },
  {
    address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V1DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V1TImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    zero_extended_scalar_load_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    zero_extended_scalar_load_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V1TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V8SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V4SFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V4DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    absneg_operator,
    "",
    V2DFmode,
    0,
    1,
    0,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_3_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "x",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "xm",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_mul_8_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_or_const_vector_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_3_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_15_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    avx_vbroadcast_operand,
    "",
    VOIDmode,
    0,
    1,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    1
  },
  {
    const_0_to_1_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V32QImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V16HImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const_0_to_255_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V2DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V2DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V2DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4DImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4DFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V2DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V4SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V8SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SImode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V8SImode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    V8SFmode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    vsib_address_operand,
    "",
    VOIDmode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    V4DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    V4SFmode,
    0,
    0,
    1,
    0
  },
  {
    const1248_operand ,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    scratch_operand,
    "",
    V8SFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    scratch_operand,
    "",
    DFmode,
    0,
    0,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    TImode,
    0,
    0,
    1,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    TImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    0,
    1,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    0,
    1,
    0
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    0,
    1,
    0
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data_d insn_data[] = 
{
  /* <internal>:0 */
  {
    "*placeholder_for_nothing",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { 0 },
#else
    { 0, 0, 0 },
#endif
    { 0 },
    &operand_data[0],
    0,
    0,
    0,
    0,
    0
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1000 */
  {
    "*cmpqi_ccno_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_1 },
#else
    { 0, output_1, 0 },
#endif
    { 0 },
    &operand_data[1],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1000 */
  {
    "*cmphi_ccno_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_2 },
#else
    { 0, output_2, 0 },
#endif
    { 0 },
    &operand_data[3],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1000 */
  {
    "*cmpsi_ccno_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_3 },
#else
    { 0, output_3, 0 },
#endif
    { 0 },
    &operand_data[5],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1000 */
  {
    "*cmpdi_ccno_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_4 },
#else
    { 0, output_4, 0 },
#endif
    { 0 },
    &operand_data[7],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1012 */
  {
    "*cmpqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[9],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1012 */
  {
    "*cmphi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[11],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1012 */
  {
    "*cmpsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[13],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1012 */
  {
    "*cmpdi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[15],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1021 */
  {
    "*cmpqi_minus_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[9],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1021 */
  {
    "*cmphi_minus_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[11],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1021 */
  {
    "*cmpsi_minus_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[13],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1021 */
  {
    "*cmpdi_minus_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[15],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1032 */
  {
    "*cmpqi_ext_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[17],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1046 */
  {
    "*cmpqi_ext_1_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %0|%0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[19],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1060 */
  {
    "*cmpqi_ext_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "test{b}\t%h0, %h0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[20],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1085 */
  {
    "*cmpqi_ext_3_insn",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[22],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1100 */
  {
    "*cmpqi_ext_3_insn_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %h0|%h0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[24],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1115 */
  {
    "*cmpqi_ext_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[26],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1238 */
  {
    "*cmpsf_0_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_19 },
#else
    { 0, 0, output_19 },
#endif
    { 0 },
    &operand_data[28],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1238 */
  {
    "*cmpdf_0_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_20 },
#else
    { 0, 0, output_20 },
#endif
    { 0 },
    &operand_data[31],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1238 */
  {
    "*cmpxf_0_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_21 },
#else
    { 0, 0, output_21 },
#endif
    { 0 },
    &operand_data[34],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1251 */
  {
    "*cmpsf_0_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[28],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1251 */
  {
    "*cmpdf_0_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[31],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1251 */
  {
    "*cmpxf_0_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[34],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1271 */
  {
    "*cmpxf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_25 },
#else
    { 0, 0, output_25 },
#endif
    { 0 },
    &operand_data[37],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1284 */
  {
    "*cmpxf_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1304 */
  {
    "*cmpsf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_27 },
#else
    { 0, 0, output_27 },
#endif
    { 0 },
    &operand_data[40],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1304 */
  {
    "*cmpdf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_28 },
#else
    { 0, 0, output_28 },
#endif
    { 0 },
    &operand_data[43],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1317 */
  {
    "*cmpsf_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[40],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1317 */
  {
    "*cmpdf_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[43],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1337 */
  {
    "*cmpusf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_31 },
#else
    { 0, 0, output_31 },
#endif
    { 0 },
    &operand_data[46],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1337 */
  {
    "*cmpudf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_32 },
#else
    { 0, 0, output_32 },
#endif
    { 0 },
    &operand_data[49],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1337 */
  {
    "*cmpuxf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    { 0 },
    &operand_data[37],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1350 */
  {
    "*cmpusf_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[46],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1350 */
  {
    "*cmpudf_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[49],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1350 */
  {
    "*cmpuxf_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[37],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1370 */
  {
    "*cmpsf_hi_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_37 },
#else
    { 0, 0, output_37 },
#endif
    { 0 },
    &operand_data[52],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1370 */
  {
    "*cmpdf_hi_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_38 },
#else
    { 0, 0, output_38 },
#endif
    { 0 },
    &operand_data[56],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1370 */
  {
    "*cmpxf_hi_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_39 },
#else
    { 0, 0, output_39 },
#endif
    { 0 },
    &operand_data[60],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1370 */
  {
    "*cmpsf_si_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_40 },
#else
    { 0, 0, output_40 },
#endif
    { 0 },
    &operand_data[64],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1370 */
  {
    "*cmpdf_si_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_41 },
#else
    { 0, 0, output_41 },
#endif
    { 0 },
    &operand_data[68],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1370 */
  {
    "*cmpxf_si_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_42 },
#else
    { 0, 0, output_42 },
#endif
    { 0 },
    &operand_data[72],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1387 */
  {
    "*cmpsf_hi_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[52],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1387 */
  {
    "*cmpdf_hi_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[56],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1387 */
  {
    "*cmpxf_hi_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[60],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1387 */
  {
    "*cmpsf_si_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[64],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1387 */
  {
    "*cmpdf_si_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[68],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1387 */
  {
    "*cmpxf_si_cc_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[72],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1416 */
  {
    "x86_fnstsw_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnstsw\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_x86_fnstsw_1 },
    &operand_data[28],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1429 */
  {
    "x86_sahf_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_50 },
#else
    { 0, 0, output_50 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_x86_sahf_1 },
    &operand_data[76],
    1,
    1,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1455 */
  {
    "*cmpisf_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_51 },
#else
    { 0, 0, output_51 },
#endif
    { 0 },
    &operand_data[77],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1455 */
  {
    "*cmpidf_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_52 },
#else
    { 0, 0, output_52 },
#endif
    { 0 },
    &operand_data[79],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1455 */
  {
    "*cmpiusf_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_53 },
#else
    { 0, 0, output_53 },
#endif
    { 0 },
    &operand_data[77],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1455 */
  {
    "*cmpiudf_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_54 },
#else
    { 0, 0, output_54 },
#endif
    { 0 },
    &operand_data[79],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1482 */
  {
    "*cmpisf_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_55 },
#else
    { 0, 0, output_55 },
#endif
    { 0 },
    &operand_data[81],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1482 */
  {
    "*cmpidf_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_56 },
#else
    { 0, 0, output_56 },
#endif
    { 0 },
    &operand_data[83],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1482 */
  {
    "*cmpiusf_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_57 },
#else
    { 0, 0, output_57 },
#endif
    { 0 },
    &operand_data[81],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1482 */
  {
    "*cmpiudf_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_58 },
#else
    { 0, 0, output_58 },
#endif
    { 0 },
    &operand_data[83],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1503 */
  {
    "*cmpisf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_59 },
#else
    { 0, 0, output_59 },
#endif
    { 0 },
    &operand_data[47],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1503 */
  {
    "*cmpidf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_60 },
#else
    { 0, 0, output_60 },
#endif
    { 0 },
    &operand_data[50],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1503 */
  {
    "*cmpixf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_61 },
#else
    { 0, 0, output_61 },
#endif
    { 0 },
    &operand_data[38],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1503 */
  {
    "*cmpiusf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_62 },
#else
    { 0, 0, output_62 },
#endif
    { 0 },
    &operand_data[47],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1503 */
  {
    "*cmpiudf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_63 },
#else
    { 0, 0, output_63 },
#endif
    { 0 },
    &operand_data[50],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1503 */
  {
    "*cmpiuxf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_64 },
#else
    { 0, 0, output_64 },
#endif
    { 0 },
    &operand_data[38],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1520 */
  {
    "*pushdi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[85],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1520 */
  {
    "*pushti2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[87],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1536 */
  {
    "*pushdi2_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_67 },
#else
    { 0, output_67, 0 },
#endif
    { 0 },
    &operand_data[89],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1602 */
  {
    "*pushsi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[91],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1615 */
  {
    "*pushqi2_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{q}\t%q1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[93],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1615 */
  {
    "*pushhi2_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{q}\t%q1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[95],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1615 */
  {
    "*pushsi2_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{q}\t%q1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[97],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1623 */
  {
    "*pushqi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%k1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[93],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1623 */
  {
    "*pushhi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%k1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[95],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1631 */
  {
    "*pushsi2_prologue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{l}\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[99],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1631 */
  {
    "*pushdi2_prologue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "push{q}\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[101],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1640 */
  {
    "*popsi1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{l}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[103],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1640 */
  {
    "*popdi1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{q}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[105],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1648 */
  {
    "*popsi1_epilogue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{l}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[103],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1648 */
  {
    "*popdi1_epilogue",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "pop{q}\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[105],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1701 */
  {
    "*movsi_xor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t%k0, %k0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[107],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1701 */
  {
    "*movdi_xor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{l}\t%k0, %k0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[109],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1711 */
  {
    "*movsi_or",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[111],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1711 */
  {
    "*movdi_or",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "or{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[113],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1722 */
  {
    "*movoi_internal_avx",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_84 },
#else
    { 0, 0, output_84 },
#endif
    { 0 },
    &operand_data[115],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1763 */
  {
    "*movti_internal_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_85 },
#else
    { 0, 0, output_85 },
#endif
    { 0 },
    &operand_data[117],
    2,
    2,
    0,
    5,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1825 */
  {
    "*movti_internal_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_86 },
#else
    { 0, 0, output_86 },
#endif
    { 0 },
    &operand_data[119],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:1875 */
  {
    "*movdi_internal_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_87 },
#else
    { 0, 0, output_87 },
#endif
    { 0 },
    &operand_data[121],
    2,
    2,
    0,
    17,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2016 */
  {
    "*movdi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_88 },
#else
    { 0, 0, output_88 },
#endif
    { 0 },
    &operand_data[123],
    2,
    2,
    0,
    15,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2112 */
  {
    "*movsi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_89 },
#else
    { 0, 0, output_89 },
#endif
    { 0 },
    &operand_data[125],
    2,
    2,
    0,
    12,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2198 */
  {
    "*movhi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_90 },
#else
    { 0, 0, output_90 },
#endif
    { 0 },
    &operand_data[127],
    2,
    2,
    0,
    4,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2254 */
  {
    "*movqi_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_91 },
#else
    { 0, 0, output_91 },
#endif
    { 0 },
    &operand_data[129],
    2,
    2,
    0,
    7,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2313 */
  {
    "*movabsqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_92 },
#else
    { 0, output_92, 0 },
#endif
    { 0 },
    &operand_data[131],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2313 */
  {
    "*movabshi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_93 },
#else
    { 0, output_93, 0 },
#endif
    { 0 },
    &operand_data[133],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2313 */
  {
    "*movabssi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_94 },
#else
    { 0, output_94, 0 },
#endif
    { 0 },
    &operand_data[135],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2313 */
  {
    "*movabsdi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_95 },
#else
    { 0, output_95, 0 },
#endif
    { 0 },
    &operand_data[137],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2327 */
  {
    "*movabsqi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_96 },
#else
    { 0, output_96, 0 },
#endif
    { 0 },
    &operand_data[139],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2327 */
  {
    "*movabshi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_97 },
#else
    { 0, output_97, 0 },
#endif
    { 0 },
    &operand_data[141],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2327 */
  {
    "*movabssi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_98 },
#else
    { 0, output_98, 0 },
#endif
    { 0 },
    &operand_data[143],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2327 */
  {
    "*movabsdi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_99 },
#else
    { 0, output_99, 0 },
#endif
    { 0 },
    &operand_data[145],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2341 */
  {
    "swapsi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_swapsi },
    &operand_data[147],
    2,
    2,
    2,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2341 */
  {
    "swapdi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{q}\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_swapdi },
    &operand_data[149],
    2,
    2,
    2,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2355 */
  {
    "*swapqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%k1, %k0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[151],
    2,
    2,
    2,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2355 */
  {
    "*swaphi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{l}\t%k1, %k0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[153],
    2,
    2,
    2,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2371 */
  {
    "*swapqi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{b}\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[155],
    2,
    2,
    2,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2371 */
  {
    "*swaphi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xchg{w}\t%1, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[153],
    2,
    2,
    2,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2398 */
  {
    "*movstrictqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[157],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2398 */
  {
    "*movstricthi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[159],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2408 */
  {
    "*movstrictqi_xor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{b}\t%0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[161],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2408 */
  {
    "*movstricthi_xor",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "xor{w}\t%0, %0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[163],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2418 */
  {
    "*movhi_extv_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%h1, %k0|%k0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[165],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2418 */
  {
    "*movsi_extv_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%h1, %k0|%k0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[167],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2428 */
  {
    "*movqi_extv_1_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_112 },
#else
    { 0, 0, output_112 },
#endif
    { 0 },
    &operand_data[169],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2453 */
  {
    "*movqi_extv_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_113 },
#else
    { 0, 0, output_113 },
#endif
    { 0 },
    &operand_data[171],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2479 */
  {
    "*movsi_extzv_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%h1, %k0|%k0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[167],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2479 */
  {
    "*movdi_extzv_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%h1, %k0|%k0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[173],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2489 */
  {
    "*movqi_extzv_2_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_116 },
#else
    { 0, 0, output_116 },
#endif
    { 0 },
    &operand_data[169],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2515 */
  {
    "*movqi_extzv_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_117 },
#else
    { 0, 0, output_117 },
#endif
    { 0 },
    &operand_data[175],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2548 */
  {
    "*movsi_insv_1_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_118 },
#else
    { 0, 0, output_118 },
#endif
    { 0 },
    &operand_data[177],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2548 */
  {
    "*movdi_insv_1_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_119 },
#else
    { 0, 0, output_119 },
#endif
    { 0 },
    &operand_data[179],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2562 */
  {
    "*movsi_insv_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_120 },
#else
    { 0, 0, output_120 },
#endif
    { 0 },
    &operand_data[181],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2576 */
  {
    "*movqi_insv_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov{b}\t{%h1, %h0|%h0, %h1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[183],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2589 */
  {
    "*pushtf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_122 },
#else
    { 0, 0, output_122 },
#endif
    { 0 },
    &operand_data[185],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2609 */
  {
    "*pushxf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_123 },
#else
    { 0, 0, output_123 },
#endif
    { 0 },
    &operand_data[187],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2627 */
  {
    "*pushxf_nointeger",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_124 },
#else
    { 0, 0, output_124 },
#endif
    { 0 },
    &operand_data[189],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2648 */
  {
    "*pushdf_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_125 },
#else
    { 0, 0, output_125 },
#endif
    { 0 },
    &operand_data[191],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2664 */
  {
    "*pushdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_126 },
#else
    { 0, 0, output_126 },
#endif
    { 0 },
    &operand_data[193],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2685 */
  {
    "*pushsf_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_127 },
#else
    { 0, 0, output_127 },
#endif
    { 0 },
    &operand_data[195],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2698 */
  {
    "*pushsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_128 },
#else
    { 0, 0, output_128 },
#endif
    { 0 },
    &operand_data[197],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2755 */
  {
    "*movtf_internal_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_129 },
#else
    { 0, 0, output_129 },
#endif
    { 0 },
    &operand_data[199],
    2,
    2,
    0,
    5,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2818 */
  {
    "*movtf_internal_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_130 },
#else
    { 0, 0, output_130 },
#endif
    { 0 },
    &operand_data[201],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2875 */
  {
    "*movxf_internal_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_131 },
#else
    { 0, 0, output_131 },
#endif
    { 0 },
    &operand_data[203],
    2,
    2,
    0,
    5,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2909 */
  {
    "*movxf_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_132 },
#else
    { 0, 0, output_132 },
#endif
    { 0 },
    &operand_data[205],
    2,
    2,
    0,
    5,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:2942 */
  {
    "*movdf_internal_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_133 },
#else
    { 0, 0, output_133 },
#endif
    { 0 },
    &operand_data[207],
    2,
    2,
    0,
    13,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3087 */
  {
    "*movdf_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_134 },
#else
    { 0, 0, output_134 },
#endif
    { 0 },
    &operand_data[209],
    2,
    2,
    0,
    13,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3226 */
  {
    "*movsf_internal",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_135 },
#else
    { 0, 0, output_135 },
#endif
    { 0 },
    &operand_data[211],
    2,
    2,
    0,
    16,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3402 */
  {
    "swapxf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_136 },
#else
    { 0, 0, output_136 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_swapxf },
    &operand_data[213],
    2,
    2,
    2,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3417 */
  {
    "*swapsf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_137 },
#else
    { 0, 0, output_137 },
#endif
    { 0 },
    &operand_data[215],
    2,
    2,
    2,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3417 */
  {
    "*swapdf",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_138 },
#else
    { 0, 0, output_138 },
#endif
    { 0 },
    &operand_data[217],
    2,
    2,
    2,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3438 */
  {
    "*zero_extendsidi2_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_139 },
#else
    { 0, 0, output_139 },
#endif
    { 0 },
    &operand_data[219],
    2,
    2,
    0,
    6,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3472 */
  {
    "*zero_extendsidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_140 },
#else
    { 0, output_140, 0 },
#endif
    { 0 },
    &operand_data[221],
    2,
    2,
    0,
    7,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3517 */
  {
    "zero_extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqidi2 },
    &operand_data[223],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3517 */
  {
    "zero_extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{wl|x}\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendhidi2 },
    &operand_data[225],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3539 */
  {
    "zero_extendqisi2_and",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqisi2_and },
    &operand_data[227],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3539 */
  {
    "zero_extendhisi2_and",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendhisi2_and },
    &operand_data[229],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3565 */
  {
    "*zero_extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[231],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3565 */
  {
    "*zero_extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{wl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[233],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3587 */
  {
    "zero_extendqihi2_and",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_zero_extendqihi2_and },
    &operand_data[235],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3613 */
  {
    "*zero_extendqihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movz{bl|x}\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[237],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3635 */
  {
    "*extendsidi2_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_149 },
#else
    { 0, output_149, 0 },
#endif
    { 0 },
    &operand_data[239],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3647 */
  {
    "extendsidi2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendsidi2_1 },
    &operand_data[241],
    2,
    3,
    0,
    4,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3754 */
  {
    "extendqidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bq|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqidi2 },
    &operand_data[223],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3754 */
  {
    "extendhidi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{wq|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhidi2 },
    &operand_data[225],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3763 */
  {
    "extendhisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_153 },
#else
    { 0, 0, output_153 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendhisi2 },
    &operand_data[244],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3789 */
  {
    "*extendhisi2_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_154 },
#else
    { 0, 0, output_154 },
#endif
    { 0 },
    &operand_data[246],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3817 */
  {
    "extendqisi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqisi2 },
    &operand_data[231],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3825 */
  {
    "*extendqisi2_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs{bl|x}\t{%1, %k0|%k0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[223],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3834 */
  {
    "extendqihi2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_157 },
#else
    { 0, 0, output_157 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_extendqihi2 },
    &operand_data[248],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3947 */
  {
    "*extendsfdf2_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_158 },
#else
    { 0, 0, output_158 },
#endif
    { 0 },
    &operand_data[250],
    2,
    2,
    0,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3970 */
  {
    "*extendsfdf2_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtss2sd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[252],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:3979 */
  {
    "*extendsfdf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_160 },
#else
    { 0, 0, output_160 },
#endif
    { 0 },
    &operand_data[254],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4007 */
  {
    "*extendsfxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_161 },
#else
    { 0, 0, output_161 },
#endif
    { 0 },
    &operand_data[256],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4007 */
  {
    "*extenddfxf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_162 },
#else
    { 0, 0, output_162 },
#endif
    { 0 },
    &operand_data[258],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4093 */
  {
    "*truncdfsf_fast_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_163 },
#else
    { 0, 0, output_163 },
#endif
    { 0 },
    &operand_data[260],
    2,
    2,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4115 */
  {
    "*truncdfsf_fast_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsd2ss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[262],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4125 */
  {
    "*truncdfsf_fast_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_165 },
#else
    { 0, 0, output_165 },
#endif
    { 0 },
    &operand_data[264],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4134 */
  {
    "*truncdfsf_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_166 },
#else
    { 0, 0, output_166 },
#endif
    { 0 },
    &operand_data[266],
    3,
    3,
    0,
    5,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4158 */
  {
    "*truncdfsf_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_167 },
#else
    { 0, 0, output_167 },
#endif
    { 0 },
    &operand_data[269],
    3,
    3,
    0,
    4,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4178 */
  {
    "*truncdfsf2_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_168 },
#else
    { 0, 0, output_168 },
#endif
    { 0 },
    &operand_data[272],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4220 */
  {
    "*truncxfsf2_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_169 },
#else
    { 0, 0, output_169 },
#endif
    { 0 },
    &operand_data[274],
    3,
    3,
    0,
    4,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4234 */
  {
    "*truncxfdf2_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_170 },
#else
    { 0, 0, output_170 },
#endif
    { 0 },
    &operand_data[277],
    3,
    3,
    0,
    4,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4249 */
  {
    "truncxfsf2_i387_noop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_171 },
#else
    { 0, 0, output_171 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_truncxfsf2_i387_noop },
    &operand_data[280],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4249 */
  {
    "truncxfdf2_i387_noop",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_172 },
#else
    { 0, 0, output_172 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_truncxfdf2_i387_noop },
    &operand_data[282],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4258 */
  {
    "*truncxfsf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_173 },
#else
    { 0, 0, output_173 },
#endif
    { 0 },
    &operand_data[284],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4258 */
  {
    "*truncxfdf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_174 },
#else
    { 0, 0, output_174 },
#endif
    { 0 },
    &operand_data[286],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4400 */
  {
    "*fixuns_truncsf_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[288],
    5,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4400 */
  {
    "*fixuns_truncdf_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[293],
    5,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4430 */
  {
    "fix_truncsfsi_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttss2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsfsi_sse },
    &operand_data[298],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4430 */
  {
    "fix_truncsfdi_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttss2si{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsfdi_sse },
    &operand_data[300],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4430 */
  {
    "fix_truncdfsi_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttsd2si\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdfsi_sse },
    &operand_data[302],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4430 */
  {
    "fix_truncdfdi_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvttsd2si{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdfdi_sse },
    &operand_data[304],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4459 */
  {
    "fix_trunchi_fisttp_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_trunchi_fisttp_i387_1 },
    &operand_data[306],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4459 */
  {
    "fix_truncsi_fisttp_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsi_fisttp_i387_1 },
    &operand_data[308],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4459 */
  {
    "fix_truncdi_fisttp_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdi_fisttp_i387_1 },
    &operand_data[310],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4486 */
  {
    "fix_trunchi_i387_fisttp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_184 },
#else
    { 0, 0, output_184 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_trunchi_i387_fisttp },
    &operand_data[312],
    2,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4486 */
  {
    "fix_truncsi_i387_fisttp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_185 },
#else
    { 0, 0, output_185 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsi_i387_fisttp },
    &operand_data[315],
    2,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4486 */
  {
    "fix_truncdi_i387_fisttp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_186 },
#else
    { 0, 0, output_186 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdi_i387_fisttp },
    &operand_data[318],
    2,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4499 */
  {
    "fix_trunchi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_trunchi_i387_fisttp_with_temp },
    &operand_data[321],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4499 */
  {
    "fix_truncsi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsi_i387_fisttp_with_temp },
    &operand_data[325],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4499 */
  {
    "fix_truncdi_i387_fisttp_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdi_i387_fisttp_with_temp },
    &operand_data[329],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4537 */
  {
    "*fix_trunchi_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[306],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4537 */
  {
    "*fix_truncsi_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[308],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4537 */
  {
    "*fix_truncdi_i387_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[310],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4570 */
  {
    "fix_truncdi_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_193 },
#else
    { 0, 0, output_193 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdi_i387 },
    &operand_data[333],
    4,
    5,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4584 */
  {
    "fix_truncdi_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncdi_i387_with_temp },
    &operand_data[338],
    5,
    6,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4626 */
  {
    "fix_trunchi_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_195 },
#else
    { 0, 0, output_195 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_trunchi_i387 },
    &operand_data[344],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4626 */
  {
    "fix_truncsi_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_196 },
#else
    { 0, 0, output_196 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsi_i387 },
    &operand_data[348],
    4,
    4,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4639 */
  {
    "fix_trunchi_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_trunchi_i387_with_temp },
    &operand_data[352],
    5,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4639 */
  {
    "fix_truncsi_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_fix_truncsi_i387_with_temp },
    &operand_data[357],
    5,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4676 */
  {
    "x86_fnstcw_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnstcw\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_x86_fnstcw_1 },
    &operand_data[312],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4687 */
  {
    "x86_fldcw_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fldcw\t%0",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_x86_fldcw_1 },
    &operand_data[54],
    1,
    1,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4713 */
  {
    "*floathisf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[362],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4713 */
  {
    "*floathidf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[364],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4713 */
  {
    "*floathixf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[366],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4727 */
  {
    "*floathisf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[368],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4727 */
  {
    "*floathidf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[371],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4727 */
  {
    "*floathixf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[374],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4740 */
  {
    "*floathisf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[377],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4740 */
  {
    "*floathidf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[379],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4740 */
  {
    "*floathixf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[381],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4802 */
  {
    "*floatsisf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[383],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4802 */
  {
    "*floatsidf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[385],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4802 */
  {
    "*floatsixf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[387],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4802 */
  {
    "*floatdisf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[389],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4802 */
  {
    "*floatdidf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[391],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4802 */
  {
    "*floatdixf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[393],
    2,
    2,
    0,
    0,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4839 */
  {
    "*floatsisf2_vector_mixed_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[395],
    3,
    3,
    0,
    5,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4839 */
  {
    "*floatsidf2_vector_mixed_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[398],
    3,
    3,
    0,
    5,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4855 */
  {
    "*floatsisf2_vector_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_218 },
#else
    { 0, output_218, 0 },
#endif
    { 0 },
    &operand_data[401],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4855 */
  {
    "*floatsidf2_vector_mixed",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_219 },
#else
    { 0, output_219, 0 },
#endif
    { 0 },
    &operand_data[403],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4871 */
  {
    "*floatsisf2_mixed_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[405],
    3,
    3,
    0,
    4,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4871 */
  {
    "*floatdisf2_mixed_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[408],
    3,
    3,
    0,
    4,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4871 */
  {
    "*floatsidf2_mixed_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[411],
    3,
    3,
    0,
    4,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4871 */
  {
    "*floatdidf2_mixed_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[414],
    3,
    3,
    0,
    4,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4911 */
  {
    "*floatsisf2_mixed_interunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_224 },
#else
    { 0, output_224, 0 },
#endif
    { 0 },
    &operand_data[417],
    2,
    2,
    0,
    3,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4911 */
  {
    "*floatdisf2_mixed_interunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_225 },
#else
    { 0, output_225, 0 },
#endif
    { 0 },
    &operand_data[419],
    2,
    2,
    0,
    3,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4911 */
  {
    "*floatsidf2_mixed_interunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_226 },
#else
    { 0, output_226, 0 },
#endif
    { 0 },
    &operand_data[421],
    2,
    2,
    0,
    3,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4911 */
  {
    "*floatdidf2_mixed_interunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_227 },
#else
    { 0, output_227, 0 },
#endif
    { 0 },
    &operand_data[423],
    2,
    2,
    0,
    3,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4936 */
  {
    "*floatsisf2_mixed_nointerunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_228 },
#else
    { 0, output_228, 0 },
#endif
    { 0 },
    &operand_data[401],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4936 */
  {
    "*floatdisf2_mixed_nointerunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_229 },
#else
    { 0, output_229, 0 },
#endif
    { 0 },
    &operand_data[425],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4936 */
  {
    "*floatsidf2_mixed_nointerunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_230 },
#else
    { 0, output_230, 0 },
#endif
    { 0 },
    &operand_data[403],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4936 */
  {
    "*floatdidf2_mixed_nointerunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_231 },
#else
    { 0, output_231, 0 },
#endif
    { 0 },
    &operand_data[427],
    2,
    2,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4959 */
  {
    "*floatsisf2_vector_sse_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[429],
    3,
    3,
    0,
    3,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4959 */
  {
    "*floatsidf2_vector_sse_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[432],
    3,
    3,
    0,
    3,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4974 */
  {
    "*floatsisf2_vector_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[435],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:4974 */
  {
    "*floatsidf2_vector_sse",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[437],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5125 */
  {
    "*floatsisf2_sse_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[439],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5125 */
  {
    "*floatdisf2_sse_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[442],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5125 */
  {
    "*floatsidf2_sse_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[445],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5125 */
  {
    "*floatdidf2_sse_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[448],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5140 */
  {
    "*floatsisf2_sse_interunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[439],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5140 */
  {
    "*floatdisf2_sse_interunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2ss{q}\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[442],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5140 */
  {
    "*floatsidf2_sse_interunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[445],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5140 */
  {
    "*floatdidf2_sse_interunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2sd{q}\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[448],
    2,
    2,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5174 */
  {
    "*floatsisf2_sse_nointerunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2ss\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[435],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5174 */
  {
    "*floatdisf2_sse_nointerunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2ss{q}\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[451],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5174 */
  {
    "*floatsidf2_sse_nointerunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2sd\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[437],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5174 */
  {
    "*floatdidf2_sse_nointerunit",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "%vcvtsi2sd{q}\t{%1, %d0|%d0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[453],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5219 */
  {
    "*floatsisf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_248 },
#else
    { 0, output_248, 0 },
#endif
    { 0 },
    &operand_data[455],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5219 */
  {
    "*floatsidf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_249 },
#else
    { 0, output_249, 0 },
#endif
    { 0 },
    &operand_data[458],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5219 */
  {
    "*floatsixf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_250 },
#else
    { 0, output_250, 0 },
#endif
    { 0 },
    &operand_data[461],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5219 */
  {
    "*floatdisf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_251 },
#else
    { 0, output_251, 0 },
#endif
    { 0 },
    &operand_data[464],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5219 */
  {
    "*floatdidf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_252 },
#else
    { 0, output_252, 0 },
#endif
    { 0 },
    &operand_data[467],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5219 */
  {
    "*floatdixf2_i387_with_temp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .multi = output_253 },
#else
    { 0, output_253, 0 },
#endif
    { 0 },
    &operand_data[470],
    3,
    3,
    0,
    2,
    2
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5234 */
  {
    "*floatsisf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[473],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5234 */
  {
    "*floatsidf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[475],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5234 */
  {
    "*floatsixf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[477],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5234 */
  {
    "*floatdisf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[479],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5234 */
  {
    "*floatdidf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[481],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5234 */
  {
    "*floatdixf2_i387",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "fild%Z1\t%1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[483],
    2,
    2,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5267 */
  {
    "floatdisf2_i387_with_xmm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatdisf2_i387_with_xmm },
    &operand_data[485],
    3,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5267 */
  {
    "floatdidf2_i387_with_xmm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatdidf2_i387_with_xmm },
    &operand_data[490],
    3,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5267 */
  {
    "floatdixf2_i387_with_xmm",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_floatdixf2_i387_with_xmm },
    &operand_data[495],
    3,
    5,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5326 */
  {
    "*floatunssisf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[500],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5326 */
  {
    "*floatunssidf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[504],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5326 */
  {
    "*floatunssixf2_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[508],
    3,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5414 */
  {
    "*leasi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_266 },
#else
    { 0, 0, output_266 },
#endif
    { 0 },
    &operand_data[512],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5414 */
  {
    "*leadi",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_267 },
#else
    { 0, 0, output_267 },
#endif
    { 0 },
    &operand_data[514],
    2,
    2,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5464 */
  {
    "*adddi3_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[516],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5464 */
  {
    "*addti3_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[519],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5487 */
  {
    "*addsi3_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[522],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5487 */
  {
    "*adddi3_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[525],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5500 */
  {
    "addqi3_cc",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addqi3_cc },
    &operand_data[528],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5513 */
  {
    "*addsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_273 },
#else
    { 0, 0, output_273 },
#endif
    { 0 },
    &operand_data[531],
    3,
    3,
    0,
    4,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5513 */
  {
    "*adddi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_274 },
#else
    { 0, 0, output_274 },
#endif
    { 0 },
    &operand_data[534],
    3,
    3,
    0,
    4,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5572 */
  {
    "addsi_1_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_275 },
#else
    { 0, 0, output_275 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addsi_1_zext },
    &operand_data[537],
    3,
    3,
    0,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5623 */
  {
    "*addhi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_276 },
#else
    { 0, 0, output_276 },
#endif
    { 0 },
    &operand_data[540],
    3,
    3,
    0,
    4,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5676 */
  {
    "*addqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_277 },
#else
    { 0, 0, output_277 },
#endif
    { 0 },
    &operand_data[543],
    3,
    3,
    0,
    6,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5737 */
  {
    "*addqi_1_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_278 },
#else
    { 0, 0, output_278 },
#endif
    { 0 },
    &operand_data[546],
    2,
    2,
    1,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5836 */
  {
    "*addqi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_279 },
#else
    { 0, 0, output_279 },
#endif
    { 0 },
    &operand_data[548],
    3,
    3,
    2,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5836 */
  {
    "*addhi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_280 },
#else
    { 0, 0, output_280 },
#endif
    { 0 },
    &operand_data[551],
    3,
    3,
    2,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5836 */
  {
    "*addsi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_281 },
#else
    { 0, 0, output_281 },
#endif
    { 0 },
    &operand_data[554],
    3,
    3,
    2,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5836 */
  {
    "*adddi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_282 },
#else
    { 0, 0, output_282 },
#endif
    { 0 },
    &operand_data[557],
    3,
    3,
    2,
    3,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5885 */
  {
    "*addsi_2_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_283 },
#else
    { 0, 0, output_283 },
#endif
    { 0 },
    &operand_data[560],
    3,
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5931 */
  {
    "*addqi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_284 },
#else
    { 0, 0, output_284 },
#endif
    { 0 },
    &operand_data[563],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5931 */
  {
    "*addhi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_285 },
#else
    { 0, 0, output_285 },
#endif
    { 0 },
    &operand_data[566],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5931 */
  {
    "*addsi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_286 },
#else
    { 0, 0, output_286 },
#endif
    { 0 },
    &operand_data[569],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5931 */
  {
    "*adddi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_287 },
#else
    { 0, 0, output_287 },
#endif
    { 0 },
    &operand_data[572],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:5977 */
  {
    "*addsi_3_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_288 },
#else
    { 0, 0, output_288 },
#endif
    { 0 },
    &operand_data[560],
    3,
    3,
    2,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6029 */
  {
    "*adddi_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_289 },
#else
    { 0, 0, output_289 },
#endif
    { 0 },
    &operand_data[575],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6074 */
  {
    "*addqi_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_290 },
#else
    { 0, 0, output_290 },
#endif
    { 0 },
    &operand_data[578],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6074 */
  {
    "*addhi_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_291 },
#else
    { 0, 0, output_291 },
#endif
    { 0 },
    &operand_data[581],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6074 */
  {
    "*addsi_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_292 },
#else
    { 0, 0, output_292 },
#endif
    { 0 },
    &operand_data[584],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6111 */
  {
    "*addqi_5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_293 },
#else
    { 0, 0, output_293 },
#endif
    { 0 },
    &operand_data[563],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6111 */
  {
    "*addhi_5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_294 },
#else
    { 0, 0, output_294 },
#endif
    { 0 },
    &operand_data[566],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6111 */
  {
    "*addsi_5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_295 },
#else
    { 0, 0, output_295 },
#endif
    { 0 },
    &operand_data[569],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6111 */
  {
    "*adddi_5",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_296 },
#else
    { 0, 0, output_296 },
#endif
    { 0 },
    &operand_data[572],
    3,
    3,
    0,
    2,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6158 */
  {
    "*addqi_ext_1_rex64",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_297 },
#else
    { 0, 0, output_297 },
#endif
    { 0 },
    &operand_data[587],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6193 */
  {
    "addqi_ext_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .function = output_298 },
#else
    { 0, 0, output_298 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_addqi_ext_1 },
    &operand_data[590],
    3,
    3,
    0,
    1,
    3
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6228 */
  {
    "*addqi_ext_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%h2, %h0|%h0, %h2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[593],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6250 */
  {
    "*lea_general_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[596],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6282 */
  {
    "*lea_general_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[600],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6312 */
  {
    "*lea_general_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[604],
    5,
    5,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6347 */
  {
    "*lea_general_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[609],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6347 */
  {
    "*lea_general_4",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[609],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6398 */
  {
    "*subdi3_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[613],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6398 */
  {
    "*subti3_doubleword",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[616],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6420 */
  {
    "*subqi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[619],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6420 */
  {
    "*subhi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[622],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6420 */
  {
    "*subsi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[625],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6420 */
  {
    "*subdi_1",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[628],
    3,
    3,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6431 */
  {
    "*subsi_1_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[631],
    3,
    3,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6442 */
  {
    "*subqi_1_slp",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[546],
    2,
    2,
    1,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6453 */
  {
    "*subqi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[619],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6453 */
  {
    "*subhi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[622],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6453 */
  {
    "*subsi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[625],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6453 */
  {
    "*subdi_2",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[628],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6468 */
  {
    "*subsi_2_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[631],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6484 */
  {
    "*subqi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[619],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6484 */
  {
    "*subhi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[622],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6484 */
  {
    "*subsi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[625],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6484 */
  {
    "*subdi_3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[628],
    3,
    3,
    2,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6496 */
  {
    "*subsi_3_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %1|%1, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[631],
    3,
    3,
    2,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6524 */
  {
    "*addqi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[634],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6524 */
  {
    "*subqi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[638],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6524 */
  {
    "*addhi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[642],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6524 */
  {
    "*subhi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[646],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6524 */
  {
    "*addsi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[650],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6524 */
  {
    "*subsi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[654],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6524 */
  {
    "*adddi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[658],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6524 */
  {
    "*subdi3_carry",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[662],
    4,
    4,
    0,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6540 */
  {
    "*addsi3_carry_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[666],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6555 */
  {
    "*subsi3_carry_zext",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbb{l}\t{%2, %k0|%k0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[670],
    4,
    4,
    0,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6571 */
  {
    "adcxsi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adcx\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adcxsi3 },
    &operand_data[674],
    5,
    5,
    4,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6571 */
  {
    "adcxdi3",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "adcx\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { (insn_gen_fn::stored_funcptr) gen_adcxdi3 },
    &operand_data[679],
    5,
    5,
    4,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6594 */
  {
    "*addqi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[684],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6594 */
  {
    "*addhi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[687],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6594 */
  {
    "*addsi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[690],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6594 */
  {
    "*adddi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[693],
    3,
    3,
    1,
    1,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6607 */
  {
    "*subqi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{b}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[9],
    2,
    2,
    1,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6607 */
  {
    "*subhi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{w}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[11],
    2,
    2,
    1,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6607 */
  {
    "*subsi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{l}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[13],
    2,
    2,
    1,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6607 */
  {
    "*subdi3_cconly_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp{q}\t{%1, %0|%0, %1}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[15],
    2,
    2,
    1,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6619 */
  {
    "*addqi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[528],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6619 */
  {
    "*subqi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{b}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[619],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6619 */
  {
    "*addhi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[642],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6619 */
  {
    "*subhi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{w}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[622],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6619 */
  {
    "*addsi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[522],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6619 */
  {
    "*subsi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub{l}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[625],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6619 */
  {
    "*adddi3_cc_overflow",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    { .single =
#else
    {
#endif
    "add{q}\t{%2, %0|%0, %2}",
#if HAVE_DESIGNATED_UNION_INITIALIZERS
    },
#else
    0, 0 },
#endif
    { 0 },
    &operand_data[525],
    3,
    3,
    3,
    2,
    1
  },
  /* ../../gcc-4.8.2/gcc/config/i386/i386.md:6619 */
  {
    "*subdi3_cc_overflow",