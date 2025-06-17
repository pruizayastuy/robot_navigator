// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtle_navigator:srv/SetControlParams.idl
// generated code does not contain a copyright notice
#include "turtle_navigator/srv/detail/set_control_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
turtle_navigator__srv__SetControlParams_Request__init(turtle_navigator__srv__SetControlParams_Request * msg)
{
  if (!msg) {
    return false;
  }
  // linear_gain
  // angular_gain
  // max_speed
  return true;
}

void
turtle_navigator__srv__SetControlParams_Request__fini(turtle_navigator__srv__SetControlParams_Request * msg)
{
  if (!msg) {
    return;
  }
  // linear_gain
  // angular_gain
  // max_speed
}

bool
turtle_navigator__srv__SetControlParams_Request__are_equal(const turtle_navigator__srv__SetControlParams_Request * lhs, const turtle_navigator__srv__SetControlParams_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear_gain
  if (lhs->linear_gain != rhs->linear_gain) {
    return false;
  }
  // angular_gain
  if (lhs->angular_gain != rhs->angular_gain) {
    return false;
  }
  // max_speed
  if (lhs->max_speed != rhs->max_speed) {
    return false;
  }
  return true;
}

bool
turtle_navigator__srv__SetControlParams_Request__copy(
  const turtle_navigator__srv__SetControlParams_Request * input,
  turtle_navigator__srv__SetControlParams_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // linear_gain
  output->linear_gain = input->linear_gain;
  // angular_gain
  output->angular_gain = input->angular_gain;
  // max_speed
  output->max_speed = input->max_speed;
  return true;
}

turtle_navigator__srv__SetControlParams_Request *
turtle_navigator__srv__SetControlParams_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_navigator__srv__SetControlParams_Request * msg = (turtle_navigator__srv__SetControlParams_Request *)allocator.allocate(sizeof(turtle_navigator__srv__SetControlParams_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_navigator__srv__SetControlParams_Request));
  bool success = turtle_navigator__srv__SetControlParams_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_navigator__srv__SetControlParams_Request__destroy(turtle_navigator__srv__SetControlParams_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_navigator__srv__SetControlParams_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_navigator__srv__SetControlParams_Request__Sequence__init(turtle_navigator__srv__SetControlParams_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_navigator__srv__SetControlParams_Request * data = NULL;

  if (size) {
    data = (turtle_navigator__srv__SetControlParams_Request *)allocator.zero_allocate(size, sizeof(turtle_navigator__srv__SetControlParams_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_navigator__srv__SetControlParams_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_navigator__srv__SetControlParams_Request__fini(&data[i - 1]);
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
turtle_navigator__srv__SetControlParams_Request__Sequence__fini(turtle_navigator__srv__SetControlParams_Request__Sequence * array)
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
      turtle_navigator__srv__SetControlParams_Request__fini(&array->data[i]);
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

turtle_navigator__srv__SetControlParams_Request__Sequence *
turtle_navigator__srv__SetControlParams_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_navigator__srv__SetControlParams_Request__Sequence * array = (turtle_navigator__srv__SetControlParams_Request__Sequence *)allocator.allocate(sizeof(turtle_navigator__srv__SetControlParams_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_navigator__srv__SetControlParams_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_navigator__srv__SetControlParams_Request__Sequence__destroy(turtle_navigator__srv__SetControlParams_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_navigator__srv__SetControlParams_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_navigator__srv__SetControlParams_Request__Sequence__are_equal(const turtle_navigator__srv__SetControlParams_Request__Sequence * lhs, const turtle_navigator__srv__SetControlParams_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_navigator__srv__SetControlParams_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_navigator__srv__SetControlParams_Request__Sequence__copy(
  const turtle_navigator__srv__SetControlParams_Request__Sequence * input,
  turtle_navigator__srv__SetControlParams_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_navigator__srv__SetControlParams_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_navigator__srv__SetControlParams_Request * data =
      (turtle_navigator__srv__SetControlParams_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_navigator__srv__SetControlParams_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_navigator__srv__SetControlParams_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_navigator__srv__SetControlParams_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
turtle_navigator__srv__SetControlParams_Response__init(turtle_navigator__srv__SetControlParams_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
turtle_navigator__srv__SetControlParams_Response__fini(turtle_navigator__srv__SetControlParams_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
turtle_navigator__srv__SetControlParams_Response__are_equal(const turtle_navigator__srv__SetControlParams_Response * lhs, const turtle_navigator__srv__SetControlParams_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
turtle_navigator__srv__SetControlParams_Response__copy(
  const turtle_navigator__srv__SetControlParams_Response * input,
  turtle_navigator__srv__SetControlParams_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

turtle_navigator__srv__SetControlParams_Response *
turtle_navigator__srv__SetControlParams_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_navigator__srv__SetControlParams_Response * msg = (turtle_navigator__srv__SetControlParams_Response *)allocator.allocate(sizeof(turtle_navigator__srv__SetControlParams_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtle_navigator__srv__SetControlParams_Response));
  bool success = turtle_navigator__srv__SetControlParams_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtle_navigator__srv__SetControlParams_Response__destroy(turtle_navigator__srv__SetControlParams_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtle_navigator__srv__SetControlParams_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtle_navigator__srv__SetControlParams_Response__Sequence__init(turtle_navigator__srv__SetControlParams_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_navigator__srv__SetControlParams_Response * data = NULL;

  if (size) {
    data = (turtle_navigator__srv__SetControlParams_Response *)allocator.zero_allocate(size, sizeof(turtle_navigator__srv__SetControlParams_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtle_navigator__srv__SetControlParams_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtle_navigator__srv__SetControlParams_Response__fini(&data[i - 1]);
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
turtle_navigator__srv__SetControlParams_Response__Sequence__fini(turtle_navigator__srv__SetControlParams_Response__Sequence * array)
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
      turtle_navigator__srv__SetControlParams_Response__fini(&array->data[i]);
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

turtle_navigator__srv__SetControlParams_Response__Sequence *
turtle_navigator__srv__SetControlParams_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtle_navigator__srv__SetControlParams_Response__Sequence * array = (turtle_navigator__srv__SetControlParams_Response__Sequence *)allocator.allocate(sizeof(turtle_navigator__srv__SetControlParams_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtle_navigator__srv__SetControlParams_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtle_navigator__srv__SetControlParams_Response__Sequence__destroy(turtle_navigator__srv__SetControlParams_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtle_navigator__srv__SetControlParams_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtle_navigator__srv__SetControlParams_Response__Sequence__are_equal(const turtle_navigator__srv__SetControlParams_Response__Sequence * lhs, const turtle_navigator__srv__SetControlParams_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtle_navigator__srv__SetControlParams_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtle_navigator__srv__SetControlParams_Response__Sequence__copy(
  const turtle_navigator__srv__SetControlParams_Response__Sequence * input,
  turtle_navigator__srv__SetControlParams_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtle_navigator__srv__SetControlParams_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtle_navigator__srv__SetControlParams_Response * data =
      (turtle_navigator__srv__SetControlParams_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtle_navigator__srv__SetControlParams_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtle_navigator__srv__SetControlParams_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtle_navigator__srv__SetControlParams_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
