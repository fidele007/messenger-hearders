/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBContactSearchGroupResult : FBValueObject <NSCopying> {

	NSString* _threadFBID;
	NSString* _name;
	NSString* _picHash;
	NSArray* _participants;
	unsigned long long _timestamp;
	unsigned long long _statusForViewer;

}

@property (nonatomic,copy,readonly) NSString * threadFBID;                      //@synthesize threadFBID=_threadFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * picHash;                         //@synthesize picHash=_picHash - In the implementation block
@property (nonatomic,copy,readonly) NSArray * participants;                     //@synthesize participants=_participants - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long statusForViewer;              //@synthesize statusForViewer=_statusForViewer - In the implementation block
-(NSString *)threadFBID;
-(unsigned long long)statusForViewer;
-(id)initWithThreadFBID:(id)arg1 name:(id)arg2 picHash:(id)arg3 participants:(id)arg4 timestamp:(unsigned long long)arg5 statusForViewer:(unsigned long long)arg6 ;
-(NSString *)picHash;
-(unsigned long long)timestamp;
-(NSString *)name;
-(NSArray *)participants;
@end

