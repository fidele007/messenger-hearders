/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <Messenger/FBInstantGameItemViewDelegate.h>

@protocol FBInstantGameListTableViewCellDelegate;
@class FBInstantGameItemView, NSString;

@interface FBInstantGameListTableViewCell : UITableViewCell <FBInstantGameItemViewDelegate> {

	id<FBInstantGameListTableViewCellDelegate> _delegate;
	FBInstantGameItemView* _gameItemView;

}

@property (assign,nonatomic,__weak) id<FBInstantGameListTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBInstantGameItemView * gameItemView;                                  //@synthesize gameItemView=_gameItemView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)gameItemViewDidTapPlayButton:(id)arg1 ;
-(FBInstantGameItemView *)gameItemView;
-(id)initWithSession:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3 ;
-(void)_gameListTableCellDidTapPlayButton;
-(void)layoutSubviews;
-(void)setDelegate:(id<FBInstantGameListTableViewCellDelegate>)arg1 ;
-(id<FBInstantGameListTableViewCellDelegate>)delegate;
@end

