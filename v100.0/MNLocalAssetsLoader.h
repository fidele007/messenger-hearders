/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAssetsLibrary, MNImageUploadCandidateStore;

@interface MNLocalAssetsLoader : NSObject {

	FBAssetsLibrary* _assetsLibrary;
	MNImageUploadCandidateStore* _imageUploadCandidateStore;

}

@property (nonatomic,readonly) MNImageUploadCandidateStore * imageUploadCandidateStore;              //@synthesize imageUploadCandidateStore=_imageUploadCandidateStore - In the implementation block
-(MNImageUploadCandidateStore *)imageUploadCandidateStore;
-(void)loadAssetsAtIndexes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithAssetsLibrary:(id)arg1 imageUploadCandidateStore:(id)arg2 ;
-(BOOL)_hasPhotoAssetAtIndex:(unsigned long long)arg1 ;
-(void)_loadImageAtIndex:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)_hasVideoAssetAtIndex:(unsigned long long)arg1 ;
-(id)_loadVideoAtIndex:(unsigned long long)arg1 ;
-(void)_fetchFullResolutionImageForURL:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_fetchFullMetadataForURL:(id)arg1 withImage:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

