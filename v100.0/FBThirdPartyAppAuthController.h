/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequestDelegate.h>

@protocol FBHttpRequestToken, FBNetworkDispatch;
@class FBNetworkerRequest, NSString;

@interface FBThirdPartyAppAuthController : NSObject <FBNetworkerRequestDelegate> {

	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;
	FBNetworkerRequest* _request;
	id<FBHttpRequestToken> _token;
	id<FBNetworkDispatch> _requesterConfiguration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)thirdPartyAppAuth:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)initWithRequesterConfiguration:(id)arg1 ;
-(void)dealloc;
@end

