// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_msgs_srvs:msg/EngineMove.idl
// generated code does not contain a copyright notice
#include "custom_msgs_srvs/msg/detail/engine_move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `move`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_msgs_srvs__msg__EngineMove__init(custom_msgs_srvs__msg__EngineMove * msg)
{
  if (!msg) {
    return false;
  }
  // move
  if (!rosidl_runtime_c__String__init(&msg->move)) {
    custom_msgs_srvs__msg__EngineMove__fini(msg);
    return false;
  }
  // castle
  return true;
}

void
custom_msgs_srvs__msg__EngineMove__fini(custom_msgs_srvs__msg__EngineMove * msg)
{
  if (!msg) {
    return;
  }
  // move
  rosidl_runtime_c__String__fini(&msg->move);
  // castle
}

bool
custom_msgs_srvs__msg__EngineMove__are_equal(const custom_msgs_srvs__msg__EngineMove * lhs, const custom_msgs_srvs__msg__EngineMove * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // move
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->move), &(rhs->move)))
  {
    return false;
  }
  // castle
  if (lhs->castle != rhs->castle) {
    return false;
  }
  return true;
}

bool
custom_msgs_srvs__msg__EngineMove__copy(
  const custom_msgs_srvs__msg__EngineMove * input,
  custom_msgs_srvs__msg__EngineMove * output)
{
  if (!input || !output) {
    return false;
  }
  // move
  if (!rosidl_runtime_c__String__copy(
      &(input->move), &(output->move)))
  {
    return false;
  }
  // castle
  output->castle = input->castle;
  return true;
}

custom_msgs_srvs__msg__EngineMove *
custom_msgs_srvs__msg__EngineMove__create()
{
  custom_msgs_srvs__msg__EngineMove * msg = (custom_msgs_srvs__msg__EngineMove *)malloc(sizeof(custom_msgs_srvs__msg__EngineMove));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_msgs_srvs__msg__EngineMove));
  bool success = custom_msgs_srvs__msg__EngineMove__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
custom_msgs_srvs__msg__EngineMove__destroy(custom_msgs_srvs__msg__EngineMove * msg)
{
  if (msg) {
    custom_msgs_srvs__msg__EngineMove__fini(msg);
  }
  free(msg);
}


bool
custom_msgs_srvs__msg__EngineMove__Sequence__init(custom_msgs_srvs__msg__EngineMove__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  custom_msgs_srvs__msg__EngineMove * data = NULL;
  if (size) {
    data = (custom_msgs_srvs__msg__EngineMove *)calloc(size, sizeof(custom_msgs_srvs__msg__EngineMove));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_msgs_srvs__msg__EngineMove__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_msgs_srvs__msg__EngineMove__fini(&data[i - 1]);
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
custom_msgs_srvs__msg__EngineMove__Sequence__fini(custom_msgs_srvs__msg__EngineMove__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_msgs_srvs__msg__EngineMove__fini(&array->data[i]);
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

custom_msgs_srvs__msg__EngineMove__Sequence *
custom_msgs_srvs__msg__EngineMove__Sequence__create(size_t size)
{
  custom_msgs_srvs__msg__EngineMove__Sequence * array = (custom_msgs_srvs__msg__EngineMove__Sequence *)malloc(sizeof(custom_msgs_srvs__msg__EngineMove__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = custom_msgs_srvs__msg__EngineMove__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
custom_msgs_srvs__msg__EngineMove__Sequence__destroy(custom_msgs_srvs__msg__EngineMove__Sequence * array)
{
  if (array) {
    custom_msgs_srvs__msg__EngineMove__Sequence__fini(array);
  }
  free(array);
}

bool
custom_msgs_srvs__msg__EngineMove__Sequence__are_equal(const custom_msgs_srvs__msg__EngineMove__Sequence * lhs, const custom_msgs_srvs__msg__EngineMove__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_msgs_srvs__msg__EngineMove__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_msgs_srvs__msg__EngineMove__Sequence__copy(
  const custom_msgs_srvs__msg__EngineMove__Sequence * input,
  custom_msgs_srvs__msg__EngineMove__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_msgs_srvs__msg__EngineMove);
    custom_msgs_srvs__msg__EngineMove * data =
      (custom_msgs_srvs__msg__EngineMove *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_msgs_srvs__msg__EngineMove__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          custom_msgs_srvs__msg__EngineMove__fini(&data[i]);
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
    if (!custom_msgs_srvs__msg__EngineMove__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
