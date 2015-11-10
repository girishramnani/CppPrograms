/*
 * =====================================================================================
 *
 *       Filename:  accum.cpp
 *
 *    Description:  my program
 *
 *        Version:  1.0
 *        Created:  07/27/2015 11:16:38 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (),
 *   Organization:
 *
 * =====================================================================================
 */
#include<iostream>
#include<boost/accumulators/accumulators.hpp>
#include<boost/accumulators/statistics/stats.hpp>
#include<boost/accumulators/statistics/mean.hpp>
#include<boost/accumulators/statistics/moment.hpp>

using namespace boost::accumulators;


int main(){


    accumulator_set<double , stats<tag::mean, tag::moment<2> > > acc;
    acc(1.2);
    acc(2.3);
    acc(24.5);

    std::cout << "Mean : "<< mean(acc)<<std::endl;

}



