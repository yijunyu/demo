#live_test --model_path model/github_java_10.ggnn.aggregation=1.distributed_function=0.hidden_layer_size=100.num_hidden_layer=1.node_dim=100 --pretrained_embeddings_url=embedding/fast_pretrained_vectors.pkl.gz $1
#live_test --model_path model/github_java_10.ggnn.aggregation=1.distributed_function=0.hidden_layer_size=200.num_hidden_layer=1.node_dim=100 --pretrained_embeddings_url=embedding/fast_pretrained_vectors.pkl.gz $1
live_test --model_path=model/github_java_10.ggnn.aggregation=1.distributed_function=0.hidden_layer_size=200.num_hidden_layer=1.node_dim=200 --pretrained_embeddings_url=embedding/fast_pretrained_vectors.pkl.gz $1
#live_test --model_path model/github_java_10.ggnn.aggregation=1.distributed_function=0.hidden_layer_size=200.num_hidden_layer=2.node_dim=100 --pretrained_embeddings_url=embedding/fast_pretrained_vectors.pkl.gz $1
gp open ${1/.java/.png}
gp open ${1/.cpp/.png}
