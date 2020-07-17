const unsigned int xtable[10][20][2]=
{
  { //0
    {0x00000101,0x00100001},
    {0x00000041,0x00080001},
    {0x00000011,0x00040001},
    {0x00000005,0x00020001},
    {0x00000044,0x00020008},
    {0x00000044,0x00080002},
    {0x00000140,0x00100008},
    {0x00000104,0x00100002},
    {0x00000101,0x00010010},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000104,0x00020010},
    {0x00000041,0x00010008},
    {0x00000005,0x00010002},
    {0x00000050,0x00040008},
    {0x00000014,0x00040002},
    {0x00000011,0x00010004},
    {0x00000110,0x00100004},
    {0x00000050,0x00080004},
    {0x00000014,0x00020004},
  },
  { //1
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000005,0x00020001},
    {0x00000000,0x00000000},
    {0x00000044,0x00080002},
    {0x00000000,0x00000000},
    {0x00000104,0x00100002},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000104,0x00020010},
    {0x00000000,0x00000000},
    {0x00000005,0x00010002},
    {0x00000000,0x00000000},
    {0x00000014,0x00040002},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000014,0x00020004},
  },
  { //2
    {0x00000101,0x00100001},
    {0x00000041,0x00080001},
    {0x00000011,0x00040001},
    {0x00000005,0x00020001},
    {0x00000000,0x00000000},
    {0x00000044,0x00080002},
    {0x00000000,0x00000000},
    {0x00000104,0x00100002},
    {0x00000101,0x00010010},
    {0x00000140,0x00080010},
    {0x00000110,0x00040010},
    {0x00000104,0x00020010},
    {0x00000041,0x00010008},
    {0x00000000,0x00000000},
    {0x00000050,0x00040008},
    {0x00000000,0x00000000},
    {0x00000011,0x00010004},
    {0x00000110,0x00100004},
    {0x00000050,0x00080004},
    {0x00000014,0x00020004},
  },
  { //3
    {0x00000101,0x00100001},
    {0x00000041,0x00080001},
    {0x00000011,0x00040001},
    {0x00000005,0x00020001},
    {0x00000000,0x00000000},
    {0x00000044,0x00080002},
    {0x00000000,0x00000000},
    {0x00000104,0x00100002},
    {0x00000000,0x00000000},
    {0x00000140,0x00080010},
    {0x00000110,0x00040010},
    {0x00000104,0x00020010},
    {0x00000000,0x00000000},
    {0x00000005,0x00010002},
    {0x00000000,0x00000000},
    {0x00000014,0x00040002},
    {0x00000011,0x00010004},
    {0x00000110,0x00100004},
    {0x00000050,0x00080004},
    {0x00000014,0x00020004},
  },
  { //4
    {0x00000101,0x00100001},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000005,0x00020001},
    {0x00000044,0x00020008},
    {0x00000044,0x00080002},
    {0x00000140,0x00100008},
    {0x00000104,0x00100002},
    {0x00000101,0x00010010},
    {0x00000140,0x00080010},
    {0x00000110,0x00040010},
    {0x00000104,0x00020010},
    {0x00000000,0x00000000},
    {0x00000005,0x00010002},
    {0x00000000,0x00000000},
    {0x00000014,0x00040002},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000014,0x00020004},
  },
  { //5
    {0x00000101,0x00100001},
    {0x00000041,0x00080001},
    {0x00000011,0x00040001},
    {0x00000005,0x00020001},
    {0x00000044,0x00020008},
    {0x00000000,0x00000000},
    {0x00000140,0x00100008},
    {0x00000000,0x00000000},
    {0x00000101,0x00010010},
    {0x00000140,0x00080010},
    {0x00000110,0x00040010},
    {0x00000104,0x00020010},
    {0x00000000,0x00000000},
    {0x00000005,0x00010002},
    {0x00000000,0x00000000},
    {0x00000014,0x00040002},
    {0x00000011,0x00010004},
    {0x00000110,0x00100004},
    {0x00000050,0x00080004},
    {0x00000014,0x00020004},
  },
  { //6
    {0x00000101,0x00100001},
    {0x00000041,0x00080001},
    {0x00000011,0x00040001},
    {0x00000005,0x00020001},
    {0x00000044,0x00020008},
    {0x00000000,0x00000000},
    {0x00000140,0x00100008},
    {0x00000000,0x00000000},
    {0x00000101,0x00010010},
    {0x00000140,0x00080010},
    {0x00000110,0x00040010},
    {0x00000104,0x00020010},
    {0x00000041,0x00010008},
    {0x00000005,0x00010002},
    {0x00000050,0x00040008},
    {0x00000014,0x00040002},
    {0x00000011,0x00010004},
    {0x00000110,0x00100004},
    {0x00000050,0x00080004},
    {0x00000014,0x00020004},
  },
  { //7
    {0x00000101,0x00100001},
    {0x00000041,0x00080001},
    {0x00000011,0x00040001},
    {0x00000005,0x00020001},
    {0x00000000,0x00000000},
    {0x00000044,0x00080002},
    {0x00000000,0x00000000},
    {0x00000104,0x00100002},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000104,0x00020010},
    {0x00000000,0x00000000},
    {0x00000005,0x00010002},
    {0x00000000,0x00000000},
    {0x00000014,0x00040002},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000014,0x00020004},
  },
  { //8
    {0x00000101,0x00100001},
    {0x00000041,0x00080001},
    {0x00000011,0x00040001},
    {0x00000005,0x00020001},
    {0x00000044,0x00020008},
    {0x00000044,0x00080002},
    {0x00000140,0x00100008},
    {0x00000104,0x00100002},
    {0x00000101,0x00010010},
    {0x00000140,0x00080010},
    {0x00000110,0x00040010},
    {0x00000104,0x00020010},
    {0x00000041,0x00010008},
    {0x00000005,0x00010002},
    {0x00000050,0x00040008},
    {0x00000014,0x00040002},
    {0x00000011,0x00010004},
    {0x00000110,0x00100004},
    {0x00000050,0x00080004},
    {0x00000014,0x00020004},
  },
  { //9
    {0x00000101,0x00100001},
    {0x00000041,0x00080001},
    {0x00000011,0x00040001},
    {0x00000005,0x00020001},
    {0x00000044,0x00020008},
    {0x00000044,0x00080002},
    {0x00000140,0x00100008},
    {0x00000104,0x00100002},
    {0x00000101,0x00010010},
    {0x00000140,0x00080010},
    {0x00000110,0x00040010},
    {0x00000104,0x00020010},
    {0x00000000,0x00000000},
    {0x00000005,0x00010002},
    {0x00000000,0x00000000},
    {0x00000014,0x00040002},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000000,0x00000000},
    {0x00000014,0x00020004},
  },
};
