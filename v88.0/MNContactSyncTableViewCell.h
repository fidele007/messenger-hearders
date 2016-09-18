/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNTableViewCell.h>

@class MNLoadingView, UILabel, FBBadgeView, NSString;

@interface MNContactSyncTableViewCell : MNTableViewCell {

	MNLoadingView* _loadingView;
	UILabel* _accessoryLabel;
	FBBadgeView* _badgeView;
	long long _state;

}

@property (nonatomic,copy) NSString * accessoryLabelText; 
@property (assign,nonatomic) long long state;                          //@synthesize state=_state - In the implementation block
-(id)initWithCellStyle:(id)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)accessoryLabelText;
-(void)setAccessoryLabelText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)prepareForReuse;
@end
