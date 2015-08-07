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

#ifndef   	UDEV_DEBUG_H_
# define   	UDEV_DEBUG_H_

struct udev*           UDEV_new(void);
struct udev_monitor*   UDEV_monitor_new_from_netlink(struct udev *udev, const char *name);
struct udev_enumerate* UDEV_enumerate_new(struct udev *udev);
struct udev_queue*     UDEV_queue_new(struct udev *udev);
struct udev_device*    UDEV_device_new_from_syspath(struct udev *udev, const char *syspath);
struct udev_device*    UDEV_monitor_receive_device(struct udev_monitor *udev_monitor);

void UDEV_unref(struct udev *udev);
void UDEV_monitor_unref(struct udev_monitor *udev_monitor);
void UDEV_enumerate_unref(struct udev_enumerate *udev_enumerate);
void UDEV_queue_unref(struct udev_queue *udev_queue);
void UDEV_device_unref(struct udev_device *udev_device);

#endif 	    /* !UDEV_DEBUG_H_ */
