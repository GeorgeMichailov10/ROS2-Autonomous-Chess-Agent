// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs_srvs:msg/CornersList.idl
// generated code does not contain a copyright notice
#include "custom_msgs_srvs/msg/detail/corners_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
custom_msgs_srvs__msg__CornersList__init(custom_msgs_srvs__msg__CornersList * msg)
{
  if (!msg) {
    return false;
  }
  // top_left_corner
  // top_right_corner
  // bottom_right_corner
  // bottom_left_corner
  return true;
}

void
custom_msgs_srvs__msg__CornersList__fini(custom_msgs_srvs__msg__CornersList * msg)
{
  if (!msg) {
    return;
  }
  // top_left_corner
  // top_right_corner
  // bottom_right_corner
  // bottom_left_corner
}

bool
custom_msgs_srvs__msg__CornersList__are_equal(const custom_msgs_srvs__msg__CornersList * lhs, const custom_msgs_srvs__msg__CornersList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // top_left_corner
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->top_left_corner[i] != rhs->top_left_corner[i]) {
      return false;
    }
  }
  // top_right_corner
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->top_right_corner[i] != rhs->top_right_corner[i]) {
      return false;
    }
  }
  // bottom_right_corner
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->bottom_right_corner[i] != rhs->bottom_right_corner[i]) {
      return false;
    }
  }
  // bottom_left_corner
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->bottom_left_corner[i] != rhs->bottom_left_corner[i]) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs_srvs__msg__CornersList__copy(
  const custom_msgs_srvs__msg__CornersList * input,
  custom_msgs_srvs__msg__CornersList * output)
{
  if (!input || !output) {
    return false;
  }
  // top_left_corner
  for (size_t i = 0; i < 2; ++i) {
    output->top_left_corner[i] = input->top_left_corner[i];
  }
  // top_right_corner
  for (size_t i = 0; i < 2; ++i) {
    output->top_right_corner[i] = input->top_right_corner[i];
  }
  // bottom_right_corner
  for (size_t i = 0; i < 2; ++i) {
    output->bottom_right_corner[i] = input->bottom_right_corner[i];
  }
  // bottom_left_corner
  for (size_t i = 0; i < 2; ++i) {
    output->bottom_left_corner[i] = input->bottom_left_corner[i];
  }
  return true;
}

custom_msgs_srvs__msg__CornersList *
custom_msgs_srvs__msg__CornersList__create()
{
  custom_msgs_srvs__msg__CornersList * msg = (custom_msgs_srvs__msg__CornersList *)malloc(sizeof(custom_msgs_srvs__msg__CornersList));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs_srvs__msg__CornersList));
  bool success = custom_msgs_srvs__msg__CornersList__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs_srvs__msg__CornersList__destroy(custom_msgs_srvs__msg__CornersList * msg)
{
  if (msg) {
    custom_msgs_srvs__msg__CornersList__fini(msg);
  }
  free(msg);
}


bool
custom_msgs_srvs__msg__CornersList__Sequence__init(custom_msgs_srvs__msg__CornersList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs_srvs__msg__CornersList * data = NULL;
  if (size) {
    data = (custom_msgs_srvs__msg__CornersList *)calloc(size, sizeof(custom_msgs_srvs__msg__CornersList));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs_srvs__msg__CornersList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs_srvs__msg__CornersList__fini(&data[i - 1]);
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
custom_msgs_srvs__msg__CornersList__Sequence__fini(custom_msgs_srvs__msg__CornersList__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs_srvs__msg__CornersList__fini(&array->data[i]);
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

custom_msgs_srvs__msg__CornersList__Sequence *
custom_msgs_srvs__msg__CornersList__Sequence__create(size_t size)
{
  custom_msgs_srvs__msg__CornersList__Sequence * array = (custom_msgs_srvs__msg__CornersList__Sequence *)malloc(sizeof(custom_msgs_srvs__msg__CornersList__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs_srvs__msg__CornersList__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs_srvs__msg__CornersList__Sequence__destroy(custom_msgs_srvs__msg__CornersList__Sequence * array)
{
  if (array) {
    custom_msgs_srvs__msg__CornersList__Sequence__fini(array);
  }
  free(array);
}

bool
custom_msgs_srvs__msg__CornersList__Sequence__are_equal(const custom_msgs_srvs__msg__CornersList__Sequence * lhs, const custom_msgs_srvs__msg__CornersList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs_srvs__msg__CornersList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs_srvs__msg__CornersList__Sequence__copy(
  const custom_msgs_srvs__msg__CornersList__Sequence * input,
  custom_msgs_srvs__msg__CornersList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs_srvs__msg__CornersList);
    custom_msgs_srvs__msg__CornersList * data =
      (custom_msgs_srvs__msg__CornersList *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs_srvs__msg__CornersList__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msgs_srvs__msg__CornersList__fini(&data[i]);
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
    if (!custom_msgs_srvs__msg__CornersList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
