/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, FBPaymentsCurrencyQuantity, MNPaymentsPaymentPlatformAttachmentActionModel;

@interface MNPaymentsPaymentPlatformAttachmentViewModel : FBValueObject <NSCopying> {

	NSString* _productType;
	NSString* _snippetText;
	NSArray* _itemsViewModels;
	NSArray* _componentsViewModels;
	FBPaymentsCurrencyQuantity* _totalPrice;
	MNPaymentsPaymentPlatformAttachmentActionModel* _clickAction;
	NSArray* _paymentCallToActions;

}

@property (nonatomic,copy,readonly) NSString * productType;                                                    //@synthesize productType=_productType - In the implementation block
@property (nonatomic,copy,readonly) NSString * snippetText;                                                    //@synthesize snippetText=_snippetText - In the implementation block
@property (nonatomic,copy,readonly) NSArray * itemsViewModels;                                                 //@synthesize itemsViewModels=_itemsViewModels - In the implementation block
@property (nonatomic,copy,readonly) NSArray * componentsViewModels;                                            //@synthesize componentsViewModels=_componentsViewModels - In the implementation block
@property (nonatomic,copy,readonly) FBPaymentsCurrencyQuantity * totalPrice;                                   //@synthesize totalPrice=_totalPrice - In the implementation block
@property (nonatomic,copy,readonly) MNPaymentsPaymentPlatformAttachmentActionModel * clickAction;              //@synthesize clickAction=_clickAction - In the implementation block
@property (nonatomic,copy,readonly) NSArray * paymentCallToActions;                                            //@synthesize paymentCallToActions=_paymentCallToActions - In the implementation block
-(NSString *)snippetText;
-(FBPaymentsCurrencyQuantity *)totalPrice;
-(NSArray *)paymentCallToActions;
-(NSArray *)itemsViewModels;
-(NSArray *)componentsViewModels;
-(id)initWithProductType:(id)arg1 snippetText:(id)arg2 itemsViewModels:(id)arg3 componentsViewModels:(id)arg4 totalPrice:(id)arg5 clickAction:(id)arg6 paymentCallToActions:(id)arg7 ;
-(MNPaymentsPaymentPlatformAttachmentActionModel *)clickAction;
-(NSString *)productType;
@end

