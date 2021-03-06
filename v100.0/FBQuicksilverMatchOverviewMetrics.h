/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBQuicksilverMatchOverviewMetrics : NSObject {

	double _verticalMargin;
	double _sideMargin;
	double _bottomBarHeight;
	double _playButtonHeight;
	double _playButtonFontSize;
	double _bottomLoadingIndicatorDiameter;

}

@property (nonatomic,readonly) double verticalMargin;                              //@synthesize verticalMargin=_verticalMargin - In the implementation block
@property (nonatomic,readonly) double sideMargin;                                  //@synthesize sideMargin=_sideMargin - In the implementation block
@property (nonatomic,readonly) double bottomBarHeight;                             //@synthesize bottomBarHeight=_bottomBarHeight - In the implementation block
@property (nonatomic,readonly) double playButtonHeight;                            //@synthesize playButtonHeight=_playButtonHeight - In the implementation block
@property (nonatomic,readonly) double playButtonFontSize;                          //@synthesize playButtonFontSize=_playButtonFontSize - In the implementation block
@property (nonatomic,readonly) double bottomLoadingIndicatorDiameter;              //@synthesize bottomLoadingIndicatorDiameter=_bottomLoadingIndicatorDiameter - In the implementation block
+(id)sharedInstance;
-(double)sideMargin;
-(double)bottomLoadingIndicatorDiameter;
-(double)playButtonFontSize;
-(double)playButtonHeight;
-(id)init;
-(double)bottomBarHeight;
-(double)verticalMargin;
@end

