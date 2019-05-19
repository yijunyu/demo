java -Xms1024M -Xmx4096M -XX:+UseConcMarkSweepGC -XX:-UseGCOverheadLimit -cp ../config/lic:../config:/workspace/demo-fast/usr/lib/ConCodeSe-1.0.0.jar com.concodese.ProjectConfigUpdater
rm derby.log
if [ -f *-jim-log.xml ]
then
	rm *-jim-log.xml
fi
