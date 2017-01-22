/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMediaCollectionFetching.h>

@protocol OS_dispatch_queue, FBServiceTransactionMutating, MNMediaCollectionFetchingDelegate;
@class NSArray, NSDictionary, FBUserSession, NSString, FBMobileConfigContextManager, NSObject;

@interface MNPlatformContentFetcher : NSObject <MNMediaCollectionFetching> {

	FBUserSession* _session;
	NSArray* _appIDs;
	NSArray* _resultTypes;
	unsigned long long _limit;
	NSString* _query;
	long long _queryType;
	unsigned long long _groupByType;
	double _previewHeight;
	double _maxCacheAge;
	BOOL _cachedResponse;
	NSDictionary* _stickerSizeDictionary;
	FBMobileConfigContextManager* _configManager;
	NSObject*<OS_dispatch_queue> _queue;
	long long _fetchState;
	id<FBServiceTransactionMutating> _graphQLServiceMutator;
	long long _contentFetcherType;
	id<MNMediaCollectionFetchingDelegate> _delegate;
	NSArray* _mediaCollection;
	NSDictionary* _stickerSizeByFbId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMediaCollectionFetchingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaCollection;                                   //@synthesize mediaCollection=_mediaCollection - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stickerSizeByFbId;                            //@synthesize stickerSizeByFbId=_stickerSizeByFbId - In the implementation block
@property (nonatomic,readonly) BOOL needsRefetch; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
-(id)initWithSession:(id)arg1 limit:(unsigned long long)arg2 appIDs:(id)arg3 resultTypes:(id)arg4 query:(id)arg5 queryType:(long long)arg6 groupByType:(unsigned long long)arg7 previewHeight:(double)arg8 maxCacheAge:(unsigned long long)arg9 contentFetcherType:(long long)arg10 configManager:(id)arg11 queue:(id)arg12 ;
-(NSDictionary *)stickerSizeByFbId;
-(BOOL)needsRefetch;
-(void)fetchCollection;
-(void)_handleCachedResponse:(id)arg1 ;
-(void)_handleDownloadResponse:(id)arg1 ;
-(void)_handleFailureResponseWithError:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<MNMediaCollectionFetchingDelegate>)arg1 ;
-(id<MNMediaCollectionFetchingDelegate>)delegate;
-(BOOL)isEmpty;
-(NSArray *)mediaCollection;
@end
