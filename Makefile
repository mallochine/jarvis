all:
	g++ -Wall filesystem_crawler.cc \
	-o filesystem_crawler \
	-Wl,-Bstatic \
	-lboost_filesystem \
	-lboost_system \
	-Wl,-Bdynamic
