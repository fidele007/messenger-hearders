/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSDictionary;

@interface FBMThreadEventsReminder : FBValueObject <NSCoding, NSCopying> {

	BOOL _allowsRSVP;
	NSString* _eventId;
	long long _eventType;
	NSDate* _time;
	NSString* _title;
	NSString* _locationName;
	NSDictionary* _userIdToRSVPStatusMap;

}

@property (nonatomic,copy,readonly) NSString * eventId;                                //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,readonly) long long eventType;                                    //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * time;                                     //@synthesize time=_time - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationName;                           //@synthesize locationName=_locationName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userIdToRSVPStatusMap;              //@synthesize userIdToRSVPStatusMap=_userIdToRSVPStatusMap - In the implementation block
@property (nonatomic,readonly) BOOL allowsRSVP;                                        //@synthesize allowsRSVP=_allowsRSVP - In the implementation block
-(NSDictionary *)userIdToRSVPStatusMap;
-(BOOL)allowsRSVP;
-(id)initWithEventId:(id)arg1 eventType:(long long)arg2 time:(id)arg3 title:(id)arg4 locationName:(id)arg5 userIdToRSVPStatusMap:(id)arg6 allowsRSVP:(BOOL)arg7 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)title;
-(NSDate *)time;
-(NSString *)locationName;
-(NSString *)eventId;
-(long long)eventType;
@end

