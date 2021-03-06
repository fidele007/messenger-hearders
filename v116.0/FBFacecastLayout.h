/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBFacecastLayout : NSObject
+(CGRect)frameOfVideoWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 withinBounds:(CGSize)arg3 ;
+(BOOL)isLandscapeBounds:(CGSize)arg1 ;
+(double)minimumVideoRemainderWidthForInteraction;
+(CGRect)frameOfVideo:(id)arg1 withinBounds:(CGSize)arg2 ;
+(BOOL)isSquareBounds:(CGSize)arg1 ;
+(BOOL)_shouldSplitCrowdNoiseAndInteractionFrame:(CGRect)arg1 videoFrame:(CGRect)arg2 ;
+(BOOL)isFullScreenVideoWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 withinBounds:(CGSize)arg3 ;
+(unsigned long long)styleFromVideoWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 withinBounds:(CGSize)arg3 ;
+(CGRect)frameOfViewerVideo:(id)arg1 withinBounds:(CGSize)arg2 session:(id)arg3 ;
+(BOOL)canRotateInBounds:(CGSize)arg1 ;
+(BOOL)isFullScreenVideoSize:(CGSize)arg1 withinBounds:(CGSize)arg2 ;
+(CGRect)crowdNoiseFrameWithParentFrame:(CGRect)arg1 interactionFrame:(CGRect)arg2 interactionContentInset:(UIEdgeInsets)arg3 distanceToEvents:(double)arg4 videoPlayerFrame:(CGRect)arg5 toolbarFrame:(CGRect)arg6 isAudioOnly:(BOOL)arg7 ;
+(id)importantFont;
+(id)focalColorForStyle:(unsigned long long)arg1 ;
+(CGRect)frameOfVideoWithStreamingSize:(CGSize)arg1 withinBounds:(CGSize)arg2 ;
+(CGRect)unoccupiedFrameForCoveringFrames:(id)arg1 withinBounds:(CGSize)arg2 ;
+(CGRect)interactionFrameForVideoFrame:(CGRect)arg1 withinBounds:(CGSize)arg2 ;
+(CGRect)interactionContentFrameForInteractionFrame:(CGRect)arg1 videoFrame:(CGRect)arg2 toolbarFrame:(CGRect)arg3 minimumContentHeight:(double)arg4 withinBounds:(CGSize)arg5 ;
+(UIEdgeInsets)eventsInsetForInteractionFrame:(CGRect)arg1 videoFrame:(CGRect)arg2 ;
+(unsigned long long)biggerVideoDimensionWithSmallerDimension:(unsigned long long)arg1 inSession:(id)arg2 ;
+(BOOL)isFullScreenVideo:(id)arg1 withinBounds:(CGSize)arg2 ;
+(unsigned long long)styleFromVideoStreamingSize:(CGSize)arg1 withinBounds:(CGSize)arg2 ;
+(unsigned long long)styleFromViewerVideo:(id)arg1 withinBounds:(CGSize)arg2 session:(id)arg3 ;
+(id)videoGravityWithPlayerSize:(CGSize)arg1 videoSize:(CGSize)arg2 session:(id)arg3 ;
+(BOOL)isLandscapeVideo:(id)arg1 ;
+(BOOL)isPortraitBounds:(CGSize)arg1 ;
+(BOOL)isSquareVideo:(id)arg1 ;
+(BOOL)canRotateInApplicationWindow;
+(double)crowdNoiseFireworksMaxYWithParentFrame:(CGRect)arg1 interactionFrame:(CGRect)arg2 interactionContentInset:(UIEdgeInsets)arg3 videoPlayerFrame:(CGRect)arg4 toolbarFrame:(CGRect)arg5 isAudioOnly:(BOOL)arg6 ;
+(CGRect)audioOnlyFeedbackFrameWithParentFrame:(CGRect)arg1 crowdNoiseFrame:(CGRect)arg2 videoPlayerFrame:(CGRect)arg3 toolbarFrame:(CGRect)arg4 audioOnlyFeedbackSize:(CGSize)arg5 hasAnimations:(BOOL)arg6 mirrored:(BOOL)arg7 ;
+(CGRect)audioStreamingOutputFrameInParentBounds:(CGRect)arg1 ;
+(id)regularFont;
+(id)focalFont;
+(id)importantColorForStyle:(unsigned long long)arg1 ;
+(id)hyperlinkColorForStyle:(unsigned long long)arg1 ;
+(id)shadowForStyle:(unsigned long long)arg1 ;
+(id)backgroundColorForStyle:(unsigned long long)arg1 isFocal:(BOOL)arg2 ;
+(id)regularColorForStyle:(unsigned long long)arg1 ;
+(id)toolbarColorForStyle:(unsigned long long)arg1 quietModePercent:(double)arg2 focused:(BOOL)arg3 ;
+(id)buttonColorForStyle:(unsigned long long)arg1 ;
@end

