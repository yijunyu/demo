#!/bin/bash
INSTANZ="ConCodeSe - WebApp"
Pidfile=../log/ConCodeSe.pid
Logfile=../log/console_output.log

#JAVA_HOME=/opt/atlassian/jira/jre
#export JAVA_HOME
#PATH=$JAVA_HOME/bin:$PATH
#export PATH


if [ -f $Pidfile ]
then
	Pid=`cat $Pidfile`
fi


case "$1" in
'start')
		if [ -f $Pidfile ] ; then
				if test `ps -e | grep -c $Pid` = 1; then
						echo "Not starting $INSTANZ - instance already running with PID: $Pid"
				else
						echo "Starting $INSTANZ"
						nohup java -cp ../config/lic:../config:/workspace/demo-fast/usr/lib/ConCodeSe-1.0.0.jar com.concodese.ConCodeSeJettyServerStarter $2 >> $Logfile &
						echo $! > $Pidfile
				fi
		else
				echo "Starting $INSTANZ"
				nohup java -cp ../config/lic:../config:/workspace/demo-fast/usr/lib/ConCodeSe-1.0.0.jar com.concodese.ConCodeSeJettyServerStarter $2 >> $Logfile &
				echo $! > $Pidfile
		fi
		;;

'stop')
		if [ -f $Pidfile ] ; then
				if test `ps -e | grep -c $Pid` = 0; then
						echo "$INSTANZ not running"
				else
						echo "stopping $INSTANZ"
						kill -15 $Pid >> $Logfile
						rm derby.log
						if [ -f $Pidfile ] ; then
							rm $Pidfile
						fi
				fi
		else
				echo "Cannot stop $INSTANZ - no Pidfile found!"
		fi
		;;

'restart')
		$0 stop
		sleep 5
		$0 start
		;;

'status')
		if [ -f $Pidfile ] ; then
				if test `ps -e | grep -c $Pid` = 0; then
						echo "$INSTANZ not running"
				else
						echo "$INSTANZ running with PID: [$Pid]"
				fi
		else
				echo "$Pidfile does not exist! Cannot process $INSTANZ status!"
		fi
		;;

*)
		echo "usage: $0 { start | stop | restart | status }"
		;;

esac
exit 0
