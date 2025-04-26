#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

#define MODULE_NAME "ProcessInsightModule"

// Module initialization function
static int __init pim_init(void)
{
    printk(KERN_INFO "%s: Module loaded successfully.\n", MODULE_NAME);
    return 0; // Return 0 for successful initialization
}

// Module cleanup function
static void __exit pim_exit(void)
{
    printk(KERN_INFO "%s: Module unloaded successfully.\n", MODULE_NAME);
}

// Register module entry and exit points
module_init(pim_init);
module_exit(pim_exit);

// Module metadata
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Your Name");
MODULE_DESCRIPTION("A Linux Kernel Module for monitoring process activities.");
MODULE_VERSION("0.1");
