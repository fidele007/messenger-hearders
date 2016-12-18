/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDate;

@interface FBMThreadEventsReminderUpdate : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	NSString* _update_reminderId;
	NSNumber* _update_reminderType;
	NSDate* _update_reminderTime;
	NSString* _update_reminderTitle;
	NSString* _update_reminderLocationName;
	NSNumber* _update_reminderAllowsRSVP;
	NSString* _update_actorId;
	NSString* _rsvp_reminderId;
	long long _rsvp_rsvpStatus;
	NSString* _rsvp_userId;
	NSString* _delete_eventId;

}
+(id)deleteWithEventId:(id)arg1 ;
+(id)updateWithReminderId:(id)arg1 reminderType:(id)arg2 reminderTime:(id)arg3 reminderTitle:(id)arg4 reminderLocationName:(id)arg5 reminderAllowsRSVP:(id)arg6 actorId:(id)arg7 ;
+(id)rsvpWithReminderId:(id)arg1 rsvpStatus:(long long)arg2 userId:(id)arg3 ;
-(void)matchUpdate:(/*^block*/id)arg1 rsvp:(/*^block*/id)arg2 delete:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

