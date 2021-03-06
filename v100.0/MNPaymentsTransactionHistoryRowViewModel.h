/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNPaymentsTransferCellViewModel;

@interface MNPaymentsTransactionHistoryRowViewModel : FBValueObject <NSCopying> {

	long long _type;
	NSString* _cellIdentifier;
	MNPaymentsTransferCellViewModel* _cellViewModel;
	NSString* _contentModeIdentifier;

}

@property (nonatomic,readonly) long long type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * cellIdentifier;                                    //@synthesize cellIdentifier=_cellIdentifier - In the implementation block
@property (nonatomic,copy,readonly) MNPaymentsTransferCellViewModel * cellViewModel;              //@synthesize cellViewModel=_cellViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentModeIdentifier;                             //@synthesize contentModeIdentifier=_contentModeIdentifier - In the implementation block
-(NSString *)contentModeIdentifier;
-(MNPaymentsTransferCellViewModel *)cellViewModel;
-(id)initWithType:(long long)arg1 cellIdentifier:(id)arg2 cellViewModel:(id)arg3 contentModeIdentifier:(id)arg4 ;
-(long long)type;
-(NSString *)cellIdentifier;
@end

