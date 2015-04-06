/*
*	New C++ File starts here.
*	This file should be named nml_test_format.cc
*	Automatically generated by NML CodeGen Java Applet.
*	with command line arguments :  generate_for_all_langs=true HHFile=nml_test_format.hh
*
*	.gen script :
*		0:load nml_test_format.hh
*		1:clear
*		2:select_from_file nml_test_format.hh
*		3:generate C protos>nml_test_format_c_n.h
*		4:generate C format>nml_test_format_c_n.c
*		5:generate C update>nml_test_format_c_n.c
*		6:generate C++ protos>nml_test_format_n_codegen_protos.hh
*		7:generate C++ format>nml_test_format_n.cc
*		8:generate C++ update>nml_test_format_n.cc
*		9:generate C++ constructor>nml_test_format_n.cc
*		10:generate Java dict>nml_test_format_MsgDict.java
*		11:generate Java classes >*
*		12:generate Ada spec>nml_test_format_n_ada.ads
*		13:generate Ada body>nml_test_format_n_ada.adb
*		14:exit
*
*/

// Include all NML, CMS, and RCS classes and functions
#include "rcs.hh"

// Include command and status message definitions
#include "nml_test_format.hh"
#include "otherheader.hh"

// Include externally supplied prototypes
#include "nml_test_format_n_codegen_protos.hh"



#ifndef MAX_NML_TEST_NAME_LENGTH
#define MAX_NML_TEST_NAME_LENGTH 18
#endif
#ifndef NML_TEST_NAME_LIST_LENGTH
#define NML_TEST_NAME_LIST_LENGTH 8
#endif


/* This list must be in alphabetical order and the three lists must correspond. */
const char nml_test_name_list[NML_TEST_NAME_LIST_LENGTH][MAX_NML_TEST_NAME_LENGTH]= {
	"BOP_MSG", /* 0,104 */
	"MyStat", /* 1,1001 */
	"MyStat2", /* 2,2002 */
	"QTEST_MSG", /* 3,103 */
	"SIMPLER_MSG", /* 4,102 */
	"TEST_MESSAGE", /* 5,101 */
	"TEST_MESSAGE_BASE", /* 6,100 */
	""};
const NMLTYPE nml_test_id_list[NML_TEST_NAME_LIST_LENGTH]= {
	BOP_MSG_TYPE, /* 0,104 */
	MY_STAT_TYPE, /* 1,1001 */
	MY_STAT_V2_TYPE, /* 2,2002 */
	QTEST_MSG_TYPE, /* 3,103 */
	SIMPLER_MSG_TYPE, /* 4,102 */
	TEST_MESSAGE_TYPE, /* 5,101 */
	TEST_MESSAGE_BASE_TYPE, /* 6,100 */
	-1};
const size_t nml_test_size_list[NML_TEST_NAME_LIST_LENGTH]= {
	sizeof(BOP_MSG),
	sizeof(MyStat),
	sizeof(MyStat2),
	sizeof(QTEST_MSG),
	sizeof(SIMPLER_MSG),
	sizeof(TEST_MESSAGE),
	sizeof(TEST_MESSAGE_BASE),
	0};
const char *nml_test_symbol_lookup(long type);


// Enumerated Type Constants

// enumtest_typedef
#ifndef MAX_ENUM_ENUMTEST_TYPEDEF_STRING_LENGTH
#define MAX_ENUM_ENUMTEST_TYPEDEF_STRING_LENGTH 4
#endif
#ifndef ENUM_ENUMTEST_TYPEDEF_LENGTH
#define ENUM_ENUMTEST_TYPEDEF_LENGTH 4
#endif

static const char enum_enumtest_typedef_string_list[ENUM_ENUMTEST_TYPEDEF_LENGTH][MAX_ENUM_ENUMTEST_TYPEDEF_STRING_LENGTH]= {
	"xxx", /* 0,2 */
	"yyy", /* 1,1 */
	"zzz", /* 2,0 */
	""};

static const int enum_enumtest_typedef_int_list[ENUM_ENUMTEST_TYPEDEF_LENGTH]= {
	xxx, /* 0,2 */
	yyy, /* 1,1 */
	zzz, /* 2,0 */
	};

const char *nml_test_enum_enumtest_typedef_symbol_lookup(long v)
{
	switch(v)
	{
		case xxx: return("xxx"); /* 2 */
		case yyy: return("yyy"); /* 1 */
		case zzz: return("zzz"); /* 0 */
		default:break;
	}
	return("!!UNDEFINED_SYMBOL!!");
}

static const struct cms_enum_info enum_enumtest_typedef_info_struct={
	"enumtest_typedef",
	(const char **)enum_enumtest_typedef_string_list,
	enum_enumtest_typedef_int_list,
	MAX_ENUM_ENUMTEST_TYPEDEF_STRING_LENGTH,
	ENUM_ENUMTEST_TYPEDEF_LENGTH,
	(cms_symbol_lookup_function_t)nml_test_enum_enumtest_typedef_symbol_lookup
	};

// enumtest_typedef2
#ifndef MAX_ENUM_ENUMTEST_TYPEDEF2_STRING_LENGTH
#define MAX_ENUM_ENUMTEST_TYPEDEF2_STRING_LENGTH 4
#endif
#ifndef ENUM_ENUMTEST_TYPEDEF2_LENGTH
#define ENUM_ENUMTEST_TYPEDEF2_LENGTH 4
#endif

