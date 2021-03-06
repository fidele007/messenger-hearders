/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsPaymentMethodsDataControlling <FBPaymentsDataLoadingControlling>
@required
-(void)registerParser:(id)arg1 forPaymentMethodType:(id)arg2;
-(id)billingCountry;
-(id)existingPaymentMethods;
-(id)supportedPaymentMethodsOptions;
-(void)loadWithPaymentType:(id)arg1 receiverID:(id)arg2 selectedCountry:(id)arg3 extraData:(id)arg4;
-(void)loadWithProductItemType:(id)arg1 selectedCountry:(id)arg2;
-(void)loadWithNMOROrderType:(id)arg1 selectedCountry:(id)arg2 extraData:(id)arg3;

@end

