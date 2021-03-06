/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPaymentsReceiptInfo, FBPaymentsParticipantViewModel, NSArray, NSAttributedString;

@interface FBPaymentsReceiptConfiguration : FBValueObject <NSCopying> {

	FBPaymentsReceiptInfo* _receiptInfo;
	FBPaymentsParticipantViewModel* _otherParticipant;
	NSArray* _receiptSectionViewModels;
	NSAttributedString* _additionalInstruction;

}

@property (nonatomic,copy,readonly) FBPaymentsReceiptInfo * receiptInfo;                            //@synthesize receiptInfo=_receiptInfo - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsParticipantViewModel * otherParticipant;              //@synthesize otherParticipant=_otherParticipant - In the implementation block
@property (nonatomic,copy,readonly) NSArray * receiptSectionViewModels;                             //@synthesize receiptSectionViewModels=_receiptSectionViewModels - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * additionalInstruction;                     //@synthesize additionalInstruction=_additionalInstruction - In the implementation block
-(FBPaymentsParticipantViewModel *)otherParticipant;
-(FBPaymentsReceiptInfo *)receiptInfo;
-(NSArray *)receiptSectionViewModels;
-(NSAttributedString *)additionalInstruction;
-(id)initWithReceiptInfo:(id)arg1 otherParticipant:(id)arg2 receiptSectionViewModels:(id)arg3 additionalInstruction:(id)arg4 ;
@end

