// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// allocation
List allocation(double bminc, double cmass_leaf, double cmass_root, double cmass_sap, double cmass_debt, double cmass_heart, double ltor, double height, double sla, double wooddens, int lifeform, double k_latosa, double k_allom2, double k_allom3, double& cmass_leaf_inc, double& cmass_root_inc, double& cmass_sap_inc, double& cmass_debt_inc, double& cmass_heart_inc, double& litter_leaf_inc, double& litter_root_inc, double& exceeds_cmass);
RcppExport SEXP _PEcAn_LPJGUESS_allocation(SEXP bmincSEXP, SEXP cmass_leafSEXP, SEXP cmass_rootSEXP, SEXP cmass_sapSEXP, SEXP cmass_debtSEXP, SEXP cmass_heartSEXP, SEXP ltorSEXP, SEXP heightSEXP, SEXP slaSEXP, SEXP wooddensSEXP, SEXP lifeformSEXP, SEXP k_latosaSEXP, SEXP k_allom2SEXP, SEXP k_allom3SEXP, SEXP cmass_leaf_incSEXP, SEXP cmass_root_incSEXP, SEXP cmass_sap_incSEXP, SEXP cmass_debt_incSEXP, SEXP cmass_heart_incSEXP, SEXP litter_leaf_incSEXP, SEXP litter_root_incSEXP, SEXP exceeds_cmassSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type bminc(bmincSEXP);
    Rcpp::traits::input_parameter< double >::type cmass_leaf(cmass_leafSEXP);
    Rcpp::traits::input_parameter< double >::type cmass_root(cmass_rootSEXP);
    Rcpp::traits::input_parameter< double >::type cmass_sap(cmass_sapSEXP);
    Rcpp::traits::input_parameter< double >::type cmass_debt(cmass_debtSEXP);
    Rcpp::traits::input_parameter< double >::type cmass_heart(cmass_heartSEXP);
    Rcpp::traits::input_parameter< double >::type ltor(ltorSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    Rcpp::traits::input_parameter< double >::type sla(slaSEXP);
    Rcpp::traits::input_parameter< double >::type wooddens(wooddensSEXP);
    Rcpp::traits::input_parameter< int >::type lifeform(lifeformSEXP);
    Rcpp::traits::input_parameter< double >::type k_latosa(k_latosaSEXP);
    Rcpp::traits::input_parameter< double >::type k_allom2(k_allom2SEXP);
    Rcpp::traits::input_parameter< double >::type k_allom3(k_allom3SEXP);
    Rcpp::traits::input_parameter< double& >::type cmass_leaf_inc(cmass_leaf_incSEXP);
    Rcpp::traits::input_parameter< double& >::type cmass_root_inc(cmass_root_incSEXP);
    Rcpp::traits::input_parameter< double& >::type cmass_sap_inc(cmass_sap_incSEXP);
    Rcpp::traits::input_parameter< double& >::type cmass_debt_inc(cmass_debt_incSEXP);
    Rcpp::traits::input_parameter< double& >::type cmass_heart_inc(cmass_heart_incSEXP);
    Rcpp::traits::input_parameter< double& >::type litter_leaf_inc(litter_leaf_incSEXP);
    Rcpp::traits::input_parameter< double& >::type litter_root_inc(litter_root_incSEXP);
    Rcpp::traits::input_parameter< double& >::type exceeds_cmass(exceeds_cmassSEXP);
    rcpp_result_gen = Rcpp::wrap(allocation(bminc, cmass_leaf, cmass_root, cmass_sap, cmass_debt, cmass_heart, ltor, height, sla, wooddens, lifeform, k_latosa, k_allom2, k_allom3, cmass_leaf_inc, cmass_root_inc, cmass_sap_inc, cmass_debt_inc, cmass_heart_inc, litter_leaf_inc, litter_root_inc, exceeds_cmass));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_PEcAn_LPJGUESS_allocation", (DL_FUNC) &_PEcAn_LPJGUESS_allocation, 22},
    {NULL, NULL, 0}
};

RcppExport void R_init_PEcAn_LPJGUESS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}