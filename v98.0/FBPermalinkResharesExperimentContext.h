/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBPermalinkResharesExperimentContext : FBExperimentContext {

	BOOL _collapseAttachedStories;
	BOOL _useIconInShareSentence;
	BOOL _hoistConnectedReshares;
	BOOL _showMessageInResharePreview;
	BOOL _useNamesInShareSentence;
	BOOL _showShareSentence;
	BOOL _showResharePreview;
	long long _accurateShareCountUnderEqualTo;

}

@property (assign,nonatomic) BOOL collapseAttachedStories;                          //@synthesize collapseAttachedStories=_collapseAttachedStories - In the implementation block
@property (assign,nonatomic) BOOL useIconInShareSentence;                           //@synthesize useIconInShareSentence=_useIconInShareSentence - In the implementation block
@property (assign,nonatomic) BOOL hoistConnectedReshares;                           //@synthesize hoistConnectedReshares=_hoistConnectedReshares - In the implementation block
@property (assign,nonatomic) BOOL showMessageInResharePreview;                      //@synthesize showMessageInResharePreview=_showMessageInResharePreview - In the implementation block
@property (assign,nonatomic) BOOL useNamesInShareSentence;                          //@synthesize useNamesInShareSentence=_useNamesInShareSentence - In the implementation block
@property (assign,nonatomic) BOOL showShareSentence;                                //@synthesize showShareSentence=_showShareSentence - In the implementation block
@property (assign,nonatomic) BOOL showResharePreview;                               //@synthesize showResharePreview=_showResharePreview - In the implementation block
@property (assign,nonatomic) long long accurateShareCountUnderEqualTo;              //@synthesize accurateShareCountUnderEqualTo=_accurateShareCountUnderEqualTo - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)accurateShareCountUnderEqualTo;
-(BOOL)collapseAttachedStories;
-(BOOL)hoistConnectedReshares;
-(BOOL)showMessageInResharePreview;
-(BOOL)showResharePreview;
-(BOOL)showShareSentence;
-(BOOL)useIconInShareSentence;
-(BOOL)useNamesInShareSentence;
-(void)setCollapseAttachedStories:(BOOL)arg1 ;
-(void)setUseIconInShareSentence:(BOOL)arg1 ;
-(void)setHoistConnectedReshares:(BOOL)arg1 ;
-(void)setShowMessageInResharePreview:(BOOL)arg1 ;
-(void)setUseNamesInShareSentence:(BOOL)arg1 ;
-(void)setShowShareSentence:(BOOL)arg1 ;
-(void)setShowResharePreview:(BOOL)arg1 ;
-(void)setAccurateShareCountUnderEqualTo:(long long)arg1 ;
@end
