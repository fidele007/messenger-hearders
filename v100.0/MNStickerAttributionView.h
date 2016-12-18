/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNStickerAttributionViewDelegate;
@class FBRichTextView, UIImageView, UIView, UITapGestureRecognizer, MNAttributionViewModel, NSString;

@interface MNStickerAttributionView : UIView <UIGestureRecognizerDelegate> {

	FBRichTextView* _actionTextView;
	UIImageView* _iconView;
	UIView* _maskView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<MNStickerAttributionViewDelegate> _delegate;
	MNAttributionViewModel* _attributionViewModel;

}

@property (assign,nonatomic,__weak) id<MNStickerAttributionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNAttributionViewModel * attributionViewModel;                       //@synthesize attributionViewModel=_attributionViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFitsWithWidth:(double)arg1 attributionViewModel:(id)arg2 ;
-(MNAttributionViewModel *)attributionViewModel;
-(void)setAttributionViewModel:(MNAttributionViewModel *)arg1 ;
-(void)setIcon:(id)arg1 rounded:(BOOL)arg2 ;
-(void)_setIconImage:(id)arg1 ;
-(void)_handleDownload:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNStickerAttributionViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNStickerAttributionViewDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
@end

