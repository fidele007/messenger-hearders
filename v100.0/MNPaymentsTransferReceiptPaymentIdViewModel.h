/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface MNPaymentsTransferReceiptPaymentIdViewModel : FBValueObject <NSCopying> {

	BOOL _shouldHandleLongPress;
	NSString* _text;
	NSString* _paymentId;
	NSString* _helpButtonText;
	NSURL* _helpLink;
	NSString* _termButtonText;
	NSURL* _termLink;

}

@property (nonatomic,copy,readonly) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * paymentId;                   //@synthesize paymentId=_paymentId - In the implementation block
@property (nonatomic,copy,readonly) NSString * helpButtonText;              //@synthesize helpButtonText=_helpButtonText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * helpLink;                       //@synthesize helpLink=_helpLink - In the implementation block
@property (nonatomic,copy,readonly) NSString * termButtonText;              //@synthesize termButtonText=_termButtonText - In the implementation block
@property (nonatomic,copy,readonly) NSURL * termLink;                       //@synthesize termLink=_termLink - In the implementation block
@property (nonatomic,readonly) BOOL shouldHandleLongPress;                  //@synthesize shouldHandleLongPress=_shouldHandleLongPress - In the implementation block
-(id)initWithText:(id)arg1 paymentId:(id)arg2 helpButtonText:(id)arg3 helpLink:(id)arg4 termButtonText:(id)arg5 termLink:(id)arg6 shouldHandleLongPress:(BOOL)arg7 ;
-(NSURL *)helpLink;
-(NSURL *)termLink;
-(NSString *)helpButtonText;
-(NSString *)termButtonText;
-(NSString *)paymentId;
-(BOOL)shouldHandleLongPress;
-(NSString *)text;
@end
