/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNPhotoEditingDrawViewDelegate;
@class UIView, UIImageView, UIButton;

@interface MNPhotoEditingDrawView : UIView {

	UIView* _originalMediaView;
	UIImageView* _editOverlayImageView;
	UIView* _drawView;
	UIButton* _undoButton;
	id<MNPhotoEditingDrawViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPhotoEditingDrawViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_undoTapped:(id)arg1 ;
-(id)initWithOriginalMediaView:(id)arg1 drawView:(id)arg2 ;
-(void)setShowsUndoButton:(BOOL)arg1 ;
-(void)setEditOverlayImage:(id)arg1 ;
-(void)setDelegate:(id<MNPhotoEditingDrawViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNPhotoEditingDrawViewDelegate>)delegate;
@end

