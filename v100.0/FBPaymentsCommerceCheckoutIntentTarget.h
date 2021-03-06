/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@protocol FBPaymentsPayableDataModel;
@class NSObject;

@interface FBPaymentsCommerceCheckoutIntentTarget : FBIntentTarget {

	NSObject*<FBPaymentsPayableDataModel> _checkoutDataModel;
	long long _presentingStyle;

}

@property (nonatomic,copy,readonly) NSObject*<FBPaymentsPayableDataModel> checkoutDataModel;              //@synthesize checkoutDataModel=_checkoutDataModel - In the implementation block
@property (nonatomic,readonly) long long presentingStyle;                                                 //@synthesize presentingStyle=_presentingStyle - In the implementation block
+(id)commerceCheckoutIntentTargetWithCheckoutDataModel:(id)arg1 presentingStyle:(long long)arg2 ;
-(id)fallbackURLs;
-(NSObject*<FBPaymentsPayableDataModel>)checkoutDataModel;
-(long long)presentingStyle;
-(BOOL)isEqual:(id)arg1 ;
@end