static const char enum_enumtest_typedef2_string_list[ENUM_ENUMTEST_TYPEDEF2_LENGTH][MAX_ENUM_ENUMTEST_TYPEDEF2_STRING_LENGTH]= {
	"uuu", /* 0,2 */
	"vvv", /* 1,1 */
	"www", /* 2,0 */
	""};

static const int enum_enumtest_typedef2_int_list[ENUM_ENUMTEST_TYPEDEF2_LENGTH]= {
	uuu, /* 0,2 */
	vvv, /* 1,1 */
	www, /* 2,0 */
	};

const char *nml_test_enum_enumtest_typedef2_symbol_lookup(long v)
{
	switch(v)
	{
		case uuu: return("uuu"); /* 2 */
		case vvv: return("vvv"); /* 1 */
		case www: return("www"); /* 0 */
		default:break;
	}
	return("!!UNDEFINED_SYMBOL!!");
}

static const struct cms_enum_info enum_enumtest_typedef2_info_struct={
	"enumtest_typedef2",
	(const char **)enum_enumtest_typedef2_string_list,
	enum_enumtest_typedef2_int_list,
	MAX_ENUM_ENUMTEST_TYPEDEF2_STRING_LENGTH,
	ENUM_ENUMTEST_TYPEDEF2_LENGTH,
	(cms_symbol_lookup_function_t)nml_test_enum_enumtest_typedef2_symbol_lookup
	};

// enumtest
#ifndef MAX_ENUM_ENUMTEST_STRING_LENGTH
#define MAX_ENUM_ENUMTEST_STRING_LENGTH 4
#endif
#ifndef ENUM_ENUMTEST_LENGTH
#define ENUM_ENUMTEST_LENGTH 8
#endif

static const char enum_enumtest_string_list[ENUM_ENUMTEST_LENGTH][MAX_ENUM_ENUMTEST_STRING_LENGTH]= {
	"a", /* 0,0 */
	"aa", /* 1,2 */
	"b", /* 2,1 */
	"bb", /* 3,3 */
	"ccc", /* 4,99 */
	"dd", /* 5,77 */
	"e", /* 6,88 */
	""};

static const int enum_enumtest_int_list[ENUM_ENUMTEST_LENGTH]= {
	a, /* 0,0 */
	aa, /* 1,2 */
	b, /* 2,1 */
	bb, /* 3,3 */
	ccc, /* 4,99 */
	dd, /* 5,77 */
	e, /* 6,88 */
	};

const char *nml_test_enum_enumtest_symbol_lookup(long v)
{
	switch(v)
	{
		case a: return("a"); /* 0 */
		case aa: return("aa"); /* 2 */
		case b: return("b"); /* 1 */
		case bb: return("bb"); /* 3 */
		case ccc: return("ccc"); /* 99 */
		case dd: return("dd"); /* 77 */
		case e: return("e"); /* 88 */
		default:break;
	}
	return("!!UNDEFINED_SYMBOL!!");
}

static const struct cms_enum_info enum_enumtest_info_struct={
	"enumtest",
	(const char **)enum_enumtest_string_list,
	enum_enumtest_int_list,
	MAX_ENUM_ENUMTEST_STRING_LENGTH,
	ENUM_ENUMTEST_LENGTH,
	(cms_symbol_lookup_function_t)nml_test_enum_enumtest_symbol_lookup
	};

/*
Estimated_size	BOP_MSG	32
Estimated_size	MyStat	128
Estimated_size	MyStat2	296
Estimated_size	QTEST_MSG	168
Estimated_size	SIMPLER_MSG	112
Estimated_size	TEST_MESSAGE	7248
Estimated_size	TEST_MESSAGE_BASE	304
Estimated_size	c_struct	16
Estimated_size	c_struct2	16
Estimated_size	fwLaserStruct	24
Estimated_size	teststruct	496
Estimated_size	teststruct_td2	360
Estimated_size	MAXIMUM	7248
*/
/*
*	NML/CMS Format function : nml_test_format
*/
int nml_test_format(NMLTYPE type, void *buffer, CMS *cms)
{

	type = cms->check_type_info(type,buffer,"nml_test",
		(cms_symbol_lookup_function_t) nml_test_symbol_lookup,
		(const char **)nml_test_name_list,
		nml_test_id_list,nml_test_size_list,
		NML_TEST_NAME_LIST_LENGTH,
		MAX_NML_TEST_NAME_LENGTH);

	switch(type)
	{
	case BOP_MSG_TYPE:
		((BOP_MSG *) buffer)->update(cms);
		break;
	case MY_STAT_TYPE:
		((MyStat *) buffer)->update(cms);
		break;
	case MY_STAT_V2_TYPE:
		((MyStat2 *) buffer)->update(cms);
		break;
	case QTEST_MSG_TYPE:
		((QTEST_MSG *) buffer)->update(cms);
		break;
	case SIMPLER_MSG_TYPE:
		((SIMPLER_MSG *) buffer)->update(cms);
		break;
	case TEST_MESSAGE_TYPE:
		((TEST_MESSAGE *) buffer)->update(cms);
		break;
	case TEST_MESSAGE_BASE_TYPE:
		((TEST_MESSAGE_BASE *) buffer)->update(cms);
		break;

	default:
		return(0);
	}
	return 1;
}


