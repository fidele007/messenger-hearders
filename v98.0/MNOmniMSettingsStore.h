/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:03 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@class MNOmnistoreUserPrefsStore, MNOmniMSettingsListenerAnnouncer, NSString;

@interface MNOmniMSettingsStore : NSObject <FBViewerContextClassProvidable> {

	MNOmnistoreUserPrefsStore* _omnistoreUserPrefsStore;
	MNOmniMSettingsListenerAnnouncer* _settingsAnnouncer;

}

@property (assign,nonatomic) long long suggestionMode; 
@property (assign,nonatomic) BOOL suggestionEnabled; 
@property (assign,nonatomic) long long ridesPref; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)suggestionEnabled;
-(void)setSuggestionEnabled:(BOOL)arg1 ;
-(long long)ridesPref;
-(void)setRidesPref:(long long)arg1 ;
-(long long)suggestionMode;
-(void)setSuggestionMode:(long long)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
