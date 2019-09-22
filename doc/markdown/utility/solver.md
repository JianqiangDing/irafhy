# Solver {#solver}

There are so many solvers written in different languages, rigorous or non-rigorous. we restrict to rigorous ordinary differential equations solver and constraints sanctification problem solver.

## Constraints Satisfaction Problem solver

[IBEX](http://www.ibex-lib.org/) is the most current active library designed for constraint processing over real numbers in C++, previously, 
[Realpaver](http://pagesperso.lina.univ-nantes.fr/~granvilliers-l/realpaver/) is one of the most popular library for  nonlinear constraint 
solving and rigorous global optimization(it seems that without maintenance any more). most of these libraries lack of providing **API**s
 for getting boundary of the target domain. so we implement our own solver which can get the boundary or inner of the target domain.

:point_up: **THE MODULE STILL UNDER DEVELOPMENT**

## Ordinary Differential Equations solver

We wrap the third party library [CAPD](http://capd.ii.uj.edu.pl/) as our ODE solver. for more details about CAPD, please check its official website.