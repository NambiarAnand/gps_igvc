// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ublox_msgs:msg/NavSTATUS.idl
// generated code does not contain a copyright notice
#include "ublox_msgs/msg/detail/nav_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ublox_msgs__msg__NavSTATUS__init(ublox_msgs__msg__NavSTATUS * msg)
{
  if (!msg) {
    return false;
  }
  // i_tow
  // gps_fix
  // flags
  // fix_stat
  // flags2
  // ttff
  // msss
  return true;
}

void
ublox_msgs__msg__NavSTATUS__fini(ublox_msgs__msg__NavSTATUS * msg)
{
  if (!msg) {
    return;
  }
  // i_tow
  // gps_fix
  // flags
  // fix_stat
  // flags2
  // ttff
  // msss
}

bool
ublox_msgs__msg__NavSTATUS__are_equal(const ublox_msgs__msg__NavSTATUS * lhs, const ublox_msgs__msg__NavSTATUS * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // i_tow
  if (lhs->i_tow != rhs->i_tow) {
    return false;
  }
  // gps_fix
  if (lhs->gps_fix != rhs->gps_fix) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // fix_stat
  if (lhs->fix_stat != rhs->fix_stat) {
    return false;
  }
  // flags2
  if (lhs->flags2 != rhs->flags2) {
    return false;
  }
  // ttff
  if (lhs->ttff != rhs->ttff) {
    return false;
  }
  // msss
  if (lhs->msss != rhs->msss) {
    return false;
  }
  return true;
}

bool
ublox_msgs__msg__NavSTATUS__copy(
  const ublox_msgs__msg__NavSTATUS * input,
  ublox_msgs__msg__NavSTATUS * output)
{
  if (!input || !output) {
    return false;
  }
  // i_tow
  output->i_tow = input->i_tow;
  // gps_fix
  output->gps_fix = input->gps_fix;
  // flags
  output->flags = input->flags;
  // fix_stat
  output->fix_stat = input->fix_stat;
  // flags2
  output->flags2 = input->flags2;
  // ttff
  output->ttff = input->ttff;
  // msss
  output->msss = input->msss;
  return true;
}

ublox_msgs__msg__NavSTATUS *
ublox_msgs__msg__NavSTATUS__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_msgs__msg__NavSTATUS * msg = (ublox_msgs__msg__NavSTATUS *)allocator.allocate(sizeof(ublox_msgs__msg__NavSTATUS), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ublox_msgs__msg__NavSTATUS));
  bool success = ublox_msgs__msg__NavSTATUS__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ublox_msgs__msg__NavSTATUS__destroy(ublox_msgs__msg__NavSTATUS * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ublox_msgs__msg__NavSTATUS__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ublox_msgs__msg__NavSTATUS__Sequence__init(ublox_msgs__msg__NavSTATUS__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_msgs__msg__NavSTATUS * data = NULL;

  if (size) {
    data = (ublox_msgs__msg__NavSTATUS *)allocator.zero_allocate(size, sizeof(ublox_msgs__msg__NavSTATUS), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ublox_msgs__msg__NavSTATUS__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ublox_msgs__msg__NavSTATUS__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ublox_msgs__msg__NavSTATUS__Sequence__fini(ublox_msgs__msg__NavSTATUS__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ublox_msgs__msg__NavSTATUS__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ublox_msgs__msg__NavSTATUS__Sequence *
ublox_msgs__msg__NavSTATUS__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ublox_msgs__msg__NavSTATUS__Sequence * array = (ublox_msgs__msg__NavSTATUS__Sequence *)allocator.allocate(sizeof(ublox_msgs__msg__NavSTATUS__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ublox_msgs__msg__NavSTATUS__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ublox_msgs__msg__NavSTATUS__Sequence__destroy(ublox_msgs__msg__NavSTATUS__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ublox_msgs__msg__NavSTATUS__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ublox_msgs__msg__NavSTATUS__Sequence__are_equal(const ublox_msgs__msg__NavSTATUS__Sequence * lhs, const ublox_msgs__msg__NavSTATUS__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ublox_msgs__msg__NavSTATUS__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ublox_msgs__msg__NavSTATUS__Sequence__copy(
  const ublox_msgs__msg__NavSTATUS__Sequence * input,
  ublox_msgs__msg__NavSTATUS__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ublox_msgs__msg__NavSTATUS);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ublox_msgs__msg__NavSTATUS * data =
      (ublox_msgs__msg__NavSTATUS *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ublox_msgs__msg__NavSTATUS__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ublox_msgs__msg__NavSTATUS__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ublox_msgs__msg__NavSTATUS__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
