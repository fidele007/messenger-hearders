/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBVideoPreviewThumbnailProviderDelegate.h>

@class UIImageView, FBMemScrubberPreview, FBVideoPreviewThumbnailProvider, NSString;

@interface FBVideoPreviewView : UIView <FBVideoPreviewThumbnailProviderDelegate> {

	unsigned long long _currentThumbnailIndex;
	UIImageView* _contentView;
	FBMemScrubberPreview* _scrubberPreview;
	FBVideoPreviewThumbnailProvider* _thumbnailProvider;
	double _playbackTime;

}

@property (assign,nonatomic) double playbackTime;                   //@synthesize playbackTime=_playbackTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createVideoPreviewViewWithVideoID:(id)arg1 previewSize:(CGSize)arg2 scenePath:(id)arg3 session:(id)arg4 successCallback:(/*^block*/id)arg5 failureCallback:(/*^block*/id)arg6 ;
-(void)videoPreviewThumbnailProviderDidLoadThumbnails:(id)arg1 ;
-(id)initWithVideo:(id)arg1 scenePath:(id)arg2 session:(id)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)stopLoading;
-(double)playbackTime;
-(void)setPlaybackTime:(double)arg1 ;
-(void)startLoading;
@end

