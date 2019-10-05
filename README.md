
<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://jianqiangding.github.io/irafhy/index.html">
    <img src="doc/pics/logo_big.png" alt="Logo" width="300" height="300">
  </a>
</p>


<p align="center">
Interval arithmetic based reachability analysis Framework designed for hybrid automatons
</p>


<p align="center">
    <br />
        <a href="https://jianqiangding.github.io/irafhy/index.html"><strong>Online Documents »</strong></a>
    <br />    
</p>

<p align="center">
    <br />
        <a href="https://github.com/JianqiangDing/irafhy/raw/master/doc/manual.pdf"><strong>Manual »</strong></a>
    <br />    
</p>


## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.


### Prerequisites

<div style="text-align: center;">

|   Library   |                             URL                             | Version  |
| :---------: | :---------------------------------------------------------: | :------: |
|    Eigen    |    http://eigen.tuxfamily.org/index.php?title=Main_Page     |  3.3.4   |
|    CMake    |                     https://cmake.org/                      |  latest  |
|    GLPK     |             https://www.gnu.org/software/glpk/              |  4.65-2  |
|   FILIB++   | http://www2.math.uni-wuppertal.de/wrswt/software/filib.html |  3.0.2   |
|    boost    |                   https://www.boost.org/                    | 1.67.0.0 |
|   Doxygen   |                   http://www.doxygen.nl/                    |  1.8.13  |
|   Grapviz   |                  https://www.graphviz.org/                  | 2.40.1-5 |
| Google Test |            https://github.com/google/googletest             |  1.8.1   |
|    Qhull    |               https://github.com/qhull/qhull                |  7.2.1   |
|    FLANN    |            https://www.cs.ubc.ca/research/flann/            |  1.9.1   |
|    Antlr    |                   https://www.antlr.org/                    |  4.7.2   |
|   libigl    |            https://github.com/libigl/libigl.git             |  latest  |
|   OpenMP    |                   https://www.openmp.org/                   |  latest  |

</center>

### Build

```
mkdir build && cd build
cmake .. (-DENABLE_TESTING=1 -DENABLE_EXAMPLES=1 -DENABLE_DOC=1)
make
make install (if needed)
```

### Generate documents

```
mkdir build && cd build
...
make
make doc
```

### Run the tests

```
mkdir build && cd build
...
make
make test
``` 

## Authors

* **Jianqiang Ding** - <jq.ding.szu@gmail.com>
* **Bai Xue** - [Homepage](http://lcs.ios.ac.cn/~xuebai/index.html)

See also the list of [contributors](https://github.com/JianqiangDing/irafhy/graphs/contributors) who participated in this project.

## License

This project is licensed under the GNU GPLv3 License - see the [LICENSE](LICENSE.md) file for details