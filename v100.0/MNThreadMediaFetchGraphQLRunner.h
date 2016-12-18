/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol FBServiceTransactionMutating;
@class FBGraphQLService, MNGraphQLQueryConfigGenerator, MNMessagingRegionHeaderHelper, NSString;

@interface MNThreadMediaFetchGraphQLRunner : NSObject <FBClassProvidable> {

	FBGraphQLService* _graphQLService;
	id<FBServiceTransactionMutating> _graphQLRequest;
	MNGraphQLQueryConfigGenerator* _queryConfigGenerator;
	MNMessagingRegionHeaderHelper* _messagingRegionHeaderHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_configureGraphQLServiceConfig:(id)arg1 ;
-(void)_processResponseWithError:(id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(void)_processResponse:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)initWithGraphQLService:(id)arg1 queryConfigGenerator:(id)arg2 messagingRegionHeaderHelper:(id)arg3 ;
-(void)_fetchSharedMediaWithThreadKey:(id)arg1 mediaType:(id)arg2 numItemsToFetch:(unsigned long long)arg3 successBlock:(/*^block*/id)arg4 failureBlock:(/*^block*/id)arg5 ;
-(void)_fetchWithGraphQLQuery:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)fetchSharedMediaWithThreadKey:(id)arg1 mediaType:(id)arg2 afterCursor:(id)arg3 numItemsToFetch:(unsigned long long)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(void)fetchSharedMediaWithThreadKey:(id)arg1 mediaType:(id)arg2 beforeCursor:(id)arg3 numItemsToFetch:(unsigned long long)arg4 successBlock:(/*^block*/id)arg5 failureBlock:(/*^block*/id)arg6 ;
-(void)cancel;
-(void)dealloc;
@end