// NML Symbol Lookup Function
const char *nml_test_symbol_lookup(long type)
{
	switch(type)
	{
	case BOP_MSG_TYPE:
		return "BOP_MSG";
	case MY_STAT_TYPE:
		return "MyStat";
	case MY_STAT_V2_TYPE:
		return "MyStat2";
	case QTEST_MSG_TYPE:
		return "QTEST_MSG";
	case SIMPLER_MSG_TYPE:
		return "SIMPLER_MSG";
	case TEST_MESSAGE_TYPE:
		return "TEST_MESSAGE";
	case TEST_MESSAGE_BASE_TYPE:
		return "TEST_MESSAGE_BASE";
	default:
		return"UNKNOWN";
		break;
	}
	return(NULL);
}

/*
*	NML/CMS Update function for BOP_MSG
*	from nml_test_format.hh:330
*/
void BOP_MSG::update(CMS *cms)
{

	cms->beginClass("BOP_MSG","NMLmsg");
	cms->update_with_name("ula",ula,2);

	cms->endClass("BOP_MSG","NMLmsg");

}


/*
*	NML/CMS Update function for MyStat
*	from nml_test_format.hh:35
*/
void MyStat::update(CMS *cms)
{

	cms->beginClass("MyStat","RCS_STAT_MSG");

	RCS_STAT_MSG::update_stat_msg_base(cms);

	cms->endClass("MyStat","RCS_STAT_MSG");

}


/*
*	NML/CMS Update function for MyStat2
*	from nml_test_format.hh:64
*/
void MyStat2::update(CMS *cms)
{

	cms->beginClass("MyStat2","RCS_STAT_MSG_V2");

	cms->beginBaseClass("RCS_STAT_MSG_V2");
	RCS_STAT_MSG_V2::update(cms);
	cms->endBaseClass("RCS_STAT_MSG_V2");


	cms->endClass("MyStat2","RCS_STAT_MSG_V2");

}


/*
*	NML/CMS Update function for QTEST_MSG
*	from nml_test_format.hh:314
*/
void QTEST_MSG::update(CMS *cms)
{

	cms->beginClass("QTEST_MSG","NMLmsg");
	cms->update_with_name("priority",priority);
	cms->update_with_name("pchanges_count",pchanges_count);
	cms->update_with_name("count",count);
	cms->update_with_name("pid",pid);
	cms->update_with_name("line",line,105);
	cms->update_with_name("time",time);

	cms->endClass("QTEST_MSG","NMLmsg");

}


/*
*	NML/CMS Update function for SIMPLER_MSG
*	from nml_test_format.hh:303
*/
void SIMPLER_MSG::update(CMS *cms)
{

	cms->beginClass("SIMPLER_MSG","NMLmsg");
	cms->update_with_name("i",i);
	cms->update_with_name("cbuf",cbuf,80);
	cms->update_with_name("lastvar",lastvar);

	cms->endClass("SIMPLER_MSG","NMLmsg");

}


