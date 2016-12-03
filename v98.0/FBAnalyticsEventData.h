/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface FBAnalyticsEventData : FBValueObject <NSCopying, NSCoding> {

	NSString* _eventName;
	NSString* _module;
	NSDictionary* _extra;

}

@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,copy,readonly) NSString * module;                 //@synthesize module=_module - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extra;              //@synthesize extra=_extra - In the implementation block
-(NSString *)module;
-(NSDictionary *)extra;
-(void)logToAnalytics:(id)arg1 ;
-(id)initWithEventName:(id)arg1 module:(id)arg2 extra:(id)arg3 ;
-(BOOL)isValid;
-(NSString *)eventName;
@end
