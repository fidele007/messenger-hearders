/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate;

@interface FBNuxCatalogRecord : NSObject <NSCoding> {

	NSString* _event;
	NSDate* _eventTime;
	NSString* _versionID;

}

@property (nonatomic,copy,readonly) NSString * event;                  //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) NSDate * eventTime;                     //@synthesize eventTime=_eventTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * versionID;              //@synthesize versionID=_versionID - In the implementation block
-(id)initWithEvent:(id)arg1 eventTime:(id)arg2 versionID:(id)arg3 ;
-(NSDate *)eventTime;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)event;
-(NSString *)versionID;
@end

