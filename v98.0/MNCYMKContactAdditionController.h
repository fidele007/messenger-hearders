/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:55 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@class MNCYMKContactAdditionRequester, MNCYMKContactAdditionListeningAnnouncer, FBAnalytics, NSString;

@interface MNCYMKContactAdditionController : NSObject <FBClassProvidable> {

	MNCYMKContactAdditionRequester* _contactAdditionRequester;
	MNCYMKContactAdditionListeningAnnouncer* _cymkContactAdditionListeningAnnouncer;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)addContactForUserWithUserId:(id)arg1 analyticsExtra:(id)arg2 ;
-(id)initWithContactAdditionRequester:(id)arg1 cymkContactAdditionListeningAnnouncer:(id)arg2 analytics:(id)arg3 ;
-(void)_handleContactAdditionSuccessForUserId:(id)arg1 ;
@end
