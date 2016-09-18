/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSDictionary;

@interface FBMThreadEventsReminderBuilder : NSObject {

	NSString* _eventId;
	long long _eventType;
	NSDate* _time;
	NSString* _title;
	NSString* _locationName;
	NSDictionary* _userIdToRSVPStatusMap;
	BOOL _allowsRSVP;

}
+(id)threadEventsReminderFromExistingThreadEventsReminder:(id)arg1 ;
+(id)threadEventsReminder;
-(id)withTime:(id)arg1 ;
-(id)withLocationName:(id)arg1 ;
-(id)withEventType:(long long)arg1 ;
-(id)withAllowsRSVP:(BOOL)arg1 ;
-(id)withUserIdToRSVPStatusMap:(id)arg1 ;
-(id)withEventId:(id)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)build;
@end

