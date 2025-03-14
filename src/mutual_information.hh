#ifndef MUTUAL_INFORMATION
#define MUTUAL_INFORMATION
#include "CalculateProbability.hh"
#include <vector>
#include <string>
#include <tuple>

// structure holding the score and location of pair
struct Hotspot { 
    std::tuple<int,int> pair;
    double score;
};

std::string MIVector(std::vector<std::string> seqs, bool stack = false);

bool check_Pseudoknot(const std::vector<std::tuple<int,int>>& used, const Hotspot& hotspot);

double APC(double col_i, double col_j, double mean);

/*******************************************************************************
** calculateMutualInformation returns the log base LOG_BASE mutual information between
** dataVector and targetVector, I(X;Y)

*******************************************************************************/
double calcMutualInformation(uint *dataVector, uint *targetVector, int vectorLength);
double discAndCalcMutualInformation(double *dataVector, double *targetVector, int vectorLength);

/*******************************************************************************
** Inner functions which operate on state structs.
*******************************************************************************/
double mi(JointProbabilityState state);




#endif