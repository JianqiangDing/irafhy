# Introduction {#introduction}

In this section, we will briefly introduce the background of the project, especially about current most popular tools in the field of reach-ability analysis.
it will be illustrated what inspired us to start the project, and what the
project designed for.

## Related Works
Reach-ability analysis, which involves constructing reachable sets, is a central component of model checking, plays an important role in automatic verification and falsification of safety properties for continuous nonlinear and hybrid
systems. Over the past years, lots of tools like [CORA](https://tumcps.github.io/CORA/), [HyPro](https://github.com/hypro/hypro), [FLOW*](https://github.com/hypro/hypro) were developed as formal verification tools for hybrid systems. the main differences
among these tools concentrated on the following aspects:

**state set representation** 

because the intersection and merging operations between state sets are involved in the calculation process, appropriate representation of state sets will not only affect the calculation efficiency of the
algorithm, but also affect the accuracy. For various reasons, different tools will determine the appropriate state set representation according to specific requirements.

**IVP solver**

different approaches to determine the set of system states that are reachable from a given set of initial states will also affect the efficiency and speed of the algorithm. Especially, 
for a specific algorithm, it is necessary to set a specific module to address the initial value problem.

**verification method**

when discussing the reach-ability of hybrid system, although the duration of the analysis is specified, it is necessary to
verify the intermediate results of the running process. e.g. when discussing the safety of hybrid system, it is necessary to verify whether the running state
set intersects with the unsafe set, and then the running of the algorithm is generally terminated.

## Motivation

Most of current tools focus on over-approximation or under-approximation computing, Nevertheless, most of them only focus on the implementation
of some specific algorithms, if someone want to test a completely new idea about hybrid systems’ reach-ability analysis, one may need to write lots of
code from bottom to top, or assemble lots of old or new tools as modules which hardly guarantee the compatibility with each other, into one program.
All of these "dirty works" really will killing and time wasting. The idea of the framework is providing such a framework which allows users can customize and
test their algorithms about reach-ability analysis easily, fewer code, more clear computing procedure, so that allowing researchers pay more attention
to refine the core of their research.

To cut a long story short, what we want to do is, providing a framework which can present a paper's idea clearly to make it easy to be captured by
others while the authors only need to write relatively small amount of core code.