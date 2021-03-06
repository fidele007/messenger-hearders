/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInstantGameRoundableCell.h>

@class FBInstantGameUIMetrics, FBUserSession, UILabel, FBInstantGameProfileImageView, FBInstantGameLeaderboardCellViewModel;

@interface FBInstantGameLeaderboardCell : FBInstantGameRoundableCell {

	FBInstantGameUIMetrics* _metrics;
	FBUserSession* _session;
	UILabel* _rankingLabel;
	UILabel* _playerNameLabel;
	UILabel* _playerScoreLabel;
	FBInstantGameProfileImageView* _playerProfileImageView;
	FBInstantGameLeaderboardCellViewModel* _cellModel;

}

@property (nonatomic,copy) FBInstantGameLeaderboardCellViewModel * cellModel;              //@synthesize cellModel=_cellModel - In the implementation block
-(FBInstantGameLeaderboardCellViewModel *)cellModel;
-(id)initWithSession:(id)arg1 resuseIdentifier:(id)arg2 ;
-(void)setCellModel:(FBInstantGameLeaderboardCellViewModel *)arg1 ;
-(void)_updateLeaderboarCellBackground;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end

