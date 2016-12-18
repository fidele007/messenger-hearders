/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBStickerPackMetadataDownloaderDelegate, FBServiceTransactionMutating;
@class FBUserSession, FBMemStickerPack;

@interface FBStickerPackMetadataDownloader : NSObject {

	FBUserSession* _session;
	FBMemStickerPack* _stickerPack;
	long long _requestPriority;
	id<FBStickerPackMetadataDownloaderDelegate> _delegate;
	id<FBServiceTransactionMutating> _networkRequest;

}
-(void)_handleDownloadResponse:(id)arg1 ;
-(void)_handleDownloadError:(id)arg1 ;
-(void)_setConfigurationObject:(id)arg1 ;
-(id)initWithSession:(id)arg1 stickerPack:(id)arg2 requestPriority:(long long)arg3 delegate:(id)arg4 ;
-(void)fetchStickerPackMetadata;
-(void)cancel;
@end
