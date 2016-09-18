/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:01 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInvalidating.h>

@class FBUserSession, NSMutableArray, VOIPConfiguration, NSTimer, NSString;

@interface VOIPConfigurationChecker : NSObject <FBInvalidating> {

	BOOL _invalidated;
	FBUserSession* _session;
	NSMutableArray* _pendingDelegates;
	BOOL _pendingRequest;
	unsigned long long _backgroundTask;
	BOOL _ignoreCache;
	VOIPConfiguration* _cachedResults;
	NSTimer* _configTimer;

}

@property (nonatomic,retain) VOIPConfiguration * cachedResults;              //@synthesize cachedResults=_cachedResults - In the implementation block
@property (nonatomic,retain) NSTimer * configTimer;                          //@synthesize configTimer=_configTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(BOOL)_supportsVOIP;
-(void)loadFromUserDefaultsIfNeeded;
-(void)executeQueryAndCache;
-(void)setConfigTimer:(NSTimer *)arg1 ;
-(void)didSucceed:(id)arg1 ;
-(void)removeVOIPConfigDelegate:(id)arg1 ;
-(void)checkVOIPConfigWithDelegate:(id)arg1 ;
-(NSTimer *)configTimer;
-(void)startBackgroundTask;
-(void)endBackgroundTask;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(id)initWithSession:(id)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(VOIPConfiguration *)cachedResults;
-(void)setCachedResults:(VOIPConfiguration *)arg1 ;
@end

