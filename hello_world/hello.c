#include <linux/module.h>
#include <linux/init.h>

/* Meta Information */
MODULE_LICENSE("GPL");
MODULE_AUTHOR("CyberVarun");
MODULE_DESCRIPTION("A hello world linux kernel module(LKM)");

/**
 * @brief this function is called, when the module is loaded into the kernel
 */
static int __init my_init(void) {
	printk("Hello, kernel\n");
	return 0;
}

/**
  * @brief This function is called, when the module is removed from the kernel
  */
static void __exit my_exit(void) {
	printk("Goodbye, kernel\n");
}

module_init(my_init);
module_exit(my_exit);
