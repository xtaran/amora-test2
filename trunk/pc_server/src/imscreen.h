/**
 * @file   imscreen.h
 * @author Adenilson Cavalcanti
 * @date   Tue Aug 28 12:08:21 2007
 *
 * @brief  Screenshot and image handling module.
 *
 * The code here is responsible to take screenshots from active window,
 * resize and save it to filesystem.
 */

/*  Copyright (C) 2007  Adenilson Cavalcanti <savagobr@yahoo.com>
 *
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; by version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

#ifndef __IMSCREEN_PC__
#define __IMSCREEN_PC__

#include <X11/Xlib.h>
#include <Imlib2.h>

/** Creates a screenshot from active window.
 *
 *
 * @param display Display pointer (see \ref x11_event.h contruct_display).
 * @param image A imlib2 image pointer.
 *
 * @return 0 for success, -1 otherwise.
 */
int screen_capture(Display *display, Imlib_Image *image);


/** Saves an image structure to filesystem.
 *
 *
 * @param image An imlib image pointer (hopefully with screen data taken by
 * \ref screen_capture).
 * @param name A file name (e.g. "screenshot.jpg")
 *
 * @return 0 for success, -1 otherwise.
 */
int save_image(Imlib_Image *image, char *name);


#endif
