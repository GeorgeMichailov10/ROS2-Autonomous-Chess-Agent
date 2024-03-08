// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs_srvs:srv/GetCorners.idl
// generated code does not contain a copyright notice
#include "custom_msgs_srvs/srv/detail/get_corners__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `board`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
custom_msgs_srvs__srv__GetCorners_Request__init(custom_msgs_srvs__srv__GetCorners_Request * msg)
{
  if (!msg) {
    return false;
  }
  // board
  if (!sensor_msgs__msg__Image__init(&msg->board)) {
    custom_msgs_srvs__srv__GetCorners_Request__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs_srvs__srv__GetCorners_Request__fini(custom_msgs_srvs__srv__GetCorners_Request * msg)
{
  if (!msg) {
    return;
  }
  // board
  sensor_msgs__msg__Image__fini(&msg->board);
}

bool
custom_msgs_srvs__srv__GetCorners_Request__are_equal(const custom_msgs_srvs__srv__GetCorners_Request * lhs, const custom_msgs_srvs__srv__GetCorners_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // board
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->board), &(rhs->board)))
  {
    return false;
  }
  return true;
}

bool
custom_msgs_srvs__srv__GetCorners_Request__copy(
  const custom_msgs_srvs__srv__GetCorners_Request * input,
  custom_msgs_srvs__srv__GetCorners_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // board
  if (!sensor_msgs__msg__Image__copy(
      &(input->board), &(output->board)))
  {
    return false;
  }
  return true;
}

