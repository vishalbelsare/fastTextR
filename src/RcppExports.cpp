// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// convert_args_to_pointers
void convert_args_to_pointers(std::vector<std::string> string_commands, std::string INPUT, std::string OUTPUT);
RcppExport SEXP _fastTextR_convert_args_to_pointers(SEXP string_commandsSEXP, SEXP INPUTSEXP, SEXP OUTPUTSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type string_commands(string_commandsSEXP);
    Rcpp::traits::input_parameter< std::string >::type INPUT(INPUTSEXP);
    Rcpp::traits::input_parameter< std::string >::type OUTPUT(OUTPUTSEXP);
    convert_args_to_pointers(string_commands, INPUT, OUTPUT);
    return R_NilValue;
END_RCPP
}