/*
*	NML/CMS Update function for TEST_MESSAGE
*	from nml_test_format.hh:210
*/
void TEST_MESSAGE::update(CMS *cms)
{

	cms->beginClass("TEST_MESSAGE","TEST_MESSAGE_BASE");

	cms->beginBaseClass("TEST_MESSAGE_BASE");
	TEST_MESSAGE_BASE::update(cms);
	cms->endBaseClass("TEST_MESSAGE_BASE");

	cms->update_with_name("byte_to_messup_msg",byte_to_messup_msg);
	cms->update_with_name("first_count",first_count);
	cms->beginClassVar("sfoh");
	nmlupdate(cms,((struct struct_from_other_header *)&sfoh));
	cms->endClassVar("sfoh");
	cms->update_with_name("b",b);
	cms->update_with_name("c",c);
	cms->update_with_name("d",d);
	cms->update_with_name("i",i);
	cms->update_with_name("f",f);
	cms->update_with_name("l",l);
	cms->update_with_name("ul",ul);
	cms->beginClassVar("fw");
	nmlupdate(cms,((struct fwLaserStruct *)&fw));
	cms->endClassVar("fw");
	etd= (enumtest_typedef) cms->update_enumeration_with_name("etd", (int)etd,(void*)&etd,&enum_enumtest_typedef_info_struct);
	etd2= (enumtest_typedef2) cms->update_enumeration_with_name("etd2", (int)etd2,(void*)&etd2,&enum_enumtest_typedef2_info_struct);
	cms->update_with_name("big_array",big_array,1000);
	cms->update_with_name("bool_array",(bool *) bool_array,2);
	cms->update_with_name("ia",(int *) ia,2);
	cms->update_with_name("ca",(char *) ca,2);
	cms->update_with_name("fa",(float *) fa,2);
	cms->update_with_name("da",(double *) da,2);
	cms->update_with_name("two_d_array",(double *) two_d_array,4);
	cms->update_with_name("three_d_array",(double *) three_d_array,8);
	cms->next_update_default("3.14159265");
	cms->update_with_name("f_pi",f_pi);
	cms->update_dla_length_with_name("cda_length",cda_length);
	cms->update_dla_with_name("cda",(char *) cda,cda_length,8);
	cms->next_update_default("77.7");
	cms->update_with_name("seventysevenpointseven",seventysevenpointseven);
	cms->update_dla_length_with_name("ida_length",ida_length);
	cms->update_dla_with_name("ida",(int *) ida,ida_length,8);
	cms->next_update_default("88.8");
	cms->update_with_name("eightyeightpointeight",eightyeightpointeight);
	cms->update_dla_length_with_name("fda_length",fda_length);
	cms->update_dla_with_name("fda",(float *) fda,fda_length,8);
	cms->update_dla_length_with_name("dda_length",dda_length);
	cms->update_dla_with_name("dda",(double *) dda,dda_length,8);
	cms->beginClassVar("s");
	nmlupdate(cms,((teststruct *)&s));
	cms->endClassVar("s");
	cms->beginClassVar("s_td2");
	nmlupdate(cms,((teststruct_td2 *)&s_td2));
	cms->endClassVar("s_td2");
	for(int i_sa = 0;i_sa < 2 ;i_sa++)
	{
		cms->beginStructArrayElem("sa",i_sa);
		nmlupdate(cms, ((teststruct *)  sa) + i_sa);
		cms->endStructArrayElem("sa",i_sa);
	}
	cms->next_update_default("3.14159265");
	cms->update_with_name("d_pi",d_pi);
	cms->update_dla_length_with_name("sda_length",sda_length);
	cms->beginStructDynamicArray("sda",sda_length,2);
	for(int i_sda = 0;i_sda < sda_length ;i_sda++)
	{
		cms->beginStructArrayElem("sda",i_sda);
		nmlupdate(cms, ((teststruct *) (sda)) + i_sda);
		cms->endStructArrayElem("sda",i_sda);
	}
	cms->endStructDynamicArray("sda",sda_length,2);
	enumtestvar= (enum enumtest) cms->update_enumeration_with_name("enumtestvar", (int)enumtestvar,(void*)&enumtestvar,&enum_enumtest_info_struct);
	cms->beginEnumerationArray("enum_array",&enum_enumtest_info_struct,5);
	for(int i_enum_array=0; i_enum_array < 5; i_enum_array++ )
	{
		enum_array[i_enum_array] = (enum enumtest)
			cms->update_enumeration_array_elem(enum_array[i_enum_array],(void *) &(enum_array[i_enum_array]),i_enum_array);
	}
	cms->endEnumerationArray("enum_array",&enum_enumtest_info_struct,5);
	cms->update_dla_length_with_name("enumtest_dla_length",enumtest_dla_length);
	cms->beginEnumerationDLA("enumtest_dla",&enum_enumtest_info_struct,enumtest_dla_length,7);
	for(int i_enumtest_dla=0; i_enumtest_dla < enumtest_dla_length && enumtest_dla_length <= 7; i_enumtest_dla++ )
	{
		enumtest_dla[i_enumtest_dla] = (enum enumtest)
			cms->update_enumeration_array_elem(enumtest_dla[i_enumtest_dla],(void *) &(enumtest_dla[i_enumtest_dla]),i_enumtest_dla);
	}
	cms->endEnumerationDLA("enumtest_dla",&enum_enumtest_info_struct,enumtest_dla_length,7);
	cms->update_with_name("cart",cart);
	cms->update_with_name("cart_array",(PM_CARTESIAN *) cart_array,3);
	cms->update_dla_length_with_name("cart_dla_length",cart_dla_length);
	cms->update_dla_with_name("cart_dla",(PM_CARTESIAN *) cart_dla,cart_dla_length,5);
	cms->update_with_name("do_int_size_test",do_int_size_test);
	cms->update_with_name("smin",smin);
	cms->update_with_name("smax",smax);
	cms->update_with_name("i_smin",i_smin);
	cms->update_with_name("i_smax",i_smax);
	cms->update_with_name("imin",imin);
	cms->update_with_name("imax",imax);
	cms->update_with_name("l_imin",l_imin);
	cms->update_with_name("l_imax",l_imax);
	cms->update_with_name("lmin",lmin);
	cms->update_with_name("lmax",lmax);
	cms->update_with_name("usmax",usmax);
	cms->update_with_name("ui_usmax",ui_usmax);
	cms->update_with_name("uimax",uimax);
	cms->update_with_name("ul_uimax",ul_uimax);
	cms->update_with_name("ulmax",ulmax);
	cms->update_with_name("d_ulmax",d_ulmax);
	cms->update_with_name("d_lmin",d_lmin);
	cms->update_with_name("d_lmax",d_lmax);
	cms->update_with_name("s_array",(short *) s_array,3);
	cms->update_with_name("i_array",(int *) i_array,3);
	cms->update_with_name("l_array",(long *) l_array,3);
	cms->update_with_name("us_array",(unsigned short *) us_array,2);
	cms->update_with_name("ui_array",(unsigned int *) ui_array,2);
	cms->update_with_name("ul_array",(unsigned long *) ul_array,2);
	cms->update_with_name("false_bool",false_bool);
	cms->update_with_name("true_bool",true_bool);
	cms->update_with_name("sminusone",sminusone);
	cms->update_with_name("iminusone",iminusone);
	cms->update_with_name("lminusone",lminusone);
	cms->update_with_name("fminusone",fminusone);
	cms->update_with_name("dminusone",dminusone);
	cms->update_with_name("last_count",last_count);
	for(int i_teststruct_2d_array = 0;i_teststruct_2d_array < 4 ;i_teststruct_2d_array++)
	{
		cms->beginStructArrayElem("teststruct_2d_array",i_teststruct_2d_array);
		nmlupdate(cms, ((teststruct *)  teststruct_2d_array) + i_teststruct_2d_array);
		cms->endStructArrayElem("teststruct_2d_array",i_teststruct_2d_array);
	}
	cms->update_with_name("lastvar",lastvar);

	cms->endClass("TEST_MESSAGE","TEST_MESSAGE_BASE");

}


