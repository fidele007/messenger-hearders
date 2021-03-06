/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPickerViewDelegate.h>

@protocol MNThreadCustomizationPromptViewDelegate;
@class UILabel, FBPickerView, UIView, FBImageDownloader, MNThreadCustomizationPromptViewModel, NSString;

@interface MNThreadCustomizationPromptView : UIView <FBPickerViewDelegate> {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	FBPickerView* _pickerView;
	UIView* _topBorderView;
	UIView* _bottomBorderView;
	FBImageDownloader* _imageDownloader;
	BOOL _showTopBorder;
	BOOL _showBottomBorder;
	id<MNThreadCustomizationPromptViewDelegate> _delegate;
	MNThreadCustomizationPromptViewModel* _viewModel;

}

@property (assign,nonatomic,__weak) id<MNThreadCustomizationPromptViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) MNThreadCustomizationPromptViewModel * viewModel;                           //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic) BOOL showTopBorder;                                                       //@synthesize showTopBorder=_showTopBorder - In the implementation block
@property (assign,nonatomic) BOOL showBottomBorder;                                                    //@synthesize showBottomBorder=_showBottomBorder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 showTopBorder:(BOOL)arg3 showBottomBorder:(BOOL)arg4 ;
-(void)pickerView:(id)arg1 didSelectItem:(id)arg2 ;
-(void)pickerView:(id)arg1 didDeselectItem:(id)arg2 ;
-(id)initWithImageDownloader:(id)arg1 ;
-(void)setShowBottomBorder:(BOOL)arg1 ;
-(BOOL)showBottomBorder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNThreadCustomizationPromptViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNThreadCustomizationPromptViewDelegate>)delegate;
-(void)setShowTopBorder:(BOOL)arg1 ;
-(BOOL)showTopBorder;
-(MNThreadCustomizationPromptViewModel *)viewModel;
-(void)setViewModel:(MNThreadCustomizationPromptViewModel *)arg1 ;
@end

