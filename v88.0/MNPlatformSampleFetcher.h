/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPlatformSampleProviderListener.h>
#import <Messenger/MNMediaCollectionFetching.h>

@protocol MNMediaCollectionFetchingDelegate;
@class NSString, MNPlatformSampleProvider, NSArray, NSDictionary;

@interface MNPlatformSampleFetcher : NSObject <MNPlatformSampleProviderListener, MNMediaCollectionFetching> {

	NSString* _appID;
	MNPlatformSampleProvider* _platformSampleProvider;
	BOOL _fetchCancelled;
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
-(BOOL)needsRefetch;
-(void)fetchCollection;
-(NSDictionary *)stickerSizeByFbId;
-(void)_updateMediaCollection;
-(void)didUpdatePlatformSamples;
-(id)initWithAppID:(id)arg1 platformSampleProvider:(id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<MNMediaCollectionFetchingDelegate>)arg1 ;
-(void)dealloc;
-(id<MNMediaCollectionFetchingDelegate>)delegate;
-(BOOL)isEmpty;
-(NSArray *)mediaCollection;
@end