/*
*	NML/CMS Update function for TEST_MESSAGE_BASE
*	from nml_test_format.hh:195
*/
void TEST_MESSAGE_BASE::update(CMS *cms)
{

	cms->beginClass("TEST_MESSAGE_BASE","RCS_STAT_MSG_V2");

	cms->beginBaseClass("RCS_STAT_MSG_V2");
	RCS_STAT_MSG_V2::update(cms);
	cms->endBaseClass("RCS_STAT_MSG_V2");

	cms->update_with_name("test_message_base_var",test_message_base_var);

	cms->endClass("TEST_MESSAGE_BASE","RCS_STAT_MSG_V2");

}


/*
*	NML/CMS Update function for c_struct
*	from nml_test_format.hh:75
*/
void nmlupdate(CMS *cms,c_struct *x)
{

	cms->beginClass("c_struct",0);
	cms->update_with_name("csc",x->csc);
	cms->update_with_name("csi",x->csi);

	cms->endClass("c_struct",0);

}


/*
*	NML/CMS Update function for c_struct2
*	from nml_test_format.hh:117
*/
void nmlupdate(CMS *cms,c_struct2 *x)
{

	cms->beginClass("c_struct2",0);
	cms->update_with_name("csc2",x->csc2);
	cms->update_with_name("csi2",x->csi2);

	cms->endClass("c_struct2",0);

}


/*
*	NML/CMS Update function for fwLaserStruct
*	from nml_test_format.hh:205
*/
void nmlupdate(CMS *cms,fwLaserStruct *x)
{

	cms->beginClass("fwLaserStruct",0);
	cms->update_with_name("rangep",x->rangep,12);

	cms->endClass("fwLaserStruct",0);

}


/*
*	NML/CMS Update function for teststruct
*	from nml_test_format.hh:130
*/
void nmlupdate(CMS *cms,teststruct *x)
{

	cms->beginClass("teststruct",0);
	cms->beginClassVar("cs");
	nmlupdate(cms,((struct c_struct *)&(x->cs)));
	cms->endClassVar("cs");
	cms->update_with_name("b",x->b);
	cms->update_with_name("i",x->i);
	cms->update_with_name("c",x->c);
	cms->update_with_name("f",x->f);
	cms->update_with_name("d",x->d);
	cms->update_with_name("bool_array",x->bool_array,4);
	cms->update_with_name("ia",(int *) x->ia,2);
	cms->update_with_name("ca",(char *) x->ca,2);
	cms->update_with_name("fa",(float *) x->fa,2);
	cms->update_with_name("da",(double *) x->da,2);
	cms->update_with_name("two_d_array",(double *) x->two_d_array,4);
	cms->update_with_name("two_c_array",(char *) x->two_c_array,4);
	cms->update_with_name("three_d_array",(double *) x->three_d_array,8);
	cms->update_with_name("three_c_array",(char *) x->three_c_array,8);
	cms->next_update_default("3.14159265");
	cms->update_with_name("d_pi",x->d_pi);
	cms->update_dla_length_with_name("cda_length",x->cda_length);
	cms->update_dla_with_name("cda",(char *) x->cda, x->cda_length,2);
	cms->next_update_default("77.7");
	cms->update_with_name("seventysevenpointseven",x->seventysevenpointseven);
	cms->update_dla_length_with_name("ida_length",x->ida_length);
	cms->update_dla_with_name("ida",(int *) x->ida, x->ida_length,2);
	cms->next_update_default("88.8");
	cms->update_with_name("eightyeightpointeight",x->eightyeightpointeight);
	cms->update_dla_length_with_name("fda_length",x->fda_length);
	cms->update_dla_with_name("fda",(float *) x->fda, x->fda_length,2);
	cms->update_dla_length_with_name("dda_length",x->dda_length);
	cms->update_dla_with_name("dda",(double *) x->dda, x->dda_length,2);
	cms->next_update_default("3.14159265");
	cms->update_with_name("f_pi",x->f_pi);
	cms->next_update_default("endts");
	cms->update_with_name("endtsbuf",(char *) x->endtsbuf,16);
	cms->beginClassVar("pm_cart_test");
	nmlupdate(cms,((PmCartesian *)&(x->pm_cart_test)));
	cms->endClassVar("pm_cart_test");
	for(int i_pm_cart_test_array = 0;i_pm_cart_test_array < 4 ;i_pm_cart_test_array++)
	{
		cms->beginStructArrayElem("pm_cart_test_array",i_pm_cart_test_array);
		nmlupdate(cms, ((PmCartesian *) (x->pm_cart_test_array)) + i_pm_cart_test_array);
		cms->endStructArrayElem("pm_cart_test_array",i_pm_cart_test_array);
	}

	cms->endClass("teststruct",0);

}


