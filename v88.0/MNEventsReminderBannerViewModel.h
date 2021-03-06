/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMThreadEventsReminder;

@interface MNEventsReminderBannerViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowRSVPLabel;
	BOOL _shouldShowRSVPButtons;
	FBMThreadEventsReminder* _reminder;

}

@property (nonatomic,copy,readonly) FBMThreadEventsReminder * reminder;              //@synthesize reminder=_reminder - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowRSVPLabel;                             //@synthesize shouldShowRSVPLabel=_shouldShowRSVPLabel - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowRSVPButtons;                           //@synthesize shouldShowRSVPButtons=_shouldShowRSVPButtons - In the implementation block
-(id)initWithReminder:(id)arg1 shouldShowRSVPLabel:(BOOL)arg2 shouldShowRSVPButtons:(BOOL)arg3 ;
-(FBMThreadEventsReminder *)reminder;
-(BOOL)shouldShowRSVPLabel;
-(BOOL)shouldShowRSVPButtons;
@end

