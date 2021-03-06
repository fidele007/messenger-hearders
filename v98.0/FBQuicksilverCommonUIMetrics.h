/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBQuicksilverCommonUIMetrics : NSObject {

	double _standardProfileImageRadius;
	double _compactCellProfileImageRadius;
	double _nameLabelFontSize;
	double _weeklyScoreLabelFontSize;
	double _allTimeScoreLabelFontSize;

}

@property (nonatomic,readonly) double standardProfileImageRadius;                 //@synthesize standardProfileImageRadius=_standardProfileImageRadius - In the implementation block
@property (nonatomic,readonly) double compactCellProfileImageRadius;              //@synthesize compactCellProfileImageRadius=_compactCellProfileImageRadius - In the implementation block
@property (nonatomic,readonly) double nameLabelFontSize;                          //@synthesize nameLabelFontSize=_nameLabelFontSize - In the implementation block
@property (nonatomic,readonly) double weeklyScoreLabelFontSize;                   //@synthesize weeklyScoreLabelFontSize=_weeklyScoreLabelFontSize - In the implementation block
@property (nonatomic,readonly) double allTimeScoreLabelFontSize;                  //@synthesize allTimeScoreLabelFontSize=_allTimeScoreLabelFontSize - In the implementation block
+(id)sharedInstance;
-(double)nameLabelFontSize;
-(double)weeklyScoreLabelFontSize;
-(double)standardProfileImageRadius;
-(double)allTimeScoreLabelFontSize;
-(double)compactCellProfileImageRadius;
-(id)init;
@end

