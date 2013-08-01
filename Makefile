all:
	g++ -Wall filesystem_crawler.cc \
	-o filesystem_crawler \
	-Wl,-Bstatic \
	-Lboost_filesystem \
	-Lboost_system \
	-Wl,-Bdynamic \
	-lboost_filesystem \
	-lboost_system
