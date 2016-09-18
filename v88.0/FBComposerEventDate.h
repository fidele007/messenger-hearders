/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FBComposerEventDate : FBValueObject <NSCopying, NSCoding> {

	unsigned long long _eventYear;
	unsigned long long _eventMonth;
	unsigned long long _eventDay;

}

@property (nonatomic,readonly) unsigned long long eventYear;               //@synthesize eventYear=_eventYear - In the implementation block
@property (nonatomic,readonly) unsigned long long eventMonth;              //@synthesize eventMonth=_eventMonth - In the implementation block
@property (nonatomic,readonly) unsigned long long eventDay;                //@synthesize eventDay=_eventDay - In the implementation block
-(id)initWithEventYear:(unsigned long long)arg1 eventMonth:(unsigned long long)arg2 eventDay:(unsigned long long)arg3 ;
-(unsigned long long)eventYear;
-(unsigned long long)eventMonth;
-(unsigned long long)eventDay;
@end

