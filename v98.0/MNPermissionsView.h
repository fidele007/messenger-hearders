/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNPermissionsViewDelegate;
@class UIView, UIButton, MNPermissionsViewConfiguration;

@interface MNPermissionsView : UIView {

	UIView* _contentContainerView;
	UIButton* _actionButton;
	UIButton* _dismissButton;
	MNPermissionsViewConfiguration* _configuration;
	id<MNPermissionsViewDelegate> _delegate;

}

@property (nonatomic,retain) MNPermissionsViewConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<MNPermissionsViewDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapActionButton:(id)arg1 ;
-(void)_updateConfiguration;
-(void)_didTabDismissButton:(id)arg1 ;
-(void)_layoutContentContainer;
-(void)_layoutDismissButtonIfNeeded;
-(void)setDelegate:(id<MNPermissionsViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNPermissionsViewDelegate>)delegate;
-(void)setConfiguration:(MNPermissionsViewConfiguration *)arg1 ;
-(MNPermissionsViewConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
@end

