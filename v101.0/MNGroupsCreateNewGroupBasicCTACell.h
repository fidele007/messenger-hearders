/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol MNGroupsCreateNewGroupBasicCTACellDelegate;
@class UILabel, UIView, UIButton;

@interface MNGroupsCreateNewGroupBasicCTACell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIView* _separatorView;
	UIButton* _createNewItemCTA;
	BOOL _showsExpandedView;
	unsigned long long _viewModelType;
	id<MNGroupsCreateNewGroupBasicCTACellDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long viewModelType;                                            //@synthesize viewModelType=_viewModelType - In the implementation block
@property (assign,nonatomic,__weak) id<MNGroupsCreateNewGroupBasicCTACellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsExpandedView;                                                      //@synthesize showsExpandedView=_showsExpandedView - In the implementation block
-(void)_didTapCreateCTA;
-(void)_updateViews;
-(BOOL)showsExpandedView;
-(unsigned long long)viewModelType;
-(void)setViewModelType:(unsigned long long)arg1 ;
-(void)setShowsExpandedView:(BOOL)arg1 ;
-(void)setDelegate:(id<MNGroupsCreateNewGroupBasicCTACellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNGroupsCreateNewGroupBasicCTACellDelegate>)delegate;
@end
