# Note: the lineage.mk can also be called slim.mk, pa.mk, aoscp.mk, etc...
# Depending on the ROM to build. LineageOS based roms will use lineage.mk

# Inherit device configuration
$(call inherit-product, device/huawei/kiwi/device.mk)

# Inherit from the common Open Source product configuration
$(call inherit-product, $(SRC_TARGET_DIR)/product/aosp_base_telephony.mk)

# Inherit common CM phone.
$(call inherit-product, vendor/cm/config/common_full_phone.mk)

# Set those variables here to overwrite the inherited values.
PRODUCT_NAME := lineage_kiwi
PRODUCT_DEVICE := kiwi
PRODUCT_BRAND := huawei
PRODUCT_MANUFACTURER := huawei