custom_msgs_srvs__srv__GetCorners_Request *
custom_msgs_srvs__srv__GetCorners_Request__create()
{
  custom_msgs_srvs__srv__GetCorners_Request * msg = (custom_msgs_srvs__srv__GetCorners_Request *)malloc(sizeof(custom_msgs_srvs__srv__GetCorners_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs_srvs__srv__GetCorners_Request));
  bool success = custom_msgs_srvs__srv__GetCorners_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs_srvs__srv__GetCorners_Request__destroy(custom_msgs_srvs__srv__GetCorners_Request * msg)
{
  if (msg) {
    custom_msgs_srvs__srv__GetCorners_Request__fini(msg);
  }
  free(msg);
}


bool
custom_msgs_srvs__srv__GetCorners_Request__Sequence__init(custom_msgs_srvs__srv__GetCorners_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs_srvs__srv__GetCorners_Request * data = NULL;
  if (size) {
    data = (custom_msgs_srvs__srv__GetCorners_Request *)calloc(size, sizeof(custom_msgs_srvs__srv__GetCorners_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs_srvs__srv__GetCorners_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs_srvs__srv__GetCorners_Request__fini(&data[i - 1]);
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
custom_msgs_srvs__srv__GetCorners_Request__Sequence__fini(custom_msgs_srvs__srv__GetCorners_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs_srvs__srv__GetCorners_Request__fini(&array->data[i]);
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

custom_msgs_srvs__srv__GetCorners_Request__Sequence *
custom_msgs_srvs__srv__GetCorners_Request__Sequence__create(size_t size)
{
  custom_msgs_srvs__srv__GetCorners_Request__Sequence * array = (custom_msgs_srvs__srv__GetCorners_Request__Sequence *)malloc(sizeof(custom_msgs_srvs__srv__GetCorners_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs_srvs__srv__GetCorners_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs_srvs__srv__GetCorners_Request__Sequence__destroy(custom_msgs_srvs__srv__GetCorners_Request__Sequence * array)
{
  if (array) {
    custom_msgs_srvs__srv__GetCorners_Request__Sequence__fini(array);
  }
  free(array);
}

bool
custom_msgs_srvs__srv__GetCorners_Request__Sequence__are_equal(const custom_msgs_srvs__srv__GetCorners_Request__Sequence * lhs, const custom_msgs_srvs__srv__GetCorners_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs_srvs__srv__GetCorners_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs_srvs__srv__GetCorners_Request__Sequence__copy(
  const custom_msgs_srvs__srv__GetCorners_Request__Sequence * input,
  custom_msgs_srvs__srv__GetCorners_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs_srvs__srv__GetCorners_Request);
    custom_msgs_srvs__srv__GetCorners_Request * data =
      (custom_msgs_srvs__srv__GetCorners_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs_srvs__srv__GetCorners_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msgs_srvs__srv__GetCorners_Request__fini(&data[i]);
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
    if (!custom_msgs_srvs__srv__GetCorners_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `corners_list`
#include "custom_msgs_srvs/msg/detail/corners_list__functions.h"

bool
custom_msgs_srvs__srv__GetCorners_Response__init(custom_msgs_srvs__srv__GetCorners_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // corners_list
  if (!custom_msgs_srvs__msg__CornersList__init(&msg->corners_list)) {
    custom_msgs_srvs__srv__GetCorners_Response__fini(msg);
    return false;
  }
  return true;
}

void
custom_msgs_srvs__srv__GetCorners_Response__fini(custom_msgs_srvs__srv__GetCorners_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // corners_list
  custom_msgs_srvs__msg__CornersList__fini(&msg->corners_list);
}

bool
custom_msgs_srvs__srv__GetCorners_Response__are_equal(const custom_msgs_srvs__srv__GetCorners_Response * lhs, const custom_msgs_srvs__srv__GetCorners_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // corners_list
  if (!custom_msgs_srvs__msg__CornersList__are_equal(
      &(lhs->corners_list), &(rhs->corners_list)))
  {
    return false;
  }
  return true;
}

bool
custom_msgs_srvs__srv__GetCorners_Response__copy(
  const custom_msgs_srvs__srv__GetCorners_Response * input,
  custom_msgs_srvs__srv__GetCorners_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // corners_list
  if (!custom_msgs_srvs__msg__CornersList__copy(
      &(input->corners_list), &(output->corners_list)))
  {
    return false;
  }
  return true;
}

custom_msgs_srvs__srv__GetCorners_Response *
custom_msgs_srvs__srv__GetCorners_Response__create()
{
  custom_msgs_srvs__srv__GetCorners_Response * msg = (custom_msgs_srvs__srv__GetCorners_Response *)malloc(sizeof(custom_msgs_srvs__srv__GetCorners_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs_srvs__srv__GetCorners_Response));
  bool success = custom_msgs_srvs__srv__GetCorners_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs_srvs__srv__GetCorners_Response__destroy(custom_msgs_srvs__srv__GetCorners_Response * msg)
{
  if (msg) {
    custom_msgs_srvs__srv__GetCorners_Response__fini(msg);
  }
  free(msg);
}


bool
custom_msgs_srvs__srv__GetCorners_Response__Sequence__init(custom_msgs_srvs__srv__GetCorners_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs_srvs__srv__GetCorners_Response * data = NULL;
  if (size) {
    data = (custom_msgs_srvs__srv__GetCorners_Response *)calloc(size, sizeof(custom_msgs_srvs__srv__GetCorners_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs_srvs__srv__GetCorners_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs_srvs__srv__GetCorners_Response__fini(&data[i - 1]);
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
custom_msgs_srvs__srv__GetCorners_Response__Sequence__fini(custom_msgs_srvs__srv__GetCorners_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs_srvs__srv__GetCorners_Response__fini(&array->data[i]);
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

custom_msgs_srvs__srv__GetCorners_Response__Sequence *
custom_msgs_srvs__srv__GetCorners_Response__Sequence__create(size_t size)
{
  custom_msgs_srvs__srv__GetCorners_Response__Sequence * array = (custom_msgs_srvs__srv__GetCorners_Response__Sequence *)malloc(sizeof(custom_msgs_srvs__srv__GetCorners_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs_srvs__srv__GetCorners_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs_srvs__srv__GetCorners_Response__Sequence__destroy(custom_msgs_srvs__srv__GetCorners_Response__Sequence * array)
{
  if (array) {
    custom_msgs_srvs__srv__GetCorners_Response__Sequence__fini(array);
  }
  free(array);
}

bool
custom_msgs_srvs__srv__GetCorners_Response__Sequence__are_equal(const custom_msgs_srvs__srv__GetCorners_Response__Sequence * lhs, const custom_msgs_srvs__srv__GetCorners_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs_srvs__srv__GetCorners_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs_srvs__srv__GetCorners_Response__Sequence__copy(
  const custom_msgs_srvs__srv__GetCorners_Response__Sequence * input,
  custom_msgs_srvs__srv__GetCorners_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs_srvs__srv__GetCorners_Response);
    custom_msgs_srvs__srv__GetCorners_Response * data =
      (custom_msgs_srvs__srv__GetCorners_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs_srvs__srv__GetCorners_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msgs_srvs__srv__GetCorners_Response__fini(&data[i]);
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
    if (!custom_msgs_srvs__srv__GetCorners_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
