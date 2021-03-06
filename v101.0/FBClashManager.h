/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClashUnitCatalogDelegate.h>
#import <Messenger/FBRequiredServerCheckClashUnitDelegate.h>

@class FBUserSession, FBClashUnitCatalog, NSMutableDictionary, NSDate, NSNumber, NSString;

@interface FBClashManager : NSObject <FBClashUnitCatalogDelegate, FBRequiredServerCheckClashUnitDelegate> {

	FBUserSession* _session;
	FBClashUnitCatalog* _catalog;
	NSMutableDictionary* _locationToSessionTrackerMapping;
	NSDate* _lastQueueResetTime;
	BOOL _clashManagerEnabled;
	unsigned long long _numberOfRequests;
	NSNumber* _slotTakenCountResetIntervalSec;
	NSNumber* _killSwitchEnabled;

}

@property (nonatomic,retain) NSNumber * slotTakenCountResetIntervalSec;              //@synthesize slotTakenCountResetIntervalSec=_slotTakenCountResetIntervalSec - In the implementation block
@property (nonatomic,retain) NSNumber * killSwitchEnabled;                           //@synthesize killSwitchEnabled=_killSwitchEnabled - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)takeSlotForClashUnitWithName:(id)arg1 atLocation:(id)arg2 ;
-(NSNumber *)killSwitchEnabled;
-(void)setEligibilityFetcherAndFetch:(id)arg1 ;
-(NSNumber *)slotTakenCountResetIntervalSec;
-(void)_resetAllPriorities:(BOOL)arg1 resetNumberOfTimesShown:(BOOL)arg2 ;
-(void)_loadPersistedTrackerSession;
-(void)registerClashUnit:(id)arg1 ;
-(void)clashUnitCatalog:(id)arg1 didRefreshEligibilityWithError:(id)arg2 ;
-(void)clashUnit:(id)arg1 requiredServerCheckDidRespondWithPromotion:(BOOL)arg2 atLocation:(id)arg3 ;
-(BOOL)isSlotCurrentlyTakenAtLocation:(id)arg1 ;
-(void)requestClashUnitEligibility;
-(void)setSlotTakenCountResetIntervalSec:(NSNumber *)arg1 ;
-(id)locationToSessionTrackerMapping;
-(void)overwriteClashSessionLength:(unsigned long long)arg1 ;
-(void)setKillSwitchEnabled:(NSNumber *)arg1 ;
-(void)unregisterClashUnit:(id)arg1 ;
-(BOOL)isActive;
-(id)catalog;
-(id)initWithSession:(id)arg1 ;
@end

