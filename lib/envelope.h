/********************************************************************
 *                                                                  *
 * THIS FILE IS PART OF THE Ogg Vorbis SOFTWARE CODEC SOURCE CODE.  *
 * USE, DISTRIBUTION AND REPRODUCTION OF THIS SOURCE IS GOVERNED BY *
 * THE GNU PUBLIC LICENSE 2, WHICH IS INCLUDED WITH THIS SOURCE.    *
 * PLEASE READ THESE TERMS DISTRIBUTING.                            *
 *                                                                  *
 * THE OggSQUISH SOURCE CODE IS (C) COPYRIGHT 1994-1999             *
 * by 1999 Monty <monty@xiph.org> and The XIPHOPHORUS Company       *
 * http://www.xiph.org/                                             *
 *                                                                  *
 ********************************************************************

 function: PCM data envelope analysis and manipulation
 author: Monty <xiphmont@mit.edu>
 modifications by: Monty
 last modification date: Aug 06 1999

 ********************************************************************/

#ifndef _V_ENVELOPE_
#define _V_ENVELOPE_

extern void _ve_envelope_multipliers(vorbis_dsp_state *v);
extern void _ve_envelope_apply(vorbis_block *vb,int multp);
extern void _ve_envelope_sparsify(vorbis_block *vb);
extern void _ve_envelope_init(envelope_lookup *e,int samples_per);

#endif
