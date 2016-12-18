/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSectionComponentTracker_MainThreadAffined, NSString, FBPersistentStackedSectionComponentChildSectionComponentUpdater;

@interface FBPersistentStackedSectionComponentChildTrackerInfo : NSObject {

	FBSectionComponentTracker_MainThreadAffined* _tracker;
	NSString* _guid;
	FBPersistentStackedSectionComponentChildSectionComponentUpdater* _updater;
	unsigned long long _numberOfSections;

}

@property (nonatomic,readonly) FBSectionComponentTracker_MainThreadAffined * tracker;                                  //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,copy,readonly) NSString * guid;                                                                   //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) FBPersistentStackedSectionComponentChildSectionComponentUpdater * updater;              //@synthesize updater=_updater - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfSections;                                                      //@synthesize numberOfSections=_numberOfSections - In the implementation block
-(FBSectionComponentTracker_MainThreadAffined *)tracker;
-(id)initWithTracker:(id)arg1 guid:(id)arg2 updater:(id)arg3 ;
-(unsigned long long)numberOfSections;
-(NSString *)guid;
-(void)setNumberOfSections:(unsigned long long)arg1 ;
-(FBPersistentStackedSectionComponentChildSectionComponentUpdater *)updater;
@end

