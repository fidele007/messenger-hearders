/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, MNBusinessSignupFetcherDelegate;
@class FBUserSession;

@interface MNBusinessSignupFetcher : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _requestToken;
	id<MNBusinessSignupFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBusinessSignupFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)_fetchContentForQuery:(id)arg1 fetchBlock:(/*^block*/id)arg2 ;
-(void)_handleSignupQueryResponseContent:(id)arg1 cachedContent:(BOOL)arg2 error:(id)arg3 startTime:(double)arg4 ;
-(void)startFetchingSignupDataWithProviderName:(id)arg1 promoData:(id)arg2 ;
-(void)setDelegate:(id<MNBusinessSignupFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNBusinessSignupFetcherDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

