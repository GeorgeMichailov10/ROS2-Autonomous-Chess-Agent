// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs_srvs:msg/Bitmap.idl
// generated code does not contain a copyright notice
#include "custom_msgs_srvs/msg/detail/bitmap__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `row1`
// Member `row2`
// Member `row3`
// Member `row4`
// Member `row5`
// Member `row6`
// Member `row7`
// Member `row8`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_msgs_srvs__msg__Bitmap__init(custom_msgs_srvs__msg__Bitmap * msg)
{
  if (!msg) {
    return false;
  }
  // row1
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->row1[i])) {
      custom_msgs_srvs__msg__Bitmap__fini(msg);
      return false;
    }
  }
  // row2
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->row2[i])) {
      custom_msgs_srvs__msg__Bitmap__fini(msg);
      return false;
    }
  }
  // row3
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->row3[i])) {
      custom_msgs_srvs__msg__Bitmap__fini(msg);
      return false;
    }
  }
  // row4
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->row4[i])) {
      custom_msgs_srvs__msg__Bitmap__fini(msg);
      return false;
    }
  }
  // row5
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->row5[i])) {
      custom_msgs_srvs__msg__Bitmap__fini(msg);
      return false;
    }
  }
  // row6
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->row6[i])) {
      custom_msgs_srvs__msg__Bitmap__fini(msg);
      return false;
    }
  }
  // row7
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->row7[i])) {
      custom_msgs_srvs__msg__Bitmap__fini(msg);
      return false;
    }
  }
  // row8
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__init(&msg->row8[i])) {
      custom_msgs_srvs__msg__Bitmap__fini(msg);
      return false;
    }
  }
  return true;
}

void
custom_msgs_srvs__msg__Bitmap__fini(custom_msgs_srvs__msg__Bitmap * msg)
{
  if (!msg) {
    return;
  }
  // row1
  for (size_t i = 0; i < 8; ++i) {
    rosidl_runtime_c__String__fini(&msg->row1[i]);
  }
  // row2
  for (size_t i = 0; i < 8; ++i) {
    rosidl_runtime_c__String__fini(&msg->row2[i]);
  }
  // row3
  for (size_t i = 0; i < 8; ++i) {
    rosidl_runtime_c__String__fini(&msg->row3[i]);
  }
  // row4
  for (size_t i = 0; i < 8; ++i) {
    rosidl_runtime_c__String__fini(&msg->row4[i]);
  }
  // row5
  for (size_t i = 0; i < 8; ++i) {
    rosidl_runtime_c__String__fini(&msg->row5[i]);
  }
  // row6
  for (size_t i = 0; i < 8; ++i) {
    rosidl_runtime_c__String__fini(&msg->row6[i]);
  }
  // row7
  for (size_t i = 0; i < 8; ++i) {
    rosidl_runtime_c__String__fini(&msg->row7[i]);
  }
  // row8
  for (size_t i = 0; i < 8; ++i) {
    rosidl_runtime_c__String__fini(&msg->row8[i]);
  }
}

bool
custom_msgs_srvs__msg__Bitmap__are_equal(const custom_msgs_srvs__msg__Bitmap * lhs, const custom_msgs_srvs__msg__Bitmap * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // row1
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->row1[i]), &(rhs->row1[i])))
    {
      return false;
    }
  }
  // row2
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->row2[i]), &(rhs->row2[i])))
    {
      return false;
    }
  }
  // row3
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->row3[i]), &(rhs->row3[i])))
    {
      return false;
    }
  }
  // row4
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->row4[i]), &(rhs->row4[i])))
    {
      return false;
    }
  }
  // row5
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->row5[i]), &(rhs->row5[i])))
    {
      return false;
    }
  }
  // row6
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->row6[i]), &(rhs->row6[i])))
    {
      return false;
    }
  }
  // row7
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->row7[i]), &(rhs->row7[i])))
    {
      return false;
    }
  }
  // row8
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__are_equal(
        &(lhs->row8[i]), &(rhs->row8[i])))
    {
      return false;
    }
  }
  return true;
}

