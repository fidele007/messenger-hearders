/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBIntentTarget.h>

@protocol FBPhotoStoryContainer, FBGraphQLConnectionSyncStoreProtocol;
@class FBMemPhoto, FBPhotosConsumptionReferrer, FBScenePath;

@interface FBPhotoStoryIntentTarget : FBIntentTarget {

	id<FBPhotoStoryContainer> _photoStoryContainer;
	FBMemPhoto* _openingPhoto;
	id<FBGraphQLConnectionSyncStoreProtocol> _mediaStore;
	id<FBGraphQLConnectionSyncStoreProtocol> _photoStore;
	FBPhotosConsumptionReferrer* _referrer;
	FBScenePath* _scenePath;
	FBPhotoStoryOptions _options;

}

@property (nonatomic,readonly) id<FBPhotoStoryContainer> photoStoryContainer;                    //@synthesize photoStoryContainer=_photoStoryContainer - In the implementation block
@property (nonatomic,readonly) FBMemPhoto * openingPhoto;                                        //@synthesize openingPhoto=_openingPhoto - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLConnectionSyncStoreProtocol> mediaStore;              //@synthesize mediaStore=_mediaStore - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLConnectionSyncStoreProtocol> photoStore;              //@synthesize photoStore=_photoStore - In the implementation block
@property (nonatomic,readonly) FBPhotosConsumptionReferrer * referrer;                           //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,readonly) FBPhotoStoryOptions options;                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                          //@synthesize scenePath=_scenePath - In the implementation block
+(id)photoStoryTargetWithContainer:(id)arg1 openingPhoto:(id)arg2 mediaStore:(id)arg3 photoStore:(id)arg4 referrer:(id)arg5 photoStoryOptions:(FBPhotoStoryOptions)arg6 scenePath:(id)arg7 ;
-(id)fallbackURLs;
-(FBScenePath *)scenePath;
-(id<FBPhotoStoryContainer>)photoStoryContainer;
-(FBMemPhoto *)openingPhoto;
-(id<FBGraphQLConnectionSyncStoreProtocol>)mediaStore;
-(id<FBGraphQLConnectionSyncStoreProtocol>)photoStore;
-(FBPhotosConsumptionReferrer *)referrer;
-(FBPhotoStoryOptions)options;
@end

