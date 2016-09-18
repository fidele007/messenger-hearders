/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAssetsLibraryDataSource.h>

@class FBAssetsLibrary;

@interface FBPanoramaAlbumDataSource : FBAssetsLibraryDataSource {

	unsigned long long _updateCount;
	FBAssetsLibrary* _assetsLibrary;

}
-(id)dataSourceDescription;
-(long long)numDataSourceAssets;
-(id)initWithGroupURL:(id)arg1 assetsLibrary:(id)arg2 session:(id)arg3 ;
-(void)refreshGroupURL;
-(long long)_libraryIndexForFirstAssetWithType:(unsigned long long)arg1 ;
-(long long)panoramaAlbumIndexForFirstPhoto;
-(long long)panoramaAlbumIndexForAssetWithURL:(id)arg1 ;
-(id)displayTitle;
-(id)dataSourceID;
-(id)displayIcon;
@end