bool
custom_msgs_srvs__msg__Bitmap__copy(
  const custom_msgs_srvs__msg__Bitmap * input,
  custom_msgs_srvs__msg__Bitmap * output)
{
  if (!input || !output) {
    return false;
  }
  // row1
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->row1[i]), &(output->row1[i])))
    {
      return false;
    }
  }
  // row2
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->row2[i]), &(output->row2[i])))
    {
      return false;
    }
  }
  // row3
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->row3[i]), &(output->row3[i])))
    {
      return false;
    }
  }
  // row4
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->row4[i]), &(output->row4[i])))
    {
      return false;
    }
  }
  // row5
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->row5[i]), &(output->row5[i])))
    {
      return false;
    }
  }
  // row6
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->row6[i]), &(output->row6[i])))
    {
      return false;
    }
  }
  // row7
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->row7[i]), &(output->row7[i])))
    {
      return false;
    }
  }
  // row8
  for (size_t i = 0; i < 8; ++i) {
    if (!rosidl_runtime_c__String__copy(
        &(input->row8[i]), &(output->row8[i])))
    {
      return false;
    }
  }
  return true;
}

custom_msgs_srvs__msg__Bitmap *
custom_msgs_srvs__msg__Bitmap__create()
{
  custom_msgs_srvs__msg__Bitmap * msg = (custom_msgs_srvs__msg__Bitmap *)malloc(sizeof(custom_msgs_srvs__msg__Bitmap));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs_srvs__msg__Bitmap));
  bool success = custom_msgs_srvs__msg__Bitmap__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs_srvs__msg__Bitmap__destroy(custom_msgs_srvs__msg__Bitmap * msg)
{
  if (msg) {
    custom_msgs_srvs__msg__Bitmap__fini(msg);
  }
  free(msg);
}


bool
custom_msgs_srvs__msg__Bitmap__Sequence__init(custom_msgs_srvs__msg__Bitmap__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs_srvs__msg__Bitmap * data = NULL;
  if (size) {
    data = (custom_msgs_srvs__msg__Bitmap *)calloc(size, sizeof(custom_msgs_srvs__msg__Bitmap));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs_srvs__msg__Bitmap__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs_srvs__msg__Bitmap__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_msgs_srvs__msg__Bitmap__Sequence__fini(custom_msgs_srvs__msg__Bitmap__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs_srvs__msg__Bitmap__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_msgs_srvs__msg__Bitmap__Sequence *
custom_msgs_srvs__msg__Bitmap__Sequence__create(size_t size)
{
  custom_msgs_srvs__msg__Bitmap__Sequence * array = (custom_msgs_srvs__msg__Bitmap__Sequence *)malloc(sizeof(custom_msgs_srvs__msg__Bitmap__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs_srvs__msg__Bitmap__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs_srvs__msg__Bitmap__Sequence__destroy(custom_msgs_srvs__msg__Bitmap__Sequence * array)
{
  if (array) {
    custom_msgs_srvs__msg__Bitmap__Sequence__fini(array);
  }
  free(array);
}

bool
custom_msgs_srvs__msg__Bitmap__Sequence__are_equal(const custom_msgs_srvs__msg__Bitmap__Sequence * lhs, const custom_msgs_srvs__msg__Bitmap__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs_srvs__msg__Bitmap__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs_srvs__msg__Bitmap__Sequence__copy(
  const custom_msgs_srvs__msg__Bitmap__Sequence * input,
  custom_msgs_srvs__msg__Bitmap__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs_srvs__msg__Bitmap);
    custom_msgs_srvs__msg__Bitmap * data =
      (custom_msgs_srvs__msg__Bitmap *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs_srvs__msg__Bitmap__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msgs_srvs__msg__Bitmap__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_msgs_srvs__msg__Bitmap__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
