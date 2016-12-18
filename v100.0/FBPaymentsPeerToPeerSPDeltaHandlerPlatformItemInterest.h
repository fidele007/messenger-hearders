/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerSPDeltaHandler.h>

@protocol MNPaymentsGroupCommercePlatformContextDataFetcher, MNPaymentsGroupCommercePlatformContextDataMutator;
@class NSString, FBPaymentsPeerToPeerFeatureGatingController;

@interface FBPaymentsPeerToPeerSPDeltaHandlerPlatformItemInterest : NSObject <FBPaymentsPeerToPeerSPDeltaHandler> {

	NSString* _currentUserId;
	id<MNPaymentsGroupCommercePlatformContextDataFetcher> _dataFetcher;
	id<MNPaymentsGroupCommercePlatformContextDataMutator> _dataMutator;
	FBPaymentsPeerToPeerFeatureGatingController* _featureGatingController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
-(long long)_processDelta:(id)arg1 ;
-(long long)handleDelta:(id)arg1 withDeltaHandlerMap:(id)arg2 ;
-(id)initWithCurrentUserId:(id)arg1 dataFetcher:(id)arg2 dataMutator:(id)arg3 featureGatingController:(id)arg4 ;
-(long long)type;
@end

