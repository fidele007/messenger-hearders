/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBComposerMoviesExperimentContext <NSObject>
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) BOOL shouldShowInlineMovieSprout; 
@property (nonatomic,readonly) unsigned long long minimumPhotoCountPerMovie; 
@property (nonatomic,readonly) unsigned long long maximumPhotoCountPerMovie; 
@property (nonatomic,readonly) unsigned long long imageMaximumCountForPreview; 
@property (nonatomic,copy,readonly) NSString * blacklistedMoodIDs; 
@property (nonatomic,readonly) BOOL evergreenPromptsEnabled; 
@property (nonatomic,readonly) BOOL holidayProductionPromptsEnabled; 
@property (nonatomic,readonly) unsigned long long maximumPhotoCountInBlurredPrompt; 
@property (nonatomic,copy,readonly) NSString * defaultMoodID; 
@property (nonatomic,readonly) BOOL shouldShowPromptTitle; 
@property (nonatomic,copy,readonly) NSString * promptSubtitle; 
@property (nonatomic,copy,readonly) NSString * promptButtonText; 
@property (nonatomic,readonly) BOOL shouldEnableFormatSelectorEntrance; 
@property (nonatomic,readonly) BOOL canSeeBottomCTA; 
@property (nonatomic,readonly) BOOL shouldUseOptimisticPosting; 
@property (nonatomic,readonly) BOOL shouldPreUploadImagesInEditorView; 
@property (nonatomic,readonly) unsigned long long videoLengthThreshold; 
@property (nonatomic,readonly) unsigned long long maximumCutsPerVideo; 
@property (nonatomic,readonly) BOOL audioMixEnabled; 
@property (nonatomic,readonly) unsigned long long moodsCacheVersion; 
@property (nonatomic,readonly) BOOL shouldShuffleMood; 
@property (nonatomic,copy,readonly) NSString * firstMoodsIDs; 
@property (nonatomic,copy,readonly) NSString * promptMoodsIDs; 
@property (nonatomic,readonly) BOOL shouldAutoPickPhotosWhenNoSuggestion; 
@property (nonatomic,copy,readonly) NSString * moodIDToUseInThePicker; 
@property (nonatomic,readonly) BOOL shouldShowEditButtonInTheComposer; 
@property (nonatomic,readonly) BOOL shouldShowCategoryButton; 
@property (nonatomic,readonly) unsigned long long popularMoodsCount; 
@property (nonatomic,readonly) BOOL shouldSkipImagePicker; 
@property (nonatomic,readonly) BOOL shouldInvalidateSuggestionOnUnsuccessfulPosting; 
@property (nonatomic,readonly) BOOL shouldAllowImageCropping; 
@property (nonatomic,readonly) unsigned long long maxNumberOfSuggestionsUsedToFillEditor; 
@property (nonatomic,readonly) BOOL shouldSkipEditorForPrompt; 
@property (nonatomic,readonly) BOOL shouldShowCloseButtonOnComposerComponents; 
@property (nonatomic,readonly) BOOL shouldShowMusicCTA; 
@property (nonatomic,readonly) BOOL shouldShowMusicAttributionInPrompt; 
@property (nonatomic,readonly) BOOL shouldUseTabNameTheme; 
@property (nonatomic,readonly) BOOL topicSuggestionEnabled; 
@property (nonatomic,copy,readonly) NSString * nightoutMoodId; 
@property (nonatomic,copy,readonly) NSString * weekendMoodId; 
@property (nonatomic,readonly) BOOL shouldPreDownloadAssets; 
@property (nonatomic,readonly) BOOL shouldRespectMuteButton; 
@property (nonatomic,readonly) BOOL shouldHideShareButton; 
@property (nonatomic,readonly) unsigned long long textureDimension; 
@property (nonatomic,readonly) unsigned long long promptTextureDimension; 
@property (nonatomic,readonly) BOOL shouldUseRenderAudio; 
@required
-(NSString *)defaultMoodID;
-(NSString *)promptSubtitle;
-(unsigned long long)minimumPhotoCountPerMovie;
-(unsigned long long)maximumPhotoCountPerMovie;
-(NSString *)moodIDToUseInThePicker;
-(unsigned long long)maximumCutsPerVideo;
-(unsigned long long)imageMaximumCountForPreview;
-(BOOL)topicSuggestionEnabled;
-(BOOL)shouldShowInlineMovieSprout;
-(NSString *)blacklistedMoodIDs;
-(BOOL)evergreenPromptsEnabled;
-(BOOL)holidayProductionPromptsEnabled;
-(unsigned long long)maximumPhotoCountInBlurredPrompt;
-(BOOL)shouldShowPromptTitle;
-(NSString *)promptButtonText;
-(BOOL)shouldEnableFormatSelectorEntrance;
-(BOOL)canSeeBottomCTA;
-(BOOL)shouldUseOptimisticPosting;
-(BOOL)shouldPreUploadImagesInEditorView;
-(unsigned long long)videoLengthThreshold;
-(BOOL)audioMixEnabled;
-(unsigned long long)moodsCacheVersion;
-(BOOL)shouldShuffleMood;
-(NSString *)firstMoodsIDs;
-(NSString *)promptMoodsIDs;
-(BOOL)shouldAutoPickPhotosWhenNoSuggestion;
-(BOOL)shouldShowEditButtonInTheComposer;
-(BOOL)shouldShowCategoryButton;
-(unsigned long long)popularMoodsCount;
-(BOOL)shouldSkipImagePicker;
-(BOOL)shouldInvalidateSuggestionOnUnsuccessfulPosting;
-(BOOL)shouldAllowImageCropping;
-(unsigned long long)maxNumberOfSuggestionsUsedToFillEditor;
-(BOOL)shouldSkipEditorForPrompt;
-(BOOL)shouldShowCloseButtonOnComposerComponents;
-(BOOL)shouldShowMusicCTA;
-(BOOL)shouldShowMusicAttributionInPrompt;
-(BOOL)shouldUseTabNameTheme;
-(NSString *)nightoutMoodId;
-(NSString *)weekendMoodId;
-(BOOL)shouldPreDownloadAssets;
-(BOOL)shouldRespectMuteButton;
-(BOOL)shouldHideShareButton;
-(unsigned long long)textureDimension;
-(unsigned long long)promptTextureDimension;
-(BOOL)shouldUseRenderAudio;
-(BOOL)enabled;

@end

