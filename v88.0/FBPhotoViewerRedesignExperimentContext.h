/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBPhotoViewerRedesignExperimentContext : FBExperimentContext {

	BOOL _enabled;
	BOOL _shouldReplaceStoryPermalink;
	BOOL _verticalSwipeDismissEnabled;
	BOOL _horizontalSwipeDismissEnabled;
	BOOL _shouldShowReshareComments;
	BOOL _shouldShowOriginalPostButton;
	BOOL _useOneOffDimmingTimer;
	BOOL _shouldShowScrollPromptIndicator;
	BOOL _dimOnInitialAppearWithoutAnimation;
	BOOL _centerPhotoOnAppear;
	BOOL _lightThemeRedesignEnabled;
	BOOL _useExtraDarkThemeColors;
	BOOL _useDisplayableMediaTransition;
	BOOL _useBlackThemeColors;
	long long _dimmingTimerInterval;
	NSString* _useDarkThemePresentation;

}

@property (nonatomic,readonly) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL shouldReplaceStoryPermalink;                      //@synthesize shouldReplaceStoryPermalink=_shouldReplaceStoryPermalink - In the implementation block
@property (nonatomic,readonly) BOOL verticalSwipeDismissEnabled;                      //@synthesize verticalSwipeDismissEnabled=_verticalSwipeDismissEnabled - In the implementation block
@property (nonatomic,readonly) BOOL horizontalSwipeDismissEnabled;                    //@synthesize horizontalSwipeDismissEnabled=_horizontalSwipeDismissEnabled - In the implementation block
@property (nonatomic,readonly) long long dimmingTimerInterval;                        //@synthesize dimmingTimerInterval=_dimmingTimerInterval - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowReshareComments;                        //@synthesize shouldShowReshareComments=_shouldShowReshareComments - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowOriginalPostButton;                     //@synthesize shouldShowOriginalPostButton=_shouldShowOriginalPostButton - In the implementation block
@property (nonatomic,readonly) BOOL useOneOffDimmingTimer;                            //@synthesize useOneOffDimmingTimer=_useOneOffDimmingTimer - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowScrollPromptIndicator;                  //@synthesize shouldShowScrollPromptIndicator=_shouldShowScrollPromptIndicator - In the implementation block
@property (nonatomic,readonly) BOOL dimOnInitialAppearWithoutAnimation;               //@synthesize dimOnInitialAppearWithoutAnimation=_dimOnInitialAppearWithoutAnimation - In the implementation block
@property (nonatomic,readonly) BOOL centerPhotoOnAppear;                              //@synthesize centerPhotoOnAppear=_centerPhotoOnAppear - In the implementation block
@property (nonatomic,readonly) BOOL lightThemeRedesignEnabled;                        //@synthesize lightThemeRedesignEnabled=_lightThemeRedesignEnabled - In the implementation block
@property (nonatomic,readonly) BOOL useExtraDarkThemeColors;                          //@synthesize useExtraDarkThemeColors=_useExtraDarkThemeColors - In the implementation block
@property (nonatomic,readonly) BOOL useDisplayableMediaTransition;                    //@synthesize useDisplayableMediaTransition=_useDisplayableMediaTransition - In the implementation block
@property (nonatomic,readonly) BOOL useBlackThemeColors;                              //@synthesize useBlackThemeColors=_useBlackThemeColors - In the implementation block
@property (nonatomic,copy,readonly) NSString * useDarkThemePresentation;              //@synthesize useDarkThemePresentation=_useDarkThemePresentation - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(long long)darkThemePresentation;
-(BOOL)shouldReplaceStoryPermalink;
-(BOOL)verticalSwipeDismissEnabled;
-(BOOL)horizontalSwipeDismissEnabled;
-(long long)dimmingTimerInterval;
-(BOOL)shouldShowReshareComments;
-(BOOL)shouldShowOriginalPostButton;
-(BOOL)useOneOffDimmingTimer;
-(BOOL)shouldShowScrollPromptIndicator;
-(BOOL)dimOnInitialAppearWithoutAnimation;
-(BOOL)centerPhotoOnAppear;
-(BOOL)lightThemeRedesignEnabled;
-(BOOL)useExtraDarkThemeColors;
-(BOOL)useDisplayableMediaTransition;
-(BOOL)useBlackThemeColors;
-(NSString *)useDarkThemePresentation;
-(BOOL)enabled;
@end
