/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBVideoEditingConfiguration : FBValueObject <NSCopying, NSCoding> {

	BOOL _disableAudioToggleTittle;
	BOOL _enableMoveBothHandles;
	BOOL _showWhiteMargin;
	double _playHeadWidth;
	double _audioToggleBackgroundViewCornerRadius;
	double _audioToggleBackgroundViewAlphaComponent;
	double _trackHeadImageWidth;
	NSString* _trimHandleImageName;
	double _trimViewHandleWidth;

}

@property (nonatomic,readonly) BOOL disableAudioToggleTittle;                               //@synthesize disableAudioToggleTittle=_disableAudioToggleTittle - In the implementation block
@property (nonatomic,readonly) BOOL enableMoveBothHandles;                                  //@synthesize enableMoveBothHandles=_enableMoveBothHandles - In the implementation block
@property (nonatomic,readonly) double playHeadWidth;                                        //@synthesize playHeadWidth=_playHeadWidth - In the implementation block
@property (nonatomic,readonly) double audioToggleBackgroundViewCornerRadius;                //@synthesize audioToggleBackgroundViewCornerRadius=_audioToggleBackgroundViewCornerRadius - In the implementation block
@property (nonatomic,readonly) double audioToggleBackgroundViewAlphaComponent;              //@synthesize audioToggleBackgroundViewAlphaComponent=_audioToggleBackgroundViewAlphaComponent - In the implementation block
@property (nonatomic,readonly) double trackHeadImageWidth;                                  //@synthesize trackHeadImageWidth=_trackHeadImageWidth - In the implementation block
@property (nonatomic,copy,readonly) NSString * trimHandleImageName;                         //@synthesize trimHandleImageName=_trimHandleImageName - In the implementation block
@property (nonatomic,readonly) double trimViewHandleWidth;                                  //@synthesize trimViewHandleWidth=_trimViewHandleWidth - In the implementation block
@property (nonatomic,readonly) BOOL showWhiteMargin;                                        //@synthesize showWhiteMargin=_showWhiteMargin - In the implementation block
-(id)initWithDisableAudioToggleTittle:(BOOL)arg1 enableMoveBothHandles:(BOOL)arg2 playHeadWidth:(double)arg3 audioToggleBackgroundViewCornerRadius:(double)arg4 audioToggleBackgroundViewAlphaComponent:(double)arg5 trackHeadImageWidth:(double)arg6 trimHandleImageName:(id)arg7 trimViewHandleWidth:(double)arg8 showWhiteMargin:(BOOL)arg9 ;
-(BOOL)showWhiteMargin;
-(double)trimViewHandleWidth;
-(NSString *)trimHandleImageName;
-(BOOL)enableMoveBothHandles;
-(double)playHeadWidth;
-(double)trackHeadImageWidth;
-(double)audioToggleBackgroundViewAlphaComponent;
-(double)audioToggleBackgroundViewCornerRadius;
-(BOOL)disableAudioToggleTittle;
@end

