/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults, NSData, NSString;

@interface FBMQTTCredentialHashProcessor : NSObject {

	NSUserDefaults* _userDefaults;
	NSData* _pendingCredentialHash;
	BOOL _isLastConnectUsingHashedToken;
	NSData* _currentCredentialHash;
	NSString* _currentHashedHash;

}
-(void)_udpateConnectMessage:(id)arg1 withCredentialHash:(id)arg2 ;
-(id)_computeCredentialHash:(id)arg1 ;
-(id)_computeHashHash:(id)arg1 ;
-(void)_saveHashHash:(id)arg1 ;
-(void)_cleanHashHash;
-(id)_createShortUserAgent:(id)arg1 ;
-(void)onLoginCredentialChanged;
-(void)processConnectMessage:(id)arg1 ;
-(BOOL)didLastConnectUseHashedToken;
-(void)processConnectACK:(int)arg1 ;
-(id)initWithUserDefaults:(id)arg1 ;
@end

