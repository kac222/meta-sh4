require conf/machine/include/oem-sh4.inc
require conf/machine/include/normal-sh4-image.inc
require conf/machine/include/sh4-jffs2.inc

BOX_BRAND = "atemio"

MTD_KERNEL = "mtd1"
MTD_ROOTFS = "mtd2"

PREFERRED_PROVIDER_virtual/kernel = "linux-sh4-${BOX_BRAND}"

ROOTFS_FILE = "root.img"
KERNEL_FILE = "uImage"

IMAGE_FSTYPES += "tar.gz"

AUDIOELF = "audio_7111.elf"
VIDEOELF = "video_7111.elf"

SOC_FAMILY = "sti7111"

MACHINE_ESSENTIAL_EXTRA_RDEPENDS += "\
	stlinux24-sh4-stx7111-fdma-firmware \
	stlinux24-sh4-stmfb-firmware-stx7111 \
	evremote2 \
	fp-control \
	"

MACHINE_FEATURES += "hdmicec ci smallflash modutils-sh4"

CAN_USE_ENIGMA2_IN_FLASH = "1"
