/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCastingExperience.h>

@class NSHashTable, NSMutableSet, NSSet, NSString;

@interface FBFakeCastingExperience : NSObject <FBCastingExperience> {

	NSHashTable* _delegates;
	NSMutableSet* _devices;

}

@property (nonatomic,copy,readonly) NSSet * devices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)discoverDevicesForDelegate:(id)arg1 ;
-(void)startExperience:(id)arg1 ;
-(void)isExperienceAvailableBestGuessForDevice:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)is360PhotoExperienceAvailableBestGuessForDevice:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)disconnectExperience:(id)arg1 reason:(unsigned long long)arg2 ;
-(void)updateStatusForExperience:(id)arg1 status:(unsigned long long)arg2 ;
-(void)addDevice:(id)arg1 ;
-(id)init;
-(void)removeDevice:(id)arg1 ;
-(NSSet *)devices;
@end

