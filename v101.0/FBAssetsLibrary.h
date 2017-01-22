/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, FBAssetThumbnailResourceManager, FBTempAssetsManager, FBAssetsLibraryListenerAnnouncer, NSURL, NSMutableDictionary, NSArray, NSString;

@interface FBAssetsLibrary : NSObject <PHPhotoLibraryChangeObserver> {

	NSObject*<OS_dispatch_queue> _assetsLoadingQueue;
	BOOL _listeningToChangeNotification;
	BOOL _needsReindexing;
	BOOL _wantsPartialIndex;
	FBAssetThumbnailResourceManager* _resourceManager;
	FBTempAssetsManager* _tempAssetsManager;
	FBAssetsLibraryListenerAnnouncer* _announcer;
	BOOL _completedInitialIndex;
	BOOL _indexOutdated;
	unsigned long long _status;
	NSURL* _cameraRollURL;
	NSURL* _photoStreamURL;
	NSURL* _selfieAlbumURL;
	NSURL* _panoramaAlbumURL;
	unsigned long long _mediaFilter;
	NSMutableDictionary* _assetsGroupMap;
	NSMutableDictionary* _assetArrayMap;
	NSArray* _sortedGroupURLs;
	double _indexStartTime;

}

@property (nonatomic,retain) NSMutableDictionary * assetsGroupMap;              //@synthesize assetsGroupMap=_assetsGroupMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetArrayMap;               //@synthesize assetArrayMap=_assetArrayMap - In the implementation block
@property (nonatomic,copy) NSArray * sortedGroupURLs;                           //@synthesize sortedGroupURLs=_sortedGroupURLs - In the implementation block
@property (nonatomic,retain) NSURL * cameraRollURL;                             //@synthesize cameraRollURL=_cameraRollURL - In the implementation block
@property (nonatomic,retain) NSURL * photoStreamURL;                            //@synthesize photoStreamURL=_photoStreamURL - In the implementation block
@property (nonatomic,retain) NSURL * selfieAlbumURL;                            //@synthesize selfieAlbumURL=_selfieAlbumURL - In the implementation block
@property (nonatomic,retain) NSURL * panoramaAlbumURL;                          //@synthesize panoramaAlbumURL=_panoramaAlbumURL - In the implementation block
@property (assign,nonatomic) double indexStartTime;                             //@synthesize indexStartTime=_indexStartTime - In the implementation block
@property (assign,nonatomic) BOOL completedInitialIndex;                        //@synthesize completedInitialIndex=_completedInitialIndex - In the implementation block
@property (assign,nonatomic) unsigned long long status;                         //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL indexOutdated;                                //@synthesize indexOutdated=_indexOutdated - In the implementation block
@property (nonatomic,copy,readonly) NSArray * groupURLs; 
@property (assign,nonatomic) unsigned long long mediaFilter;                    //@synthesize mediaFilter=_mediaFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)requestPermissionAndLoadAssetsWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2 ;
-(NSArray *)groupURLs;
-(long long)numberOfAssetsInGroupWithURL:(id)arg1 ;
-(void)setMediaFilter:(unsigned long long)arg1 ;
-(unsigned long long)mediaFilter;
-(void)loadAssetsIfAccessAuthorized;
-(NSURL *)cameraRollURL;
-(id)assetAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(CGSize)assetResolutionAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(id)dateAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(id)assetDurationAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 calculateAccurateDurationForPHAsset:(BOOL)arg3 ;
-(id)assetURLAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(unsigned long long)assetTypeAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(BOOL)completedInitialIndex;
-(long long)numberOfAssetsInCameraRoll;
-(id)assetIdAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(id)metadataAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(void)quickSyncWriteImage:(id)arg1 saveToDisk:(BOOL)arg2 sourceType:(unsigned long long)arg3 ;
-(void)quickSyncVideo:(id)arg1 saveToDisk:(BOOL)arg2 ;
-(BOOL)isAssetLivePhotoAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(long long)groupTypeForGroupWithURL:(id)arg1 ;
-(id)nameForGroupWithURL:(id)arg1 ;
-(id)posterImageForGroupWithURL:(id)arg1 ;
-(BOOL)isAssetLikely360PhotoAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(BOOL)DEPRECATED_assetIsPlayableGIFAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(id)DEPRECATED_sphericalParametersForAssetAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(id)existingSphericalParametersForAssetAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(void)asyncPartiallyLoadAssetsIfAccessAuthorizedWithFailureBlock:(/*^block*/id)arg1 ;
-(NSURL *)photoStreamURL;
-(NSURL *)selfieAlbumURL;
-(NSURL *)panoramaAlbumURL;
-(long long)numberOfAssetsInPanoramaAlbum;
-(long long)numberOfAssetsInSelfieAlbum;
-(void)_loadAssets;
-(void)_prepareFakeCameraRollContainer;
-(id)_assetsGroupWithURL:(id)arg1 ;
-(NSMutableDictionary *)assetArrayMap;
-(void)setIndexOutdated:(BOOL)arg1 ;
-(void)setIndexStartTime:(double)arg1 ;
-(void)_loadAssetsHelper;
-(void)_updateLibraryStateWithAssetsGroupMap:(id)arg1 assetArrayMap:(id)arg2 extraData:(id)arg3 ;
-(void)_loadAssetsIntoGroups:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAssetsGroupMap:(NSMutableDictionary *)arg1 ;
-(void)setAssetArrayMap:(NSMutableDictionary *)arg1 ;
-(void)setCameraRollURL:(NSURL *)arg1 ;
-(void)setPhotoStreamURL:(NSURL *)arg1 ;
-(void)setSelfieAlbumURL:(NSURL *)arg1 ;
-(void)setPanoramaAlbumURL:(NSURL *)arg1 ;
-(NSMutableDictionary *)assetsGroupMap;
-(void)setSortedGroupURLs:(NSArray *)arg1 ;
-(void)setCompletedInitialIndex:(BOOL)arg1 ;
-(void)_reloadIfNeededAsync;
-(id)albumUrlForDataSourceDescription:(id)arg1 ;
-(id)nonTemporaryAssetURLAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(id)locationAtIndex:(unsigned long long)arg1 inGroupWithURL:(id)arg2 ;
-(void)quickSyncRemoveAllAssets;
-(NSArray *)sortedGroupURLs;
-(double)indexStartTime;
-(BOOL)indexOutdated;
-(void)dealloc;
-(id)init;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)_reloadIfNeeded;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
