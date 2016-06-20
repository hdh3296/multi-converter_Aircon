
#include  "..\header\host_io.h"


#define	CAN2_DATA_PT		4
#define	CAN2_MAX_SAVE_BUF	100


extern  void    __attribute__((section(".usercode"))) Can2Init(void);
extern  void    __attribute__((section(".usercode"))) Can2Check(void);
extern  void    __attribute__((section(".usercode"))) Can2Interrupt(void);


extern	unsigned    char    Can2TxBuf[CAN2_MAX_SAVE_BUF];
extern	unsigned    char    Can2RxBuf[CAN2_MAX_SAVE_BUF];


extern  unsigned    int     Can2DataSeq;
extern	unsigned    int     Can2Block_Nm;


//extern	unsigned    char    Can2MySrcAddr;
//extern	unsigned    char    Can2MyDestAddr;
//extern	unsigned    char    Can2MyProductId;
//extern	unsigned    char    Can2SrcAddr;
//extern	unsigned    char    Can2DestAddr;
//extern	unsigned    char    Can2ProductId;

extern	unsigned    char    Can2DataFrameNm;
extern	unsigned    char	Can2RxDataTotalCnt;
extern	unsigned    char    Can2RxDataTxPointer;
extern	unsigned    char	Can2TxDataTotalCnt;
extern	unsigned    char    Can2TxDataTxPointer;
extern	unsigned	char	Can2PollingTimer;
extern	unsigned	char	Can2RxTimer;


extern	unsigned    char    Can2MySrcAddr;
extern	unsigned    char    Can2MyDestAddr;
extern	unsigned    char    Can2MyProductId;
extern	unsigned    char    Can2MyGroupAddr;
extern	unsigned    char    Can2MyLocalAddr;

extern	unsigned    char    Can2RxSrcAddr;
extern	unsigned    char    Can2RxDestAddr;
extern	unsigned    char    Can2RxProductId;
extern	unsigned    char    Can2RxGroupAddr;
extern	unsigned    char    Can2RxLocalAddr;

extern	unsigned	char	Can2RxCnt;
extern	unsigned	char	Can2RxThisPt;
extern	unsigned	char	Can2TxCnt;
extern	unsigned	char	Can2TxThisPt;


extern	unsigned    long    Can2RxEidFilter;
extern	unsigned    int     Can2RxSidFilter;
extern	unsigned    long    Can2RxEidMask;
extern	unsigned    int     Can2RxSidMask;
extern	unsigned    long    Can2TxEid;
extern	unsigned    int     Can2TxSid;
extern	unsigned    char    Can2TxDlc;
extern	unsigned    long    Can2RxEid;
extern	unsigned    int     Can2RxSid;
extern	unsigned    char    Can2RxDlc;


extern	unsigned 	int   	Can2TxDataCnt;
extern	unsigned 	int   	Can2DataCnt;

extern	unsigned 	int   	Can2_Buf[8];

extern	 unsigned	int     CAN2bit;

#define  bCan2Data_Continue		GET_BITFIELD(&CAN2bit).bit0 
#define  bCan2Crc_Include    	GET_BITFIELD(&CAN2bit).bit1 
#define  bCan2TxAct    			GET_BITFIELD(&CAN2bit).bit2 
#define  bCan2RxAll    			GET_BITFIELD(&CAN2bit).bit3 
#define  bCan2TxReady    		GET_BITFIELD(&CAN2bit).bit4 
#define  bCan2RxGood    		GET_BITFIELD(&CAN2bit).bit5 
#define  bCan2CmdAct    		GET_BITFIELD(&CAN2bit).bit6 












