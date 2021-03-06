/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPerfLoggingEventDescriptor : FBValueObject <NSCopying> {

	int _markerID;
	NSString* _event;
	NSString* _source;
	double _animationDuration;

}

@property (nonatomic,copy,readonly) NSString * event;                 //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) double animationDuration;              //@synthesize animationDuration=_animationDuration - In the implementation block
@property (nonatomic,readonly) int markerID;                          //@synthesize markerID=_markerID - In the implementation block
-(id)initWithEvent:(id)arg1 source:(id)arg2 animationDuration:(double)arg3 markerID:(int)arg4 ;
-(int)markerID;
-(NSString *)source;
-(NSString *)event;
-(double)animationDuration;
@end

