/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UnifiedMediaGalleryLog : NSObject {

	BOOL _deleted;
	BOOL _shownInComposer;
	unsigned long long _composerEntryCount;
	unsigned long long _composerEditingEntryCount;
	unsigned long long _cancellationSheetEntryCount;
	unsigned long long _cropTapCount;
	unsigned long long _filterTapCount;
	unsigned long long _photoStagingGroundEntryCount;
	unsigned long long _simplePickerEntryCount;
	unsigned long long _stickerTapCount;
	unsigned long long _tagTapCount;
	unsigned long long _textTapCount;
	unsigned long long _doodleTapCount;
	double _timeSpentFromComposer;
	double _timeSpentFromSimplePicker;
	double _timeSpentFromCancellationSheet;
	double _timeSpentFromPhotoStagingGroundEntry;

}

@property (assign,nonatomic) unsigned long long composerEntryCount;                        //@synthesize composerEntryCount=_composerEntryCount - In the implementation block
@property (assign,nonatomic) unsigned long long composerEditingEntryCount;                 //@synthesize composerEditingEntryCount=_composerEditingEntryCount - In the implementation block
@property (assign,nonatomic) unsigned long long cancellationSheetEntryCount;               //@synthesize cancellationSheetEntryCount=_cancellationSheetEntryCount - In the implementation block
@property (assign,nonatomic) unsigned long long cropTapCount;                              //@synthesize cropTapCount=_cropTapCount - In the implementation block
@property (assign,nonatomic) BOOL deleted;                                                 //@synthesize deleted=_deleted - In the implementation block
@property (assign,nonatomic) unsigned long long filterTapCount;                            //@synthesize filterTapCount=_filterTapCount - In the implementation block
@property (assign,nonatomic) unsigned long long photoStagingGroundEntryCount;              //@synthesize photoStagingGroundEntryCount=_photoStagingGroundEntryCount - In the implementation block
@property (assign,nonatomic) unsigned long long simplePickerEntryCount;                    //@synthesize simplePickerEntryCount=_simplePickerEntryCount - In the implementation block
@property (assign,nonatomic) unsigned long long stickerTapCount;                           //@synthesize stickerTapCount=_stickerTapCount - In the implementation block
@property (assign,nonatomic) unsigned long long tagTapCount;                               //@synthesize tagTapCount=_tagTapCount - In the implementation block
@property (assign,nonatomic) unsigned long long textTapCount;                              //@synthesize textTapCount=_textTapCount - In the implementation block
@property (assign,nonatomic) unsigned long long doodleTapCount;                            //@synthesize doodleTapCount=_doodleTapCount - In the implementation block
@property (assign,nonatomic) double timeSpentFromComposer;                                 //@synthesize timeSpentFromComposer=_timeSpentFromComposer - In the implementation block
@property (assign,nonatomic) double timeSpentFromSimplePicker;                             //@synthesize timeSpentFromSimplePicker=_timeSpentFromSimplePicker - In the implementation block
@property (assign,nonatomic) double timeSpentFromCancellationSheet;                        //@synthesize timeSpentFromCancellationSheet=_timeSpentFromCancellationSheet - In the implementation block
@property (assign,nonatomic) double timeSpentFromPhotoStagingGroundEntry;                  //@synthesize timeSpentFromPhotoStagingGroundEntry=_timeSpentFromPhotoStagingGroundEntry - In the implementation block
@property (assign,nonatomic) BOOL shownInComposer;                                         //@synthesize shownInComposer=_shownInComposer - In the implementation block
-(BOOL)shownInComposer;
-(void)setShownInComposer:(BOOL)arg1 ;
-(unsigned long long)composerEntryCount;
-(void)setComposerEntryCount:(unsigned long long)arg1 ;
-(unsigned long long)composerEditingEntryCount;
-(void)setComposerEditingEntryCount:(unsigned long long)arg1 ;
-(unsigned long long)cancellationSheetEntryCount;
-(void)setCancellationSheetEntryCount:(unsigned long long)arg1 ;
-(unsigned long long)cropTapCount;
-(void)setCropTapCount:(unsigned long long)arg1 ;
-(unsigned long long)filterTapCount;
-(void)setFilterTapCount:(unsigned long long)arg1 ;
-(unsigned long long)photoStagingGroundEntryCount;
-(void)setPhotoStagingGroundEntryCount:(unsigned long long)arg1 ;
-(unsigned long long)simplePickerEntryCount;
-(void)setSimplePickerEntryCount:(unsigned long long)arg1 ;
-(unsigned long long)stickerTapCount;
-(void)setStickerTapCount:(unsigned long long)arg1 ;
-(unsigned long long)tagTapCount;
-(void)setTagTapCount:(unsigned long long)arg1 ;
-(unsigned long long)textTapCount;
-(void)setTextTapCount:(unsigned long long)arg1 ;
-(unsigned long long)doodleTapCount;
-(void)setDoodleTapCount:(unsigned long long)arg1 ;
-(double)timeSpentFromComposer;
-(void)setTimeSpentFromComposer:(double)arg1 ;
-(double)timeSpentFromSimplePicker;
-(void)setTimeSpentFromSimplePicker:(double)arg1 ;
-(double)timeSpentFromCancellationSheet;
-(void)setTimeSpentFromCancellationSheet:(double)arg1 ;
-(double)timeSpentFromPhotoStagingGroundEntry;
-(void)setTimeSpentFromPhotoStagingGroundEntry:(double)arg1 ;
-(id)init;
-(BOOL)deleted;
-(void)setDeleted:(BOOL)arg1 ;
@end