/*
*	NML/CMS Update function for teststruct_td2
*	from nml_test_format.hh:167
*/
void nmlupdate(CMS *cms,teststruct_td2 *x)
{

	cms->beginClass("teststruct_td2",0);
	cms->beginClassVar("cs2");
	nmlupdate(cms,((struct c_struct2 *)&(x->cs2)));
	cms->endClassVar("cs2");
	cms->update_with_name("b",x->b);
	cms->update_with_name("i",x->i);
	cms->update_with_name("c",x->c);
	cms->update_with_name("f",x->f);
	cms->update_with_name("d",x->d);
	cms->update_with_name("bool_array",x->bool_array,2);
	cms->update_with_name("ia",(int *) x->ia,2);
	cms->update_with_name("ca",(char *) x->ca,2);
	cms->update_with_name("fa",(float *) x->fa,2);
	cms->update_with_name("da",(double *) x->da,2);
	cms->update_with_name("two_d_array",(double *) x->two_d_array,4);
	cms->update_with_name("three_d_array",(double *) x->three_d_array,8);
	cms->next_update_default("3.14159265");
	cms->update_with_name("f_pi",x->f_pi);
	cms->next_update_default("3.14159265");
	cms->update_with_name("d_pi",x->d_pi);
	cms->update_dla_length_with_name("cda_length",x->cda_length);
	cms->update_dla_with_name("cda",(char *) x->cda, x->cda_length,2);
	cms->next_update_default("77.7");
	cms->update_with_name("seventysevenpointseven",x->seventysevenpointseven);
	cms->update_dla_length_with_name("ida_length",x->ida_length);
	cms->update_dla_with_name("ida",(int *) x->ida, x->ida_length,2);
	cms->next_update_default("88.8");
	cms->update_with_name("eightyeightpointeight",x->eightyeightpointeight);
	cms->update_dla_length_with_name("fda_length",x->fda_length);
	cms->update_dla_with_name("fda",(float *) x->fda, x->fda_length,2);
	cms->update_dla_length_with_name("dda_length",x->dda_length);
	cms->update_dla_with_name("dda",(double *) x->dda, x->dda_length,2);
	cms->next_update_default("endts");
	cms->update_with_name("endtsbuf",(char *) x->endtsbuf,16);

	cms->endClass("teststruct_td2",0);

}

/*
*	Constructor for BOP_MSG
*	from nml_test_format.hh:330
*/
BOP_MSG::BOP_MSG()
	: NMLmsg(BOP_MSG_TYPE,sizeof(BOP_MSG))
{
	for(int i_ula=0; i_ula< 2; i_ula++)
	{
		((unsigned long*)ula)[i_ula]  = (unsigned long) 0;
	}

}

/*
*	Constructor for QTEST_MSG
*	from nml_test_format.hh:314
*/
QTEST_MSG::QTEST_MSG()
	: NMLmsg(QTEST_MSG_TYPE,sizeof(QTEST_MSG))
{
	priority = (int) 0;
	pchanges_count = (int) 0;
	count = (int) 0;
	pid = (int) 0;
	for(int i_line=0; i_line< 105; i_line++)
	{
		((char*)line)[i_line]  = (char) 0;
	}
	time = (double) 0;

}

/*
*	Constructor for SIMPLER_MSG
*	from nml_test_format.hh:303
*/
SIMPLER_MSG::SIMPLER_MSG()
	: NMLmsg(SIMPLER_MSG_TYPE,sizeof(SIMPLER_MSG))
{
	i = (int) 0;
	for(int i_cbuf=0; i_cbuf< 80; i_cbuf++)
	{
		((char*)cbuf)[i_cbuf]  = (char) 0;
	}
	lastvar = (long) 0;

}

