/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassInjectable.h>
#import <FBSharedFramework/MNServiceControllable.h>

@class MNDeprecationServiceInjector, NSString;

@interface MNDeprecationService : NSObject <FBClassInjectable, MNServiceControllable> {

	MNDeprecationServiceInjector* _injector;
	unsigned long long _interstitialJobBlockId;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(void)_registerInterstitialJob;
-(void)_unregisterInterstitialJob;
-(void)handleIdle;
-(id)initWithInjector:(id)arg1 ;
-(void)stop;
-(void)start:(id)arg1 ;
@end

