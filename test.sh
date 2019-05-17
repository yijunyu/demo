#!/bin/bash
for f in datasets/github_java_10/*/*.java; do
	if [ ! -f ${f/.java/.html} ]; then
		run.sh $f
	fi
	tail -2 ${f/.java/.html} | head -1
done
