/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBCancelable.h>

@protocol FBGraphQLFragmentService, MNAuthenticationManager, FBServiceTransactionMutating;
@class MNMessagingRegionHeaderHelper, NSString;

@interface FBMUserIdFromUsernameFetcher : NSObject <FBClassProvidable, FBCancelable> {

	id<FBGraphQLFragmentService> _graphQLFragmentService;
	id<MNAuthenticationManager> _authManager;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;
	id<FBServiceTransactionMutating> _requestToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_configureGraphQLServiceConfig:(id)arg1 ;
-(void)fetchUserIdForUsername:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)initWithGraphQLFragmentService:(id)arg1 authManager:(id)arg2 messagingRegionHeaderHelper:(id)arg3 ;
-(void)cancel;
@end
