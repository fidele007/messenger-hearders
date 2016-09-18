/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface MNWAnalyticsEvent : FBValueObject <NSCopying, NSCoding> {

	NSString* _userFBID;
	NSString* _eventName;
	NSDictionary* _extra;
	double _timeIntervalSince1970;

}

@property (nonatomic,copy,readonly) NSString * userFBID;                  //@synthesize userFBID=_userFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventName;                 //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extra;                 //@synthesize extra=_extra - In the implementation block
@property (nonatomic,readonly) double timeIntervalSince1970;              //@synthesize timeIntervalSince1970=_timeIntervalSince1970 - In the implementation block
-(NSString *)userFBID;
-(NSDictionary *)extra;
-(id)initWithUserFBID:(id)arg1 eventName:(id)arg2 extra:(id)arg3 timeIntervalSince1970:(double)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(double)timeIntervalSince1970;
-(NSString *)eventName;
@end

