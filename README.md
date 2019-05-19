# Use of flattened Abstract Syntax Trees in Deep Learning on your own GitPod server

This repository provides a demonstration of the deep learning package for classifying the code parsed by the [fast
utility](https://cloud.docker.com/u/yijun/repository/docker/yijun/fast). See also the [Visual Studio Code Extension](https://github.com/yijunyu/vscode-fast).

You can run fast in your own machine as the docker container of course, but here you don't even need that: all the binary and python dependencies have been provided, including also the trained models and the pre-trained embeddings.

To reproduce the results, all you need is to [enable the GitPod app to access your GitHub account](https://gitpod.io/#https://github.com/yijunyu/demo-vscode-fast) so that the commands can run on a remote server belonging to yourself.

<!--ts-->
   * [Use of flattened Abstract Syntax Trees in Deep Learning on your own GitPod server](#use-of-flattened-abstract-syntax-trees-in-deep-learning-on-your-own-gitpod-server)
      * [Usage of fast utility in Deep Learning for Algorithm Classification](#usage-of-fast-utility-in-deep-learning-for-algorithm-classification)
      * [Usage of the fAST utility](#usage-of-the-fast-utility)
      * [Usage of the fAST utility in Bug Localisation](#usage-of-the-fast-utility-in-bug-localisation)
         * [You can call fAST anywhere when you have docker installed:](#you-can-call-fast-anywhere-when-you-have-docker-installed)
      * [Reference and Applications](#reference-and-applications)
            * [Deep Learning](#deep-learning)
            * [Parsing](#parsing)
            * [Slicing](#slicing)
            * [Diffing](#diffing)
            * [Bug Localisation](#bug-localisation)

<!-- Added by: yy66, at: Sun May 19 20:25:23 BST 2019 -->

<!--te-->

## Usage of fast utility in Deep Learning for Algorithm Classification
Examples of algorithms in Java and C++ are provided to test the algorithm classification deep learning tool. Once your
gitpod machine is running, it will launch the following command:
```bash
run.sh datasets/github_java_10/4/1.java
```

You will see the predicted probabilistic distribution of the class labels: the correctly classified label
will be shown in blue, and the misclassified label will be shown in red.

To understand why, click at the HTML file "datasets/github_java_10/4/1.html" and use the
Preview button on the up-right corner of the tab to see visualisation results
in a split pane.  The colours on the tokens indicate which parts of the code
that have got the most attention by the classification algorithm.

To run another example, type:
```bash
run.sh datasets/github_java_10/4/3.java
```

## Usage of the fAST utility

```bash
cd datasets

# print the command line options and arguments
fast
# convert a C++ code into protobuffer representation
fast tensorflow-1.0.1/tensorflow/cc/saved_model/loader_test.cc tensorflow-1.0.1/tensorflow/cc/saved_model/loader_test.cc.pb
# convert a Java code into flatbuffers representation
fast RxJava-1.2.9/src/test/java/rx/ErrorHandlingTests.java.java RxJava-1.2.9/src/test/java/rx/ErrorHandlingTests.java.fbs
# convert a flatbuffers representation back to C#
fast corefx-1.0.4/src/System.IO.IsolatedStorage/ref/System.IO.IsolatedStorage.cs.fbs corefx-1.0.4/src/System.IO.IsolatedStorage/ref/System.IO.IsolatedStorage.cs
# slice a program
fast -S -G RxJava-1.2.9/src/test/java/rx/ErrorHandlingTests.java RxJava-1.2.9/src/test/java/rx/ErrorHandlingTests-ggnn.fbs
# diff two programs
fast -D github_java_10/4/1.java github_java_10/4/3.java
```

## Usage of the fAST utility in Bug Localisation

```bash
cd usr/bin

java -cp /workspace/demo-fast/usr/config:/workspace/demo-fast/usr/config/lic:/workspace/demo-fast/usr/lib/ConCodeSe-1.0.0.jar com.concodese.ConCodeSeJettyServerStarter SERVER_PORT=8081
```

### You can call fAST anywhere when you have docker installed:
```bash
alias fast=”docker run -v $PWD:/e yijun/fast”
```

## Reference and Applications

Yijun Yu. "[fAST: Flattening Abstract Syntax Trees for Efficiency](http://oro.open.ac.uk/59268/)". In: 41st ACM/IEEE International Conference on Software Engineering, 25-31 May 2019, Montreal, Canada, ACM and IEEE.
[fAST](https://github.com/yijunyu/demo-fast), [paper](http://oro.open.ac.uk/59268)

#### Deep Learning
Nghi D. Q. Bui, Yijun Yu, Lingxiao Jiang. "[Bilateral Dependency Neural Networks for Cross-Language Algorithm Classification](https://bdqnghi.github.io/files/SANER_2019_bilateral_dependency.pdf)", In the 26th edition of the IEEE International Conference on Software Analysis, Evolution and Reengineering, Research Track, Hangzhou, China, February 24-27, 2019.
[GGNN](https://github.com/bdqnghi/ggnn.tensorflow), [DTBCNN](https://github.com/bdqnghi/tbcnn-attention)

Nghi D. Q. Bui, Lingxiao Jiang, and Yijun Yu. "[Cross-Language Learning for Program Classification Using Bilateral Tree-Based Convolutional Neural Networks](https://bdqnghi.github.io/files/AAAI_18_cross_language_learning.pdf)", In the proceedings of the 32nd AAAI Conference on Artificial Intelligence (AAAI) Workshop on NLP for Software Engineering, New Orleans, Louisiana, USA, 2018.
[Bi-TBCNN](https://github.com/bdqnghi/bi-tbcnn)

Miltiadis Allamanis, Marc Brockschmidt, Mahmoud Khademi. "[Learning to Represent Programs with Graphs](https://arxiv.org/abs/1711.00740)", In: 6th International Conference on Language Representations (ICLR), 2018.
[GGNN](https://github.com/microsoft/gated-graph-neural-network-samples)

Y. Li, D. Tarlow, M. Brockschmidt, R. Zemel. "[Gated graph sequence neural networks](https://arxiv.org/abs/1511.05493)", In: 4th International Conference on Language Representations (ICLR), 2016.

Lili Mou, Ge Li, Lu Zhang, Tao Wang, Zhi Jin: "[Convolutional Neural Networks over Tree Structures for Programming Language Processing](https://arxiv.org/abs/1409.5718)". In: AAAI 2016: 1287-1293.
[TBCNN](https://github.com/bdqnghi/tbcnn-attention), [datasets/pku_cpp_104/](https://sites.google.com/site/treebasedcnn/)

#### Parsing

M. L. Collard and J. I. Maletic, "[srcML 1.0: Explore, Analyze, and Manipulate Source Code](https://ieeexplore.ieee.org/document/7816536)," 2016 IEEE International Conference on Software Maintenance and Evolution (ICSME), Raleigh, NC, 2016, pp. 649-649. [srcML](https://www.srcml.org/)

Parr, T. J. and Quong, R. W. 1995. "[ANTLR: a predicated-LL(k) parser generator](http://dx.doi.org/10.1002/spe.4380250705)". Softw. Pract. Exper. 25, 7 (Jul. 1995), 789-810. [ANTLR](https://www.antlr.org/)

#### Slicing
Hakam W. Alomari, Michael L. Collard, Jonathan I. Maletic,  Nouh Alhindawi and  Omar Meqdadi. “[srcSlice: very efficient and scalable forward static slicing](https://doi.org/10.1002/smr.1651)”. Software: Evolution and Process, 26(11):931-961, November 2014.

#### Diffing
Jean-Rémy Falleri, Floréal Morandat, Xavier Blanc, Matias Martinez, and Martin Monperrus. 2014. "[Fine-grained and accurate source code differencing](http://doi.acm.org/10.1145/2642937.2642982)". In Proceedings of the 29th ACM/IEEE international conference on Automated software engineering (ASE '14). ACM, New York, NY, USA, 313-324. [GumTreeDiff](https://github.com/GumTreeDiff/gumtree)

Yijun Yu, Thein Thun Tun, and Bashar Nuseibeh, "[Specifying and detecting meaningful changes in programs](http://oro.open.ac.uk/29450/)," In: Proc. of the 26th IEEE/ACM Conference on Automated Software Engineering, pp. 273-282, 2011. [MCT](https://github.com/yijunyu/meaningful-changes)

#### Bug Localisation
Tezcan Dilshener, Michel Wermelinger, Yijun Yu: “[Locating bugs without looking back](http://oro.open.ac.uk/51576)”. Automated Software Engineering 25(3): 383-434 (2018) [ConCodeSe](http://concodese.com)
