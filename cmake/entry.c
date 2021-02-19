#include <pico/stdlib.h>


/// Generated Code

uint64_t wrapped_to_us_since_boot(absolute_time_t t) { return to_us_since_boot(t); }
void wrapped_update_us_since_boot(absolute_time_t * t, uint64_t us_since_boot) { update_us_since_boot(t, us_since_boot); }
void wrapped___breakpoint() { __breakpoint(); }
void wrapped_panic_unsupported() { panic_unsupported(); }
void wrapped_panic(const char * fmt) { panic(fmt); }
_Bool wrapped_running_on_fpga() { return running_on_fpga(); }
uint8_t wrapped_rp2040_chip_version() { return rp2040_chip_version(); }
uint8_t wrapped_rp2040_rom_version() { return rp2040_rom_version(); }
void wrapped_tight_loop_contents() { tight_loop_contents(); }
int32_t wrapped___mul_instruction(int32_t a, int32_t b) { return __mul_instruction(a, b); }
void wrapped_stdio_init_all() { stdio_init_all(); }
void wrapped_stdio_flush() { stdio_flush(); }
int wrapped_getchar_timeout_us(uint32_t timeout_us) { return getchar_timeout_us(timeout_us); }
void wrapped_stdio_set_driver_enabled(stdio_driver_t * driver, _Bool enabled) { stdio_set_driver_enabled(driver, enabled); }
void wrapped_stdio_filter_driver(stdio_driver_t * driver) { stdio_filter_driver(driver); }
void wrapped_stdio_set_translate_crlf(stdio_driver_t * driver, _Bool translate) { stdio_set_translate_crlf(driver, translate); }
void wrapped_hw_set_bits(io_rw_32 * addr, uint32_t mask) { hw_set_bits(addr, mask); }
void wrapped_hw_clear_bits(io_rw_32 * addr, uint32_t mask) { hw_clear_bits(addr, mask); }
void wrapped_hw_xor_bits(io_rw_32 * addr, uint32_t mask) { hw_xor_bits(addr, mask); }
void wrapped_hw_write_masked(io_rw_32 * addr, uint32_t values, uint32_t write_mask) { hw_write_masked(addr, values, write_mask); }
void wrapped_check_hardware_alarm_num_param(uint alarm_num) { check_hardware_alarm_num_param(alarm_num); }
uint32_t wrapped_time_us_32() { return time_us_32(); }
uint64_t wrapped_time_us_64() { return time_us_64(); }
void wrapped_busy_wait_us_32(uint32_t delay_us) { busy_wait_us_32(delay_us); }
void wrapped_busy_wait_us(uint64_t delay_us) { busy_wait_us(delay_us); }
void wrapped_busy_wait_until(absolute_time_t t) { busy_wait_until(t); }
_Bool wrapped_time_reached(absolute_time_t t) { return time_reached(t); }
void wrapped_hardware_alarm_claim(uint alarm_num) { hardware_alarm_claim(alarm_num); }
void wrapped_hardware_alarm_unclaim(uint alarm_num) { hardware_alarm_unclaim(alarm_num); }
void wrapped_hardware_alarm_set_callback(uint alarm_num, hardware_alarm_callback_t callback) { hardware_alarm_set_callback(alarm_num, callback); }
_Bool wrapped_hardware_alarm_set_target(uint alarm_num, absolute_time_t t) { return hardware_alarm_set_target(alarm_num, t); }
void wrapped_hardware_alarm_cancel(uint alarm_num) { hardware_alarm_cancel(alarm_num); }
absolute_time_t wrapped_get_absolute_time() { return get_absolute_time(); }
uint32_t wrapped_us_to_ms(uint64_t us) { return us_to_ms(us); }
uint32_t wrapped_to_ms_since_boot(absolute_time_t t) { return to_ms_since_boot(t); }
absolute_time_t wrapped_delayed_by_us(const absolute_time_t t, uint64_t us) { return delayed_by_us(t, us); }
absolute_time_t wrapped_delayed_by_ms(const absolute_time_t t, uint32_t ms) { return delayed_by_ms(t, ms); }
absolute_time_t wrapped_make_timeout_time_us(uint64_t us) { return make_timeout_time_us(us); }
absolute_time_t wrapped_make_timeout_time_ms(uint32_t ms) { return make_timeout_time_ms(ms); }
int64_t wrapped_absolute_time_diff_us(absolute_time_t from, absolute_time_t to) { return absolute_time_diff_us(from, to); }
_Bool wrapped_is_nil_time(absolute_time_t t) { return is_nil_time(t); }
void wrapped_sleep_until(absolute_time_t target) { sleep_until(target); }
void wrapped_sleep_us(uint64_t us) { sleep_us(us); }
void wrapped_sleep_ms(uint32_t ms) { sleep_ms(ms); }
_Bool wrapped_best_effort_wfe_or_timeout(absolute_time_t timeout_timestamp) { return best_effort_wfe_or_timeout(timeout_timestamp); }
void wrapped_alarm_pool_init_default() { alarm_pool_init_default(); }
alarm_pool_t * wrapped_alarm_pool_get_default() { return alarm_pool_get_default(); }
alarm_pool_t * wrapped_alarm_pool_create(uint hardware_alarm_num, uint max_timers) { return alarm_pool_create(hardware_alarm_num, max_timers); }
uint wrapped_alarm_pool_hardware_alarm_num(alarm_pool_t * pool) { return alarm_pool_hardware_alarm_num(pool); }
void wrapped_alarm_pool_destroy(alarm_pool_t * pool) { alarm_pool_destroy(pool); }
alarm_id_t wrapped_alarm_pool_add_alarm_at(alarm_pool_t * pool, absolute_time_t time, alarm_callback_t callback, void * user_data, _Bool fire_if_past) { return alarm_pool_add_alarm_at(pool, time, callback, user_data, fire_if_past); }
alarm_id_t wrapped_alarm_pool_add_alarm_in_us(alarm_pool_t * pool, uint64_t us, alarm_callback_t callback, void * user_data, _Bool fire_if_past) { return alarm_pool_add_alarm_in_us(pool, us, callback, user_data, fire_if_past); }
alarm_id_t wrapped_alarm_pool_add_alarm_in_ms(alarm_pool_t * pool, uint32_t ms, alarm_callback_t callback, void * user_data, _Bool fire_if_past) { return alarm_pool_add_alarm_in_ms(pool, ms, callback, user_data, fire_if_past); }
_Bool wrapped_alarm_pool_cancel_alarm(alarm_pool_t * pool, alarm_id_t alarm_id) { return alarm_pool_cancel_alarm(pool, alarm_id); }
alarm_id_t wrapped_add_alarm_at(absolute_time_t time, alarm_callback_t callback, void * user_data, _Bool fire_if_past) { return add_alarm_at(time, callback, user_data, fire_if_past); }
alarm_id_t wrapped_add_alarm_in_us(uint64_t us, alarm_callback_t callback, void * user_data, _Bool fire_if_past) { return add_alarm_in_us(us, callback, user_data, fire_if_past); }
alarm_id_t wrapped_add_alarm_in_ms(uint32_t ms, alarm_callback_t callback, void * user_data, _Bool fire_if_past) { return add_alarm_in_ms(ms, callback, user_data, fire_if_past); }
_Bool wrapped_cancel_alarm(alarm_id_t alarm_id) { return cancel_alarm(alarm_id); }
_Bool wrapped_alarm_pool_add_repeating_timer_us(alarm_pool_t * pool, int64_t delay_us, repeating_timer_callback_t callback, void * user_data, repeating_timer_t * out) { return alarm_pool_add_repeating_timer_us(pool, delay_us, callback, user_data, out); }
_Bool wrapped_alarm_pool_add_repeating_timer_ms(alarm_pool_t * pool, int32_t delay_ms, repeating_timer_callback_t callback, void * user_data, repeating_timer_t * out) { return alarm_pool_add_repeating_timer_ms(pool, delay_ms, callback, user_data, out); }
_Bool wrapped_add_repeating_timer_us(int64_t delay_us, repeating_timer_callback_t callback, void * user_data, repeating_timer_t * out) { return add_repeating_timer_us(delay_us, callback, user_data, out); }
_Bool wrapped_add_repeating_timer_ms(int32_t delay_ms, repeating_timer_callback_t callback, void * user_data, repeating_timer_t * out) { return add_repeating_timer_ms(delay_ms, callback, user_data, out); }
_Bool wrapped_cancel_repeating_timer(repeating_timer_t * timer) { return cancel_repeating_timer(timer); }
void wrapped_gpio_set_function(uint gpio, enum gpio_function fn) { gpio_set_function(gpio, fn); }
enum gpio_function wrapped_gpio_get_function(uint gpio) { return gpio_get_function(gpio); }
void wrapped_gpio_set_pulls(uint gpio, _Bool up, _Bool down) { gpio_set_pulls(gpio, up, down); }
void wrapped_gpio_pull_up(uint gpio) { gpio_pull_up(gpio); }
_Bool wrapped_gpio_is_pulled_up(uint gpio) { return gpio_is_pulled_up(gpio); }
void wrapped_gpio_pull_down(uint gpio) { gpio_pull_down(gpio); }
_Bool wrapped_gpio_is_pulled_down(uint gpio) { return gpio_is_pulled_down(gpio); }
void wrapped_gpio_disable_pulls(uint gpio) { gpio_disable_pulls(gpio); }
void wrapped_gpio_set_outover(uint gpio, uint value) { gpio_set_outover(gpio, value); }
void wrapped_gpio_set_inover(uint gpio, uint value) { gpio_set_inover(gpio, value); }
void wrapped_gpio_set_oeover(uint gpio, uint value) { gpio_set_oeover(gpio, value); }
void wrapped_gpio_set_input_enabled(uint gpio, _Bool enabled) { gpio_set_input_enabled(gpio, enabled); }
void wrapped_gpio_set_irq_enabled(uint gpio, uint32_t events, _Bool enabled) { gpio_set_irq_enabled(gpio, events, enabled); }
void wrapped_gpio_set_irq_enabled_with_callback(uint gpio, uint32_t events, _Bool enabled, gpio_irq_callback_t callback) { gpio_set_irq_enabled_with_callback(gpio, events, enabled, callback); }
void wrapped_gpio_set_dormant_irq_enabled(uint gpio, uint32_t events, _Bool enabled) { gpio_set_dormant_irq_enabled(gpio, events, enabled); }
void wrapped_gpio_acknowledge_irq(uint gpio, uint32_t events) { gpio_acknowledge_irq(gpio, events); }
void wrapped_gpio_init(uint gpio) { gpio_init(gpio); }
void wrapped_gpio_init_mask(uint gpio_mask) { gpio_init_mask(gpio_mask); }
_Bool wrapped_gpio_get(uint gpio) { return gpio_get(gpio); }
uint32_t wrapped_gpio_get_all() { return gpio_get_all(); }
void wrapped_gpio_set_mask(uint32_t mask) { gpio_set_mask(mask); }
void wrapped_gpio_clr_mask(uint32_t mask) { gpio_clr_mask(mask); }
void wrapped_gpio_xor_mask(uint32_t mask) { gpio_xor_mask(mask); }
void wrapped_gpio_put_masked(uint32_t mask, uint32_t value) { gpio_put_masked(mask, value); }
void wrapped_gpio_put_all(uint32_t value) { gpio_put_all(value); }
void wrapped_gpio_put(uint gpio, _Bool value) { gpio_put(gpio, value); }
void wrapped_gpio_set_dir_out_masked(uint32_t mask) { gpio_set_dir_out_masked(mask); }
void wrapped_gpio_set_dir_in_masked(uint32_t mask) { gpio_set_dir_in_masked(mask); }
void wrapped_gpio_set_dir_masked(uint32_t mask, uint32_t value) { gpio_set_dir_masked(mask, value); }
void wrapped_gpio_set_dir_all_bits(uint32_t values) { gpio_set_dir_all_bits(values); }
void wrapped_gpio_set_dir(uint gpio, _Bool out) { gpio_set_dir(gpio, out); }
_Bool wrapped_gpio_is_dir_out(uint gpio) { return gpio_is_dir_out(gpio); }
uint wrapped_gpio_get_dir(uint gpio) { return gpio_get_dir(gpio); }
void wrapped_gpio_debug_pins_init() { gpio_debug_pins_init(); }
uint wrapped_uart_get_index(uart_inst_t * uart) { return uart_get_index(uart); }
uart_hw_t * wrapped_uart_get_hw(uart_inst_t * uart) { return uart_get_hw(uart); }
uint wrapped_uart_init(uart_inst_t * uart, uint baudrate) { return uart_init(uart, baudrate); }
void wrapped_uart_deinit(uart_inst_t * uart) { uart_deinit(uart); }
uint wrapped_uart_set_baudrate(uart_inst_t * uart, uint baudrate) { return uart_set_baudrate(uart, baudrate); }
void wrapped_uart_set_hw_flow(uart_inst_t * uart, _Bool cts, _Bool rts) { uart_set_hw_flow(uart, cts, rts); }
void wrapped_uart_set_format(uart_inst_t * uart, uint data_bits, uint stop_bits, uart_parity_t parity) { uart_set_format(uart, data_bits, stop_bits, parity); }
void wrapped_uart_set_irq_enables(uart_inst_t * uart, _Bool rx_has_data, _Bool tx_needs_data) { uart_set_irq_enables(uart, rx_has_data, tx_needs_data); }
_Bool wrapped_uart_is_enabled(uart_inst_t * uart) { return uart_is_enabled(uart); }
void wrapped_uart_set_fifo_enabled(uart_inst_t * uart, _Bool enabled) { uart_set_fifo_enabled(uart, enabled); }
_Bool wrapped_uart_is_writable(uart_inst_t * uart) { return uart_is_writable(uart); }
void wrapped_uart_tx_wait_blocking(uart_inst_t * uart) { uart_tx_wait_blocking(uart); }
_Bool wrapped_uart_is_readable(uart_inst_t * uart) { return uart_is_readable(uart); }
void wrapped_uart_write_blocking(uart_inst_t * uart, const uint8_t * src, size_t len) { uart_write_blocking(uart, src, len); }
void wrapped_uart_read_blocking(uart_inst_t * uart, uint8_t * dst, size_t len) { uart_read_blocking(uart, dst, len); }
void wrapped_uart_putc_raw(uart_inst_t * uart, char c) { uart_putc_raw(uart, c); }
void wrapped_uart_putc(uart_inst_t * uart, char c) { uart_putc(uart, c); }
void wrapped_uart_puts(uart_inst_t * uart, const char * s) { uart_puts(uart, s); }
char wrapped_uart_getc(uart_inst_t * uart) { return uart_getc(uart); }
void wrapped_uart_set_break(uart_inst_t * uart, _Bool en) { uart_set_break(uart, en); }
void wrapped_uart_set_translate_crlf(uart_inst_t * uart, _Bool translate) { uart_set_translate_crlf(uart, translate); }
void wrapped_uart_default_tx_wait_blocking() { uart_default_tx_wait_blocking(); }
_Bool wrapped_uart_is_readable_within_us(uart_inst_t * uart, uint32_t us) { return uart_is_readable_within_us(uart, us); }
void wrapped_stdio_uart_init() { stdio_uart_init(); }
void wrapped_stdout_uart_init() { stdout_uart_init(); }
void wrapped_stdin_uart_init() { stdin_uart_init(); }
void wrapped_stdio_uart_init_full(uart_inst_t * uart, uint baud_rate, int tx_pin, int rx_pin) { stdio_uart_init_full(uart, baud_rate, tx_pin, rx_pin); }
void wrapped_setup_default_uart() { setup_default_uart(); }
void wrapped_set_sys_clock_48mhz() { set_sys_clock_48mhz(); }
void wrapped_set_sys_clock_pll(uint32_t vco_freq, uint post_div1, uint post_div2) { set_sys_clock_pll(vco_freq, post_div1, post_div2); }
_Bool wrapped_check_sys_clock_khz(uint32_t freq_khz, uint * vco_freq_out, uint * post_div1_out, uint * post_div2_out) { return check_sys_clock_khz(freq_khz, vco_freq_out, post_div1_out, post_div2_out); }
_Bool wrapped_set_sys_clock_khz(uint32_t freq_khz, _Bool required) { return set_sys_clock_khz(freq_khz, required); }
