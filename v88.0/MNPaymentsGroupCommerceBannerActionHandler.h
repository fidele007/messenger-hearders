/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPaymentsGroupCommerceBannerViewDelegate.h>

@protocol FBIntentHandler, MNPaymentsGroupCommercePlatformContextDataMutator;
@class FBMemPeerToPeerPlatformContext, NSString, MNPaymentsGroupCommerceGraphRequest, MNUserStore, MNSingleUserRequest;

@interface MNPaymentsGroupCommerceBannerActionHandler : NSObject <MNPaymentsGroupCommerceBannerViewDelegate> {

	FBMemPeerToPeerPlatformContext* _platformContext;
	NSString* _currentUserId;
	MNPaymentsGroupCommerceGraphRequest* _graphRequest;
	MNUserStore* _userStore;
	id<FBIntentHandler> _intentHandler;
	id<MNPaymentsGroupCommercePlatformContextDataMutator> _dataMutator;
	MNSingleUserRequest* _userRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCurrentUserId:(id)arg1 platformContext:(id)arg2 networkDispatch:(id)arg3 userStore:(id)arg4 intentHandler:(id)arg5 platformContextDataMutator:(id)arg6 ;
-(void)_handleSeeDetails;
-(void)_handlePay;
-(void)_handleDismiss;
-(void)_handleMarkAsSold;
-(void)_handleRequest;
-(void)_logEvent:(id)arg1 module:(id)arg2 platformContext:(id)arg3 ;
-(void)_handleCheckoutIsPayment:(BOOL)arg1 ;
-(void)groupCommerceBannerView:(id)arg1 didActionButtonClicked:(id)arg2 withActionType:(unsigned long long)arg3 ;
@end

