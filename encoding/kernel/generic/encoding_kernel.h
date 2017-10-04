/*+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 * Created by: Hang Zhang
 * ECE Department, Rutgers University
 * Email: zhang.hang@rutgers.edu
 * Copyright (c) 2017
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree 
 *+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 */
#ifndef THC_GENERIC_FILE
#define THC_GENERIC_FILE "generic/encoding_kernel.h"
#else

void Encoding_(AggregateE_Forward)(THCState *state, THCTensor *E_, 
    THCTensor *A_, THCTensor *X_, THCTensor *C_);

void Encoding_(AggregateE_Backward)(THCState *state, THCTensor *GA_, 
     THCTensor *GE_, THCTensor *A_, THCTensor *X_, THCTensor *C_);

void Encoding_(ScaledL2_Forward)( THCState *state, THCTensor *SL_,  
    THCTensor *X_, THCTensor *C_,  THCTensor *S_);

void Encoding_(ScaledL2_Backward)(
    THCState *state, THCTensor *GSL_, THCTensor *GX_, THCTensor *GC_,
    THCTensor *X_, THCTensor *C_, THCTensor *S_);

void Encoding_(Aggregate_Forward)(
    THCState *state, THCTensor *E_, THCTensor *A_, THCTensor *R_);

void Encoding_(Aggregate_Backward)(
    THCState *state, THCTensor *GA_, THCTensor *GR_, THCTensor *L_, 
    THCTensor *A_, THCTensor *R_);

void Encoding_(Residual_Forward)(
    THCState *state, THCTensor *R_, THCTensor *X_, THCTensor *D_);

void Encoding_(Residual_Backward)(
    THCState *state, THCTensor *GR_, THCTensor *GX_, THCTensor *GD_);

void Encoding_(SquareSqueeze_Forward)(
    THCState *state, THCTensor *L_,  THCTensor *R_);

void Encoding_(SquareSqueeze_Backward)(
    THCState *state, THCTensor *GL_, THCTensor *GR_, THCTensor *R_);

void Encoding_(BatchNorm_Forward)(THCState *state, 
    THCTensor *output_, THCTensor *input_, 
    THCTensor *mean_, THCTensor *invstd_,
    THCTensor *gamma_, THCTensor *beta_);

void Encoding_(BatchNorm_Backward)(THCState *state, 
    THCTensor *gradoutput_, THCTensor *input_, THCTensor *gradinput_, 
    THCTensor *gradgamma_, THCTensor *gradbeta_, THCTensor *mean_, 
    THCTensor *invstd_, THCTensor *gamma_, THCTensor *beta_, 
    THCTensor *gradMean_, THCTensor *gradStd_, int train);

void Encoding_(Sum_Square_Forward)(THCState *state, 
    THCTensor *input_, THCTensor *sum_, THCTensor *square_);

void Encoding_(Sum_Square_Backward)(THCState *state, 
    THCTensor *gradInput, THCTensor *input_, 
    THCTensor *gradSum_, THCTensor *gradSquare_);

#endif
