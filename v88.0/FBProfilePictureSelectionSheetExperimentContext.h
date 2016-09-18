/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBProfilePictureSelectionSheetExperimentContext : FBExperimentContext {

	BOOL _separateEditViewEnabled;
	BOOL _separateVideoUploadEnabled;
	BOOL _enableSuggestedPages;
	BOOL _shouldManuallyAskPhotoPermissions;
	BOOL _addFrameInActionSheet;
	long long _suggestedPagesNum;
	long long _frameSelectionCategoryLoadLimit;

}

@property (nonatomic,readonly) BOOL separateEditViewEnabled;                           //@synthesize separateEditViewEnabled=_separateEditViewEnabled - In the implementation block
@property (nonatomic,readonly) BOOL separateVideoUploadEnabled;                        //@synthesize separateVideoUploadEnabled=_separateVideoUploadEnabled - In the implementation block
@property (nonatomic,readonly) BOOL enableSuggestedPages;                              //@synthesize enableSuggestedPages=_enableSuggestedPages - In the implementation block
@property (nonatomic,readonly) long long suggestedPagesNum;                            //@synthesize suggestedPagesNum=_suggestedPagesNum - In the implementation block
@property (nonatomic,readonly) long long frameSelectionCategoryLoadLimit;              //@synthesize frameSelectionCategoryLoadLimit=_frameSelectionCategoryLoadLimit - In the implementation block
@property (nonatomic,readonly) BOOL shouldManuallyAskPhotoPermissions;                 //@synthesize shouldManuallyAskPhotoPermissions=_shouldManuallyAskPhotoPermissions - In the implementation block
@property (nonatomic,readonly) BOOL addFrameInActionSheet;                             //@synthesize addFrameInActionSheet=_addFrameInActionSheet - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)separateEditViewEnabled;
-(BOOL)separateVideoUploadEnabled;
-(BOOL)enableSuggestedPages;
-(long long)suggestedPagesNum;
-(long long)frameSelectionCategoryLoadLimit;
-(BOOL)shouldManuallyAskPhotoPermissions;
-(BOOL)addFrameInActionSheet;
@end

