/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MNMediaTrayDataSource <NSObject>
@property (nonatomic,copy,readonly) NSArray * loadedAssetIds; 
@property (assign,nonatomic,__weak) id<MNMediaTrayDataSourceDelegate> delegate; 
@required
-(void)requestPermissionAndLoadAssetsWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2;
-(void)loadAssets;
-(BOOL)isVideoAssetAtIndex:(long long)arg1;
-(id)videoURLAtIndex:(long long)arg1;
-(id)videoDurationAtIndex:(long long)arg1;
-(void)loadAssetsAtIndexes:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)areAssetsLoaded;
-(BOOL)isPhotoAssetAtIndex:(long long)arg1;
-(NSArray *)loadedAssetIds;
-(id)assetDateAtIndex:(long long)arg1;
-(id)requestThumbnailAtIndex:(long long)arg1 thumbnailOption:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3;
-(void)requestEditImageAtIndex:(long long)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3;
-(CGSize*)assetResolutionAtIndex:(long long)arg1;
-(long long)attachmentSendingSource;
-(void)setDelegate:(id)arg1;
-(id<MNMediaTrayDataSourceDelegate>)delegate;
-(id)dataSourceIdentifier;
-(BOOL)needsReload;

@end

