/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:03 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
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
-(id)initWithType:(long long)arg1 cellIdentifier:(id)arg2 cellViewModel:(id)arg3 contentModeIdentifier:(id)arg4 ;
-(NSString *)contentModeIdentifier;
-(MNPaymentsTransferCellViewModel *)cellViewModel;
-(long long)type;
-(NSString *)cellIdentifier;
@end

