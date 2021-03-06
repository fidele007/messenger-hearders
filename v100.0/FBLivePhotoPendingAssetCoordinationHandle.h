/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBLivePhotoCancellableAssetCoordination.h>

@class FBSimpleDownloader, FBLivePhotoAssetCoordination, NSString;

@interface FBLivePhotoPendingAssetCoordinationHandle : NSObject <FBLivePhotoCancellableAssetCoordination> {

	id _videoDownload;
	FBSimpleDownloader* _videoDownloader;
	FBLivePhotoAssetCoordination* _assetCoordination;

}

@property (nonatomic,readonly) FBLivePhotoAssetCoordination * assetCoordination;              //@synthesize assetCoordination=_assetCoordination - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAssetCoordination:(id)arg1 videoDownload:(id)arg2 videoDownloader:(id)arg3 ;
-(FBLivePhotoAssetCoordination *)assetCoordination;
-(void)cancel;
@end

