/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBListViewControllerAnalyticsConfiguring.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBListViewControllerImpressionLoggingConfiguration;

@interface FBListViewControllerAnalyticsConfiguration : NSObject <FBListViewControllerAnalyticsConfiguring, NSCopying> {

	/*^block*/id _analyticsExtraBlock;
	NSString* _appearanceEvent;
	NSString* _disappearanceEvent;
	FBListViewControllerImpressionLoggingConfiguration* _impressionLoggingConfiguration;
	NSString* _analyticsModule;

}

@property (nonatomic,copy) NSString * analyticsModule;                                                                         //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id analyticsExtraBlock;                                                                             //@synthesize analyticsExtraBlock=_analyticsExtraBlock - In the implementation block
@property (nonatomic,copy) NSString * appearanceEvent;                                                                         //@synthesize appearanceEvent=_appearanceEvent - In the implementation block
@property (nonatomic,copy) NSString * disappearanceEvent;                                                                      //@synthesize disappearanceEvent=_disappearanceEvent - In the implementation block
@property (nonatomic,retain) FBListViewControllerImpressionLoggingConfiguration * impressionLoggingConfiguration;              //@synthesize impressionLoggingConfiguration=_impressionLoggingConfiguration - In the implementation block
+(id)newWithAnalyticsModule:(id)arg1 ;
+(id)newWithAnalyticsModule:(id)arg1 configurationBlock:(/*^block*/id)arg2 ;
-(NSString *)analyticsModule;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(id)initWithAnalyticsModule:(id)arg1 ;
-(id)analyticsExtraBlock;
-(void)setAnalyticsExtraBlock:(id)arg1 ;
-(NSString *)appearanceEvent;
-(void)setAppearanceEvent:(NSString *)arg1 ;
-(NSString *)disappearanceEvent;
-(void)setDisappearanceEvent:(NSString *)arg1 ;
-(FBListViewControllerImpressionLoggingConfiguration *)impressionLoggingConfiguration;
-(void)setImpressionLoggingConfiguration:(FBListViewControllerImpressionLoggingConfiguration *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

