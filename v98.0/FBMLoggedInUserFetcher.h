/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider, FBServiceTransactionMutating, FBMLoggedInUserFetcherConfiguring;
@class FBUserSession, FBMUserGraphQLProfileImageCachingAdapter, NSString;

@interface FBMLoggedInUserFetcher : NSObject <FBViewerContextClassProvidable> {

	id<FBProvider> _loggedInUserInfoManagerProvider;
	FBUserSession* _userSession;
	id<FBServiceTransactionMutating> _transactionToken;
	/*^block*/id _completionBlock;
	id<FBMLoggedInUserFetcherConfiguring> _configuration;
	FBMUserGraphQLProfileImageCachingAdapter* _profileImageCachingAdapter;

}

@property (nonatomic,retain) id<FBProvider> loggedInUserInfoManagerProvider;                                     //@synthesize loggedInUserInfoManagerProvider=_loggedInUserInfoManagerProvider - In the implementation block
@property (nonatomic,retain) FBUserSession * userSession;                                                        //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) id<FBServiceTransactionMutating> transactionToken;                                  //@synthesize transactionToken=_transactionToken - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                                   //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) id<FBMLoggedInUserFetcherConfiguring> configuration;                                //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) FBMUserGraphQLProfileImageCachingAdapter * profileImageCachingAdapter;              //@synthesize profileImageCachingAdapter=_profileImageCachingAdapter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_didReceiveGraphQLResponse:(id)arg1 ;
-(void)cancelFetch;
-(void)fetchUserWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setLoggedInUserInfoManagerProvider:(id<FBProvider>)arg1 ;
-(void)setProfileImageCachingAdapter:(FBMUserGraphQLProfileImageCachingAdapter *)arg1 ;
-(id<FBProvider>)loggedInUserInfoManagerProvider;
-(FBMUserGraphQLProfileImageCachingAdapter *)profileImageCachingAdapter;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setConfiguration:(id<FBMLoggedInUserFetcherConfiguring>)arg1 ;
-(void)_invalidate;
-(id<FBMLoggedInUserFetcherConfiguring>)configuration;
-(id<FBServiceTransactionMutating>)transactionToken;
-(void)setTransactionToken:(id<FBServiceTransactionMutating>)arg1 ;
-(BOOL)isFetching;
-(FBUserSession *)userSession;
-(void)setUserSession:(FBUserSession *)arg1 ;
-(void)_didFailWithError:(id)arg1 ;
@end

