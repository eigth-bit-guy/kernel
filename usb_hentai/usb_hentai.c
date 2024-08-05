#include <linux/init.h>
#include <linux/usb.h>
#include <linux/module.h>

MODULE_AUTHOR("Samuel Henrique");
MODULE_LICENSE("GPL");


static int __init init_usb_hentai()
{
  printk(KERN_INFO "usb_hentai module\n");
}


static void __exit exit_usb_hentai()
{
  printk(KERN_INFO "exit usb_hentai module\n");
}

module_init(init_usb_hentai);
module_exit(exit_usb_hentai);
