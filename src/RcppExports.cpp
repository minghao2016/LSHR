// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// hashfun_1
Rcpp::IntegerVector hashfun_1(IntegerVector vec);
RcppExport SEXP LSHR_hashfun_1(SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type vec(vecSEXP);
    __result = Rcpp::wrap(hashfun_1(vec));
    return __result;
END_RCPP
}
// get_minhash_matrix
IntegerVector get_minhash_matrix(uint32_t unique_shingles_length, uint32_t hashfun_number, uint32_t seed);
RcppExport SEXP LSHR_get_minhash_matrix(SEXP unique_shingles_lengthSEXP, SEXP hashfun_numberSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< uint32_t >::type unique_shingles_length(unique_shingles_lengthSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type hashfun_number(hashfun_numberSEXP);
    Rcpp::traits::input_parameter< uint32_t >::type seed(seedSEXP);
    __result = Rcpp::wrap(get_minhash_matrix(unique_shingles_length, hashfun_number, seed));
    return __result;
END_RCPP
}
// hash_signatures
IntegerMatrix hash_signatures(IntegerMatrix m, int bands_number, int rows_per_band);
RcppExport SEXP LSHR_hash_signatures(SEXP mSEXP, SEXP bands_numberSEXP, SEXP rows_per_bandSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type bands_number(bands_numberSEXP);
    Rcpp::traits::input_parameter< int >::type rows_per_band(rows_per_bandSEXP);
    __result = Rcpp::wrap(hash_signatures(m, bands_number, rows_per_band));
    return __result;
END_RCPP
}
// pairs
DataFrame pairs(ListOf<IntegerVector> lst);
RcppExport SEXP LSHR_pairs(SEXP lstSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< ListOf<IntegerVector> >::type lst(lstSEXP);
    __result = Rcpp::wrap(pairs(lst));
    return __result;
END_RCPP
}
