/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol FBServiceTransactionMutating;
@class FBGraphQLService, MNMessagingRegionHeaderHelper, NSString;

@interface MNGraphQLGroupThreadKeysFetcher : NSObject <FBClassProvidable> {

	FBGraphQLService* _graphQLService;
	id<FBServiceTransactionMutating> _graphQLRequest;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_configureGraphQLServiceConfig:(id)arg1 ;
-(void)_processResponseWithError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(id)initWithGraphQLService:(id)arg1 messagingRegionHeaderHelper:(id)arg2 ;
-(void)_processResponse:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)fetchGroupThreadKeysWithNumberOfGroupThreads:(long long)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)cancel;
@end

