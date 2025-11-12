/* If we just booted a test image, mark it OK so MCUboot won’t revert as first think in your app main function */
/* copy*/
    if (!boot_is_img_confirmed()) {
		LOG_INF("Confirming image to prevent rollback");
		// try catch in c language
        if (boot_write_img_confirmed() != 0) {
            LOG_ERR("Failed to confirm image");
        } else {
			LOG_INF("Image confirmed");
		}
    }
/* copy*/
