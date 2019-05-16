# Use of flattened Abstract Syntax Trees in Deep Learning on your own GitPod server

This repository provides a demonstration of the deep learning package for classifying the code parsed by the [fast
utility](https://cloud.docker.com/u/yijun/repository/docker/yijun/fast). See also the [Visual Studio Code Extension](https://github.com/yijunyu/vscode-fast).

You can run fast in your own machine as the docker container of course, but here you don't even need that: all the binary and python dependencies have been provided, including also the trained models and the pre-trained embeddings.

To reproduce the results, all you need is to [enable the GitPod app to access your GitHub account](https://gitpod.io/#https://github.com/yijunyu/demo-vscode-fast) so that the commands can run on a remote server belonging to yourself.

## usage
Two examples of insertion sort algorithms in Java are provided to
test the algorithm classification deep learning tool. Once the
gitpod machine is running, it will launch the following command:
```bash
. .bashrc
run.sh github_java_10/1/1.java
```
In this convention, the folder number indicate the correct class label
that we already know, and the test will return the algorithm of the code.

Click the file "github_java_10/1/1.png" in the EXPLORER, you will see the predicted
probabilistic distribution of the class labels. The correctly classified label
will be shown in blue, and the wrongly classified label will be shown in red.

To understand why, click at the HTML file "github_java_10/1/1.html" and use the
Preview button on the up-right corner of the tab to see visualization results
in a split pane.  The colours on the tokens indicate which parts of the code
that have got the most attention by the classification algorithm.


To run the other example, type:
```bash
live_test \
--model_path model/github_java_10.ggnn.aggregation=1.distributed_function=0.hidden_layer_size=200.num_hidden_layer=2.node_dim=100 \
--pretrained_embeddings_url=embedding/fast_pretrained_vectors.pkl.gz \
github_java_10/1/103.java
```

## Datasets

* [pku_cpp_104/](https://sites.google.com/site/treebasedcnn/)

## References

Yijun Yu. "[fAST: Flattening Abstract Syntax Trees for Efficiency](http://oro.open.ac.uk/59268/)". In: 41st ACM/IEEE International Conference on Software Engineering, 25-31 May 2019, Montreal, Canada, ACM and IEEE.

Nghi D. Q. Bui, Yijun Yu, Lingxiao Jiang. "[Bilateral Dependency Neural Networks for Cross-Language Algorithm Classification](https://bdqnghi.github.io/files/SANER_2019_bilateral_dependency.pdf)", In the 26th edition of the IEEE International Conference on Software Analysis, Evolution and Reengineering, Research Track, Hangzhou, China, February 24-27, 2019.

Nghi D. Q. Bui, Lingxiao Jiang, and Yijun Yu. "[Cross-Language Learning for Program Classification Using Bilateral Tree-Based Convolutional Neural Networks](https://bdqnghi.github.io/files/AAAI_18_cross_language_learning.pdf)", In the proceedings of the 32nd AAAI Conference on Artificial Intelligence (AAAI) Workshop on NLP for Software Engineering, New Orleans, Louisiana, USA, 2018.

Miltiadis Allamanis, Marc Brockschmidt, Mahmoud Khademi. "[Learning to Represent Programs with Graphs](https://arxiv.org/abs/1711.00740)", In: 6th International Conference on Language Representations (ICLR), 2018.

Y. Li, D. Tarlow, M. Brockschmidt, R. Zemel. "[Gated graph sequence neural networks](https://arxiv.org/abs/1511.05493)", In: 4th International Conference on Language Representations (ICLR), 2016.

Lili Mou, Ge Li, Lu Zhang, Tao Wang, Zhi Jin: "[Convolutional Neural Networks over Tree Structures for Programming Language Processing](https://arxiv.org/abs/1409.5718)". In: AAAI 2016: 1287-1293
