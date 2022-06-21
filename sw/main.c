#include <inttypes.h>

#include "afu_json_info.h"
#include "afu.h"

int main() {

  afu_t afu;
  setup_afu(&afu, AFU_ACCEL_UUID);

  uint64_t afu_id_l = read_afu_csr(&afu, AFU_ID_L);
  uint64_t afu_id_h = read_afu_csr(&afu, AFU_ID_H);

  printf("%" PRIu64 "\n", afu_id_l);
  printf("%" PRIu64 "\n", afu_id_h);
}
