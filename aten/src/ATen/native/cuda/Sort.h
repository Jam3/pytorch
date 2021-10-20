#include <cstdint>

namespace at {
class TensorBase;
}

namespace at {
namespace native {

void launch_stable_sort_kernel(const TensorBase &self, int64_t dim, bool descending,
                               const TensorBase &values, const TensorBase &indices);

bool should_use_small_sort(const TensorBase &self, int64_t dim);
void sortKeyValueInplace(const TensorBase &key,
                         const TensorBase &value,
                         int dim, bool dir);

}}  // namespace at::native
