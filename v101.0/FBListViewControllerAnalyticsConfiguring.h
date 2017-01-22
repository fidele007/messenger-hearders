/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FBListViewControllerImpressionLoggingConfiguration;


@protocol FBListViewControllerAnalyticsConfiguring <NSObject>
@property (nonatomic,copy) id analyticsExtraBlock; 
@property (nonatomic,copy) NSString * appearanceEvent; 
@property (nonatomic,copy) NSString * disappearanceEvent; 
@property (nonatomic,retain) FBListViewControllerImpressionLoggingConfiguration * impressionLoggingConfiguration; 
@required
-(NSString *)appearanceEvent;
-(NSString *)disappearanceEvent;
-(id)analyticsExtraBlock;
-(FBListViewControllerImpressionLoggingConfiguration *)impressionLoggingConfiguration;
-(void)setAnalyticsExtraBlock:(/*^block*/id)arg1;
-(void)setAppearanceEvent:(id)arg1;
-(void)setDisappearanceEvent:(id)arg1;
-(void)setImpressionLoggingConfiguration:(id)arg1;

@end
