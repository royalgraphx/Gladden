TARGET := iphone:clang:latest
INSTALL_TARGET_PROCESSES = SpringBoard
ARCHS = arm64 arm64e

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = Gladden

Gladden_FILES = Tweak.xm
Gladden_CFLAGS = -fobjc-arc
Gladden_FRAMEWORKS = SpriteKit SceneKit

include $(THEOS_MAKE_PATH)/tweak.mk
