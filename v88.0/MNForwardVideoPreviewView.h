/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface MNForwardVideoPreviewView : UIView {

	UILabel* _durationView;
	UIView* _thumbnailView;
	UIView* _placeholderView;
	CGSize _videoViewSize;
	double _videoViewPadding;

}
-(id)initWithFrame:(CGRect)arg1 shouldCreatePlaceholder:(BOOL)arg2 ;
-(void)setVideoThumbnail:(id)arg1 duration:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 shouldCreatePlaceholder:(BOOL)arg2 videoViewSize:(CGSize)arg3 videoViewPadding:(double)arg4 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

