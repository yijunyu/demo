export PATH=$PATH:$(pwd)/usr/bin:$(pwd)/usr/local/bin
export LD_LIBRARY_PATH=$(pwd)/usr/lib:$(pwd)/usr/local/lib:$(pwd)/usr/lib/x86_64-linux-gnu:/usr/lib:/usr/local/lib:/usr/lib/x86_64-linux-gnu
#git pull
#srcml 1.java
#fast 1.java 1.pb
live_test --model_path=model/github_java_10.ggnn.aggregation=1.distributed_function=0.hidden_layer_size=200.num_hidden_layer=1.node_dim=200 --pretrained_embeddings_url=embedding/fast_pretrained_vectors.pkl.gz 1.java
