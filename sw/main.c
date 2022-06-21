#include <inttypes.h>
#include <unistd.h>

#include "afu_json_info.h"
#include "afu.h"

int main() {

  afu_t afu;
  setup_afu(&afu, AFU_ACCEL_UUID);

  volatile uint8_t *buffer = (uint8_t*)create_afu_buffer(&afu, getpagesize());
  uint64_t buffer_addr = read_afu_csr(&afu, BUFFER_ADDR);

  printf("%" PRIu64 "\n", buffer_addr);
}