/*
*	Constructor for TEST_MESSAGE
*	from nml_test_format.hh:210
*/
TEST_MESSAGE::TEST_MESSAGE()
	: TEST_MESSAGE_BASE(TEST_MESSAGE_TYPE,sizeof(TEST_MESSAGE))
{
	byte_to_messup_msg = (char) 0;
	first_count = (long) 0;
	b = (bool) 0;
	c = (char) 0;
	d = (double) 0;
	i = (int) 0;
	f = (float) 0;
	l = (long) 0;
	ul = (unsigned long) 0;
	initialize_fwLaserStruct( &(fw));
	etd = (enumtest_typedef) 0;
	etd2 = (enumtest_typedef2) 0;
	for(int i_big_array=0; i_big_array< 1000; i_big_array++)
	{
		((char*)big_array)[i_big_array]  = (char) 0;
	}
	for(int i_bool_array=0; i_bool_array< 2; i_bool_array++)
	{
		((bool*)bool_array)[i_bool_array]  = (bool) 0;
	}
	for(int i_ia=0; i_ia< 2; i_ia++)
	{
		((int*)ia)[i_ia]  = (int) 0;
	}
	for(int i_ca=0; i_ca< 2; i_ca++)
	{
		((char*)ca)[i_ca]  = (char) 0;
	}
	for(int i_fa=0; i_fa< 2; i_fa++)
	{
		((float*)fa)[i_fa]  = (float) 0;
	}
	for(int i_da=0; i_da< 2; i_da++)
	{
		((double*)da)[i_da]  = (double) 0;
	}
	for(int i_two_d_array=0; i_two_d_array< 4; i_two_d_array++)
	{
		((double*)two_d_array)[i_two_d_array]  = (double) 0;
	}
	for(int i_three_d_array=0; i_three_d_array< 8; i_three_d_array++)
	{
		((double*)three_d_array)[i_three_d_array]  = (double) 0;
	}
	f_pi = (float) 3.14159265; /* set by default= comment */
	cda_length = (int) 0;
	for(int i_cda=0; i_cda< 8; i_cda++)
	{
		((char*)cda)[i_cda]  = (char) 0;
	}
	seventysevenpointseven = (double) 77.7; /* set by default= comment */
	ida_length = (int) 0;
	for(int i_ida=0; i_ida< 8; i_ida++)
	{
		((int*)ida)[i_ida]  = (int) 0;
	}
	eightyeightpointeight = (double) 88.8; /* set by default= comment */
	fda_length = (int) 0;
	for(int i_fda=0; i_fda< 8; i_fda++)
	{
		((float*)fda)[i_fda]  = (float) 0;
	}
	dda_length = (int) 0;
	for(int i_dda=0; i_dda< 8; i_dda++)
	{
		((double*)dda)[i_dda]  = (double) 0;
	}
	initialize_teststruct( &(s));
	initialize_teststruct_td2( &(s_td2));
	for(int i_sa=0; i_sa< 2; i_sa++)
	{
		initialize_teststruct(((teststruct*)sa)+i_sa);
	}
	d_pi = (double) 3.14159265; /* set by default= comment */
	sda_length = (int) 0;
	for(int i_sda=0; i_sda< 2; i_sda++)
	{
		initialize_teststruct(((teststruct*)sda)+i_sda);
	}
	enumtestvar = (enum enumtest) a; /*0*/
	for(int i_enum_array=0; i_enum_array< 5; i_enum_array++)
	{
		((enum enumtest*)enum_array)[i_enum_array]  = (enum enumtest) a; /*0*/
	}
	enumtest_dla_length = (int) 0;
	for(int i_enumtest_dla=0; i_enumtest_dla< 7; i_enumtest_dla++)
	{
		((enum enumtest*)enumtest_dla)[i_enumtest_dla]  = (enum enumtest) a; /*0*/
	}
	cart_dla_length = (int) 0;
	do_int_size_test = (bool) 0;
	smin = (short) 0;
	smax = (short) 0;
	i_smin = (int) 0;
	i_smax = (int) 0;
	imin = (int) 0;
	imax = (int) 0;
	l_imin = (long) 0;
	l_imax = (long) 0;
	lmin = (long) 0;
	lmax = (long) 0;
	usmax = (unsigned short) 0;
	ui_usmax = (unsigned int) 0;
	uimax = (unsigned int) 0;
	ul_uimax = (unsigned long) 0;
	ulmax = (unsigned long) 0;
	d_ulmax = (double) 0;
	d_lmin = (double) 0;
	d_lmax = (double) 0;
	for(int i_s_array=0; i_s_array< 3; i_s_array++)
	{
		((short*)s_array)[i_s_array]  = (short) 0;
	}
	for(int i_i_array=0; i_i_array< 3; i_i_array++)
	{
		((int*)i_array)[i_i_array]  = (int) 0;
	}
	for(int i_l_array=0; i_l_array< 3; i_l_array++)
	{
		((long*)l_array)[i_l_array]  = (long) 0;
	}
	for(int i_us_array=0; i_us_array< 2; i_us_array++)
	{
		((unsigned short*)us_array)[i_us_array]  = (unsigned short) 0;
	}
	for(int i_ui_array=0; i_ui_array< 2; i_ui_array++)
	{
		((unsigned int*)ui_array)[i_ui_array]  = (unsigned int) 0;
	}
	for(int i_ul_array=0; i_ul_array< 2; i_ul_array++)
	{
		((unsigned long*)ul_array)[i_ul_array]  = (unsigned long) 0;
	}
	false_bool = (bool) 0;
	true_bool = (bool) 0;
	sminusone = (short) 0;
	iminusone = (int) 0;
	lminusone = (long) 0;
	fminusone = (float) 0;
	dminusone = (double) 0;
	last_count = (long) 0;
	for(int i_teststruct_2d_array=0; i_teststruct_2d_array< 4; i_teststruct_2d_array++)
	{
		initialize_teststruct(((teststruct*)teststruct_2d_array)+i_teststruct_2d_array);
	}
	lastvar = (long) 0;

}

/*
*	Constructor for TEST_MESSAGE_BASE
*	from nml_test_format.hh:195
*/
TEST_MESSAGE_BASE::TEST_MESSAGE_BASE()
	: RCS_STAT_MSG_V2(TEST_MESSAGE_BASE_TYPE,sizeof(TEST_MESSAGE_BASE))
{
	test_message_base_var = (int) 0;

}

/*
*	Initializer for c_struct
*/
void initialize_c_struct(c_struct* x)
{
	x->csc = (char) 0;
	x->csi = (int) 0;

}

/*
*	Initializer for c_struct2
*/
void initialize_c_struct2(c_struct2* x)
{
	x->csc2 = (char) 0;
	x->csi2 = (int) 0;

}

/*
*	Initializer for fwLaserStruct
*/
void initialize_fwLaserStruct(fwLaserStruct* x)
{
	for(int i_rangep=0; i_rangep< 12; i_rangep++)
	{
		((unsigned short*) x->rangep)[i_rangep]  = (unsigned short) 0;
	}

}

