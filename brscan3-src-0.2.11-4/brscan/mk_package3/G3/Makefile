.PHONY: all clean depend 

all: brscan3

clean : clean3


brscan3: \
../../backend_brscan3/.libs/libsane-brother3.so.1.0.7 \
../../libbrscandec2/libbrscandec2.so.1.0.0 \
../../libbrcolm2/libbrcolm2.so.1.0.0 \
./Brsane3.ini \
../G1/setupSaneScan3 \
../G1/brsanenetdevice3.cfg \
../G1/brscan3.list \
../../netconfig3/brsaneconfig2
	rm -rf brscan3
	sh ../G1/makepackage   d
	sh ../G1/makepackage   r
	mkdir brscan3
	cp -p linux-2.6-intel/brscan3-*.* ../RELEASE


clean3:
	rm -fR  linux-2.6-intel/brscan3*
	rm -fR brscan3




brscan3d:
	sh ../G1/makepackage   d
	sh ../G1/makepackage   r


