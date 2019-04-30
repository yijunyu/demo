#!/bin/bash
if [ "$1" == "bash" ]; then
	docker run --rm -v $(pwd):/e --entrypoint bash -it yijun/fast
else
	docker run --rm -v $(pwd):/e --entrypoint bash -it yijun/fast -c "tar cvfz fast.tar.gz -C / -T fast.txt"
	tar xvfz fast.tar.gz
	git add usr && git commit -am "update" && git push
fi
