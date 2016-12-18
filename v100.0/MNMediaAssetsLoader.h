/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MNImageUploadCandidateStore, FBUserSession, MNMediaAssetsLoaderConfiguration;

@interface MNMediaAssetsLoader : NSObject {

	MNImageUploadCandidateStore* _imageUploadCandidateStore;
	FBUserSession* _userSession;
	MNMediaAssetsLoaderConfiguration* _configuration;

}
-(id)initWithImageUploadCandidateStore:(id)arg1 userSession:(id)arg2 configuration:(id)arg3 ;
-(void)loadSelectedAssets:(id)arg1 photosDataRequester:(id)arg2 loggingExtras:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)loadSelectedAssets:(id)arg1 photosDataRequester:(id)arg2 localAssetLoadingcompletion:(/*^block*/id)arg3 ;
-(void)_loadSelectedAsset:(id)arg1 photosDataRequester:(id)arg2 loggingExtras:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_generateAttachmentContentForSelectedAssets:(id)arg1 photosDataRequester:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_generateAttachmentContentFromAsset:(id)arg1 photosDataRequester:(id)arg2 videoCompletionBlock:(/*^block*/id)arg3 photoCompletionBlock:(/*^block*/id)arg4 ;
-(void)_generateVideoContentFromAsset:(id)arg1 videoAsset:(id)arg2 thumbnail:(id)arg3 isInCloud:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_generatePhotoContentFromAsset:(id)arg1 image:(id)arg2 appliedEdits:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
@end

