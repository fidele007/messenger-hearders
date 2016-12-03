/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNPaymentsActorProfileViewModel, NSString;

@interface MNPaymentsPeerToPeerPayMoneyRequestHeaderViewModel : FBValueObject <NSCopying> {

	MNPaymentsActorProfileViewModel* _receiverViewModel;
	NSString* _memoText;

}

@property (nonatomic,copy,readonly) MNPaymentsActorProfileViewModel * receiverViewModel;              //@synthesize receiverViewModel=_receiverViewModel - In the implementation block
@property (nonatomic,copy,readonly) NSString * memoText;                                              //@synthesize memoText=_memoText - In the implementation block
-(NSString *)memoText;
-(MNPaymentsActorProfileViewModel *)receiverViewModel;
-(id)initWithReceiverViewModel:(id)arg1 memoText:(id)arg2 ;
@end
