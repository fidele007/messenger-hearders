/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>

@class FBMForegroundJobSchedulerInjector, NSMutableDictionary, NSString;

@interface FBMForegroundJobScheduler : NSObject <FBClassInjectable> {

	FBMForegroundJobSchedulerInjector* _injector;
	NSMutableDictionary* _blocks;
	BOOL _didAlreadyRegisterThisForegroundSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(unsigned long long)scheduleBlockToRunOnForeground:(/*^block*/id)arg1 ;
-(void)clearScheduledBlock:(unsigned long long)arg1 ;
-(void)_handleServicesAreAvailable;
-(void)_handleDidEnterForeground;
-(void)_handleWillResignActive;
-(void)_executeAllBlocks;
-(void)dealloc;
@end

