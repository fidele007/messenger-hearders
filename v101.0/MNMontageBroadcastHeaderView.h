/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:20 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNMontageBroadcastHeaderViewDelegate;
@class UIImageView, UITapGestureRecognizer, UIToolbar, UIBarButtonItem;

@interface MNMontageBroadcastHeaderView : UIView {

	UIImageView* _previewImageView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIToolbar* _toolbar;
	UIBarButtonItem* _backButtonItem;
	UIBarButtonItem* _searchButtonItem;
	id<MNMontageBroadcastHeaderViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMontageBroadcastHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(double)maxHeaderContentHeight;
-(void)_didTap;
-(void)_didSelectBack;
-(void)_didSelectSearch;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNMontageBroadcastHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNMontageBroadcastHeaderViewDelegate>)delegate;
-(CGRect)contentRect;
-(void)setPreviewImage:(id)arg1 ;
@end
