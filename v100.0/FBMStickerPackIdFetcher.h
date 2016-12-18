/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBMStickerPackIdFetcherDelegate;
@class FBUserSession;

@interface FBMStickerPackIdFetcher : NSObject {

	FBUserSession* _session;
	unsigned long long _stickerId;
	id<FBServiceTransactionMutating> _fetchRequest;
	id<FBMStickerPackIdFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMStickerPackIdFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_applyServiceConfiguration:(id)arg1 ;
-(id)initWithSession:(id)arg1 stickerId:(unsigned long long)arg2 ;
-(void)_handleDownloadResponse:(id)arg1 ;
-(void)_handleDownloadError:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<FBMStickerPackIdFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMStickerPackIdFetcherDelegate>)delegate;
-(void)start;
@end

