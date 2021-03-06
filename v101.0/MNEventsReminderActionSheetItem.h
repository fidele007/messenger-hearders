/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNEventsReminderActionSheetItem : FBValueObject <NSCopying> {

	NSString* _title;
	/*^block*/id _actionHandler;
	long long _alertActionStyle;

}

@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id actionHandler;                        //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,readonly) long long alertActionStyle;              //@synthesize alertActionStyle=_alertActionStyle - In the implementation block
-(id)initWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 alertActionStyle:(long long)arg3 ;
-(long long)alertActionStyle;
-(NSString *)title;
-(id)actionHandler;
@end

