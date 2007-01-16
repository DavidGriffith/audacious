/*  Audacious - Cross-platform multimedia player
 *  Copyright (C) 2005-2007  Audacious development team
 *
 *  Copyright (C) 1999 Richard Boulton <richard@tartarus.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; under version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

/* fft.h: header for iterative implementation of a FFT */

#ifndef _FFT_H_
#define _FFT_H_

#define FFT_BUFFER_SIZE_LOG 9

#define FFT_BUFFER_SIZE (1 << FFT_BUFFER_SIZE_LOG)

/* sound sample - should be an signed 16 bit value */
typedef short int sound_sample;

#ifdef __cplusplus
extern "C" {
#endif

/* FFT library */
    typedef struct _struct_fft_state fft_state;
    fft_state *fft_init(void);
    void fft_perform(const sound_sample * input, float *output,
                     fft_state * state);
    void fft_close(fft_state * state);



#ifdef __cplusplus
}
#endif
#endif                          /* _FFT_H_ */