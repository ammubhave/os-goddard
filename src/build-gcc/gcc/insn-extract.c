/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

#ifdef ENABLE_CHECKING
  memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
#endif

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 2132:  /* atomic_xordi */
    case 2131:  /* atomic_ordi */
    case 2130:  /* atomic_anddi */
    case 2129:  /* atomic_xorsi */
    case 2128:  /* atomic_orsi */
    case 2127:  /* atomic_andsi */
    case 2126:  /* atomic_xorhi */
    case 2125:  /* atomic_orhi */
    case 2124:  /* atomic_andhi */
    case 2123:  /* atomic_xorqi */
    case 2122:  /* atomic_orqi */
    case 2121:  /* atomic_andqi */
    case 2120:  /* atomic_subdi */
    case 2119:  /* atomic_subsi */
    case 2118:  /* atomic_subhi */
    case 2117:  /* atomic_subqi */
    case 2116:  /* atomic_adddi */
    case 2115:  /* atomic_addsi */
    case 2114:  /* atomic_addhi */
    case 2113:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2112:  /* atomic_exchangedi */
    case 2111:  /* atomic_exchangesi */
    case 2110:  /* atomic_exchangehi */
    case 2109:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2108:  /* *atomic_fetch_add_cmpdi */
    case 2107:  /* *atomic_fetch_add_cmpsi */
    case 2106:  /* *atomic_fetch_add_cmphi */
    case 2105:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 2104:  /* atomic_fetch_adddi */
    case 2103:  /* atomic_fetch_addsi */
    case 2102:  /* atomic_fetch_addhi */
    case 2101:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 2100:  /* atomic_compare_and_swapti_doubleword */
    case 2099:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XEXP (XVECEXP (pat, 0, 4), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 2098:  /* atomic_compare_and_swapdi_1 */
    case 2097:  /* atomic_compare_and_swapsi_1 */
    case 2096:  /* atomic_compare_and_swaphi_1 */
    case 2095:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2086:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 2082:  /* *avx2_gatherdiv8sf_4 */
    case 2081:  /* *avx2_gatherdiv8sf_4 */
    case 2080:  /* *avx2_gatherdiv8si_4 */
    case 2079:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 2078:  /* *avx2_gatherdiv8sf_3 */
    case 2077:  /* *avx2_gatherdiv8sf_3 */
    case 2076:  /* *avx2_gatherdiv8si_3 */
    case 2075:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 2074:  /* *avx2_gatherdiv8sf_2 */
    case 2073:  /* *avx2_gatherdiv8sf_2 */
    case 2072:  /* *avx2_gatherdiv8si_2 */
    case 2071:  /* *avx2_gatherdiv8si_2 */
    case 2070:  /* *avx2_gatherdiv4sf_2 */
    case 2069:  /* *avx2_gatherdiv4sf_2 */
    case 2068:  /* *avx2_gatherdiv4si_2 */
    case 2067:  /* *avx2_gatherdiv4si_2 */
    case 2066:  /* *avx2_gatherdiv4df_2 */
    case 2065:  /* *avx2_gatherdiv4df_2 */
    case 2064:  /* *avx2_gatherdiv4di_2 */
    case 2063:  /* *avx2_gatherdiv4di_2 */
    case 2062:  /* *avx2_gatherdiv2df_2 */
    case 2061:  /* *avx2_gatherdiv2df_2 */
    case 2060:  /* *avx2_gatherdiv2di_2 */
    case 2059:  /* *avx2_gatherdiv2di_2 */
    case 2042:  /* *avx2_gathersiv8sf_2 */
    case 2041:  /* *avx2_gathersiv8sf_2 */
    case 2040:  /* *avx2_gathersiv8si_2 */
    case 2039:  /* *avx2_gathersiv8si_2 */
    case 2038:  /* *avx2_gathersiv4sf_2 */
    case 2037:  /* *avx2_gathersiv4sf_2 */
    case 2036:  /* *avx2_gathersiv4si_2 */
    case 2035:  /* *avx2_gathersiv4si_2 */
    case 2034:  /* *avx2_gathersiv4df_2 */
    case 2033:  /* *avx2_gathersiv4df_2 */
    case 2032:  /* *avx2_gathersiv4di_2 */
    case 2031:  /* *avx2_gathersiv4di_2 */
    case 2030:  /* *avx2_gathersiv2df_2 */
    case 2029:  /* *avx2_gathersiv2df_2 */
    case 2028:  /* *avx2_gathersiv2di_2 */
    case 2027:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 2058:  /* *avx2_gatherdiv8sf */
    case 2057:  /* *avx2_gatherdiv8sf */
    case 2056:  /* *avx2_gatherdiv8si */
    case 2055:  /* *avx2_gatherdiv8si */
    case 2054:  /* *avx2_gatherdiv4sf */
    case 2053:  /* *avx2_gatherdiv4sf */
    case 2052:  /* *avx2_gatherdiv4si */
    case 2051:  /* *avx2_gatherdiv4si */
    case 2050:  /* *avx2_gatherdiv4df */
    case 2049:  /* *avx2_gatherdiv4df */
    case 2048:  /* *avx2_gatherdiv4di */
    case 2047:  /* *avx2_gatherdiv4di */
    case 2046:  /* *avx2_gatherdiv2df */
    case 2045:  /* *avx2_gatherdiv2df */
    case 2044:  /* *avx2_gatherdiv2di */
    case 2043:  /* *avx2_gatherdiv2di */
    case 2026:  /* *avx2_gathersiv8sf */
    case 2025:  /* *avx2_gathersiv8sf */
    case 2024:  /* *avx2_gathersiv8si */
    case 2023:  /* *avx2_gathersiv8si */
    case 2022:  /* *avx2_gathersiv4sf */
    case 2021:  /* *avx2_gathersiv4sf */
    case 2020:  /* *avx2_gathersiv4si */
    case 2019:  /* *avx2_gathersiv4si */
    case 2018:  /* *avx2_gathersiv4df */
    case 2017:  /* *avx2_gathersiv4df */
    case 2016:  /* *avx2_gathersiv4di */
    case 2015:  /* *avx2_gathersiv4di */
    case 2014:  /* *avx2_gathersiv2df */
    case 2013:  /* *avx2_gathersiv2df */
    case 2012:  /* *avx2_gathersiv2di */
    case 2011:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 2008:  /* *vcvtps2ph */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1985:  /* avx2_maskstoreq256 */
    case 1984:  /* avx2_maskstored256 */
    case 1983:  /* avx2_maskstoreq */
    case 1982:  /* avx2_maskstored */
    case 1981:  /* avx_maskstorepd256 */
    case 1980:  /* avx_maskstoreps256 */
    case 1979:  /* avx_maskstorepd */
    case 1978:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 1977:  /* avx2_maskloadq256 */
    case 1976:  /* avx2_maskloadd256 */
    case 1975:  /* avx2_maskloadq */
    case 1974:  /* avx2_maskloadd */
    case 1973:  /* avx_maskloadpd256 */
    case 1972:  /* avx_maskloadps256 */
    case 1971:  /* avx_maskloadpd */
    case 1970:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1955:  /* *avx_vperm2f128v4df_nozero */
    case 1954:  /* *avx_vperm2f128v8sf_nozero */
    case 1953:  /* *avx_vperm2f128v8si_nozero */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1945:  /* *avx_vpermilpv2df */
    case 1944:  /* *avx_vpermilpv4df */
    case 1943:  /* *avx_vpermilpv4sf */
    case 1942:  /* *avx_vpermilpv8sf */
    case 1941:  /* *avx_vperm_broadcast_v4df */
    case 1940:  /* *avx_vperm_broadcast_v8sf */
    case 1939:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1938:  /* avx_vbroadcastf128_v4df */
    case 1937:  /* avx_vbroadcastf128_v8sf */
    case 1936:  /* avx_vbroadcastf128_v4di */
    case 1935:  /* avx_vbroadcastf128_v8si */
    case 1934:  /* avx_vbroadcastf128_v16hi */
    case 1933:  /* avx_vbroadcastf128_v32qi */
    case 1932:  /* avx2_vbroadcasti128_v4di */
    case 1931:  /* avx2_vbroadcasti128_v8si */
    case 1930:  /* avx2_vbroadcasti128_v16hi */
    case 1929:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1889:  /* xop_maskcmp_uns2v2di3 */
    case 1888:  /* xop_maskcmp_uns2v4si3 */
    case 1887:  /* xop_maskcmp_uns2v8hi3 */
    case 1886:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1885:  /* xop_maskcmp_unsv2di3 */
    case 1884:  /* xop_maskcmp_unsv4si3 */
    case 1883:  /* xop_maskcmp_unsv8hi3 */
    case 1882:  /* xop_maskcmp_unsv16qi3 */
    case 1881:  /* xop_maskcmpv2di3 */
    case 1880:  /* xop_maskcmpv4si3 */
    case 1879:  /* xop_maskcmpv8hi3 */
    case 1878:  /* xop_maskcmpv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1869:  /* xop_shlv2di3 */
    case 1868:  /* xop_shlv4si3 */
    case 1867:  /* xop_shlv8hi3 */
    case 1866:  /* xop_shlv16qi3 */
    case 1865:  /* xop_shav2di3 */
    case 1864:  /* xop_shav4si3 */
    case 1863:  /* xop_shav8hi3 */
    case 1862:  /* xop_shav16qi3 */
    case 1861:  /* xop_vrotlv2di3 */
    case 1860:  /* xop_vrotlv4si3 */
    case 1859:  /* xop_vrotlv8hi3 */
    case 1858:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 1849:  /* xop_pperm_pack_v8hi_v16qi */
    case 1848:  /* xop_pperm_pack_v4si_v8hi */
    case 1847:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1836:  /* xop_phaddubq */
    case 1835:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 1840:  /* xop_phadduwq */
    case 1839:  /* xop_phaddwq */
    case 1834:  /* xop_phaddubd */
    case 1833:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1845:  /* xop_phsubdq */
    case 1844:  /* xop_phsubwd */
    case 1843:  /* xop_phsubbw */
    case 1842:  /* xop_phaddudq */
    case 1841:  /* xop_phadddq */
    case 1838:  /* xop_phadduwd */
    case 1837:  /* xop_phaddwd */
    case 1832:  /* xop_phaddubw */
    case 1831:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1830:  /* xop_pcmov_v2df */
    case 1829:  /* xop_pcmov_v4df256 */
    case 1828:  /* xop_pcmov_v4sf */
    case 1827:  /* xop_pcmov_v8sf256 */
    case 1826:  /* xop_pcmov_v2di */
    case 1825:  /* xop_pcmov_v4di256 */
    case 1824:  /* xop_pcmov_v4si */
    case 1823:  /* xop_pcmov_v8si256 */
    case 1822:  /* xop_pcmov_v8hi */
    case 1821:  /* xop_pcmov_v16hi256 */
    case 1820:  /* xop_pcmov_v16qi */
    case 1819:  /* xop_pcmov_v32qi256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1818:  /* xop_pmadcsswd */
    case 1817:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1816:  /* xop_pmacsswd */
    case 1815:  /* xop_pmacswd */
    case 1814:  /* xop_pmacssdqh */
    case 1813:  /* xop_pmacsdqh */
    case 1812:  /* xop_pmacssdql */
    case 1811:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1806:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 1805:  /* sse4_2_pcmpistrm */
    case 1804:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 1803:  /* *sse4_2_pcmpistr_unaligned */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1), 0, 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1), 0, 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1802:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1801:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 1800:  /* sse4_2_pcmpestrm */
    case 1799:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 1798:  /* *sse4_2_pcmpestr_unaligned */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2), 0, 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2), 0, 0);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 1797:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 1796:  /* sse4_1_roundsd */
    case 1795:  /* sse4_1_roundss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1790:  /* sse4_1_ptest */
    case 1789:  /* avx_ptest256 */
    case 1788:  /* avx_vtestpd */
    case 1787:  /* avx_vtestpd256 */
    case 1786:  /* avx_vtestps */
    case 1785:  /* avx_vtestps256 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1759:  /* avx2_pblenddv4si */
    case 1758:  /* avx2_pblenddv8si */
    case 1757:  /* *avx2_pblendw */
    case 1756:  /* sse4_1_pblendw */
    case 1739:  /* sse4_1_blendpd */
    case 1738:  /* avx_blendpd256 */
    case 1737:  /* sse4_1_blendps */
    case 1736:  /* avx_blendps256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1897:  /* xop_vpermil2v2df3 */
    case 1896:  /* xop_vpermil2v4df3 */
    case 1895:  /* xop_vpermil2v4sf3 */
    case 1894:  /* xop_vpermil2v8sf3 */
    case 1734:  /* sse4a_insertqi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 1703:  /* *ssse3_pmulhrswv4hi3 */
    case 1702:  /* *ssse3_pmulhrswv8hi3 */
    case 1701:  /* *avx2_pmulhrswv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 1693:  /* avx2_phsubdv8si3 */
    case 1692:  /* avx2_phadddv8si3 */
    case 1687:  /* ssse3_phsubswv8hi3 */
    case 1686:  /* ssse3_phsubwv8hi3 */
    case 1685:  /* ssse3_phaddswv8hi3 */
    case 1684:  /* ssse3_phaddwv8hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 2;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 2;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 2;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1683:  /* avx2_phsubswv16hi3 */
    case 1682:  /* avx2_phsubwv16hi3 */
    case 1681:  /* avx2_phaddswv16hi3 */
    case 1680:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 1), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 1), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 1), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 1), 0);
      recog_data.dup_num[10] = 1;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[11] = 1;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 1), 0);
      recog_data.dup_num[12] = 1;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[13] = 1;
      recog_data.dup_loc[14] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 1), 0);
      recog_data.dup_num[14] = 1;
      recog_data.dup_loc[15] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[15] = 2;
      recog_data.dup_loc[16] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[16] = 2;
      recog_data.dup_loc[17] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[17] = 2;
      recog_data.dup_loc[18] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[18] = 2;
      recog_data.dup_loc[19] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[19] = 2;
      recog_data.dup_loc[20] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[20] = 2;
      recog_data.dup_loc[21] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[21] = 2;
      recog_data.dup_loc[22] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[22] = 2;
      recog_data.dup_loc[23] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[23] = 2;
      recog_data.dup_loc[24] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[24] = 2;
      recog_data.dup_loc[25] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[25] = 2;
      recog_data.dup_loc[26] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[26] = 2;
      recog_data.dup_loc[27] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[27] = 2;
      recog_data.dup_loc[28] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[28] = 2;
      recog_data.dup_loc[29] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[29] = 2;
      break;

    case 1663:  /* *sse2_uavgv8hi3 */
    case 1662:  /* *avx2_uavgv16hi3 */
    case 1661:  /* *sse2_uavgv16qi3 */
    case 1660:  /* *avx2_uavgv32qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 1644:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1643:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 1641:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 1639:  /* avx2_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1460:  /* sse2_shufpd_v2df */
    case 1459:  /* sse2_shufpd_v2di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 1647:  /* *vec_ext_v4si_mem */
    case 1638:  /* *sse4_1_pextrq */
    case 1636:  /* *sse4_1_pextrd */
    case 1635:  /* *sse4_1_pextrw_memory */
    case 1632:  /* *sse4_1_pextrb_memory */
    case 1437:  /* *vec_extract_v4sf_mem */
    case 1436:  /* *sse4_1_extractps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 1434:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1645:  /* sse2_loadld */
    case 1432:  /* vec_setv4sf_0 */
    case 1431:  /* vec_setv4si_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1467:  /* sse2_movsd */
    case 1423:  /* sse_movss */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1968:  /* vec_set_lo_v32qi */
    case 1966:  /* vec_set_lo_v16hi */
    case 1963:  /* vec_set_lo_v8sf */
    case 1962:  /* vec_set_lo_v8si */
    case 1959:  /* vec_set_lo_v4df */
    case 1958:  /* vec_set_lo_v4di */
    case 1956:  /* avx2_vec_set_lo_v4di */
    case 1466:  /* sse2_loadlpd */
    case 1422:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1454:  /* avx_shufpd256_1 */
    case 1418:  /* sse_shufps_v4sf */
    case 1417:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1416:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 1415:  /* sse3_movsldup */
    case 1414:  /* avx_movsldup256 */
    case 1413:  /* sse3_movshdup */
    case 1412:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2005:  /* vcvtph2ps */
    case 1363:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 1400:  /* sse2_cvtss2sd */
    case 1399:  /* sse2_cvtsd2ss */
    case 1383:  /* sse2_cvtsi2sdq */
    case 1382:  /* sse2_cvtsi2sd */
    case 1366:  /* sse_cvtsi2ssq */
    case 1365:  /* sse_cvtsi2ss */
    case 1362:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1361:  /* *fma4i_vmfnmsub_v2df */
    case 1360:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1359:  /* *fma4i_vmfnmadd_v2df */
    case 1358:  /* *fma4i_vmfnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1357:  /* *fma4i_vmfmsub_v2df */
    case 1356:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1355:  /* *fma4i_vmfmadd_v2df */
    case 1354:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1353:  /* *fmai_fnmsub_v2df */
    case 1352:  /* *fmai_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1351:  /* *fmai_fnmadd_v2df */
    case 1350:  /* *fmai_fnmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1349:  /* *fmai_fmsub_v2df */
    case 1348:  /* *fmai_fmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1347:  /* *fmai_fmadd_v2df */
    case 1346:  /* *fmai_fmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1345:  /* *fma_fmsubadd_v2df */
    case 1344:  /* *fma_fmsubadd_v4df */
    case 1343:  /* *fma_fmsubadd_v4sf */
    case 1342:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 1337:  /* *fma_fnmsub_v4df */
    case 1336:  /* *fma_fnmsub_v8sf */
    case 1335:  /* *fma_fnmsub_v2df */
    case 1334:  /* *fma_fnmsub_v4sf */
    case 1333:  /* *fma_fnmsub_df */
    case 1332:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1331:  /* *fma_fnmadd_v4df */
    case 1330:  /* *fma_fnmadd_v8sf */
    case 1329:  /* *fma_fnmadd_v2df */
    case 1328:  /* *fma_fnmadd_v4sf */
    case 1327:  /* *fma_fnmadd_df */
    case 1326:  /* *fma_fnmadd_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1325:  /* *fma_fmsub_v4df */
    case 1324:  /* *fma_fmsub_v8sf */
    case 1323:  /* *fma_fmsub_v2df */
    case 1322:  /* *fma_fmsub_v4sf */
    case 1321:  /* *fma_fmsub_df */
    case 1320:  /* *fma_fmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 1285:  /* sse2_ucomi */
    case 1284:  /* sse_ucomi */
    case 1283:  /* sse2_comi */
    case 1282:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1281:  /* sse2_vmmaskcmpv2df3 */
    case 1280:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1271:  /* avx_vmcmpv2df3 */
    case 1270:  /* avx_vmcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1695:  /* ssse3_phsubdv4si3 */
    case 1694:  /* ssse3_phadddv4si3 */
    case 1691:  /* ssse3_phsubswv4hi3 */
    case 1690:  /* ssse3_phsubwv4hi3 */
    case 1689:  /* ssse3_phaddswv4hi3 */
    case 1688:  /* ssse3_phaddwv4hi3 */
    case 1265:  /* sse3_hsubv4sf3 */
    case 1264:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1263:  /* avx_hsubv8sf3 */
    case 1262:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 1261:  /* *sse3_hsubv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1260:  /* *sse3_haddv2df3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1258:  /* *sse3_haddv2df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1257:  /* avx_hsubv4df3 */
    case 1256:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 1877:  /* *xop_vmfrcz_v2df */
    case 1876:  /* *xop_vmfrcz_v4sf */
    case 1395:  /* *sse2_cvtpd2dq */
    case 1394:  /* *avx_cvtpd2dq256_2 */
    case 1223:  /* sse_vmrsqrtv4sf2 */
    case 1214:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1243:  /* sse2_vmsminv2df3 */
    case 1242:  /* sse2_vmsmaxv2df3 */
    case 1241:  /* sse_vmsminv4sf3 */
    case 1240:  /* sse_vmsmaxv4sf3 */
    case 1211:  /* sse2_vmdivv2df3 */
    case 1210:  /* sse_vmdivv4sf3 */
    case 1205:  /* sse2_vmmulv2df3 */
    case 1204:  /* sse_vmmulv4sf3 */
    case 1199:  /* sse2_vmsubv2df3 */
    case 1198:  /* sse2_vmaddv2df3 */
    case 1197:  /* sse_vmsubv4sf3 */
    case 1196:  /* sse_vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1905:  /* *avx_vzeroall */
    case 1145:  /* *mmx_femms */
    case 1144:  /* *mmx_emms */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 1673:  /* *sse2_maskmovdqu */
    case 1672:  /* *sse2_maskmovdqu */
    case 1143:  /* *mmx_maskmovq */
    case 1142:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1922:  /* avx2_permv4df_1 */
    case 1921:  /* avx2_permv4di_1 */
    case 1642:  /* sse2_pshuflw_1 */
    case 1640:  /* sse2_pshufd_1 */
    case 1131:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 1637:  /* *sse4_1_pextrd_zext */
    case 1634:  /* *sse2_pextrw_di */
    case 1633:  /* *sse2_pextrw_si */
    case 1631:  /* *sse4_1_pextrb_di */
    case 1630:  /* *sse4_1_pextrb_si */
    case 1130:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 1629:  /* sse4_1_pinsrq */
    case 1628:  /* sse4_1_pinsrd */
    case 1627:  /* sse2_pinsrw */
    case 1626:  /* sse4_1_pinsrb */
    case 1433:  /* *vec_setv4sf_sse4_1 */
    case 1129:  /* *mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1753:  /* sse4_1_packusdw */
    case 1752:  /* avx2_packusdw */
    case 1613:  /* sse2_packuswb */
    case 1612:  /* avx2_packuswb */
    case 1611:  /* sse2_packssdw */
    case 1610:  /* avx2_packssdw */
    case 1609:  /* sse2_packsswb */
    case 1608:  /* avx2_packsswb */
    case 1122:  /* mmx_packuswb */
    case 1121:  /* mmx_packssdw */
    case 1120:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 1511:  /* *sse4_1_mulv2siv2di3 */
    case 1510:  /* *vec_widen_smult_even_v8si */
    case 1509:  /* *vec_widen_umult_even_v4si */
    case 1508:  /* *vec_widen_umult_even_v8si */
    case 1089:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1139:  /* *mmx_uavgv4hi3 */
    case 1138:  /* *mmx_uavgv8qi3 */
    case 1088:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 1700:  /* ssse3_pmaddubsw */
    case 1699:  /* ssse3_pmaddubsw128 */
    case 1698:  /* avx2_pmaddubsw256 */
    case 1513:  /* *sse2_pmaddwd */
    case 1512:  /* *avx2_pmaddwd */
    case 1087:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1507:  /* *umulv8hi3_highpart */
    case 1506:  /* *smulv8hi3_highpart */
    case 1505:  /* *umulv16hi3_highpart */
    case 1504:  /* *smulv16hi3_highpart */
    case 1086:  /* *mmx_umulv4hi3_highpart */
    case 1085:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 1061:  /* mmx_pi2fw */
    case 1060:  /* mmx_pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 1255:  /* sse3_addsubv4sf3 */
    case 1254:  /* avx_addsubv8sf3 */
    case 1253:  /* sse3_addsubv2df3 */
    case 1252:  /* avx_addsubv4df3 */
    case 1055:  /* mmx_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1697:  /* ssse3_phsubdv2si3 */
    case 1696:  /* ssse3_phadddv2si3 */
    case 1259:  /* sse3_hsubv2df3 */
    case 1054:  /* mmx_hsubv2sf3 */
    case 1053:  /* mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1026:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1010:  /* *lwp_lwpinsdi3_1 */
    case 1009:  /* *lwp_lwpinssi3_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1679:  /* sse3_monitor_di */
    case 1678:  /* sse3_monitor_si */
    case 1008:  /* *lwp_lwpvaldi3_1 */
    case 1007:  /* *lwp_lwpvalsi3_1 */
    case 1002:  /* xrstor64 */
    case 1001:  /* xrstor_rex64 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 1677:  /* sse3_mwait */
    case 1000:  /* xrstor */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 989:  /* rdtscp_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 988:  /* rdtscp */
    case 987:  /* rdtsc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 970:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 966:  /* adjust_stack_and_probedi */
    case 965:  /* adjust_stack_and_probesi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1319:  /* *fma_fmadd_v4df */
    case 1318:  /* *fma_fmadd_v8sf */
    case 1317:  /* *fma_fmadd_v2df */
    case 1316:  /* *fma_fmadd_v4sf */
    case 1315:  /* *fma_fmadd_df */
    case 1314:  /* *fma_fmadd_sf */
    case 950:  /* *xop_pcmov_df */
    case 949:  /* *xop_pcmov_sf */
    case 948:  /* *movsfcc_1_387 */
    case 947:  /* *movdfcc_1 */
    case 946:  /* *movdfcc_1_rex64 */
    case 945:  /* *movxfcc_1 */
    case 944:  /* *movqicc_noc */
    case 943:  /* *movdicc_noc */
    case 942:  /* *movsicc_noc */
    case 941:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 934:  /* *strlenqi_1 */
    case 933:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 932:  /* *cmpstrnqi_1 */
    case 931:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 930:  /* *cmpstrnqi_nz_1 */
    case 929:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 928:  /* *rep_stosqi */
    case 927:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 926:  /* *rep_stossi */
    case 925:  /* *rep_stossi */
    case 924:  /* *rep_stosdi_rex64 */
    case 923:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 922:  /* *strsetqi_1 */
    case 921:  /* *strsetqi_1 */
    case 920:  /* *strsethi_1 */
    case 919:  /* *strsethi_1 */
    case 918:  /* *strsetsi_1 */
    case 917:  /* *strsetsi_1 */
    case 916:  /* *strsetdi_rex_1 */
    case 915:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 914:  /* *rep_movqi */
    case 913:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 912:  /* *rep_movsi */
    case 911:  /* *rep_movsi */
    case 910:  /* *rep_movdi_rex64 */
    case 909:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 908:  /* *strmovqi_1 */
    case 907:  /* *strmovqi_1 */
    case 906:  /* *strmovhi_1 */
    case 905:  /* *strmovhi_1 */
    case 904:  /* *strmovsi_1 */
    case 903:  /* *strmovsi_1 */
    case 902:  /* *strmovdi_rex_1 */
    case 901:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 885:  /* fistdi2_ceil_with_temp */
    case 884:  /* fistdi2_floor_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 893:  /* fistsi2_ceil_with_temp */
    case 892:  /* fistsi2_floor_with_temp */
    case 891:  /* fisthi2_ceil_with_temp */
    case 890:  /* fisthi2_floor_with_temp */
    case 883:  /* fistdi2_ceil */
    case 882:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 964:  /* allocate_stack_worker_probe_di */
    case 963:  /* allocate_stack_worker_probe_si */
    case 881:  /* *fistdi2_ceil_1 */
    case 880:  /* *fistdi2_floor_1 */
    case 879:  /* *fistsi2_ceil_1 */
    case 878:  /* *fistsi2_floor_1 */
    case 877:  /* *fisthi2_ceil_1 */
    case 876:  /* *fisthi2_floor_1 */
    case 874:  /* frndintxf2_mask_pm */
    case 870:  /* frndintxf2_trunc */
    case 869:  /* frndintxf2_ceil */
    case 868:  /* frndintxf2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 2092:  /* atomic_storedi_fpu */
    case 2087:  /* atomic_loaddi_fpu */
    case 889:  /* fistsi2_ceil */
    case 888:  /* fistsi2_floor */
    case 887:  /* fisthi2_ceil */
    case 886:  /* fisthi2_floor */
    case 875:  /* frndintxf2_mask_pm_i387 */
    case 873:  /* frndintxf2_trunc_i387 */
    case 872:  /* frndintxf2_ceil_i387 */
    case 871:  /* frndintxf2_floor_i387 */
    case 861:  /* fistdi2_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 975:  /* stack_tls_protect_set_di */
    case 974:  /* stack_tls_protect_set_si */
    case 973:  /* stack_protect_set_di */
    case 972:  /* stack_protect_set_si */
    case 867:  /* fistsi2_with_temp */
    case 866:  /* fisthi2_with_temp */
    case 860:  /* fistdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 855:  /* *fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 850:  /* fyl2xp1_extenddfxf3_i387 */
    case 849:  /* fyl2xp1_extendsfxf3_i387 */
    case 847:  /* fyl2x_extenddfxf3_i387 */
    case 846:  /* fyl2x_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 844:  /* fpatan_extenddfxf3_i387 */
    case 843:  /* fpatan_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 979:  /* stack_tls_protect_test_di */
    case 978:  /* stack_tls_protect_test_si */
    case 977:  /* stack_protect_test_di */
    case 976:  /* stack_protect_test_si */
    case 848:  /* fyl2xp1xf3_i387 */
    case 845:  /* fyl2xxf3_i387 */
    case 842:  /* *fpatanxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 841:  /* fptan_extenddfxf4_i387 */
    case 840:  /* fptan_extendsfxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 839:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 853:  /* fxtract_extenddfxf3_i387 */
    case 852:  /* fxtract_extendsfxf3_i387 */
    case 838:  /* sincos_extenddfxf3_i387 */
    case 837:  /* sincos_extendsfxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 985:  /* rdpmc_rex64 */
    case 851:  /* fxtractxf3_i387 */
    case 836:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 829:  /* fprem1xf4_i387 */
    case 828:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 819:  /* *fop_xf_6_i387 */
    case 818:  /* *fop_xf_6_i387 */
    case 807:  /* *fop_df_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 817:  /* *fop_xf_5_i387 */
    case 816:  /* *fop_xf_5_i387 */
    case 813:  /* *fop_xf_3_i387 */
    case 812:  /* *fop_xf_3_i387 */
    case 806:  /* *fop_df_5_i387 */
    case 804:  /* *fop_df_3_i387 */
    case 803:  /* *fop_sf_3_i387 */
    case 802:  /* *fop_df_3_i387 */
    case 801:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 815:  /* *fop_xf_4_i387 */
    case 814:  /* *fop_xf_4_i387 */
    case 811:  /* *fop_xf_2_i387 */
    case 810:  /* *fop_xf_2_i387 */
    case 805:  /* *fop_df_4_i387 */
    case 800:  /* *fop_df_2_i387 */
    case 799:  /* *fop_sf_2_i387 */
    case 798:  /* *fop_df_2_i387 */
    case 797:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 783:  /* *tls_dynamic_gnu2_combine_64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 2094:  /* storedi_via_fpu */
    case 2093:  /* loaddi_via_fpu */
    case 2007:  /* vcvtph2ps256 */
    case 2006:  /* *vcvtph2ps_load */
    case 1988:  /* avx_pd256_pd */
    case 1987:  /* avx_ps256_ps */
    case 1986:  /* avx_si256_si */
    case 1902:  /* aesimc */
    case 1875:  /* xop_frczv4df2 */
    case 1874:  /* xop_frczv8sf2 */
    case 1873:  /* xop_frczv2df2 */
    case 1872:  /* xop_frczv4sf2 */
    case 1871:  /* xop_frczdf2 */
    case 1870:  /* xop_frczsf2 */
    case 1760:  /* sse4_1_phminposuw */
    case 1749:  /* sse4_1_movntdqa */
    case 1748:  /* avx2_movntdqa */
    case 1729:  /* sse4a_movntdf */
    case 1728:  /* sse4a_movntsf */
    case 1671:  /* sse2_pmovmskb */
    case 1670:  /* avx2_pmovmskb */
    case 1669:  /* sse2_movmskpd */
    case 1668:  /* avx_movmskpd256 */
    case 1667:  /* sse_movmskps */
    case 1666:  /* avx_movmskps256 */
    case 1393:  /* avx_cvtpd2dq256 */
    case 1387:  /* sse2_cvtsd2siq_2 */
    case 1385:  /* sse2_cvtsd2si_2 */
    case 1380:  /* sse2_cvtpd2pi */
    case 1376:  /* sse2_cvtps2dq */
    case 1375:  /* avx_cvtps2dq256 */
    case 1370:  /* sse_cvtss2siq_2 */
    case 1368:  /* sse_cvtss2si_2 */
    case 1222:  /* sse_rsqrtv4sf2 */
    case 1221:  /* avx_rsqrtv8sf2 */
    case 1213:  /* sse_rcpv4sf2 */
    case 1212:  /* avx_rcpv8sf2 */
    case 1183:  /* sse2_movntv2di */
    case 1182:  /* avx_movntv4di */
    case 1181:  /* sse2_movntv2df */
    case 1180:  /* avx_movntv4df */
    case 1179:  /* sse_movntv4sf */
    case 1178:  /* avx_movntv8sf */
    case 1177:  /* sse2_movntidi */
    case 1176:  /* sse2_movntisi */
    case 1175:  /* sse3_lddqu */
    case 1174:  /* avx_lddqu256 */
    case 1173:  /* sse2_storedqu */
    case 1172:  /* avx_storedqu256 */
    case 1171:  /* sse2_loaddqu */
    case 1170:  /* avx_loaddqu256 */
    case 1169:  /* sse2_storeupd */
    case 1168:  /* avx_storeupd256 */
    case 1167:  /* sse_storeups */
    case 1166:  /* avx_storeups256 */
    case 1165:  /* sse2_loadupd */
    case 1164:  /* avx_loadupd256 */
    case 1163:  /* sse_loadups */
    case 1162:  /* avx_loadups256 */
    case 1141:  /* mmx_pmovmskb */
    case 1051:  /* mmx_rsqrtv2sf2 */
    case 1048:  /* mmx_rcpv2sf2 */
    case 1040:  /* sse_movntq */
    case 995:  /* xsaveopt */
    case 994:  /* xsave */
    case 984:  /* rdpmc */
    case 899:  /* movmsk_df */
    case 898:  /* fxamdf2_i387_with_temp */
    case 897:  /* fxamsf2_i387_with_temp */
    case 896:  /* fxamxf2_i387 */
    case 895:  /* fxamdf2_i387 */
    case 894:  /* fxamsf2_i387 */
    case 865:  /* fistsi2 */
    case 864:  /* fisthi2 */
    case 863:  /* *fistsi2_1 */
    case 862:  /* *fisthi2_1 */
    case 859:  /* *fistdi2_1 */
    case 858:  /* rintxf2 */
    case 854:  /* *f2xm1xf2_i387 */
    case 831:  /* *cosxf2_i387 */
    case 830:  /* *sinxf2_i387 */
    case 825:  /* *rsqrtsf2_sse */
    case 821:  /* truncxfdf2_i387_noop_unspec */
    case 820:  /* truncxfsf2_i387_noop_unspec */
    case 792:  /* *rcpsf2_sse */
    case 781:  /* *tls_dynamic_gnu2_lea_64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 780:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 779:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 778:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 775:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 777:  /* *add_tp_di */
    case 776:  /* *add_tp_si */
    case 774:  /* *add_tp_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 769:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 766:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 765:  /* *tls_global_dynamic_64_di */
    case 764:  /* *tls_global_dynamic_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 763:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 762:  /* *parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 761:  /* paritysi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 760:  /* paritydi2_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 759:  /* bswaphi_lowpart */
    case 758:  /* *bswaphi_lowpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 746:  /* *bsrhi */
    case 745:  /* bsr */
    case 744:  /* bsr_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 743:  /* *tbm_tzmsk_di */
    case 742:  /* *tbm_tzmsk_si */
    case 741:  /* *tbm_t1mskc_di */
    case 740:  /* *tbm_t1mskc_si */
    case 739:  /* *tbm_blsic_di */
    case 738:  /* *tbm_blsic_si */
    case 731:  /* *tbm_blcic_di */
    case 730:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 729:  /* *tbm_blci_di */
    case 728:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 725:  /* tbm_bextri_di */
    case 724:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 2091:  /* atomic_storedi_1 */
    case 2090:  /* atomic_storesi_1 */
    case 2089:  /* atomic_storehi_1 */
    case 2088:  /* atomic_storeqi_1 */
    case 2010:  /* vcvtps2ph256 */
    case 2009:  /* *vcvtps2ph_store */
    case 1949:  /* avx_vpermilvarv2df3 */
    case 1948:  /* avx_vpermilvarv4df3 */
    case 1947:  /* avx_vpermilvarv4sf3 */
    case 1946:  /* avx_vpermilvarv8sf3 */
    case 1920:  /* avx2_permvarv8sf */
    case 1919:  /* avx2_permvarv8si */
    case 1903:  /* aeskeygenassist */
    case 1901:  /* aesdeclast */
    case 1900:  /* aesdec */
    case 1899:  /* aesenclast */
    case 1898:  /* aesenc */
    case 1794:  /* sse4_1_roundpd */
    case 1793:  /* avx_roundpd256 */
    case 1792:  /* sse4_1_roundps */
    case 1791:  /* avx_roundps256 */
    case 1735:  /* sse4a_insertq */
    case 1733:  /* sse4a_extrq */
    case 1715:  /* ssse3_psignv2si3 */
    case 1714:  /* ssse3_psignv4hi3 */
    case 1713:  /* ssse3_psignv8qi3 */
    case 1712:  /* ssse3_psignv4si3 */
    case 1711:  /* avx2_psignv8si3 */
    case 1710:  /* ssse3_psignv8hi3 */
    case 1709:  /* avx2_psignv16hi3 */
    case 1708:  /* ssse3_psignv16qi3 */
    case 1707:  /* avx2_psignv32qi3 */
    case 1706:  /* ssse3_pshufbv8qi3 */
    case 1705:  /* ssse3_pshufbv16qi3 */
    case 1704:  /* avx2_pshufbv32qi3 */
    case 1665:  /* sse2_psadbw */
    case 1664:  /* avx2_psadbw */
    case 1251:  /* *ieee_smaxv2df3 */
    case 1250:  /* *ieee_smaxv4df3 */
    case 1249:  /* *ieee_smaxv4sf3 */
    case 1248:  /* *ieee_smaxv8sf3 */
    case 1247:  /* *ieee_sminv2df3 */
    case 1246:  /* *ieee_sminv4df3 */
    case 1245:  /* *ieee_sminv4sf3 */
    case 1244:  /* *ieee_sminv8sf3 */
    case 1140:  /* mmx_psadbw */
    case 1052:  /* mmx_rsqit1v2sf3 */
    case 1050:  /* mmx_rcpit2v2sf3 */
    case 1049:  /* mmx_rcpit1v2sf3 */
    case 999:  /* xsaveopt64 */
    case 998:  /* xsave64 */
    case 997:  /* xsaveopt_rex64 */
    case 996:  /* xsave_rex64 */
    case 983:  /* sse4_2_crc32di */
    case 982:  /* sse4_2_crc32si */
    case 981:  /* sse4_2_crc32hi */
    case 980:  /* sse4_2_crc32qi */
    case 958:  /* *ieee_smindf3 */
    case 957:  /* *ieee_smaxdf3 */
    case 956:  /* *ieee_sminsf3 */
    case 955:  /* *ieee_smaxsf3 */
    case 857:  /* sse4_1_rounddf2 */
    case 856:  /* sse4_1_roundsf2 */
    case 723:  /* bmi2_pext_di3 */
    case 722:  /* bmi2_pext_si3 */
    case 721:  /* bmi2_pdep_di3 */
    case 720:  /* bmi2_pdep_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 719:  /* bmi2_bzhi_di3 */
    case 718:  /* bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 737:  /* *tbm_blsfill_di */
    case 736:  /* *tbm_blsfill_si */
    case 735:  /* *tbm_blcs_di */
    case 734:  /* *tbm_blcs_si */
    case 733:  /* *tbm_blcmsk_di */
    case 732:  /* *tbm_blcmsk_si */
    case 727:  /* *tbm_blcfill_di */
    case 726:  /* *tbm_blcfill_si */
    case 717:  /* *bmi_blsr_di */
    case 716:  /* *bmi_blsr_si */
    case 715:  /* *bmi_blsmsk_di */
    case 714:  /* *bmi_blsmsk_si */
    case 713:  /* *bmi_blsi_di */
    case 712:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 968:  /* probe_stack_rangedi */
    case 967:  /* probe_stack_rangesi */
    case 782:  /* *tls_dynamic_gnu2_call_64 */
    case 711:  /* bmi_bextr_di */
    case 710:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 701:  /* *bsfdi_1 */
    case 700:  /* *bsfsi_1 */
    case 699:  /* *tzcntdi_1 */
    case 698:  /* *tzcntsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1731:  /* sse4a_vmmovntv2df */
    case 1730:  /* sse4a_vmmovntv4sf */
    case 1386:  /* sse2_cvtsd2siq */
    case 1384:  /* sse2_cvtsd2si */
    case 1369:  /* sse_cvtss2siq */
    case 1367:  /* sse_cvtss2si */
    case 835:  /* *cos_extenddfxf2_i387 */
    case 834:  /* *sin_extenddfxf2_i387 */
    case 833:  /* *cos_extendsfxf2_i387 */
    case 832:  /* *sin_extendsfxf2_i387 */
    case 692:  /* set_got_offset_rex64 */
    case 691:  /* set_rip_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 689:  /* set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1024:  /* rdseeddi_1 */
    case 1023:  /* rdseedsi_1 */
    case 1022:  /* rdseedhi_1 */
    case 1021:  /* rdranddi_1 */
    case 1020:  /* rdrandsi_1 */
    case 1019:  /* rdrandhi_1 */
    case 688:  /* set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 684:  /* simple_return_indirect_internal */
    case 683:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1676:  /* sse2_clflush */
    case 1674:  /* sse_ldmxcsr */
    case 1028:  /* xabort */
    case 1018:  /* wrgsbasedi */
    case 1017:  /* wrfsbasedi */
    case 1016:  /* wrgsbasesi */
    case 1015:  /* wrfsbasesi */
    case 1004:  /* *lwp_llwpcbdi1 */
    case 1003:  /* *lwp_llwpcbsi1 */
    case 993:  /* fxrstor64 */
    case 992:  /* fxrstor */
    case 696:  /* split_stack_return */
    case 687:  /* pad */
    case 686:  /* nops */
    case 680:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 2085:  /* mfence_sse2 */
    case 2084:  /* *sse_sfence */
    case 2083:  /* *sse2_lfence */
    case 1025:  /* *pause */
    case 679:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1906:  /* avx_vzeroupper */
    case 1029:  /* xtest_1 */
    case 1027:  /* xend */
    case 969:  /* trap */
    case 900:  /* cld */
    case 695:  /* leave_rex64 */
    case 694:  /* leave */
    case 693:  /* eh_return_internal */
    case 685:  /* nop */
    case 682:  /* simple_return_internal_long */
    case 681:  /* simple_return_internal */
    case 678:  /* blockage */
      break;

    case 677:  /* *sibcall_value_pop */
    case 676:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1969:  /* vec_set_hi_v32qi */
    case 1967:  /* vec_set_hi_v16hi */
    case 1965:  /* vec_set_hi_v8sf */
    case 1964:  /* vec_set_hi_v8si */
    case 1961:  /* vec_set_hi_v4df */
    case 1960:  /* vec_set_hi_v4di */
    case 1957:  /* avx2_vec_set_hi_v4di */
    case 1583:  /* *andnotv2di3 */
    case 1582:  /* *andnotv4di3 */
    case 1581:  /* *andnotv4si3 */
    case 1580:  /* *andnotv8si3 */
    case 1579:  /* *andnotv8hi3 */
    case 1578:  /* *andnotv16hi3 */
    case 1577:  /* *andnotv16qi3 */
    case 1576:  /* *andnotv32qi3 */
    case 1465:  /* sse2_loadhpd */
    case 1420:  /* sse_loadhps */
    case 1402:  /* *sse2_cvtpd2ps */
    case 1398:  /* *sse2_cvttpd2dq */
    case 1397:  /* *avx_cvttpd2dq256_2 */
    case 1304:  /* *andnottf3 */
    case 1303:  /* *andnotdf3 */
    case 1302:  /* *andnotsf3 */
    case 1289:  /* sse2_andnotv2df3 */
    case 1288:  /* avx_andnotv4df3 */
    case 1287:  /* sse_andnotv4sf3 */
    case 1286:  /* avx_andnotv8sf3 */
    case 1220:  /* sse2_vmsqrtv2df2 */
    case 1219:  /* sse_vmsqrtv4sf2 */
    case 1110:  /* mmx_andnotv2si3 */
    case 1109:  /* mmx_andnotv4hi3 */
    case 1108:  /* mmx_andnotv8qi3 */
    case 674:  /* *sibcall_value */
    case 673:  /* *sibcall_value */
    case 672:  /* *call_value */
    case 671:  /* *call_value */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 670:  /* *sibcall_pop */
    case 669:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 663:  /* *tablejump_1 */
    case 662:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 661:  /* *indirect_jump */
    case 660:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 659:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 658:  /* *jccxf_si_r_i387 */
    case 657:  /* *jccdf_si_r_i387 */
    case 656:  /* *jccsf_si_r_i387 */
    case 655:  /* *jccxf_hi_r_i387 */
    case 654:  /* *jccdf_hi_r_i387 */
    case 653:  /* *jccsf_hi_r_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 652:  /* *jccxf_si_i387 */
    case 651:  /* *jccdf_si_i387 */
    case 650:  /* *jccsf_si_i387 */
    case 649:  /* *jccxf_hi_i387 */
    case 648:  /* *jccdf_hi_i387 */
    case 647:  /* *jccsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 646:  /* *jccuxf_r_i387 */
    case 645:  /* *jccudf_r_i387 */
    case 644:  /* *jccusf_r_i387 */
    case 640:  /* *jccdf_r_i387 */
    case 639:  /* *jccsf_r_i387 */
    case 636:  /* *jccxf_r_i387 */
    case 634:  /* *jccxf_0_r_i387 */
    case 633:  /* *jccdf_0_r_i387 */
    case 632:  /* *jccsf_0_r_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 643:  /* *jccuxf_i387 */
    case 642:  /* *jccudf_i387 */
    case 641:  /* *jccusf_i387 */
    case 638:  /* *jccdf_i387 */
    case 637:  /* *jccsf_i387 */
    case 635:  /* *jccxf_i387 */
    case 631:  /* *jccxf_0_i387 */
    case 630:  /* *jccdf_0_i387 */
    case 629:  /* *jccsf_0_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 628:  /* *jcc_btsi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 627:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 626:  /* *jcc_btdi_mask */
    case 625:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 624:  /* *jcc_btdi */
    case 623:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 622:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 621:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1279:  /* sse2_maskcmpv2df3 */
    case 1278:  /* avx_maskcmpv4df3 */
    case 1277:  /* sse_maskcmpv4sf3 */
    case 1276:  /* avx_maskcmpv8sf3 */
    case 1275:  /* *sse2_maskcmpv2df3_comm */
    case 1274:  /* *avx_maskcmpv4df3_comm */
    case 1273:  /* *sse_maskcmpv4sf3_comm */
    case 1272:  /* *avx_maskcmpv8sf3_comm */
    case 809:  /* *fop_xf_1_i387 */
    case 808:  /* *fop_xf_comm_i387 */
    case 796:  /* *fop_df_1_i387 */
    case 795:  /* *fop_sf_1_i387 */
    case 794:  /* *fop_df_1_sse */
    case 793:  /* *fop_sf_1_sse */
    case 791:  /* *fop_df_1_mixed */
    case 790:  /* *fop_sf_1_mixed */
    case 789:  /* *fop_df_comm_i387 */
    case 788:  /* *fop_sf_comm_i387 */
    case 787:  /* *fop_df_comm_sse */
    case 786:  /* *fop_sf_comm_sse */
    case 785:  /* *fop_df_comm_mixed */
    case 784:  /* *fop_sf_comm_mixed */
    case 620:  /* setcc_df_sse */
    case 619:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 613:  /* *btdi */
    case 612:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 611:  /* *btcq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 610:  /* *btrq */
    case 609:  /* *btsq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 593:  /* ix86_rotrti3_doubleword */
    case 592:  /* ix86_rotrdi3_doubleword */
    case 591:  /* ix86_rotlti3_doubleword */
    case 590:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1625:  /* vec_interleave_lowv4si */
    case 1624:  /* avx2_interleave_lowv8si */
    case 1623:  /* vec_interleave_highv4si */
    case 1622:  /* avx2_interleave_highv8si */
    case 1621:  /* vec_interleave_lowv8hi */
    case 1620:  /* avx2_interleave_lowv16hi */
    case 1619:  /* vec_interleave_highv8hi */
    case 1618:  /* avx2_interleave_highv16hi */
    case 1617:  /* vec_interleave_lowv16qi */
    case 1616:  /* avx2_interleave_lowv32qi */
    case 1615:  /* vec_interleave_highv16qi */
    case 1614:  /* avx2_interleave_highv32qi */
    case 1458:  /* vec_interleave_lowv2di */
    case 1457:  /* avx2_interleave_lowv4di */
    case 1456:  /* vec_interleave_highv2di */
    case 1455:  /* avx2_interleave_highv4di */
    case 1453:  /* *vec_interleave_lowv2df */
    case 1452:  /* *avx_unpcklpd256 */
    case 1451:  /* *vec_interleave_highv2df */
    case 1450:  /* avx_unpckhpd256 */
    case 1411:  /* vec_interleave_lowv4sf */
    case 1410:  /* avx_unpcklps256 */
    case 1409:  /* vec_interleave_highv4sf */
    case 1408:  /* avx_unpckhps256 */
    case 1407:  /* sse_movlhps */
    case 1406:  /* sse_movhlps */
    case 1128:  /* mmx_punpckldq */
    case 1127:  /* mmx_punpckhdq */
    case 1126:  /* mmx_punpcklwd */
    case 1125:  /* mmx_punpckhwd */
    case 1124:  /* mmx_punpcklbw */
    case 1123:  /* mmx_punpckhbw */
    case 600:  /* *bmi2_rorxsi3_1_zext */
    case 559:  /* *bmi2_ashrsi3_1_zext */
    case 558:  /* *bmi2_lshrsi3_1_zext */
    case 523:  /* *bmi2_ashlsi3_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 2004:  /* avx_vec_concatv4df */
    case 2003:  /* avx_vec_concatv8sf */
    case 2002:  /* avx_vec_concatv4di */
    case 2001:  /* avx_vec_concatv8si */
    case 2000:  /* avx_vec_concatv16hi */
    case 1999:  /* avx_vec_concatv32qi */
    case 1998:  /* avx2_lshrvv2di */
    case 1997:  /* avx2_ashlvv2di */
    case 1996:  /* avx2_lshrvv4di */
    case 1995:  /* avx2_ashlvv4di */
    case 1994:  /* avx2_lshrvv4si */
    case 1993:  /* avx2_ashlvv4si */
    case 1992:  /* avx2_lshrvv8si */
    case 1991:  /* avx2_ashlvv8si */
    case 1990:  /* avx2_ashrvv4si */
    case 1989:  /* avx2_ashrvv8si */
    case 1857:  /* xop_rotrv2di3 */
    case 1856:  /* xop_rotrv4si3 */
    case 1855:  /* xop_rotrv8hi3 */
    case 1854:  /* xop_rotrv16qi3 */
    case 1853:  /* xop_rotlv2di3 */
    case 1852:  /* xop_rotlv4si3 */
    case 1851:  /* xop_rotlv8hi3 */
    case 1850:  /* xop_rotlv16qi3 */
    case 1659:  /* vec_concatv2di */
    case 1658:  /* *vec_concatv2di_rex64 */
    case 1657:  /* *vec_concatv4si */
    case 1656:  /* *vec_concatv2si_sse */
    case 1655:  /* *vec_concatv2si_sse2 */
    case 1654:  /* *vec_concatv2si_sse4_1 */
    case 1607:  /* *xorv2di3 */
    case 1606:  /* *iorv2di3 */
    case 1605:  /* *andv2di3 */
    case 1604:  /* *xorv4di3 */
    case 1603:  /* *iorv4di3 */
    case 1602:  /* *andv4di3 */
    case 1601:  /* *xorv4si3 */
    case 1600:  /* *iorv4si3 */
    case 1599:  /* *andv4si3 */
    case 1598:  /* *xorv8si3 */
    case 1597:  /* *iorv8si3 */
    case 1596:  /* *andv8si3 */
    case 1595:  /* *xorv8hi3 */
    case 1594:  /* *iorv8hi3 */
    case 1593:  /* *andv8hi3 */
    case 1592:  /* *xorv16hi3 */
    case 1591:  /* *iorv16hi3 */
    case 1590:  /* *andv16hi3 */
    case 1589:  /* *xorv16qi3 */
    case 1588:  /* *iorv16qi3 */
    case 1587:  /* *andv16qi3 */
    case 1586:  /* *xorv32qi3 */
    case 1585:  /* *iorv32qi3 */
    case 1584:  /* *andv32qi3 */
    case 1575:  /* sse2_gtv4si3 */
    case 1574:  /* sse2_gtv8hi3 */
    case 1573:  /* sse2_gtv16qi3 */
    case 1572:  /* avx2_gtv4di3 */
    case 1571:  /* avx2_gtv8si3 */
    case 1570:  /* avx2_gtv16hi3 */
    case 1569:  /* avx2_gtv32qi3 */
    case 1568:  /* sse4_2_gtv2di3 */
    case 1567:  /* *sse2_eqv4si3 */
    case 1566:  /* *sse2_eqv8hi3 */
    case 1565:  /* *sse2_eqv16qi3 */
    case 1564:  /* *sse4_1_eqv2di3 */
    case 1563:  /* *avx2_eqv4di3 */
    case 1562:  /* *avx2_eqv8si3 */
    case 1561:  /* *avx2_eqv16hi3 */
    case 1560:  /* *avx2_eqv32qi3 */
    case 1559:  /* *uminv16qi3 */
    case 1558:  /* *umaxv16qi3 */
    case 1557:  /* *sse4_1_uminv4si3 */
    case 1556:  /* *sse4_1_umaxv4si3 */
    case 1555:  /* *sse4_1_uminv8hi3 */
    case 1554:  /* *sse4_1_umaxv8hi3 */
    case 1553:  /* *sminv8hi3 */
    case 1552:  /* *smaxv8hi3 */
    case 1551:  /* *sse4_1_sminv4si3 */
    case 1550:  /* *sse4_1_smaxv4si3 */
    case 1549:  /* *sse4_1_sminv16qi3 */
    case 1548:  /* *sse4_1_smaxv16qi3 */
    case 1547:  /* *avx2_uminv8si3 */
    case 1546:  /* *avx2_umaxv8si3 */
    case 1545:  /* *avx2_sminv8si3 */
    case 1544:  /* *avx2_smaxv8si3 */
    case 1543:  /* *avx2_uminv16hi3 */
    case 1542:  /* *avx2_umaxv16hi3 */
    case 1541:  /* *avx2_sminv16hi3 */
    case 1540:  /* *avx2_smaxv16hi3 */
    case 1539:  /* *avx2_uminv32qi3 */
    case 1538:  /* *avx2_umaxv32qi3 */
    case 1537:  /* *avx2_sminv32qi3 */
    case 1536:  /* *avx2_smaxv32qi3 */
    case 1535:  /* sse2_lshrv1ti3 */
    case 1534:  /* avx2_lshrv2ti3 */
    case 1533:  /* sse2_ashlv1ti3 */
    case 1532:  /* avx2_ashlv2ti3 */
    case 1531:  /* lshrv2di3 */
    case 1530:  /* ashlv2di3 */
    case 1529:  /* lshrv4di3 */
    case 1528:  /* ashlv4di3 */
    case 1527:  /* lshrv4si3 */
    case 1526:  /* ashlv4si3 */
    case 1525:  /* lshrv8si3 */
    case 1524:  /* ashlv8si3 */
    case 1523:  /* lshrv8hi3 */
    case 1522:  /* ashlv8hi3 */
    case 1521:  /* lshrv16hi3 */
    case 1520:  /* ashlv16hi3 */
    case 1519:  /* ashrv4si3 */
    case 1518:  /* ashrv8si3 */
    case 1517:  /* ashrv8hi3 */
    case 1516:  /* ashrv16hi3 */
    case 1515:  /* *sse4_1_mulv4si3 */
    case 1514:  /* *avx2_mulv8si3 */
    case 1503:  /* *mulv8hi3 */
    case 1502:  /* *mulv16hi3 */
    case 1501:  /* *sse2_ussubv8hi3 */
    case 1500:  /* *sse2_sssubv8hi3 */
    case 1499:  /* *sse2_usaddv8hi3 */
    case 1498:  /* *sse2_ssaddv8hi3 */
    case 1497:  /* *avx2_ussubv16hi3 */
    case 1496:  /* *avx2_sssubv16hi3 */
    case 1495:  /* *avx2_usaddv16hi3 */
    case 1494:  /* *avx2_ssaddv16hi3 */
    case 1493:  /* *sse2_ussubv16qi3 */
    case 1492:  /* *sse2_sssubv16qi3 */
    case 1491:  /* *sse2_usaddv16qi3 */
    case 1490:  /* *sse2_ssaddv16qi3 */
    case 1489:  /* *avx2_ussubv32qi3 */
    case 1488:  /* *avx2_sssubv32qi3 */
    case 1487:  /* *avx2_usaddv32qi3 */
    case 1486:  /* *avx2_ssaddv32qi3 */
    case 1485:  /* *subv2di3 */
    case 1484:  /* *addv2di3 */
    case 1483:  /* *subv4di3 */
    case 1482:  /* *addv4di3 */
    case 1481:  /* *subv4si3 */
    case 1480:  /* *addv4si3 */
    case 1479:  /* *subv8si3 */
    case 1478:  /* *addv8si3 */
    case 1477:  /* *subv8hi3 */
    case 1476:  /* *addv8hi3 */
    case 1475:  /* *subv16hi3 */
    case 1474:  /* *addv16hi3 */
    case 1473:  /* *subv16qi3 */
    case 1472:  /* *addv16qi3 */
    case 1471:  /* *subv32qi3 */
    case 1470:  /* *addv32qi3 */
    case 1469:  /* *vec_concatv2df */
    case 1430:  /* *vec_concatv4sf */
    case 1429:  /* *vec_concatv2sf_sse */
    case 1428:  /* *vec_concatv2sf_sse4_1 */
    case 1313:  /* *xortf3 */
    case 1312:  /* *iortf3 */
    case 1311:  /* *andtf3 */
    case 1310:  /* *xordf3 */
    case 1309:  /* *iordf3 */
    case 1308:  /* *anddf3 */
    case 1307:  /* *xorsf3 */
    case 1306:  /* *iorsf3 */
    case 1305:  /* *andsf3 */
    case 1301:  /* *xorv2df3 */
    case 1300:  /* *iorv2df3 */
    case 1299:  /* *andv2df3 */
    case 1298:  /* *xorv4df3 */
    case 1297:  /* *iorv4df3 */
    case 1296:  /* *andv4df3 */
    case 1295:  /* *xorv4sf3 */
    case 1294:  /* *iorv4sf3 */
    case 1293:  /* *andv4sf3 */
    case 1292:  /* *xorv8sf3 */
    case 1291:  /* *iorv8sf3 */
    case 1290:  /* *andv8sf3 */
    case 1239:  /* *sminv2df3 */
    case 1238:  /* *smaxv2df3 */
    case 1237:  /* *sminv4df3 */
    case 1236:  /* *smaxv4df3 */
    case 1235:  /* *sminv4sf3 */
    case 1234:  /* *smaxv4sf3 */
    case 1233:  /* *sminv8sf3 */
    case 1232:  /* *smaxv8sf3 */
    case 1231:  /* *sminv2df3_finite */
    case 1230:  /* *smaxv2df3_finite */
    case 1229:  /* *sminv4df3_finite */
    case 1228:  /* *smaxv4df3_finite */
    case 1227:  /* *sminv4sf3_finite */
    case 1226:  /* *smaxv4sf3_finite */
    case 1225:  /* *sminv8sf3_finite */
    case 1224:  /* *smaxv8sf3_finite */
    case 1209:  /* sse2_divv2df3 */
    case 1208:  /* avx_divv4df3 */
    case 1207:  /* sse_divv4sf3 */
    case 1206:  /* avx_divv8sf3 */
    case 1203:  /* *mulv2df3 */
    case 1202:  /* *mulv4df3 */
    case 1201:  /* *mulv4sf3 */
    case 1200:  /* *mulv8sf3 */
    case 1195:  /* *subv2df3 */
    case 1194:  /* *addv2df3 */
    case 1193:  /* *subv4df3 */
    case 1192:  /* *addv4df3 */
    case 1191:  /* *subv4sf3 */
    case 1190:  /* *addv4sf3 */
    case 1189:  /* *subv8sf3 */
    case 1188:  /* *addv8sf3 */
    case 1135:  /* *mmx_concatv2si */
    case 1119:  /* *mmx_xorv2si3 */
    case 1118:  /* *mmx_iorv2si3 */
    case 1117:  /* *mmx_andv2si3 */
    case 1116:  /* *mmx_xorv4hi3 */
    case 1115:  /* *mmx_iorv4hi3 */
    case 1114:  /* *mmx_andv4hi3 */
    case 1113:  /* *mmx_xorv8qi3 */
    case 1112:  /* *mmx_iorv8qi3 */
    case 1111:  /* *mmx_andv8qi3 */
    case 1107:  /* mmx_gtv2si3 */
    case 1106:  /* mmx_gtv4hi3 */
    case 1105:  /* mmx_gtv8qi3 */
    case 1104:  /* *mmx_eqv2si3 */
    case 1103:  /* *mmx_eqv4hi3 */
    case 1102:  /* *mmx_eqv8qi3 */
    case 1101:  /* mmx_lshrv1di3 */
    case 1100:  /* mmx_ashlv1di3 */
    case 1099:  /* mmx_lshrv2si3 */
    case 1098:  /* mmx_ashlv2si3 */
    case 1097:  /* mmx_lshrv4hi3 */
    case 1096:  /* mmx_ashlv4hi3 */
    case 1095:  /* mmx_ashrv2si3 */
    case 1094:  /* mmx_ashrv4hi3 */
    case 1093:  /* *mmx_uminv8qi3 */
    case 1092:  /* *mmx_umaxv8qi3 */
    case 1091:  /* *mmx_sminv4hi3 */
    case 1090:  /* *mmx_smaxv4hi3 */
    case 1084:  /* *mmx_mulv4hi3 */
    case 1083:  /* *mmx_ussubv4hi3 */
    case 1082:  /* *mmx_sssubv4hi3 */
    case 1081:  /* *mmx_usaddv4hi3 */
    case 1080:  /* *mmx_ssaddv4hi3 */
    case 1079:  /* *mmx_ussubv8qi3 */
    case 1078:  /* *mmx_sssubv8qi3 */
    case 1077:  /* *mmx_usaddv8qi3 */
    case 1076:  /* *mmx_ssaddv8qi3 */
    case 1075:  /* *mmx_subv1di3 */
    case 1074:  /* *mmx_addv1di3 */
    case 1073:  /* *mmx_subv2si3 */
    case 1072:  /* *mmx_addv2si3 */
    case 1071:  /* *mmx_subv4hi3 */
    case 1070:  /* *mmx_addv4hi3 */
    case 1069:  /* *mmx_subv8qi3 */
    case 1068:  /* *mmx_addv8qi3 */
    case 1065:  /* *mmx_concatv2sf */
    case 1058:  /* mmx_gev2sf3 */
    case 1057:  /* mmx_gtv2sf3 */
    case 1056:  /* *mmx_eqv2sf3 */
    case 1047:  /* *mmx_sminv2sf3 */
    case 1046:  /* *mmx_smaxv2sf3 */
    case 1045:  /* *mmx_sminv2sf3_finite */
    case 1044:  /* *mmx_smaxv2sf3_finite */
    case 1043:  /* *mmx_mulv2sf3 */
    case 1042:  /* *mmx_subv2sf3 */
    case 1041:  /* *mmx_addv2sf3 */
    case 954:  /* smindf3 */
    case 953:  /* smaxdf3 */
    case 952:  /* sminsf3 */
    case 951:  /* smaxsf3 */
    case 595:  /* *bmi2_rorxdi3_1 */
    case 594:  /* *bmi2_rorxsi3_1 */
    case 553:  /* *bmi2_ashrdi3_1 */
    case 552:  /* *bmi2_lshrdi3_1 */
    case 551:  /* *bmi2_ashrsi3_1 */
    case 550:  /* *bmi2_lshrsi3_1 */
    case 520:  /* *bmi2_ashldi3_1 */
    case 519:  /* *bmi2_ashlsi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 589:  /* *rotrdi3_mask */
    case 588:  /* *rotldi3_mask */
    case 587:  /* *rotrsi3_mask */
    case 586:  /* *rotlsi3_mask */
    case 540:  /* *ashrdi3_mask */
    case 539:  /* *lshrdi3_mask */
    case 538:  /* *ashrsi3_mask */
    case 537:  /* *lshrsi3_mask */
    case 518:  /* *ashldi3_mask */
    case 517:  /* *ashlsi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 546:  /* x86_shrd */
    case 545:  /* x86_64_shrd */
    case 516:  /* x86_shld */
    case 515:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 753:  /* *popcountsi2_cmp_zext */
    case 512:  /* *one_cmplsi2_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 502:  /* copysigntf3_var */
    case 501:  /* copysigndf3_var */
    case 500:  /* copysignsf3_var */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      break;

    case 1952:  /* *avx_vperm2f128v4df_full */
    case 1951:  /* *avx_vperm2f128v8sf_full */
    case 1950:  /* *avx_vperm2f128v8si_full */
    case 1923:  /* avx2_permv2ti */
    case 1904:  /* pclmulqdq */
    case 1893:  /* xop_pcom_tfv2di3 */
    case 1892:  /* xop_pcom_tfv4si3 */
    case 1891:  /* xop_pcom_tfv8hi3 */
    case 1890:  /* xop_pcom_tfv16qi3 */
    case 1846:  /* xop_pperm */
    case 1755:  /* sse4_1_pblendvb */
    case 1754:  /* avx2_pblendvb */
    case 1751:  /* sse4_1_mpsadbw */
    case 1750:  /* avx2_mpsadbw */
    case 1747:  /* sse4_1_dppd */
    case 1746:  /* avx_dppd256 */
    case 1745:  /* sse4_1_dpps */
    case 1744:  /* avx_dpps256 */
    case 1743:  /* sse4_1_blendvpd */
    case 1742:  /* avx_blendvpd256 */
    case 1741:  /* sse4_1_blendvps */
    case 1740:  /* avx_blendvps256 */
    case 1732:  /* sse4a_extrqi */
    case 1718:  /* ssse3_palignrdi */
    case 1717:  /* ssse3_palignrti */
    case 1716:  /* avx2_palignrv2ti */
    case 1341:  /* *fma_fmaddsub_v2df */
    case 1340:  /* *fma_fmaddsub_v4df */
    case 1339:  /* *fma_fmaddsub_v4sf */
    case 1338:  /* *fma_fmaddsub_v8sf */
    case 1269:  /* avx_cmpv2df3 */
    case 1268:  /* avx_cmpv4df3 */
    case 1267:  /* avx_cmpv4sf3 */
    case 1266:  /* avx_cmpv8sf3 */
    case 499:  /* copysigntf3_const */
    case 498:  /* copysigndf3_const */
    case 497:  /* copysignsf3_const */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1187:  /* *absnegv2df2 */
    case 1186:  /* *absnegv4df2 */
    case 1185:  /* *absnegv4sf2 */
    case 1184:  /* *absnegv8sf2 */
    case 484:  /* *absnegtf2_sse */
    case 483:  /* *absnegxf2_i387 */
    case 482:  /* *absnegdf2_i387 */
    case 481:  /* *absnegsf2_i387 */
    case 480:  /* *absnegdf2_sse */
    case 479:  /* *absnegsf2_sse */
    case 478:  /* *absnegdf2_mixed */
    case 477:  /* *absnegsf2_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 476:  /* *negsi2_cmpz_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 752:  /* *popcountdi2_cmp */
    case 751:  /* *popcountsi2_cmp */
    case 750:  /* *popcounthi2_cmp */
    case 511:  /* *one_cmpldi2_2 */
    case 510:  /* *one_cmplsi2_2 */
    case 509:  /* *one_cmplhi2_2 */
    case 508:  /* *one_cmplqi2_2 */
    case 475:  /* *negdi2_cmpz */
    case 474:  /* *negsi2_cmpz */
    case 473:  /* *neghi2_cmpz */
    case 472:  /* *negqi2_cmpz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 471:  /* *negsi2_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 444:  /* *xorsi_2_zext_imm */
    case 443:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 768:  /* *tls_local_dynamic_base_64_di */
    case 767:  /* *tls_local_dynamic_base_64_si */
    case 709:  /* *bmi_andn_di */
    case 708:  /* *bmi_andn_si */
    case 675:  /* *call_value_rex64_ms_sysv */
    case 430:  /* *xorsi_1_zext_imm */
    case 429:  /* *iorsi_1_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 464:  /* *xorqi_cc_ext_1 */
    case 463:  /* *xorqi_cc_ext_1_rex64 */
    case 415:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 446:  /* *xorqi_2_slp */
    case 445:  /* *iorqi_2_slp */
    case 413:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 400:  /* *testqi_ext_3 */
    case 399:  /* *testqi_ext_3_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 398:  /* *testqi_ext_2 */
    case 397:  /* *testqi_ext_1 */
    case 396:  /* *testqi_ext_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 395:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 389:  /* udivmodhiqi3 */
    case 380:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 388:  /* *udivmoddi4_noext */
    case 387:  /* *udivmodsi4_noext */
    case 386:  /* *udivmodhi4_noext */
    case 379:  /* *divmoddi4_noext */
    case 378:  /* *divmodsi4_noext */
    case 377:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 385:  /* *udivmoddi4 */
    case 384:  /* *udivmodsi4 */
    case 383:  /* *udivmodhi4 */
    case 382:  /* udivmoddi4_1 */
    case 381:  /* udivmodsi4_1 */
    case 376:  /* *divmoddi4 */
    case 375:  /* *divmodsi4 */
    case 374:  /* *divmodhi4 */
    case 373:  /* divmoddi4_1 */
    case 372:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 371:  /* *umulsi3_highpart_zext */
    case 370:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 369:  /* *umulsi3_highpart_1 */
    case 368:  /* *smulsi3_highpart_1 */
    case 367:  /* *umuldi3_highpart_1 */
    case 366:  /* *smuldi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 365:  /* *umulqihi3_1 */
    case 364:  /* *mulqihi3_1 */
    case 363:  /* *mulditi3_1 */
    case 362:  /* *mulsidi3_1 */
    case 361:  /* *umulditi3_1 */
    case 360:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 359:  /* *bmi2_umulsidi3_1 */
    case 358:  /* *bmi2_umulditi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 352:  /* *subsi3_zext_cc_overflow */
    case 351:  /* *addsi3_zext_cc_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 350:  /* *subdi3_cc_overflow */
    case 349:  /* *adddi3_cc_overflow */
    case 348:  /* *subsi3_cc_overflow */
    case 347:  /* *addsi3_cc_overflow */
    case 346:  /* *subhi3_cc_overflow */
    case 345:  /* *addhi3_cc_overflow */
    case 344:  /* *subqi3_cc_overflow */
    case 343:  /* *addqi3_cc_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 342:  /* *subdi3_cconly_overflow */
    case 341:  /* *subsi3_cconly_overflow */
    case 340:  /* *subhi3_cconly_overflow */
    case 339:  /* *subqi3_cconly_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 338:  /* *adddi3_cconly_overflow */
    case 337:  /* *addsi3_cconly_overflow */
    case 336:  /* *addhi3_cconly_overflow */
    case 335:  /* *addqi3_cconly_overflow */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 334:  /* adcxdi3 */
    case 333:  /* adcxsi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 332:  /* *subsi3_carry_zext */
    case 331:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 330:  /* *subdi3_carry */
    case 329:  /* *adddi3_carry */
    case 328:  /* *subsi3_carry */
    case 327:  /* *addsi3_carry */
    case 326:  /* *subhi3_carry */
    case 325:  /* *addhi3_carry */
    case 324:  /* *subqi3_carry */
    case 323:  /* *addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 322:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 321:  /* *subdi_3 */
    case 320:  /* *subsi_3 */
    case 319:  /* *subhi_3 */
    case 318:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 302:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1810:  /* xop_pmacssdd */
    case 1809:  /* xop_pmacsdd */
    case 1808:  /* xop_pmacssww */
    case 1807:  /* xop_pmacsww */
    case 304:  /* *lea_general_4 */
    case 303:  /* *lea_general_4 */
    case 301:  /* *lea_general_2 */
    case 300:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 462:  /* *xorqi_ext_2 */
    case 461:  /* *iorqi_ext_2 */
    case 460:  /* *xorqi_ext_1 */
    case 459:  /* *iorqi_ext_1 */
    case 458:  /* *xorqi_ext_1_rex64 */
    case 457:  /* *iorqi_ext_1_rex64 */
    case 418:  /* *andqi_ext_2 */
    case 417:  /* *andqi_ext_1 */
    case 416:  /* *andqi_ext_1_rex64 */
    case 299:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 456:  /* *xorqi_ext_0 */
    case 455:  /* *iorqi_ext_0 */
    case 414:  /* andqi_ext_0 */
    case 298:  /* addqi_ext_1 */
    case 297:  /* *addqi_ext_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 585:  /* *ashrdi3_cconly */
    case 584:  /* *lshrdi3_cconly */
    case 583:  /* *ashrsi3_cconly */
    case 582:  /* *lshrsi3_cconly */
    case 581:  /* *ashrhi3_cconly */
    case 580:  /* *lshrhi3_cconly */
    case 579:  /* *ashrqi3_cconly */
    case 578:  /* *lshrqi3_cconly */
    case 536:  /* *ashldi3_cconly */
    case 535:  /* *ashlsi3_cconly */
    case 534:  /* *ashlhi3_cconly */
    case 533:  /* *ashlqi3_cconly */
    case 454:  /* *xordi_3 */
    case 453:  /* *iordi_3 */
    case 452:  /* *xorsi_3 */
    case 451:  /* *iorsi_3 */
    case 450:  /* *xorhi_3 */
    case 449:  /* *iorhi_3 */
    case 448:  /* *xorqi_3 */
    case 447:  /* *iorqi_3 */
    case 296:  /* *adddi_5 */
    case 295:  /* *addsi_5 */
    case 294:  /* *addhi_5 */
    case 293:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 288:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 287:  /* *adddi_3 */
    case 286:  /* *addsi_3 */
    case 285:  /* *addhi_3 */
    case 284:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 577:  /* *ashrsi3_cmp_zext */
    case 576:  /* *lshrsi3_cmp_zext */
    case 532:  /* *ashlsi3_cmp_zext */
    case 442:  /* *xorsi_2_zext */
    case 441:  /* *iorsi_2_zext */
    case 412:  /* *andsi_2_zext */
    case 317:  /* *subsi_2_zext */
    case 283:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 575:  /* *ashrdi3_cmp */
    case 574:  /* *lshrdi3_cmp */
    case 573:  /* *ashrsi3_cmp */
    case 572:  /* *lshrsi3_cmp */
    case 571:  /* *ashrhi3_cmp */
    case 570:  /* *lshrhi3_cmp */
    case 569:  /* *ashrqi3_cmp */
    case 568:  /* *lshrqi3_cmp */
    case 531:  /* *ashldi3_cmp */
    case 530:  /* *ashlsi3_cmp */
    case 529:  /* *ashlhi3_cmp */
    case 528:  /* *ashlqi3_cmp */
    case 440:  /* *xordi_2 */
    case 439:  /* *iordi_2 */
    case 438:  /* *xorsi_2 */
    case 437:  /* *iorsi_2 */
    case 436:  /* *xorhi_2 */
    case 435:  /* *iorhi_2 */
    case 434:  /* *xorqi_2 */
    case 433:  /* *iorqi_2 */
    case 411:  /* *andsi_2 */
    case 410:  /* *andhi_2 */
    case 409:  /* *andqi_2 */
    case 408:  /* *andqi_2_maybe_si */
    case 407:  /* *anddi_2 */
    case 316:  /* *subdi_2 */
    case 315:  /* *subsi_2 */
    case 314:  /* *subhi_2 */
    case 313:  /* *subqi_2 */
    case 282:  /* *adddi_2 */
    case 281:  /* *addsi_2 */
    case 280:  /* *addhi_2 */
    case 279:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 608:  /* *rotrqi3_1_slp */
    case 607:  /* *rotlqi3_1_slp */
    case 567:  /* *ashrqi3_1_slp */
    case 566:  /* *lshrqi3_1_slp */
    case 527:  /* *ashlqi3_1_slp */
    case 432:  /* *xorqi_1_slp */
    case 431:  /* *iorqi_1_slp */
    case 406:  /* *andqi_1_slp */
    case 312:  /* *subqi_1_slp */
    case 278:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 602:  /* *rotrsi3_1_zext */
    case 601:  /* *rotlsi3_1_zext */
    case 561:  /* *ashrsi3_1_zext */
    case 560:  /* *lshrsi3_1_zext */
    case 549:  /* *ashrsi3_cvt_zext */
    case 524:  /* *ashlsi3_1_zext */
    case 428:  /* *xorsi_1_zext */
    case 427:  /* *iorsi_1_zext */
    case 403:  /* *andsi_1_zext */
    case 355:  /* *mulsi3_1_zext */
    case 311:  /* *subsi_1_zext */
    case 275:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 272:  /* addqi3_cc */
    case 271:  /* *adddi3_cc */
    case 270:  /* *addsi3_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 962:  /* pro_epilogue_adjust_stack_di_sub */
    case 961:  /* pro_epilogue_adjust_stack_si_sub */
    case 960:  /* pro_epilogue_adjust_stack_di_add */
    case 959:  /* pro_epilogue_adjust_stack_si_add */
    case 606:  /* *rotrhi3_1 */
    case 605:  /* *rotlhi3_1 */
    case 604:  /* *rotrqi3_1 */
    case 603:  /* *rotlqi3_1 */
    case 599:  /* *rotrdi3_1 */
    case 598:  /* *rotldi3_1 */
    case 597:  /* *rotrsi3_1 */
    case 596:  /* *rotlsi3_1 */
    case 565:  /* *ashrhi3_1 */
    case 564:  /* *lshrhi3_1 */
    case 563:  /* *ashrqi3_1 */
    case 562:  /* *lshrqi3_1 */
    case 557:  /* *ashrdi3_1 */
    case 556:  /* *lshrdi3_1 */
    case 555:  /* *ashrsi3_1 */
    case 554:  /* *lshrsi3_1 */
    case 548:  /* ashrsi3_cvt */
    case 547:  /* ashrdi3_cvt */
    case 544:  /* *ashrti3_doubleword */
    case 543:  /* *lshrti3_doubleword */
    case 542:  /* *ashrdi3_doubleword */
    case 541:  /* *lshrdi3_doubleword */
    case 526:  /* *ashlqi3_1 */
    case 525:  /* *ashlhi3_1 */
    case 522:  /* *ashldi3_1 */
    case 521:  /* *ashlsi3_1 */
    case 514:  /* *ashlti3_doubleword */
    case 513:  /* *ashldi3_doubleword */
    case 426:  /* *xorqi_1 */
    case 425:  /* *iorqi_1 */
    case 424:  /* *xordi_1 */
    case 423:  /* *iordi_1 */
    case 422:  /* *xorsi_1 */
    case 421:  /* *iorsi_1 */
    case 420:  /* *xorhi_1 */
    case 419:  /* *iorhi_1 */
    case 405:  /* *andqi_1 */
    case 404:  /* *andhi_1 */
    case 402:  /* *andsi_1 */
    case 401:  /* *anddi_1 */
    case 357:  /* *mulqi3_1 */
    case 356:  /* *mulhi3_1 */
    case 354:  /* *muldi3_1 */
    case 353:  /* *mulsi3_1 */
    case 310:  /* *subdi_1 */
    case 309:  /* *subsi_1 */
    case 308:  /* *subhi_1 */
    case 307:  /* *subqi_1 */
    case 306:  /* *subti3_doubleword */
    case 305:  /* *subdi3_doubleword */
    case 277:  /* *addqi_1 */
    case 276:  /* *addhi_1 */
    case 274:  /* *adddi_1 */
    case 273:  /* *addsi_1 */
    case 269:  /* *addti3_doubleword */
    case 268:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 262:  /* floatdixf2_i387_with_xmm */
    case 261:  /* floatdidf2_i387_with_xmm */
    case 260:  /* floatdisf2_i387_with_xmm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 194:  /* fix_truncdi_i387_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 198:  /* fix_truncsi_i387_with_temp */
    case 197:  /* fix_trunchi_i387_with_temp */
    case 193:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 265:  /* *floatunssixf2_1 */
    case 264:  /* *floatunssidf2_1 */
    case 263:  /* *floatunssisf2_1 */
    case 196:  /* fix_truncsi_i387 */
    case 195:  /* fix_trunchi_i387 */
    case 189:  /* fix_truncdi_i387_fisttp_with_temp */
    case 188:  /* fix_truncsi_i387_fisttp_with_temp */
    case 187:  /* fix_trunchi_i387_fisttp_with_temp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 176:  /* *fixuns_truncdf_1 */
    case 175:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1161:  /* movdi_to_sse */
    case 697:  /* ffssi2_no_cmove */
    case 253:  /* *floatdixf2_i387_with_temp */
    case 252:  /* *floatdidf2_i387_with_temp */
    case 251:  /* *floatdisf2_i387_with_temp */
    case 250:  /* *floatsixf2_i387_with_temp */
    case 249:  /* *floatsidf2_i387_with_temp */
    case 248:  /* *floatsisf2_i387_with_temp */
    case 239:  /* *floatdidf2_sse_with_temp */
    case 238:  /* *floatsidf2_sse_with_temp */
    case 237:  /* *floatdisf2_sse_with_temp */
    case 236:  /* *floatsisf2_sse_with_temp */
    case 233:  /* *floatsidf2_vector_sse_with_temp */
    case 232:  /* *floatsisf2_vector_sse_with_temp */
    case 223:  /* *floatdidf2_mixed_with_temp */
    case 222:  /* *floatsidf2_mixed_with_temp */
    case 221:  /* *floatdisf2_mixed_with_temp */
    case 220:  /* *floatsisf2_mixed_with_temp */
    case 217:  /* *floatsidf2_vector_mixed_with_temp */
    case 216:  /* *floatsisf2_vector_mixed_with_temp */
    case 206:  /* *floathixf2_i387_with_temp */
    case 205:  /* *floathidf2_i387_with_temp */
    case 204:  /* *floathisf2_i387_with_temp */
    case 186:  /* fix_truncdi_i387_fisttp */
    case 185:  /* fix_truncsi_i387_fisttp */
    case 184:  /* fix_trunchi_i387_fisttp */
    case 170:  /* *truncxfdf2_mixed */
    case 169:  /* *truncxfsf2_mixed */
    case 167:  /* *truncdfsf_i387 */
    case 166:  /* *truncdfsf_mixed */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 150:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 940:  /* *x86_movdicc_0_m1_neg */
    case 939:  /* *x86_movsicc_0_m1_neg */
    case 938:  /* *x86_movdicc_0_m1_se */
    case 937:  /* *x86_movsicc_0_m1_se */
    case 936:  /* *x86_movdicc_0_m1 */
    case 935:  /* *x86_movsicc_0_m1 */
    case 749:  /* popcountdi2 */
    case 748:  /* popcountsi2 */
    case 747:  /* popcounthi2 */
    case 707:  /* clzdi2_lzcnt */
    case 706:  /* clzsi2_lzcnt */
    case 705:  /* clzhi2_lzcnt */
    case 704:  /* ctzdi2 */
    case 703:  /* ctzsi2 */
    case 702:  /* ctzhi2 */
    case 470:  /* *negdi2_1 */
    case 469:  /* *negsi2_1 */
    case 468:  /* *neghi2_1 */
    case 467:  /* *negqi2_1 */
    case 466:  /* *negti2_doubleword */
    case 465:  /* *negdi2_doubleword */
    case 192:  /* *fix_truncdi_i387_1 */
    case 191:  /* *fix_truncsi_i387_1 */
    case 190:  /* *fix_trunchi_i387_1 */
    case 147:  /* zero_extendqihi2_and */
    case 144:  /* zero_extendhisi2_and */
    case 143:  /* zero_extendqisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 121:  /* *movqi_insv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1924:  /* avx2_vec_dupv4df */
    case 1918:  /* avx2_pbroadcastv4di_1 */
    case 1917:  /* avx2_pbroadcastv8si_1 */
    case 1916:  /* avx2_pbroadcastv16hi_1 */
    case 1915:  /* avx2_pbroadcastv32qi_1 */
    case 1914:  /* avx2_pbroadcastv2di */
    case 1913:  /* avx2_pbroadcastv4di */
    case 1912:  /* avx2_pbroadcastv4si */
    case 1911:  /* avx2_pbroadcastv8si */
    case 1910:  /* avx2_pbroadcastv8hi */
    case 1909:  /* avx2_pbroadcastv16hi */
    case 1908:  /* avx2_pbroadcastv16qi */
    case 1907:  /* avx2_pbroadcastv32qi */
    case 1784:  /* sse4_1_zero_extendv2siv2di2 */
    case 1783:  /* sse4_1_sign_extendv2siv2di2 */
    case 1780:  /* sse4_1_zero_extendv2hiv2di2 */
    case 1779:  /* sse4_1_sign_extendv2hiv2di2 */
    case 1778:  /* avx2_zero_extendv4hiv4di2 */
    case 1777:  /* avx2_sign_extendv4hiv4di2 */
    case 1776:  /* sse4_1_zero_extendv2qiv2di2 */
    case 1775:  /* sse4_1_sign_extendv2qiv2di2 */
    case 1774:  /* avx2_zero_extendv4qiv4di2 */
    case 1773:  /* avx2_sign_extendv4qiv4di2 */
    case 1772:  /* sse4_1_zero_extendv4hiv4si2 */
    case 1771:  /* sse4_1_sign_extendv4hiv4si2 */
    case 1768:  /* sse4_1_zero_extendv4qiv4si2 */
    case 1767:  /* sse4_1_sign_extendv4qiv4si2 */
    case 1766:  /* avx2_zero_extendv8qiv8si2 */
    case 1765:  /* avx2_sign_extendv8qiv8si2 */
    case 1764:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 1763:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 1426:  /* avx2_vec_dupv8sf_1 */
    case 1425:  /* avx2_vec_dupv4sf */
    case 1424:  /* avx2_vec_dupv8sf */
    case 1405:  /* sse2_cvtps2pd */
    case 1404:  /* *avx_cvtps2pd256_2 */
    case 1392:  /* sse2_cvtdq2pd */
    case 1391:  /* avx_cvtdq2pd256_2 */
    case 1389:  /* sse2_cvttsd2siq */
    case 1388:  /* sse2_cvttsd2si */
    case 1372:  /* sse_cvttss2siq */
    case 1371:  /* sse_cvttss2si */
    case 1364:  /* sse_cvttps2pi */
    case 1160:  /* sse2_movq128 */
    case 1133:  /* *vec_dupv4hi */
    case 824:  /* sqrt_extenddfxf2_i387 */
    case 823:  /* sqrt_extendsfxf2_i387 */
    case 507:  /* *one_cmplsi2_1_zext */
    case 496:  /* *negextenddfxf2 */
    case 495:  /* *absextenddfxf2 */
    case 494:  /* *negextendsfxf2 */
    case 493:  /* *absextendsfxf2 */
    case 492:  /* *negextendsfdf2 */
    case 491:  /* *absextendsfdf2 */
    case 156:  /* *extendqisi2_zext */
    case 154:  /* *extendhisi2_zext */
    case 117:  /* *movqi_extzv_2 */
    case 116:  /* *movqi_extzv_2_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 666:  /* *call_rex64_ms_sysv */
    case 109:  /* *movstricthi_xor */
    case 108:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 138:  /* *swapdf */
    case 137:  /* *swapsf */
    case 136:  /* swapxf */
    case 105:  /* *swaphi_2 */
    case 104:  /* *swapqi_2 */
    case 103:  /* *swaphi_1 */
    case 102:  /* *swapqi_1 */
    case 101:  /* swapdi */
    case 100:  /* swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 1928:  /* vec_dupv4df */
    case 1927:  /* vec_dupv4di */
    case 1926:  /* vec_dupv8sf */
    case 1925:  /* vec_dupv8si */
    case 1782:  /* avx2_zero_extendv4siv4di2 */
    case 1781:  /* avx2_sign_extendv4siv4di2 */
    case 1770:  /* avx2_zero_extendv8hiv8si2 */
    case 1769:  /* avx2_sign_extendv8hiv8si2 */
    case 1762:  /* avx2_zero_extendv16qiv16hi2 */
    case 1761:  /* avx2_sign_extendv16qiv16hi2 */
    case 1727:  /* absv2si2 */
    case 1726:  /* absv4hi2 */
    case 1725:  /* absv8qi2 */
    case 1724:  /* absv4si2 */
    case 1723:  /* absv8si2 */
    case 1722:  /* absv8hi2 */
    case 1721:  /* absv16hi2 */
    case 1720:  /* absv16qi2 */
    case 1719:  /* absv32qi2 */
    case 1653:  /* *vec_dupv2di */
    case 1652:  /* *vec_dupv4si */
    case 1651:  /* *vec_extractv2di_1 */
    case 1650:  /* *vec_extractv2di_1_rex64 */
    case 1649:  /* *sse2_storeq */
    case 1648:  /* *sse2_storeq_rex64 */
    case 1646:  /* sse2_stored */
    case 1468:  /* vec_dupv2df */
    case 1464:  /* *vec_extractv2df_0_sse */
    case 1463:  /* sse2_storelpd */
    case 1462:  /* *vec_extractv2df_1_sse */
    case 1461:  /* sse2_storehpd */
    case 1449:  /* vec_extract_hi_v32qi */
    case 1448:  /* vec_extract_lo_v32qi */
    case 1447:  /* vec_extract_hi_v16hi */
    case 1446:  /* vec_extract_lo_v16hi */
    case 1445:  /* vec_extract_hi_v8sf */
    case 1444:  /* vec_extract_hi_v8si */
    case 1443:  /* vec_extract_lo_v8sf */
    case 1442:  /* vec_extract_lo_v8si */
    case 1441:  /* vec_extract_hi_v4df */
    case 1440:  /* vec_extract_hi_v4di */
    case 1439:  /* vec_extract_lo_v4df */
    case 1438:  /* vec_extract_lo_v4di */
    case 1435:  /* *vec_extractv4sf_0 */
    case 1427:  /* vec_dupv4sf */
    case 1421:  /* sse_storelps */
    case 1419:  /* sse_storehps */
    case 1403:  /* avx_cvtps2pd256 */
    case 1401:  /* avx_cvtpd2ps256 */
    case 1396:  /* fix_truncv4dfv4si2 */
    case 1390:  /* floatv4siv4df2 */
    case 1381:  /* sse2_cvttpd2pi */
    case 1379:  /* sse2_cvtpi2pd */
    case 1378:  /* fix_truncv4sfv4si2 */
    case 1377:  /* fix_truncv8sfv8si2 */
    case 1374:  /* floatv4siv4sf2 */
    case 1373:  /* floatv8siv8sf2 */
    case 1218:  /* sse2_sqrtv2df2 */
    case 1217:  /* avx_sqrtv4df2 */
    case 1216:  /* sse_sqrtv4sf2 */
    case 1215:  /* avx_sqrtv8sf2 */
    case 1137:  /* *vec_extractv2si_1 */
    case 1136:  /* *vec_extractv2si_0 */
    case 1134:  /* *vec_dupv2si */
    case 1132:  /* mmx_pswapdv2si2 */
    case 1067:  /* *vec_extractv2sf_1 */
    case 1066:  /* *vec_extractv2sf_0 */
    case 1064:  /* *vec_dupv2sf */
    case 1063:  /* mmx_pswapdv2sf2 */
    case 1062:  /* mmx_floatv2si2 */
    case 1059:  /* mmx_pf2id */
    case 827:  /* *sqrtdf2_sse */
    case 826:  /* *sqrtsf2_sse */
    case 822:  /* sqrtxf2 */
    case 757:  /* *bswapdi2 */
    case 756:  /* *bswapsi2 */
    case 755:  /* *bswapdi2_movbe */
    case 754:  /* *bswapsi2_movbe */
    case 506:  /* *one_cmplqi2_1 */
    case 505:  /* *one_cmpldi2_1 */
    case 504:  /* *one_cmplsi2_1 */
    case 503:  /* *one_cmplhi2_1 */
    case 490:  /* *negxf2_1 */
    case 489:  /* *absxf2_1 */
    case 488:  /* *negdf2_1 */
    case 487:  /* *absdf2_1 */
    case 486:  /* *negsf2_1 */
    case 485:  /* *abssf2_1 */
    case 259:  /* *floatdixf2_i387 */
    case 258:  /* *floatdidf2_i387 */
    case 257:  /* *floatdisf2_i387 */
    case 256:  /* *floatsixf2_i387 */
    case 255:  /* *floatsidf2_i387 */
    case 254:  /* *floatsisf2_i387 */
    case 247:  /* *floatdidf2_sse_nointerunit */
    case 246:  /* *floatsidf2_sse_nointerunit */
    case 245:  /* *floatdisf2_sse_nointerunit */
    case 244:  /* *floatsisf2_sse_nointerunit */
    case 243:  /* *floatdidf2_sse_interunit */
    case 242:  /* *floatsidf2_sse_interunit */
    case 241:  /* *floatdisf2_sse_interunit */
    case 240:  /* *floatsisf2_sse_interunit */
    case 235:  /* *floatsidf2_vector_sse */
    case 234:  /* *floatsisf2_vector_sse */
    case 231:  /* *floatdidf2_mixed_nointerunit */
    case 230:  /* *floatsidf2_mixed_nointerunit */
    case 229:  /* *floatdisf2_mixed_nointerunit */
    case 228:  /* *floatsisf2_mixed_nointerunit */
    case 227:  /* *floatdidf2_mixed_interunit */
    case 226:  /* *floatsidf2_mixed_interunit */
    case 225:  /* *floatdisf2_mixed_interunit */
    case 224:  /* *floatsisf2_mixed_interunit */
    case 219:  /* *floatsidf2_vector_mixed */
    case 218:  /* *floatsisf2_vector_mixed */
    case 215:  /* *floatdixf2_1 */
    case 214:  /* *floatdidf2_1 */
    case 213:  /* *floatdisf2_1 */
    case 212:  /* *floatsixf2_1 */
    case 211:  /* *floatsidf2_1 */
    case 210:  /* *floatsisf2_1 */
    case 209:  /* *floathixf2_i387 */
    case 208:  /* *floathidf2_i387 */
    case 207:  /* *floathisf2_i387 */
    case 203:  /* *floathixf2_1 */
    case 202:  /* *floathidf2_1 */
    case 201:  /* *floathisf2_1 */
    case 183:  /* fix_truncdi_fisttp_i387_1 */
    case 182:  /* fix_truncsi_fisttp_i387_1 */
    case 181:  /* fix_trunchi_fisttp_i387_1 */
    case 180:  /* fix_truncdfdi_sse */
    case 179:  /* fix_truncdfsi_sse */
    case 178:  /* fix_truncsfdi_sse */
    case 177:  /* fix_truncsfsi_sse */
    case 174:  /* *truncxfdf2_i387 */
    case 173:  /* *truncxfsf2_i387 */
    case 172:  /* truncxfdf2_i387_noop */
    case 171:  /* truncxfsf2_i387_noop */
    case 168:  /* *truncdfsf2_i387_1 */
    case 165:  /* *truncdfsf_fast_i387 */
    case 164:  /* *truncdfsf_fast_sse */
    case 163:  /* *truncdfsf_fast_mixed */
    case 162:  /* *extenddfxf2_i387 */
    case 161:  /* *extendsfxf2_i387 */
    case 160:  /* *extendsfdf2_i387 */
    case 159:  /* *extendsfdf2_sse */
    case 158:  /* *extendsfdf2_mixed */
    case 157:  /* extendqihi2 */
    case 155:  /* extendqisi2 */
    case 153:  /* extendhisi2 */
    case 152:  /* extendhidi2 */
    case 151:  /* extendqidi2 */
    case 149:  /* *extendsidi2_rex64 */
    case 148:  /* *zero_extendqihi2 */
    case 146:  /* *zero_extendhisi2 */
    case 145:  /* *zero_extendqisi2 */
    case 142:  /* zero_extendhidi2 */
    case 141:  /* zero_extendqidi2 */
    case 140:  /* *zero_extendsidi2 */
    case 139:  /* *zero_extendsidi2_rex64 */
    case 115:  /* *movdi_extzv_1 */
    case 114:  /* *movsi_extzv_1 */
    case 113:  /* *movqi_extv_1 */
    case 112:  /* *movqi_extv_1_rex64 */
    case 111:  /* *movsi_extv_1 */
    case 110:  /* *movhi_extv_1 */
    case 99:  /* *movabsdi_2 */
    case 98:  /* *movabssi_2 */
    case 97:  /* *movabshi_2 */
    case 96:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 668:  /* *sibcall */
    case 667:  /* *sibcall */
    case 665:  /* *call */
    case 664:  /* *call */
    case 618:  /* *setcc_qi_slp */
    case 120:  /* *movsi_insv_1 */
    case 119:  /* *movdi_insv_1_rex64 */
    case 118:  /* *movsi_insv_1_rex64 */
    case 107:  /* *movstricthi_1 */
    case 106:  /* *movstrictqi_1 */
    case 95:  /* *movabsdi_1 */
    case 94:  /* *movabssi_1 */
    case 93:  /* *movabshi_1 */
    case 92:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 615:  /* *setcc_si_1_and */
    case 83:  /* *movdi_or */
    case 82:  /* *movsi_or */
    case 81:  /* *movdi_xor */
    case 80:  /* *movsi_xor */
    case 79:  /* *popdi1_epilogue */
    case 78:  /* *popsi1_epilogue */
    case 75:  /* *pushdi2_prologue */
    case 74:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1159:  /* *movv2df_internal */
    case 1158:  /* *movv4df_internal */
    case 1157:  /* *movv4sf_internal */
    case 1156:  /* *movv8sf_internal */
    case 1155:  /* *movv1ti_internal */
    case 1154:  /* *movv2ti_internal */
    case 1153:  /* *movv2di_internal */
    case 1152:  /* *movv4di_internal */
    case 1151:  /* *movv4si_internal */
    case 1150:  /* *movv8si_internal */
    case 1149:  /* *movv8hi_internal */
    case 1148:  /* *movv16hi_internal */
    case 1147:  /* *movv16qi_internal */
    case 1146:  /* *movv32qi_internal */
    case 1039:  /* *movv2sf_internal */
    case 1038:  /* *movv2sf_internal_rex64 */
    case 1037:  /* *movv1di_internal */
    case 1036:  /* *movv2si_internal */
    case 1035:  /* *movv4hi_internal */
    case 1034:  /* *movv8qi_internal */
    case 1033:  /* *movv1di_internal_rex64 */
    case 1032:  /* *movv2si_internal_rex64 */
    case 1031:  /* *movv4hi_internal_rex64 */
    case 1030:  /* *movv8qi_internal_rex64 */
    case 971:  /* *prefetch_3dnow */
    case 617:  /* *setcc_qi */
    case 616:  /* *setcc_si_1_movzbl */
    case 614:  /* *setcc_di_1 */
    case 267:  /* *leadi */
    case 266:  /* *leasi */
    case 135:  /* *movsf_internal */
    case 134:  /* *movdf_internal */
    case 133:  /* *movdf_internal_rex64 */
    case 132:  /* *movxf_internal */
    case 131:  /* *movxf_internal_rex64 */
    case 130:  /* *movtf_internal_sse */
    case 129:  /* *movtf_internal_rex64 */
    case 128:  /* *pushsf */
    case 127:  /* *pushsf_rex64 */
    case 126:  /* *pushdf */
    case 125:  /* *pushdf_rex64 */
    case 124:  /* *pushxf_nointeger */
    case 123:  /* *pushxf */
    case 122:  /* *pushtf */
    case 91:  /* *movqi_internal */
    case 90:  /* *movhi_internal */
    case 89:  /* *movsi_internal */
    case 88:  /* *movdi_internal */
    case 87:  /* *movdi_internal_rex64 */
    case 86:  /* *movti_internal_sse */
    case 85:  /* *movti_internal_rex64 */
    case 84:  /* *movoi_internal_avx */
    case 77:  /* *popdi1 */
    case 76:  /* *popsi1 */
    case 73:  /* *pushhi2 */
    case 72:  /* *pushqi2 */
    case 71:  /* *pushsi2_rex64 */
    case 70:  /* *pushhi2_rex64 */
    case 69:  /* *pushqi2_rex64 */
    case 68:  /* *pushsi2 */
    case 67:  /* *pushdi2_rex64 */
    case 66:  /* *pushti2 */
    case 65:  /* *pushdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 200:  /* x86_fldcw_1 */
    case 50:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1675:  /* sse_stmxcsr */
    case 1014:  /* rdgsbasedi */
    case 1013:  /* rdfsbasedi */
    case 1012:  /* rdgsbasesi */
    case 1011:  /* rdfsbasesi */
    case 1006:  /* lwp_slwpcbdi */
    case 1005:  /* lwp_slwpcbsi */
    case 991:  /* fxsave64 */
    case 990:  /* fxsave */
    case 986:  /* rdtsc */
    case 773:  /* *load_tp_di */
    case 772:  /* *load_tp_si */
    case 771:  /* *load_tp_x32_zext */
    case 770:  /* *load_tp_x32 */
    case 690:  /* set_got_rex64 */
    case 199:  /* x86_fnstcw_1 */
    case 49:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 48:  /* *cmpxf_si_cc_i387 */
    case 47:  /* *cmpdf_si_cc_i387 */
    case 46:  /* *cmpsf_si_cc_i387 */
    case 45:  /* *cmpxf_hi_cc_i387 */
    case 44:  /* *cmpdf_hi_cc_i387 */
    case 43:  /* *cmpsf_hi_cc_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 42:  /* *cmpxf_si_i387 */
    case 41:  /* *cmpdf_si_i387 */
    case 40:  /* *cmpsf_si_i387 */
    case 39:  /* *cmpxf_hi_i387 */
    case 38:  /* *cmpdf_hi_i387 */
    case 37:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 292:  /* *addsi_4 */
    case 291:  /* *addhi_4 */
    case 290:  /* *addqi_4 */
    case 289:  /* *adddi_4 */
    case 36:  /* *cmpuxf_cc_i387 */
    case 35:  /* *cmpudf_cc_i387 */
    case 34:  /* *cmpusf_cc_i387 */
    case 30:  /* *cmpdf_cc_i387 */
    case 29:  /* *cmpsf_cc_i387 */
    case 26:  /* *cmpxf_cc_i387 */
    case 24:  /* *cmpxf_0_cc_i387 */
    case 23:  /* *cmpdf_0_cc_i387 */
    case 22:  /* *cmpsf_0_cc_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 33:  /* *cmpuxf_i387 */
    case 32:  /* *cmpudf_i387 */
    case 31:  /* *cmpusf_i387 */
    case 28:  /* *cmpdf_i387 */
    case 27:  /* *cmpsf_i387 */
    case 25:  /* *cmpxf_i387 */
    case 21:  /* *cmpxf_0_i387 */
    case 20:  /* *cmpdf_0_i387 */
    case 19:  /* *cmpsf_0_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 18:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 17:  /* *cmpqi_ext_3_insn_rex64 */
    case 16:  /* *cmpqi_ext_3_insn */
    case 15:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 14:  /* *cmpqi_ext_1_rex64 */
    case 13:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 394:  /* *testsi_1 */
    case 393:  /* *testhi_1 */
    case 392:  /* *testqi_1 */
    case 391:  /* *testqi_1_maybe_si */
    case 390:  /* *testdi_1 */
    case 12:  /* *cmpdi_minus_1 */
    case 11:  /* *cmpsi_minus_1 */
    case 10:  /* *cmphi_minus_1 */
    case 9:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 64:  /* *cmpiuxf_i387 */
    case 63:  /* *cmpiudf_i387 */
    case 62:  /* *cmpiusf_i387 */
    case 61:  /* *cmpixf_i387 */
    case 60:  /* *cmpidf_i387 */
    case 59:  /* *cmpisf_i387 */
    case 58:  /* *cmpiudf_sse */
    case 57:  /* *cmpiusf_sse */
    case 56:  /* *cmpidf_sse */
    case 55:  /* *cmpisf_sse */
    case 54:  /* *cmpiudf_mixed */
    case 53:  /* *cmpiusf_mixed */
    case 52:  /* *cmpidf_mixed */
    case 51:  /* *cmpisf_mixed */
    case 8:  /* *cmpdi_1 */
    case 7:  /* *cmpsi_1 */
    case 6:  /* *cmphi_1 */
    case 5:  /* *cmpqi_1 */
    case 4:  /* *cmpdi_ccno_1 */
    case 3:  /* *cmpsi_ccno_1 */
    case 2:  /* *cmphi_ccno_1 */
    case 1:  /* *cmpqi_ccno_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
