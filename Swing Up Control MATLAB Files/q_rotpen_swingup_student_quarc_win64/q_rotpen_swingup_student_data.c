/*
 * q_rotpen_swingup_student_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "q_rotpen_swingup_student".
 *
 * Model version              : 1.393
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Tue Apr 30 17:05:00 2019
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "q_rotpen_swingup_student.h"
#include "q_rotpen_swingup_student_private.h"

/* Block parameters (default storage) */
P_q_rotpen_swingup_student_T q_rotpen_swingup_student_P = {
  /* Variable: Er
   * Referenced by: '<S12>/Ref. Energy'
   */
  0.42,

  /* Variable: Jp
   * Referenced by: '<S13>/Gain1'
   */
  0.0011987308014583331,

  /* Variable: K
   * Referenced by: '<Root>/Control  Gain'
   */
  { -5.2611594041474836, 28.156796760038496, -2.7575720928684695,
    3.2190264881962936 },

  /* Variable: K_AMP
   * Referenced by: '<S5>/Inverse Amplifier  Gain (V//V)'
   */
  1.0,

  /* Variable: K_ENC
   * Referenced by: '<S5>/Encoder Calibration  (rad//count)'
   */
  0.0015339807878856412,

  /* Variable: Kg
   * Referenced by:
   *   '<S8>/Gain1'
   *   '<S8>/Gain2'
   */
  70.0,

  /* Variable: Lp
   * Referenced by: '<S13>/Gain5'
   */
  0.33654999999999996,

  /* Variable: Lr
   * Referenced by: '<S8>/Gain'
   */
  0.21589999999999998,

  /* Variable: Mp
   * Referenced by: '<S13>/Gain5'
   */
  0.127,

  /* Variable: Mr
   * Referenced by: '<S8>/Gain'
   */
  0.257,

  /* Variable: Rm
   * Referenced by: '<S8>/Gain'
   */
  2.6,

  /* Variable: a_max
   * Referenced by: '<S12>/Motor Acceleration Limit'
   */
  11.575230633223583,

  /* Variable: epsilon
   * Referenced by: '<S2>/Constant'
   */
  0.20943951023931953,

  /* Variable: eta_g
   * Referenced by: '<S8>/Gain1'
   */
  0.9,

  /* Variable: eta_m
   * Referenced by: '<S8>/Gain1'
   */
  0.69,

  /* Variable: g
   * Referenced by: '<S13>/Gain5'
   */
  9.81,

  /* Variable: km
   * Referenced by: '<S8>/Gain2'
   */
  0.0076776344547530321,

  /* Variable: kt
   * Referenced by: '<S8>/Gain1'
   */
  0.0076829697292799988,

  /* Mask Parameter: SliderGain_gain
   * Referenced by: '<S7>/Slider Gain'
   */
  7.0,

  /* Mask Parameter: HILReadEncoder_channels
   * Referenced by: '<S5>/HIL Read Encoder'
   */
  { 0U, 1U },

  /* Mask Parameter: HILWriteAnalog_channels
   * Referenced by: '<S5>/HIL Write Analog'
   */
  0U,

  /* Mask Parameter: HILWriteDigital_channels
   * Referenced by: '<S5>/HIL Write Digital'
   */
  { 0U, 1U, 2U, 3U },

  /* Expression: set_other_outputs_at_terminate
   * Referenced by: '<S5>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_switch_out
   * Referenced by: '<S5>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_start
   * Referenced by: '<S5>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_switch_in
   * Referenced by: '<S5>/HIL Initialize'
   */
  0.0,

  /* Expression: final_analog_outputs
   * Referenced by: '<S5>/HIL Initialize'
   */
  0.0,

  /* Expression: analog_input_maximums
   * Referenced by: '<S5>/HIL Initialize'
   */
  10.0,

  /* Expression: analog_input_minimums
   * Referenced by: '<S5>/HIL Initialize'
   */
  -10.0,

  /* Expression: analog_output_maximums
   * Referenced by: '<S5>/HIL Initialize'
   */
  10.0,

  /* Expression: analog_output_minimums
   * Referenced by: '<S5>/HIL Initialize'
   */
  -10.0,

  /* Expression: initial_analog_outputs
   * Referenced by: '<S5>/HIL Initialize'
   */
  0.0,

  /* Expression: watchdog_analog_outputs
   * Referenced by: '<S5>/HIL Initialize'
   */
  0.0,

  /* Expression: 2*pi
   * Referenced by: '<S9>/Mod Angle  (rad)'
   */
  6.2831853071795862,

  /* Expression: -pi
   * Referenced by: '<S9>/Offset Angle  (rad)'
   */
  -3.1415926535897931,

  /* Expression: 8.0
   * Referenced by: '<Root>/u_max (m//s^2)'
   */
  8.0,

  /* Computed Parameter: HPFalpha_dotrads_A
   * Referenced by: '<S3>/HPF: alpha_dot (rad//s)'
   */
  -62.831853071795862,

  /* Computed Parameter: HPFalpha_dotrads_C
   * Referenced by: '<S3>/HPF: alpha_dot (rad//s)'
   */
  -3947.8417604357433,

  /* Computed Parameter: HPFalpha_dotrads_D
   * Referenced by: '<S3>/HPF: alpha_dot (rad//s)'
   */
  62.831853071795862,

  /* Expression: 1
   * Referenced by: '<S13>/Constant1'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Computed Parameter: HPFtheta_dotrads_A
   * Referenced by: '<S3>/HPF: theta_dot (rad//s)'
   */
  -62.831853071795862,

  /* Computed Parameter: HPFtheta_dotrads_C
   * Referenced by: '<S3>/HPF: theta_dot (rad//s)'
   */
  -3947.8417604357433,

  /* Computed Parameter: HPFtheta_dotrads_D
   * Referenced by: '<S3>/HPF: theta_dot (rad//s)'
   */
  62.831853071795862,

  /* Expression: 1
   * Referenced by: '<Root>/Signal Generator'
   */
  1.0,

  /* Expression: 0.1
   * Referenced by: '<Root>/Signal Generator'
   */
  0.1,

  /* Expression: 5
   * Referenced by: '<Root>/Amplitude (deg)'
   */
  5.0,

  /* Expression: pi/180
   * Referenced by: '<S1>/Gain1'
   */
  0.017453292519943295,

  /* Expression: [1,0,0,0]
   * Referenced by: '<Root>/Convert to  Vector State'
   */
  { 1.0, 0.0, 0.0, 0.0 },

  /* Expression: -1
   * Referenced by: '<S5>/Direction Convention: (Right-Hand) system'
   */
  -1.0,

  /* Expression: 5
   * Referenced by: '<S5>/Amplifier  Saturation (V)'
   */
  5.0,

  /* Expression: -5
   * Referenced by: '<S5>/Amplifier  Saturation (V)'
   */
  -5.0,

  /* Expression: [1 1 1 1]
   * Referenced by: '<S5>/Enable VoltPAQ-X2,X4'
   */
  { 1.0, 1.0, 1.0, 1.0 },

  /* Expression: 180/pi
   * Referenced by: '<S10>/Gain'
   */
  57.295779513082323,

  /* Expression: 180/pi
   * Referenced by: '<S11>/Gain'
   */
  57.295779513082323,

  /* Computed Parameter: HILInitialize_CKChannels
   * Referenced by: '<S5>/HIL Initialize'
   */
  { 0, 1, 2 },

  /* Computed Parameter: HILInitialize_DOWatchdog
   * Referenced by: '<S5>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_EIInitial
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<S5>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /* Computed Parameter: HILInitialize_AOChannels
   * Referenced by: '<S5>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /* Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<S5>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U, 4U, 5U, 6U, 7U },

  /* Computed Parameter: HILInitialize_EIQuadrature
   * Referenced by: '<S5>/HIL Initialize'
   */
  4U,

  /* Computed Parameter: HILInitialize_Active
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOTerminate
   * Referenced by: '<S5>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AOExit
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOTerminate
   * Referenced by: '<S5>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_DOExit
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POTerminate
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POExit
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKPStart
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKPEnter
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKStart
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKEnter
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AIPStart
   * Referenced by: '<S5>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AIPEnter
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOPStart
   * Referenced by: '<S5>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AOPEnter
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOStart
   * Referenced by: '<S5>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AOEnter
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOReset
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOPStart
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOPEnter
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOStart
   * Referenced by: '<S5>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_DOEnter
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOReset
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIPStart
   * Referenced by: '<S5>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_EIPEnter
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIStart
   * Referenced by: '<S5>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_EIEnter
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POPStart
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POPEnter
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POStart
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POEnter
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POReset
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_OOReset
   * Referenced by: '<S5>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOFinal
   * Referenced by: '<S5>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_DOInitial
   * Referenced by: '<S5>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILReadEncoder_Active
   * Referenced by: '<S5>/HIL Read Encoder'
   */
  1,

  /* Computed Parameter: HILWriteAnalog_Active
   * Referenced by: '<S5>/HIL Write Analog'
   */
  0,

  /* Computed Parameter: HILWriteDigital_Active
   * Referenced by: '<S5>/HIL Write Digital'
   */
  0
};
