/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, CLVisit, FBCLLocationCollectionConfig, NSDate;

@interface FBCLEvent : NSObject {

	NSArray* _locations;
	CLVisit* _visit;
	unsigned long long _source;
	FBCLLocationCollectionConfig* _configurationOverride;
	NSDate* _timestamp;
	NSArray* _activities;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) NSArray * locations;                                                 //@synthesize locations=_locations - In the implementation block
@property (nonatomic,copy) CLVisit * visit;                                                     //@synthesize visit=_visit - In the implementation block
@property (assign,nonatomic) unsigned long long source;                                         //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) FBCLLocationCollectionConfig * configurationOverride;              //@synthesize configurationOverride=_configurationOverride - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSArray * activities;                                                //@synthesize activities=_activities - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)setConfigurationOverride:(FBCLLocationCollectionConfig *)arg1 ;
-(id)initWithVisit:(id)arg1 source:(unsigned long long)arg2 timestamp:(id)arg3 ;
-(id)mostRecentLocation;
-(FBCLLocationCollectionConfig *)configurationOverride;
-(void)setLocations:(NSArray *)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(unsigned long long)source;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSArray *)activities;
-(void)setActivities:(NSArray *)arg1 ;
-(NSArray *)locations;
-(CLVisit *)visit;
-(void)setVisit:(CLVisit *)arg1 ;
@end

