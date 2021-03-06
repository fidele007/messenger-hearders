/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSURL, MNPaymentsTransferStatusModelForTransactionHistoryCell;

@interface MNPaymentsTransferCellViewModel : FBValueObject <NSCopying> {

	NSString* _userFBID;
	NSString* _amountText;
	NSDate* _timeToDisplay;
	NSString* _transferId;
	NSURL* _customImageURL;
	NSString* _customDisplayNameText;
	long long _maskType;
	long long _placeholderType;
	MNPaymentsTransferStatusModelForTransactionHistoryCell* _statusModel;

}

@property (nonatomic,copy,readonly) NSString * userFBID;                                                               //@synthesize userFBID=_userFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * amountText;                                                             //@synthesize amountText=_amountText - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timeToDisplay;                                                            //@synthesize timeToDisplay=_timeToDisplay - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferId;                                                             //@synthesize transferId=_transferId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * customImageURL;                                                            //@synthesize customImageURL=_customImageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * customDisplayNameText;                                                  //@synthesize customDisplayNameText=_customDisplayNameText - In the implementation block
@property (nonatomic,readonly) long long maskType;                                                                     //@synthesize maskType=_maskType - In the implementation block
@property (nonatomic,readonly) long long placeholderType;                                                              //@synthesize placeholderType=_placeholderType - In the implementation block
@property (nonatomic,copy,readonly) MNPaymentsTransferStatusModelForTransactionHistoryCell * statusModel;              //@synthesize statusModel=_statusModel - In the implementation block
-(NSString *)userFBID;
-(MNPaymentsTransferStatusModelForTransactionHistoryCell *)statusModel;
-(NSString *)transferId;
-(id)initWithUserFBID:(id)arg1 amountText:(id)arg2 timeToDisplay:(id)arg3 transferId:(id)arg4 customImageURL:(id)arg5 customDisplayNameText:(id)arg6 maskType:(long long)arg7 placeholderType:(long long)arg8 statusModel:(id)arg9 ;
-(NSDate *)timeToDisplay;
-(NSURL *)customImageURL;
-(NSString *)customDisplayNameText;
-(long long)maskType;
-(long long)placeholderType;
-(NSString *)amountText;
@end

