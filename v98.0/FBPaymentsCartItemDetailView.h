/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol UILayoutSupport;
@class UIView;

@interface FBPaymentsCartItemDetailView : UIView {

	UIView* _headerView;
	UIView* _tableView;
	UIView* _headerViewBottomSeparatorView;
	id<UILayoutSupport> _topLayoutGuide;

}

@property (nonatomic,retain) id<UILayoutSupport> topLayoutGuide;              //@synthesize topLayoutGuide=_topLayoutGuide - In the implementation block
-(id)_visualBlocks;
-(id)initWithHeaderView:(id)arg1 tableView:(id)arg2 ;
-(void)layoutSubviews;
-(id<UILayoutSupport>)topLayoutGuide;
-(void)setTopLayoutGuide:(id<UILayoutSupport>)arg1 ;
@end