/*
*	Initializer for teststruct
*/
void initialize_teststruct(teststruct* x)
{
	initialize_c_struct( &(x->cs));
	x->b = (bool) 0;
	x->i = (int) 0;
	x->c = (char) 0;
	x->f = (float) 0;
	x->d = (double) 0;
	for(int i_bool_array=0; i_bool_array< 4; i_bool_array++)
	{
		((bool*) x->bool_array)[i_bool_array]  = (bool) 0;
	}
	for(int i_ia=0; i_ia< 2; i_ia++)
	{
		((int*) x->ia)[i_ia]  = (int) 0;
	}
	for(int i_ca=0; i_ca< 2; i_ca++)
	{
		((char*) x->ca)[i_ca]  = (char) 0;
	}
	for(int i_fa=0; i_fa< 2; i_fa++)
	{
		((float*) x->fa)[i_fa]  = (float) 0;
	}
	for(int i_da=0; i_da< 2; i_da++)
	{
		((double*) x->da)[i_da]  = (double) 0;
	}
	for(int i_two_d_array=0; i_two_d_array< 4; i_two_d_array++)
	{
		((double*) x->two_d_array)[i_two_d_array]  = (double) 0;
	}
	for(int i_two_c_array=0; i_two_c_array< 4; i_two_c_array++)
	{
		((char*) x->two_c_array)[i_two_c_array]  = (char) 0;
	}
	for(int i_three_d_array=0; i_three_d_array< 8; i_three_d_array++)
	{
		((double*) x->three_d_array)[i_three_d_array]  = (double) 0;
	}
	for(int i_three_c_array=0; i_three_c_array< 8; i_three_c_array++)
	{
		((char*) x->three_c_array)[i_three_c_array]  = (char) 0;
	}
	x->d_pi = (double) 3.14159265; /* set by default= comment */
	x->cda_length = (int) 0;
	for(int i_cda=0; i_cda< 2; i_cda++)
	{
		((char*) x->cda)[i_cda]  = (char) 0;
	}
	x->seventysevenpointseven = (double) 77.7; /* set by default= comment */
	x->ida_length = (int) 0;
	for(int i_ida=0; i_ida< 2; i_ida++)
	{
		((int*) x->ida)[i_ida]  = (int) 0;
	}
	x->eightyeightpointeight = (double) 88.8; /* set by default= comment */
	x->fda_length = (int) 0;
	for(int i_fda=0; i_fda< 2; i_fda++)
	{
		((float*) x->fda)[i_fda]  = (float) 0;
	}
	x->dda_length = (int) 0;
	for(int i_dda=0; i_dda< 2; i_dda++)
	{
		((double*) x->dda)[i_dda]  = (double) 0;
	}
	x->f_pi = (float) 3.14159265; /* set by default= comment */
	x->endtsbuf[0]='e';
	x->endtsbuf[1]='n';
	x->endtsbuf[2]='d';
	x->endtsbuf[3]='t';
	x->endtsbuf[4]='s';
	x->endtsbuf[5]=0;

}

/*
*	Initializer for teststruct_td2
*/
void initialize_teststruct_td2(teststruct_td2* x)
{
	initialize_c_struct2( &(x->cs2));
	x->b = (bool) 0;
	x->i = (int) 0;
	x->c = (char) 0;
	x->f = (float) 0;
	x->d = (double) 0;
	for(int i_bool_array=0; i_bool_array< 2; i_bool_array++)
	{
		((bool*) x->bool_array)[i_bool_array]  = (bool) 0;
	}
	for(int i_ia=0; i_ia< 2; i_ia++)
	{
		((int*) x->ia)[i_ia]  = (int) 0;
	}
	for(int i_ca=0; i_ca< 2; i_ca++)
	{
		((char*) x->ca)[i_ca]  = (char) 0;
	}
	for(int i_fa=0; i_fa< 2; i_fa++)
	{
		((float*) x->fa)[i_fa]  = (float) 0;
	}
	for(int i_da=0; i_da< 2; i_da++)
	{
		((double*) x->da)[i_da]  = (double) 0;
	}
	for(int i_two_d_array=0; i_two_d_array< 4; i_two_d_array++)
	{
		((double*) x->two_d_array)[i_two_d_array]  = (double) 0;
	}
	for(int i_three_d_array=0; i_three_d_array< 8; i_three_d_array++)
	{
		((double*) x->three_d_array)[i_three_d_array]  = (double) 0;
	}
	x->f_pi = (float) 3.14159265; /* set by default= comment */
	x->d_pi = (double) 3.14159265; /* set by default= comment */
	x->cda_length = (int) 0;
	for(int i_cda=0; i_cda< 2; i_cda++)
	{
		((char*) x->cda)[i_cda]  = (char) 0;
	}
	x->seventysevenpointseven = (double) 77.7; /* set by default= comment */
	x->ida_length = (int) 0;
	for(int i_ida=0; i_ida< 2; i_ida++)
	{
		((int*) x->ida)[i_ida]  = (int) 0;
	}
	x->eightyeightpointeight = (double) 88.8; /* set by default= comment */
	x->fda_length = (int) 0;
	for(int i_fda=0; i_fda< 2; i_fda++)
	{
		((float*) x->fda)[i_fda]  = (float) 0;
	}
	x->dda_length = (int) 0;
	for(int i_dda=0; i_dda< 2; i_dda++)
	{
		((double*) x->dda)[i_dda]  = (double) 0;
	}
	x->endtsbuf[0]='e';
	x->endtsbuf[1]='n';
	x->endtsbuf[2]='d';
	x->endtsbuf[3]='t';
	x->endtsbuf[4]='s';
	x->endtsbuf[5]=0;

}
