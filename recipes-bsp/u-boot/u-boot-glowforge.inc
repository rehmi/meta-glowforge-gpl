LICENSE = "GPLv2+"
LIC_FILES_CHKSUM = "file://Licenses/README;md5=0507cd7da8e7ad6d6701926ec9b84c95"
SRCREV = "${AUTOREV}"
GF_BUILD_BRANCH ?= "glowforge"
SRC_URI = "${GF_SRC_URI}/u-boot-glowforge.git;protocol=ssh;branch=${GF_BUILD_BRANCH}"
PV = "v2015.07+git${SRCPV}"
S = "${WORKDIR}/git"
PARALLEL_MAKE = ""

