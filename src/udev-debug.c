/*
 * Copyright (c) 2015 Jed Lejosne <lejosnej@ainfosec.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "project.h"

static void
UDEV_counts(int index, int inc) {
  static int indexes[5] = { 0 };

  printf("Index %d: %d -> %d\n", index, indexes[index], indexes[index] + inc);
  indexes[index] += inc;
}

struct udev*
UDEV_new(void) {
  UDEV_counts(0, 1);

  return udev_new();
}

struct udev_monitor*
UDEV_monitor_new_from_netlink(struct udev *udev, const char *name) {
  UDEV_counts(1, 1);

  return udev_monitor_new_from_netlink(udev, name);
}

struct udev_enumerate*
UDEV_enumerate_new(struct udev *udev) {
  UDEV_counts(2, 1);

  return udev_enumerate_new(udev);
}

struct udev_queue*
UDEV_queue_new(struct udev *udev) {
  UDEV_counts(3, 1);

  return udev_queue_new(udev);
}

struct udev_device*
UDEV_device_new_from_syspath(struct udev *udev, const char *syspath) {
  UDEV_counts(4, 1);

  return udev_device_new_from_syspath(udev, syspath);
}

struct udev_device*
UDEV_monitor_receive_device(struct udev_monitor *udev_monitor) {
  UDEV_counts(4, 1);

  return udev_monitor_receive_device(udev_monitor);
}

void
UDEV_unref(struct udev *udev) {
  UDEV_counts(0, -1);

  udev_unref(udev);
}

void
UDEV_monitor_unref(struct udev_monitor *udev_monitor) {
  UDEV_counts(1, -1);

  udev_monitor_unref(udev_monitor);
}

void
UDEV_enumerate_unref(struct udev_enumerate *udev_enumerate) {
  UDEV_counts(2, -1);

  udev_enumerate_unref(udev_enumerate);
}

void
UDEV_queue_unref(struct udev_queue *udev_queue) {
  UDEV_counts(3, -1);

  udev_queue_unref(udev_queue);
}

void
DEV_device_unref(struct udev_device *udev_device) {
  UDEV_counts(4, -1);

  udev_device_unref(udev_device);
}
