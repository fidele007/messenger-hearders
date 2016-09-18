/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBPhotoCropInfo, UIImage, NSDictionary, FBGLFilter, FBCPUImageFilterState, FBPhotoAssetEdits, NSString;

@interface FBPhotoAssetEditsBuilder : NSObject {

	NSArray* _selectedFilters;
	FBPhotoCropInfo* _cropInfo;
	BOOL _isPhotoCropped;
	UIImage* _thumbnailPreFilter;
	UIImage* _thumbnailStandard;
	UIImage* _thumbnailFiltered;
	UIImage* _thumbnailCropped;
	NSArray* _faceFeatures;
	NSArray* _uncroppedFaceFeatures;
	NSArray* _tagsEdges;
	NSDictionary* _removedAutoTagsEdges;
	FBGLFilter* _appliedNonLuxFilter;
	BOOL _layeredFilterApplied;
	BOOL _anyFilterApplied;
	BOOL _luxApplied;
	BOOL _isFaceFeaturesAvailable;
	FBCPUImageFilterState* _cpuFilterState;
	BOOL _isCPUFilterApplied;
	BOOL _isAutoEnhanceApplied;
	BOOL _hasPhotoOverlayAttachments;
	UIImage* _photoOverlayAttachmentsLayer;
	NSArray* _photoOverlays;
	BOOL _hasDoodles;
	UIImage* _doodlesLayer;
	FBPhotoAssetEdits* _preCPUFilterEdits;
	BOOL _isCollage;
	BOOL _isLivePhotoEnabled;
	BOOL _is360PhotoEnabled;
	NSString* _sphericalParameters;
	NSDictionary* _faceboxesTagSuggestions;
	NSDictionary* _faceboxesTagSuggestionsWithHighConfidence;

}
+(id)photoAssetEdits;
+(id)photoAssetEditsFromExistingPhotoAssetEdits:(id)arg1 ;
-(id)withSelectedFilters:(id)arg1 ;
-(id)withCropInfo:(id)arg1 ;
-(id)withIsPhotoCropped:(BOOL)arg1 ;
-(id)withThumbnailPreFilter:(id)arg1 ;
-(id)withThumbnailStandard:(id)arg1 ;
-(id)withThumbnailFiltered:(id)arg1 ;
-(id)withThumbnailCropped:(id)arg1 ;
-(id)withFaceFeatures:(id)arg1 ;
-(id)withUncroppedFaceFeatures:(id)arg1 ;
-(id)withTagsEdges:(id)arg1 ;
-(id)withRemovedAutoTagsEdges:(id)arg1 ;
-(id)withAppliedNonLuxFilter:(id)arg1 ;
-(id)withLayeredFilterApplied:(BOOL)arg1 ;
-(id)withAnyFilterApplied:(BOOL)arg1 ;
-(id)withLuxApplied:(BOOL)arg1 ;
-(id)withIsFaceFeaturesAvailable:(BOOL)arg1 ;
-(id)withCpuFilterState:(id)arg1 ;
-(id)withIsCPUFilterApplied:(BOOL)arg1 ;
-(id)withIsAutoEnhanceApplied:(BOOL)arg1 ;
-(id)withHasPhotoOverlayAttachments:(BOOL)arg1 ;
-(id)withPhotoOverlayAttachmentsLayer:(id)arg1 ;
-(id)withPhotoOverlays:(id)arg1 ;
-(id)withHasDoodles:(BOOL)arg1 ;
-(id)withDoodlesLayer:(id)arg1 ;
-(id)withPreCPUFilterEdits:(id)arg1 ;
-(id)withIsCollage:(BOOL)arg1 ;
-(id)withIsLivePhotoEnabled:(BOOL)arg1 ;
-(id)withIs360PhotoEnabled:(BOOL)arg1 ;
-(id)withSphericalParameters:(id)arg1 ;
-(id)withFaceboxesTagSuggestions:(id)arg1 ;
-(id)withFaceboxesTagSuggestionsWithHighConfidence:(id)arg1 ;
-(id)build;
@end

