/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNetworkDispatch;
@class NSMutableDictionary, FBSimpleNetworkerRequest, NSString;

@interface FBPaymentsPeerToPeerCardBINNumberChecker : NSObject {

	id<FBNetworkDispatch> _networkDispatcher;
	NSMutableDictionary* _lastCheckedBinNumberResults;
	FBSimpleNetworkerRequest* _ongoingNetworkRequest;
	NSString* _binNumberOfOngoingRequest;

}
-(id)initWithNetworkDispatcher:(id)arg1 ;
-(void)_handleBinCheckResultForBinNumber:(id)arg1 completionBlock:(/*^block*/id)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(void)_cleanupBinCheckStatus;
-(void)checkCardBinNumber:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelBinCheck;
@end

