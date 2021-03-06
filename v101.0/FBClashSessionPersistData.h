/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, FBClashUnitPriorityListResult;

@interface FBClashSessionPersistData : NSObject {

	NSString* _clashUnitName;
	NSDate* _lastSlotTakenTime;
	FBClashUnitPriorityListResult* _curPQResult;

}

@property (nonatomic,copy) NSString * clashUnitName;                                   //@synthesize clashUnitName=_clashUnitName - In the implementation block
@property (nonatomic,copy) NSDate * lastSlotTakenTime;                                 //@synthesize lastSlotTakenTime=_lastSlotTakenTime - In the implementation block
@property (nonatomic,retain) FBClashUnitPriorityListResult * curPQResult;              //@synthesize curPQResult=_curPQResult - In the implementation block
-(id)initWithLastSlotTakenTime:(id)arg1 pqResult:(id)arg2 ;
-(void)setClashUnitName:(NSString *)arg1 ;
-(void)setLastSlotTakenTime:(NSDate *)arg1 ;
-(void)setCurPQResult:(FBClashUnitPriorityListResult *)arg1 ;
-(NSString *)clashUnitName;
-(NSDate *)lastSlotTakenTime;
-(FBClashUnitPriorityListResult *)curPQResult;
@end

