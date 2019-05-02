# Use of flattened Abstract Syntax Trees in Deep Learning on your GitPod server (see also the [Visual Studio Code Extension](https://github.com/yijunyu/vscode-fast))

This repository provides a demonstration of the deep learning package for classifying the code parsed by the [fast
utility](https://cloud.docker.com/u/yijun/repository/docker/yijun/fast).

You can run fast in your own machine as a docker container of course, but here you don't even need that: all the binary and python dependencies have been provided, including also the trained models and the pre-trained embeddings.

To reproduce the results, all you need is to [enable the GitPod app to access your GitHub account](https://gitpod.io/#https://github.com/yijunyu/demo-vscode-fast) so that the commands can run on a remote server belonging to yourself.

## initialisation

On first run of your gitpod container, after it has been spawned, type in the terminal:
```bash
. .bashrc
```
This will set the paths to all the folders of the binary and libraries.

```bash
pip3 install -r requirements.txt
```
This will get all the dependent python packages installed.

## usage
Two example Java code are provided to test the algorithm classification deep learning tool, simply type:
```bash
./run.sh 1.java
./run.sh 103.java
```

## Open the generated HTML file

Click at the HTML files and use the Preview button to see the visualization results in a split pane.
It shows which parts of the code have got the attention by the classification algorithm.

On the histogram of probabilistic distribution, the correctly classified label will be in blue, and the wrongly classified label will be in red.

## References

Yu, Yijun. "[fAST: Flattening Abstract Syntax Trees for Efficiency](http://oro.open.ac.uk/59268/)". In: 41st ACM/IEEE International Conference on Software Engineering, 25-31 May 2019, Montreal, Canada, ACM and IEEE.

Nghi D. Q. BUI, Yijun YU, Lingxiao JIANG. "[Bilateral Dependency Neural Networks for Cross-Language Algorithm Classification](https://bdqnghi.github.io/files/SANER_2019_bilateral_dependency.pdf)", In the 26th edition of the IEEE International Conference on Software Analysis, Evolution and Reengineering, Research Track, Hangzhou, China, February 24-27, 2019.

Nghi D. Q. BUI, Lingxiao JIANG, and Yijun YU. "[Cross-Language Learning for Program Classification Using Bilateral Tree-Based Convolutional Neural Networks](https://bdqnghi.github.io/files/AAAI_18_cross_language_learning.pdf)", In the proceedings of the 32nd AAAI Conference on Artificial Intelligence (AAAI) Workshop on NLP for Software Engineering, New Orleans, Louisiana, USA, 2018.

Miltiadis Allamanis, Marc Brockschmidt, Mahmoud Khademi. "[Learning to Represent Programs with Graphs](https://arxiv.org/abs/1711.00740)", In: 6th International Conference on Language Representations (ICLR), 2018.

Y Li, D Tarlow, M Brockschmidt, R Zemel. "[Gated graph sequence neural networks](https://arxiv.org/abs/1511.05493)", In: 4th International Conference on Language Representations (ICLR), 2016.

Lili Mou, Ge Li, Lu Zhang, Tao Wang, Zhi Jin: "[Convolutional Neural Networks over Tree Structures for Programming Language Processing](https://arxiv.org/abs/1409.5718)". In: AAAI 2016: 1287-1293
