/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMQTTPresenceUpdateListening.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class MNMQTTPresenceUpdateListeningAnnouncer, NSString;

@interface FBMPresenceObserver : NSObject <MNMQTTPresenceUpdateListening, FBViewerContextClassProvidable> {

	MNMQTTPresenceUpdateListeningAnnouncer* _announcer;
	BOOL _presenceLoaded;

}

@property (nonatomic,readonly) BOOL presenceLoaded;                 //@synthesize presenceLoaded=_presenceLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)presenceLoaded;
-(void)didReceievePresenceUpdateWithValues:(id)arg1 wasFull:(BOOL)arg2 isSpecificPresence:(BOOL)arg3 ;
-(void)dealloc;
@end
