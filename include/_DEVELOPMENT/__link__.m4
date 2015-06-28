divert(-1)

###################################################################
# SET APPROPRIATE FUNCTION LINKAGE DEPENDING ON THE ACTIVE COMPILER
###################################################################

undefine(`__DPROTO')
undefine(`__OPROTO')
undefine(`__VPROTO')

# DECORATED PROTOTYPES (FASTCALL & CALLEE)

define(`__DPROTO', `ifdef(`m4_SDCC',dnl
`ifelse(eval($# == 4),1,dnl
dnl
extern `$1' `$2'``$3''`'(`$4');
extern `$1' `$2'`$3'_fastcall`'(`$4') __z88dk_fastcall;
`#define' `$3'`'(a) `$3'_fastcall`'(a)

,dnl
dnl
extern `$1' `$2'``$3''`'(`shift(shift(shift($@)))');
extern `$1' `$2'`$3'_callee`'(`shift(shift(shift($@)))') __z88dk_callee;
`#define' `$3'`'(substr(`a,b,c,d,e,f,g,h,i,j',0,eval($#+$#-7))) `$3'_callee`'(substr(`a,b,c,d,e,f,g,h,i,j',0,eval($#+$#-7)))

)',`ifdef(`m4_SCCZ80',dnl
dnl
`ifelse(eval($# == 4),1,dnl
dnl
extern `$1' __LIB__ __FASTCALL__ `$2'``$3''`'(`$4');

,dnl
extern `$1' __LIB__ `$2'``$3''`'(`shift(shift(shift($@)))');
extern `$1' __LIB__ __CALLEE__ `$2'`$3'_callee`'(`shift(shift(shift($@)))');
`#define' `$3'`'(substr(`a,b,c,d,e,f,g,h,i,j',0,eval($#+$#-7))) `$3'_callee`'(substr(`a,b,c,d,e,f,g,h,i,j',0,eval($#+$#-7)))

)',dnl
extern `$1' `$2'``$3''`'(`shift(shift(shift($@)))');

)')')


# ORDINARY PROTOTYPES (UNEMBELLISHED)

define(`__OPROTO', `ifdef(`m4_SDCC',dnl
extern `$1' `$2'``$3''`'(`shift(shift(shift($@)))');

,`ifdef(`m4_SCCZ80',dnl
extern `$1' __LIB__ `$2'``$3''`'(`shift(shift(shift($@)))');

,dnl
extern `$1' `$2'``$3''`'(`shift(shift(shift($@)))');

)')')


# VARARG PROTOTYPES

define(`__VPROTO', `ifdef(`m4_SDCC',dnl
extern `$1' `$2'``$3''`'(`shift(shift(shift($@)))');

,`ifdef(`m4_SCCZ80',dnl
extern `$1' __LIB__ `$2'``$3''`'(`shift(shift(shift($@)))');

,dnl
extern `$1' `$2'``$3''`'(`shift(shift(shift($@)))');

)')')


###################################################################

divert(0)
