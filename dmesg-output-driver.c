#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>

static int __init dmesg_driver_init(void)
{
    printk("Initializing Spencer's dmesg driver!\n");
    return 0;
}

static void __exit dmesg_driver_exit(void)
{
    printk("Exiting Spencer's dmesg driver!\n");
    return;
}

module_init(dmesg_driver_init);
module_exit(dmesg_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Spencer Lommel");
MODULE_DESCRIPTION("My first linux driver that outputs to dmesg");
MODULE_VERSION("0.1");