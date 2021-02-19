#![no_std]

use core::panic::PanicInfo;
use raspi_pico_sdk::*;

#[no_mangle]
unsafe fn main() {
    let led_pin = 25;
    wrapped_gpio_init(led_pin);
    wrapped_gpio_set_dir(led_pin, true);
    loop {
        wrapped_gpio_put(led_pin, true);
        wrapped_sleep_ms(250);
        wrapped_gpio_put(led_pin, false);
        wrapped_sleep_ms(250);
    }
}

#[panic_handler]
fn panic(_info: &PanicInfo) -> ! {
    loop {}
}
