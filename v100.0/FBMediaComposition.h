/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSMutableDictionary, NSArray;

@interface FBMediaComposition : NSObject {

	NSMutableOrderedSet* _selectedMediaShareItemsInOrderSet;
	NSMutableDictionary* _editedThumbnailsForAssetIDs;
	NSMutableDictionary* _assetEditsByID;
	NSMutableDictionary* _videoAssetEditsByID;

}

@property (nonatomic,retain) NSMutableDictionary * editedThumbnailsForAssetIDs;              //@synthesize editedThumbnailsForAssetIDs=_editedThumbnailsForAssetIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetEditsByID;                           //@synthesize assetEditsByID=_assetEditsByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * videoAssetEditsByID;                      //@synthesize videoAssetEditsByID=_videoAssetEditsByID - In the implementation block
@property (nonatomic,readonly) unsigned long long numSelectedMediaShareItems; 
@property (nonatomic,readonly) NSArray * selectedMediaShareItems; 
@property (nonatomic,readonly) unsigned long long selectedMediaShareItemsType; 
-(unsigned long long)selectedMediaShareItemsType;
-(unsigned long long)numSelectedMediaShareItems;
-(NSArray *)selectedMediaShareItems;
-(BOOL)isAssetSelected:(id)arg1 ;
-(void)removeAllSelectedMediaShareItems;
-(id)mediaShareItemForAssetID:(id)arg1 ;
-(NSMutableDictionary *)editedThumbnailsForAssetIDs;
-(NSMutableDictionary *)assetEditsByID;
-(NSMutableDictionary *)videoAssetEditsByID;
-(unsigned long long)_selectedMediaShareItemsTypeForMediaShareItemType:(unsigned long long)arg1 ;
-(void)_addMediaShareItemHelper:(id)arg1 ;
-(void)_removeMediaShareItemHelper:(id)arg1 ;
-(void)_setMediaShareItemsHelper:(id)arg1 ;
-(void)setPhotoShareItems:(id)arg1 ;
-(unsigned long long)indexOfMediaShareItem:(id)arg1 ;
-(void)setEditedThumbnailsForAssetIDs:(NSMutableDictionary *)arg1 ;
-(void)setAssetEditsByID:(NSMutableDictionary *)arg1 ;
-(void)setVideoAssetEditsByID:(NSMutableDictionary *)arg1 ;
-(void)resetPhotoAssetEditsForInMemoryPhotoAsset:(id)arg1 ;
-(void)resetVideoAssetEditsForInMemoryVideoAsset:(id)arg1 ;
-(id)editedThumbnailForAssetID:(id)arg1 ;
-(void)removeMediaShareItem:(id)arg1 ;
-(void)addMediaShareItem:(id)arg1 ;
-(BOOL)allowOperationForSelectedMediaShareItemsType:(unsigned long long)arg1 ;
-(void)replacePlayableMediaShareItem:(id)arg1 ;
-(void)copyComposition:(id)arg1 ;
-(void)clearPhotoAssetEdits;
-(void)clearVideoAssetEdits;
-(void)setEditedThumbnail:(id)arg1 forAssetID:(id)arg2 ;
-(void)setPhotoAssetEdits:(id)arg1 forAssetID:(id)arg2 ;
-(void)setVideoAssetEdits:(id)arg1 forAssetID:(id)arg2 ;
-(id)videoAssetEditsForAssetID:(id)arg1 ;
-(id)photoAssetEditsForAssetID:(id)arg1 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)debugDescription;
@end

