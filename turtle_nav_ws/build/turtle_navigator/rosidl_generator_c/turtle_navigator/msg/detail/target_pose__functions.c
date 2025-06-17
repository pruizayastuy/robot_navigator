// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_navigator:msg/TargetPose.idl
// generated code does not contain a copyright notice
#include "turtle_navigator/msg/detail/target_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
turtle_navigator__msg__TargetPose__init(turtle_navigator__msg__TargetPose * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  return true;
}

void
turtle_navigator__msg__TargetPose__fini(turtle_navigator__msg__TargetPose * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
}

bool
turtle_navigator__msg__TargetPose__are_equal(const turtle_navigator__msg__TargetPose * lhs, const turtle_navigator__msg__TargetPose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  return true;
}

bool
turtle_navigator__msg__TargetPose__copy(
  const turtle_navigator__msg__TargetPose * input,
  turtle_navigator__msg__TargetPose * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  return true;
}

turtle_navigator__msg__TargetPose *
turtle_navigator__msg__TargetPose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_navigator__msg__TargetPose * msg = (turtle_navigator__msg__TargetPose *)allocator.allocate(sizeof(turtle_navigator__msg__TargetPose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_navigator__msg__TargetPose));
  bool success = turtle_navigator__msg__TargetPose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_navigator__msg__TargetPose__destroy(turtle_navigator__msg__TargetPose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_navigator__msg__TargetPose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_navigator__msg__TargetPose__Sequence__init(turtle_navigator__msg__TargetPose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_navigator__msg__TargetPose * data = NULL;

  if (size) {
    data = (turtle_navigator__msg__TargetPose *)allocator.zero_allocate(size, sizeof(turtle_navigator__msg__TargetPose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_navigator__msg__TargetPose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_navigator__msg__TargetPose__fini(&data[i - 1]);
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
turtle_navigator__msg__TargetPose__Sequence__fini(turtle_navigator__msg__TargetPose__Sequence * array)
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
      turtle_navigator__msg__TargetPose__fini(&array->data[i]);
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

turtle_navigator__msg__TargetPose__Sequence *
turtle_navigator__msg__TargetPose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_navigator__msg__TargetPose__Sequence * array = (turtle_navigator__msg__TargetPose__Sequence *)allocator.allocate(sizeof(turtle_navigator__msg__TargetPose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_navigator__msg__TargetPose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_navigator__msg__TargetPose__Sequence__destroy(turtle_navigator__msg__TargetPose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_navigator__msg__TargetPose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_navigator__msg__TargetPose__Sequence__are_equal(const turtle_navigator__msg__TargetPose__Sequence * lhs, const turtle_navigator__msg__TargetPose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_navigator__msg__TargetPose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_navigator__msg__TargetPose__Sequence__copy(
  const turtle_navigator__msg__TargetPose__Sequence * input,
  turtle_navigator__msg__TargetPose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_navigator__msg__TargetPose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_navigator__msg__TargetPose * data =
      (turtle_navigator__msg__TargetPose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_navigator__msg__TargetPose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_navigator__msg__TargetPose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_navigator__msg__TargetPose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
